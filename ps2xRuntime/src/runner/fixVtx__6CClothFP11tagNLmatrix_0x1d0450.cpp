#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: fixVtx__6CClothFP11tagNLmatrix
// Address: 0x1d0450 - 0x1d1f6c
void fixVtx__6CClothFP11tagNLmatrix_0x1d0450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("fixVtx__6CClothFP11tagNLmatrix");


    ctx->pc = 0x1d0450u;

label_1d0450:
    // 0x1d0450: 0x27bdff60
    ctx->pc = 0x1d0450u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
label_1d0454:
    // 0x1d0454: 0x7fbf0070
    ctx->pc = 0x1d0454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
label_1d0458:
    // 0x1d0458: 0x7fb50060
    ctx->pc = 0x1d0458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1d045c:
    // 0x1d045c: 0x7fb40050
    ctx->pc = 0x1d045cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1d0460:
    // 0x1d0460: 0x7fb30040
    ctx->pc = 0x1d0460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1d0464:
    // 0x1d0464: 0x7fb20030
    ctx->pc = 0x1d0464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1d0468:
    // 0x1d0468: 0x7fb10020
    ctx->pc = 0x1d0468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1d046c:
    // 0x1d046c: 0x7fb00010
    ctx->pc = 0x1d046cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1d0470:
    // 0x1d0470: 0xe7b50004
    ctx->pc = 0x1d0470u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1d0474:
    // 0x1d0474: 0xe7b40000
    ctx->pc = 0x1d0474u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1d0478:
    // 0x1d0478: 0x84830018
    ctx->pc = 0x1d0478u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
label_1d047c:
    // 0x1d047c: 0x8482001a
    ctx->pc = 0x1d047cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 26)));
label_1d0480:
    // 0x1d0480: 0x8c920000
    ctx->pc = 0x1d0480u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d0484:
    // 0x1d0484: 0x70808628
    ctx->pc = 0x1d0484u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_1d0488:
    // 0x1d0488: 0x628818
    ctx->pc = 0x1d0488u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)(uint32_t)result); }
label_1d048c:
    // 0x1d048c: 0x4bede37d
    ctx->pc = 0x1d048cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_1d0490:
    // 0x1d0490: 0x4bedeb7d
    ctx->pc = 0x1d0490u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_1d0494:
    // 0x1d0494: 0x4bedf37d
    ctx->pc = 0x1d0494u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_1d0498:
    // 0x1d0498: 0x4bedfb7d
    ctx->pc = 0x1d0498u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
label_1d049c:
    // 0x1d049c: 0xc06c038
label_1d04a0:
    if (ctx->pc == 0x1D04A0u) {
        ctx->pc = 0x1D04A0u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D04A4u;
        goto label_1d04a4;
    }
    ctx->pc = 0x1D049Cu;
    SET_GPR_U32(ctx, 31, 0x1D04A4u);
    ctx->pc = 0x1D04A0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D04A4u; }
        else if (ctx->pc != 0x1D04A4u) { ctx->pc = 0x1D04A4u; }
    }
    if (ctx->pc != 0x1D04A4u) { return; }
    ctx->pc = 0x1D04A4u;
label_1d04a4:
    // 0x1d04a4: 0x8603001c
    ctx->pc = 0x1d04a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
label_1d04a8:
    // 0x1d04a8: 0x2c610017
    ctx->pc = 0x1d04a8u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), 23));
label_1d04ac:
    // 0x1d04ac: 0x10200008
label_1d04b0:
    if (ctx->pc == 0x1D04B0u) {
        ctx->pc = 0x1D04B0u;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D04B4u;
        goto label_1d04b4;
    }
    ctx->pc = 0x1D04ACu;
    {
        const bool branch_taken_0x1d04ac = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D04B0u;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d04ac) {
            ctx->pc = 0x1D04D0u;
            goto label_1d04d0;
        }
    }
    ctx->pc = 0x1D04B4u;
label_1d04b4:
    // 0x1d04b4: 0x3c04002c
    ctx->pc = 0x1d04b4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_1d04b8:
    // 0x1d04b8: 0x31880
    ctx->pc = 0x1d04b8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_1d04bc:
    // 0x1d04bc: 0x2484e2e0
    ctx->pc = 0x1d04bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294959840));
label_1d04c0:
    // 0x1d04c0: 0x641821
    ctx->pc = 0x1d04c0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d04c4:
    // 0x1d04c4: 0x8c630000
    ctx->pc = 0x1d04c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d04c8:
    // 0x1d04c8: 0x600008
label_1d04cc:
    if (ctx->pc == 0x1D04CCu) {
        ctx->pc = 0x1D04D0u;
        goto label_1d04d0;
    }
    ctx->pc = 0x1D04C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D0450u: goto label_1d0450;
            case 0x1D0454u: goto label_1d0454;
            case 0x1D0458u: goto label_1d0458;
            case 0x1D045Cu: goto label_1d045c;
            case 0x1D0460u: goto label_1d0460;
            case 0x1D0464u: goto label_1d0464;
            case 0x1D0468u: goto label_1d0468;
            case 0x1D046Cu: goto label_1d046c;
            case 0x1D0470u: goto label_1d0470;
            case 0x1D0474u: goto label_1d0474;
            case 0x1D0478u: goto label_1d0478;
            case 0x1D047Cu: goto label_1d047c;
            case 0x1D0480u: goto label_1d0480;
            case 0x1D0484u: goto label_1d0484;
            case 0x1D0488u: goto label_1d0488;
            case 0x1D048Cu: goto label_1d048c;
            case 0x1D0490u: goto label_1d0490;
            case 0x1D0494u: goto label_1d0494;
            case 0x1D0498u: goto label_1d0498;
            case 0x1D049Cu: goto label_1d049c;
            case 0x1D04A0u: goto label_1d04a0;
            case 0x1D04A4u: goto label_1d04a4;
            case 0x1D04A8u: goto label_1d04a8;
            case 0x1D04ACu: goto label_1d04ac;
            case 0x1D04B0u: goto label_1d04b0;
            case 0x1D04B4u: goto label_1d04b4;
            case 0x1D04B8u: goto label_1d04b8;
            case 0x1D04BCu: goto label_1d04bc;
            case 0x1D04C0u: goto label_1d04c0;
            case 0x1D04C4u: goto label_1d04c4;
            case 0x1D04C8u: goto label_1d04c8;
            case 0x1D04CCu: goto label_1d04cc;
            case 0x1D04D0u: goto label_1d04d0;
            case 0x1D04D4u: goto label_1d04d4;
            case 0x1D04D8u: goto label_1d04d8;
            case 0x1D04DCu: goto label_1d04dc;
            case 0x1D04E0u: goto label_1d04e0;
            case 0x1D04E4u: goto label_1d04e4;
            case 0x1D04E8u: goto label_1d04e8;
            case 0x1D04ECu: goto label_1d04ec;
            case 0x1D04F0u: goto label_1d04f0;
            case 0x1D04F4u: goto label_1d04f4;
            case 0x1D04F8u: goto label_1d04f8;
            case 0x1D04FCu: goto label_1d04fc;
            case 0x1D0500u: goto label_1d0500;
            case 0x1D0504u: goto label_1d0504;
            case 0x1D0508u: goto label_1d0508;
            case 0x1D050Cu: goto label_1d050c;
            case 0x1D0510u: goto label_1d0510;
            case 0x1D0514u: goto label_1d0514;
            case 0x1D0518u: goto label_1d0518;
            case 0x1D051Cu: goto label_1d051c;
            case 0x1D0520u: goto label_1d0520;
            case 0x1D0524u: goto label_1d0524;
            case 0x1D0528u: goto label_1d0528;
            case 0x1D052Cu: goto label_1d052c;
            case 0x1D0530u: goto label_1d0530;
            case 0x1D0534u: goto label_1d0534;
            case 0x1D0538u: goto label_1d0538;
            case 0x1D053Cu: goto label_1d053c;
            case 0x1D0540u: goto label_1d0540;
            case 0x1D0544u: goto label_1d0544;
            case 0x1D0548u: goto label_1d0548;
            case 0x1D054Cu: goto label_1d054c;
            case 0x1D0550u: goto label_1d0550;
            case 0x1D0554u: goto label_1d0554;
            case 0x1D0558u: goto label_1d0558;
            case 0x1D055Cu: goto label_1d055c;
            case 0x1D0560u: goto label_1d0560;
            case 0x1D0564u: goto label_1d0564;
            case 0x1D0568u: goto label_1d0568;
            case 0x1D056Cu: goto label_1d056c;
            case 0x1D0570u: goto label_1d0570;
            case 0x1D0574u: goto label_1d0574;
            case 0x1D0578u: goto label_1d0578;
            case 0x1D057Cu: goto label_1d057c;
            case 0x1D0580u: goto label_1d0580;
            case 0x1D0584u: goto label_1d0584;
            case 0x1D0588u: goto label_1d0588;
            case 0x1D058Cu: goto label_1d058c;
            case 0x1D0590u: goto label_1d0590;
            case 0x1D0594u: goto label_1d0594;
            case 0x1D0598u: goto label_1d0598;
            case 0x1D059Cu: goto label_1d059c;
            case 0x1D05A0u: goto label_1d05a0;
            case 0x1D05A4u: goto label_1d05a4;
            case 0x1D05A8u: goto label_1d05a8;
            case 0x1D05ACu: goto label_1d05ac;
            case 0x1D05B0u: goto label_1d05b0;
            case 0x1D05B4u: goto label_1d05b4;
            case 0x1D05B8u: goto label_1d05b8;
            case 0x1D05BCu: goto label_1d05bc;
            case 0x1D05C0u: goto label_1d05c0;
            case 0x1D05C4u: goto label_1d05c4;
            case 0x1D05C8u: goto label_1d05c8;
            case 0x1D05CCu: goto label_1d05cc;
            case 0x1D05D0u: goto label_1d05d0;
            case 0x1D05D4u: goto label_1d05d4;
            case 0x1D05D8u: goto label_1d05d8;
            case 0x1D05DCu: goto label_1d05dc;
            case 0x1D05E0u: goto label_1d05e0;
            case 0x1D05E4u: goto label_1d05e4;
            case 0x1D05E8u: goto label_1d05e8;
            case 0x1D05ECu: goto label_1d05ec;
            case 0x1D05F0u: goto label_1d05f0;
            case 0x1D05F4u: goto label_1d05f4;
            case 0x1D05F8u: goto label_1d05f8;
            case 0x1D05FCu: goto label_1d05fc;
            case 0x1D0600u: goto label_1d0600;
            case 0x1D0604u: goto label_1d0604;
            case 0x1D0608u: goto label_1d0608;
            case 0x1D060Cu: goto label_1d060c;
            case 0x1D0610u: goto label_1d0610;
            case 0x1D0614u: goto label_1d0614;
            case 0x1D0618u: goto label_1d0618;
            case 0x1D061Cu: goto label_1d061c;
            case 0x1D0620u: goto label_1d0620;
            case 0x1D0624u: goto label_1d0624;
            case 0x1D0628u: goto label_1d0628;
            case 0x1D062Cu: goto label_1d062c;
            case 0x1D0630u: goto label_1d0630;
            case 0x1D0634u: goto label_1d0634;
            case 0x1D0638u: goto label_1d0638;
            case 0x1D063Cu: goto label_1d063c;
            case 0x1D0640u: goto label_1d0640;
            case 0x1D0644u: goto label_1d0644;
            case 0x1D0648u: goto label_1d0648;
            case 0x1D064Cu: goto label_1d064c;
            case 0x1D0650u: goto label_1d0650;
            case 0x1D0654u: goto label_1d0654;
            case 0x1D0658u: goto label_1d0658;
            case 0x1D065Cu: goto label_1d065c;
            case 0x1D0660u: goto label_1d0660;
            case 0x1D0664u: goto label_1d0664;
            case 0x1D0668u: goto label_1d0668;
            case 0x1D066Cu: goto label_1d066c;
            case 0x1D0670u: goto label_1d0670;
            case 0x1D0674u: goto label_1d0674;
            case 0x1D0678u: goto label_1d0678;
            case 0x1D067Cu: goto label_1d067c;
            case 0x1D0680u: goto label_1d0680;
            case 0x1D0684u: goto label_1d0684;
            case 0x1D0688u: goto label_1d0688;
            case 0x1D068Cu: goto label_1d068c;
            case 0x1D0690u: goto label_1d0690;
            case 0x1D0694u: goto label_1d0694;
            case 0x1D0698u: goto label_1d0698;
            case 0x1D069Cu: goto label_1d069c;
            case 0x1D06A0u: goto label_1d06a0;
            case 0x1D06A4u: goto label_1d06a4;
            case 0x1D06A8u: goto label_1d06a8;
            case 0x1D06ACu: goto label_1d06ac;
            case 0x1D06B0u: goto label_1d06b0;
            case 0x1D06B4u: goto label_1d06b4;
            case 0x1D06B8u: goto label_1d06b8;
            case 0x1D06BCu: goto label_1d06bc;
            case 0x1D06C0u: goto label_1d06c0;
            case 0x1D06C4u: goto label_1d06c4;
            case 0x1D06C8u: goto label_1d06c8;
            case 0x1D06CCu: goto label_1d06cc;
            case 0x1D06D0u: goto label_1d06d0;
            case 0x1D06D4u: goto label_1d06d4;
            case 0x1D06D8u: goto label_1d06d8;
            case 0x1D06DCu: goto label_1d06dc;
            case 0x1D06E0u: goto label_1d06e0;
            case 0x1D06E4u: goto label_1d06e4;
            case 0x1D06E8u: goto label_1d06e8;
            case 0x1D06ECu: goto label_1d06ec;
            case 0x1D06F0u: goto label_1d06f0;
            case 0x1D06F4u: goto label_1d06f4;
            case 0x1D06F8u: goto label_1d06f8;
            case 0x1D06FCu: goto label_1d06fc;
            case 0x1D0700u: goto label_1d0700;
            case 0x1D0704u: goto label_1d0704;
            case 0x1D0708u: goto label_1d0708;
            case 0x1D070Cu: goto label_1d070c;
            case 0x1D0710u: goto label_1d0710;
            case 0x1D0714u: goto label_1d0714;
            case 0x1D0718u: goto label_1d0718;
            case 0x1D071Cu: goto label_1d071c;
            case 0x1D0720u: goto label_1d0720;
            case 0x1D0724u: goto label_1d0724;
            case 0x1D0728u: goto label_1d0728;
            case 0x1D072Cu: goto label_1d072c;
            case 0x1D0730u: goto label_1d0730;
            case 0x1D0734u: goto label_1d0734;
            case 0x1D0738u: goto label_1d0738;
            case 0x1D073Cu: goto label_1d073c;
            case 0x1D0740u: goto label_1d0740;
            case 0x1D0744u: goto label_1d0744;
            case 0x1D0748u: goto label_1d0748;
            case 0x1D074Cu: goto label_1d074c;
            case 0x1D0750u: goto label_1d0750;
            case 0x1D0754u: goto label_1d0754;
            case 0x1D0758u: goto label_1d0758;
            case 0x1D075Cu: goto label_1d075c;
            case 0x1D0760u: goto label_1d0760;
            case 0x1D0764u: goto label_1d0764;
            case 0x1D0768u: goto label_1d0768;
            case 0x1D076Cu: goto label_1d076c;
            case 0x1D0770u: goto label_1d0770;
            case 0x1D0774u: goto label_1d0774;
            case 0x1D0778u: goto label_1d0778;
            case 0x1D077Cu: goto label_1d077c;
            case 0x1D0780u: goto label_1d0780;
            case 0x1D0784u: goto label_1d0784;
            case 0x1D0788u: goto label_1d0788;
            case 0x1D078Cu: goto label_1d078c;
            case 0x1D0790u: goto label_1d0790;
            case 0x1D0794u: goto label_1d0794;
            case 0x1D0798u: goto label_1d0798;
            case 0x1D079Cu: goto label_1d079c;
            case 0x1D07A0u: goto label_1d07a0;
            case 0x1D07A4u: goto label_1d07a4;
            case 0x1D07A8u: goto label_1d07a8;
            case 0x1D07ACu: goto label_1d07ac;
            case 0x1D07B0u: goto label_1d07b0;
            case 0x1D07B4u: goto label_1d07b4;
            case 0x1D07B8u: goto label_1d07b8;
            case 0x1D07BCu: goto label_1d07bc;
            case 0x1D07C0u: goto label_1d07c0;
            case 0x1D07C4u: goto label_1d07c4;
            case 0x1D07C8u: goto label_1d07c8;
            case 0x1D07CCu: goto label_1d07cc;
            case 0x1D07D0u: goto label_1d07d0;
            case 0x1D07D4u: goto label_1d07d4;
            case 0x1D07D8u: goto label_1d07d8;
            case 0x1D07DCu: goto label_1d07dc;
            case 0x1D07E0u: goto label_1d07e0;
            case 0x1D07E4u: goto label_1d07e4;
            case 0x1D07E8u: goto label_1d07e8;
            case 0x1D07ECu: goto label_1d07ec;
            case 0x1D07F0u: goto label_1d07f0;
            case 0x1D07F4u: goto label_1d07f4;
            case 0x1D07F8u: goto label_1d07f8;
            case 0x1D07FCu: goto label_1d07fc;
            case 0x1D0800u: goto label_1d0800;
            case 0x1D0804u: goto label_1d0804;
            case 0x1D0808u: goto label_1d0808;
            case 0x1D080Cu: goto label_1d080c;
            case 0x1D0810u: goto label_1d0810;
            case 0x1D0814u: goto label_1d0814;
            case 0x1D0818u: goto label_1d0818;
            case 0x1D081Cu: goto label_1d081c;
            case 0x1D0820u: goto label_1d0820;
            case 0x1D0824u: goto label_1d0824;
            case 0x1D0828u: goto label_1d0828;
            case 0x1D082Cu: goto label_1d082c;
            case 0x1D0830u: goto label_1d0830;
            case 0x1D0834u: goto label_1d0834;
            case 0x1D0838u: goto label_1d0838;
            case 0x1D083Cu: goto label_1d083c;
            case 0x1D0840u: goto label_1d0840;
            case 0x1D0844u: goto label_1d0844;
            case 0x1D0848u: goto label_1d0848;
            case 0x1D084Cu: goto label_1d084c;
            case 0x1D0850u: goto label_1d0850;
            case 0x1D0854u: goto label_1d0854;
            case 0x1D0858u: goto label_1d0858;
            case 0x1D085Cu: goto label_1d085c;
            case 0x1D0860u: goto label_1d0860;
            case 0x1D0864u: goto label_1d0864;
            case 0x1D0868u: goto label_1d0868;
            case 0x1D086Cu: goto label_1d086c;
            case 0x1D0870u: goto label_1d0870;
            case 0x1D0874u: goto label_1d0874;
            case 0x1D0878u: goto label_1d0878;
            case 0x1D087Cu: goto label_1d087c;
            case 0x1D0880u: goto label_1d0880;
            case 0x1D0884u: goto label_1d0884;
            case 0x1D0888u: goto label_1d0888;
            case 0x1D088Cu: goto label_1d088c;
            case 0x1D0890u: goto label_1d0890;
            case 0x1D0894u: goto label_1d0894;
            case 0x1D0898u: goto label_1d0898;
            case 0x1D089Cu: goto label_1d089c;
            case 0x1D08A0u: goto label_1d08a0;
            case 0x1D08A4u: goto label_1d08a4;
            case 0x1D08A8u: goto label_1d08a8;
            case 0x1D08ACu: goto label_1d08ac;
            case 0x1D08B0u: goto label_1d08b0;
            case 0x1D08B4u: goto label_1d08b4;
            case 0x1D08B8u: goto label_1d08b8;
            case 0x1D08BCu: goto label_1d08bc;
            case 0x1D08C0u: goto label_1d08c0;
            case 0x1D08C4u: goto label_1d08c4;
            case 0x1D08C8u: goto label_1d08c8;
            case 0x1D08CCu: goto label_1d08cc;
            case 0x1D08D0u: goto label_1d08d0;
            case 0x1D08D4u: goto label_1d08d4;
            case 0x1D08D8u: goto label_1d08d8;
            case 0x1D08DCu: goto label_1d08dc;
            case 0x1D08E0u: goto label_1d08e0;
            case 0x1D08E4u: goto label_1d08e4;
            case 0x1D08E8u: goto label_1d08e8;
            case 0x1D08ECu: goto label_1d08ec;
            case 0x1D08F0u: goto label_1d08f0;
            case 0x1D08F4u: goto label_1d08f4;
            case 0x1D08F8u: goto label_1d08f8;
            case 0x1D08FCu: goto label_1d08fc;
            case 0x1D0900u: goto label_1d0900;
            case 0x1D0904u: goto label_1d0904;
            case 0x1D0908u: goto label_1d0908;
            case 0x1D090Cu: goto label_1d090c;
            case 0x1D0910u: goto label_1d0910;
            case 0x1D0914u: goto label_1d0914;
            case 0x1D0918u: goto label_1d0918;
            case 0x1D091Cu: goto label_1d091c;
            case 0x1D0920u: goto label_1d0920;
            case 0x1D0924u: goto label_1d0924;
            case 0x1D0928u: goto label_1d0928;
            case 0x1D092Cu: goto label_1d092c;
            case 0x1D0930u: goto label_1d0930;
            case 0x1D0934u: goto label_1d0934;
            case 0x1D0938u: goto label_1d0938;
            case 0x1D093Cu: goto label_1d093c;
            case 0x1D0940u: goto label_1d0940;
            case 0x1D0944u: goto label_1d0944;
            case 0x1D0948u: goto label_1d0948;
            case 0x1D094Cu: goto label_1d094c;
            case 0x1D0950u: goto label_1d0950;
            case 0x1D0954u: goto label_1d0954;
            case 0x1D0958u: goto label_1d0958;
            case 0x1D095Cu: goto label_1d095c;
            case 0x1D0960u: goto label_1d0960;
            case 0x1D0964u: goto label_1d0964;
            case 0x1D0968u: goto label_1d0968;
            case 0x1D096Cu: goto label_1d096c;
            case 0x1D0970u: goto label_1d0970;
            case 0x1D0974u: goto label_1d0974;
            case 0x1D0978u: goto label_1d0978;
            case 0x1D097Cu: goto label_1d097c;
            case 0x1D0980u: goto label_1d0980;
            case 0x1D0984u: goto label_1d0984;
            case 0x1D0988u: goto label_1d0988;
            case 0x1D098Cu: goto label_1d098c;
            case 0x1D0990u: goto label_1d0990;
            case 0x1D0994u: goto label_1d0994;
            case 0x1D0998u: goto label_1d0998;
            case 0x1D099Cu: goto label_1d099c;
            case 0x1D09A0u: goto label_1d09a0;
            case 0x1D09A4u: goto label_1d09a4;
            case 0x1D09A8u: goto label_1d09a8;
            case 0x1D09ACu: goto label_1d09ac;
            case 0x1D09B0u: goto label_1d09b0;
            case 0x1D09B4u: goto label_1d09b4;
            case 0x1D09B8u: goto label_1d09b8;
            case 0x1D09BCu: goto label_1d09bc;
            case 0x1D09C0u: goto label_1d09c0;
            case 0x1D09C4u: goto label_1d09c4;
            case 0x1D09C8u: goto label_1d09c8;
            case 0x1D09CCu: goto label_1d09cc;
            case 0x1D09D0u: goto label_1d09d0;
            case 0x1D09D4u: goto label_1d09d4;
            case 0x1D09D8u: goto label_1d09d8;
            case 0x1D09DCu: goto label_1d09dc;
            case 0x1D09E0u: goto label_1d09e0;
            case 0x1D09E4u: goto label_1d09e4;
            case 0x1D09E8u: goto label_1d09e8;
            case 0x1D09ECu: goto label_1d09ec;
            case 0x1D09F0u: goto label_1d09f0;
            case 0x1D09F4u: goto label_1d09f4;
            case 0x1D09F8u: goto label_1d09f8;
            case 0x1D09FCu: goto label_1d09fc;
            case 0x1D0A00u: goto label_1d0a00;
            case 0x1D0A04u: goto label_1d0a04;
            case 0x1D0A08u: goto label_1d0a08;
            case 0x1D0A0Cu: goto label_1d0a0c;
            case 0x1D0A10u: goto label_1d0a10;
            case 0x1D0A14u: goto label_1d0a14;
            case 0x1D0A18u: goto label_1d0a18;
            case 0x1D0A1Cu: goto label_1d0a1c;
            case 0x1D0A20u: goto label_1d0a20;
            case 0x1D0A24u: goto label_1d0a24;
            case 0x1D0A28u: goto label_1d0a28;
            case 0x1D0A2Cu: goto label_1d0a2c;
            case 0x1D0A30u: goto label_1d0a30;
            case 0x1D0A34u: goto label_1d0a34;
            case 0x1D0A38u: goto label_1d0a38;
            case 0x1D0A3Cu: goto label_1d0a3c;
            case 0x1D0A40u: goto label_1d0a40;
            case 0x1D0A44u: goto label_1d0a44;
            case 0x1D0A48u: goto label_1d0a48;
            case 0x1D0A4Cu: goto label_1d0a4c;
            case 0x1D0A50u: goto label_1d0a50;
            case 0x1D0A54u: goto label_1d0a54;
            case 0x1D0A58u: goto label_1d0a58;
            case 0x1D0A5Cu: goto label_1d0a5c;
            case 0x1D0A60u: goto label_1d0a60;
            case 0x1D0A64u: goto label_1d0a64;
            case 0x1D0A68u: goto label_1d0a68;
            case 0x1D0A6Cu: goto label_1d0a6c;
            case 0x1D0A70u: goto label_1d0a70;
            case 0x1D0A74u: goto label_1d0a74;
            case 0x1D0A78u: goto label_1d0a78;
            case 0x1D0A7Cu: goto label_1d0a7c;
            case 0x1D0A80u: goto label_1d0a80;
            case 0x1D0A84u: goto label_1d0a84;
            case 0x1D0A88u: goto label_1d0a88;
            case 0x1D0A8Cu: goto label_1d0a8c;
            case 0x1D0A90u: goto label_1d0a90;
            case 0x1D0A94u: goto label_1d0a94;
            case 0x1D0A98u: goto label_1d0a98;
            case 0x1D0A9Cu: goto label_1d0a9c;
            case 0x1D0AA0u: goto label_1d0aa0;
            case 0x1D0AA4u: goto label_1d0aa4;
            case 0x1D0AA8u: goto label_1d0aa8;
            case 0x1D0AACu: goto label_1d0aac;
            case 0x1D0AB0u: goto label_1d0ab0;
            case 0x1D0AB4u: goto label_1d0ab4;
            case 0x1D0AB8u: goto label_1d0ab8;
            case 0x1D0ABCu: goto label_1d0abc;
            case 0x1D0AC0u: goto label_1d0ac0;
            case 0x1D0AC4u: goto label_1d0ac4;
            case 0x1D0AC8u: goto label_1d0ac8;
            case 0x1D0ACCu: goto label_1d0acc;
            case 0x1D0AD0u: goto label_1d0ad0;
            case 0x1D0AD4u: goto label_1d0ad4;
            case 0x1D0AD8u: goto label_1d0ad8;
            case 0x1D0ADCu: goto label_1d0adc;
            case 0x1D0AE0u: goto label_1d0ae0;
            case 0x1D0AE4u: goto label_1d0ae4;
            case 0x1D0AE8u: goto label_1d0ae8;
            case 0x1D0AECu: goto label_1d0aec;
            case 0x1D0AF0u: goto label_1d0af0;
            case 0x1D0AF4u: goto label_1d0af4;
            case 0x1D0AF8u: goto label_1d0af8;
            case 0x1D0AFCu: goto label_1d0afc;
            case 0x1D0B00u: goto label_1d0b00;
            case 0x1D0B04u: goto label_1d0b04;
            case 0x1D0B08u: goto label_1d0b08;
            case 0x1D0B0Cu: goto label_1d0b0c;
            case 0x1D0B10u: goto label_1d0b10;
            case 0x1D0B14u: goto label_1d0b14;
            case 0x1D0B18u: goto label_1d0b18;
            case 0x1D0B1Cu: goto label_1d0b1c;
            case 0x1D0B20u: goto label_1d0b20;
            case 0x1D0B24u: goto label_1d0b24;
            case 0x1D0B28u: goto label_1d0b28;
            case 0x1D0B2Cu: goto label_1d0b2c;
            case 0x1D0B30u: goto label_1d0b30;
            case 0x1D0B34u: goto label_1d0b34;
            case 0x1D0B38u: goto label_1d0b38;
            case 0x1D0B3Cu: goto label_1d0b3c;
            case 0x1D0B40u: goto label_1d0b40;
            case 0x1D0B44u: goto label_1d0b44;
            case 0x1D0B48u: goto label_1d0b48;
            case 0x1D0B4Cu: goto label_1d0b4c;
            case 0x1D0B50u: goto label_1d0b50;
            case 0x1D0B54u: goto label_1d0b54;
            case 0x1D0B58u: goto label_1d0b58;
            case 0x1D0B5Cu: goto label_1d0b5c;
            case 0x1D0B60u: goto label_1d0b60;
            case 0x1D0B64u: goto label_1d0b64;
            case 0x1D0B68u: goto label_1d0b68;
            case 0x1D0B6Cu: goto label_1d0b6c;
            case 0x1D0B70u: goto label_1d0b70;
            case 0x1D0B74u: goto label_1d0b74;
            case 0x1D0B78u: goto label_1d0b78;
            case 0x1D0B7Cu: goto label_1d0b7c;
            case 0x1D0B80u: goto label_1d0b80;
            case 0x1D0B84u: goto label_1d0b84;
            case 0x1D0B88u: goto label_1d0b88;
            case 0x1D0B8Cu: goto label_1d0b8c;
            case 0x1D0B90u: goto label_1d0b90;
            case 0x1D0B94u: goto label_1d0b94;
            case 0x1D0B98u: goto label_1d0b98;
            case 0x1D0B9Cu: goto label_1d0b9c;
            case 0x1D0BA0u: goto label_1d0ba0;
            case 0x1D0BA4u: goto label_1d0ba4;
            case 0x1D0BA8u: goto label_1d0ba8;
            case 0x1D0BACu: goto label_1d0bac;
            case 0x1D0BB0u: goto label_1d0bb0;
            case 0x1D0BB4u: goto label_1d0bb4;
            case 0x1D0BB8u: goto label_1d0bb8;
            case 0x1D0BBCu: goto label_1d0bbc;
            case 0x1D0BC0u: goto label_1d0bc0;
            case 0x1D0BC4u: goto label_1d0bc4;
            case 0x1D0BC8u: goto label_1d0bc8;
            case 0x1D0BCCu: goto label_1d0bcc;
            case 0x1D0BD0u: goto label_1d0bd0;
            case 0x1D0BD4u: goto label_1d0bd4;
            case 0x1D0BD8u: goto label_1d0bd8;
            case 0x1D0BDCu: goto label_1d0bdc;
            case 0x1D0BE0u: goto label_1d0be0;
            case 0x1D0BE4u: goto label_1d0be4;
            case 0x1D0BE8u: goto label_1d0be8;
            case 0x1D0BECu: goto label_1d0bec;
            case 0x1D0BF0u: goto label_1d0bf0;
            case 0x1D0BF4u: goto label_1d0bf4;
            case 0x1D0BF8u: goto label_1d0bf8;
            case 0x1D0BFCu: goto label_1d0bfc;
            case 0x1D0C00u: goto label_1d0c00;
            case 0x1D0C04u: goto label_1d0c04;
            case 0x1D0C08u: goto label_1d0c08;
            case 0x1D0C0Cu: goto label_1d0c0c;
            case 0x1D0C10u: goto label_1d0c10;
            case 0x1D0C14u: goto label_1d0c14;
            case 0x1D0C18u: goto label_1d0c18;
            case 0x1D0C1Cu: goto label_1d0c1c;
            case 0x1D0C20u: goto label_1d0c20;
            case 0x1D0C24u: goto label_1d0c24;
            case 0x1D0C28u: goto label_1d0c28;
            case 0x1D0C2Cu: goto label_1d0c2c;
            case 0x1D0C30u: goto label_1d0c30;
            case 0x1D0C34u: goto label_1d0c34;
            case 0x1D0C38u: goto label_1d0c38;
            case 0x1D0C3Cu: goto label_1d0c3c;
            case 0x1D0C40u: goto label_1d0c40;
            case 0x1D0C44u: goto label_1d0c44;
            case 0x1D0C48u: goto label_1d0c48;
            case 0x1D0C4Cu: goto label_1d0c4c;
            case 0x1D0C50u: goto label_1d0c50;
            case 0x1D0C54u: goto label_1d0c54;
            case 0x1D0C58u: goto label_1d0c58;
            case 0x1D0C5Cu: goto label_1d0c5c;
            case 0x1D0C60u: goto label_1d0c60;
            case 0x1D0C64u: goto label_1d0c64;
            case 0x1D0C68u: goto label_1d0c68;
            case 0x1D0C6Cu: goto label_1d0c6c;
            case 0x1D0C70u: goto label_1d0c70;
            case 0x1D0C74u: goto label_1d0c74;
            case 0x1D0C78u: goto label_1d0c78;
            case 0x1D0C7Cu: goto label_1d0c7c;
            case 0x1D0C80u: goto label_1d0c80;
            case 0x1D0C84u: goto label_1d0c84;
            case 0x1D0C88u: goto label_1d0c88;
            case 0x1D0C8Cu: goto label_1d0c8c;
            case 0x1D0C90u: goto label_1d0c90;
            case 0x1D0C94u: goto label_1d0c94;
            case 0x1D0C98u: goto label_1d0c98;
            case 0x1D0C9Cu: goto label_1d0c9c;
            case 0x1D0CA0u: goto label_1d0ca0;
            case 0x1D0CA4u: goto label_1d0ca4;
            case 0x1D0CA8u: goto label_1d0ca8;
            case 0x1D0CACu: goto label_1d0cac;
            case 0x1D0CB0u: goto label_1d0cb0;
            case 0x1D0CB4u: goto label_1d0cb4;
            case 0x1D0CB8u: goto label_1d0cb8;
            case 0x1D0CBCu: goto label_1d0cbc;
            case 0x1D0CC0u: goto label_1d0cc0;
            case 0x1D0CC4u: goto label_1d0cc4;
            case 0x1D0CC8u: goto label_1d0cc8;
            case 0x1D0CCCu: goto label_1d0ccc;
            case 0x1D0CD0u: goto label_1d0cd0;
            case 0x1D0CD4u: goto label_1d0cd4;
            case 0x1D0CD8u: goto label_1d0cd8;
            case 0x1D0CDCu: goto label_1d0cdc;
            case 0x1D0CE0u: goto label_1d0ce0;
            case 0x1D0CE4u: goto label_1d0ce4;
            case 0x1D0CE8u: goto label_1d0ce8;
            case 0x1D0CECu: goto label_1d0cec;
            case 0x1D0CF0u: goto label_1d0cf0;
            case 0x1D0CF4u: goto label_1d0cf4;
            case 0x1D0CF8u: goto label_1d0cf8;
            case 0x1D0CFCu: goto label_1d0cfc;
            case 0x1D0D00u: goto label_1d0d00;
            case 0x1D0D04u: goto label_1d0d04;
            case 0x1D0D08u: goto label_1d0d08;
            case 0x1D0D0Cu: goto label_1d0d0c;
            case 0x1D0D10u: goto label_1d0d10;
            case 0x1D0D14u: goto label_1d0d14;
            case 0x1D0D18u: goto label_1d0d18;
            case 0x1D0D1Cu: goto label_1d0d1c;
            case 0x1D0D20u: goto label_1d0d20;
            case 0x1D0D24u: goto label_1d0d24;
            case 0x1D0D28u: goto label_1d0d28;
            case 0x1D0D2Cu: goto label_1d0d2c;
            case 0x1D0D30u: goto label_1d0d30;
            case 0x1D0D34u: goto label_1d0d34;
            case 0x1D0D38u: goto label_1d0d38;
            case 0x1D0D3Cu: goto label_1d0d3c;
            case 0x1D0D40u: goto label_1d0d40;
            case 0x1D0D44u: goto label_1d0d44;
            case 0x1D0D48u: goto label_1d0d48;
            case 0x1D0D4Cu: goto label_1d0d4c;
            case 0x1D0D50u: goto label_1d0d50;
            case 0x1D0D54u: goto label_1d0d54;
            case 0x1D0D58u: goto label_1d0d58;
            case 0x1D0D5Cu: goto label_1d0d5c;
            case 0x1D0D60u: goto label_1d0d60;
            case 0x1D0D64u: goto label_1d0d64;
            case 0x1D0D68u: goto label_1d0d68;
            case 0x1D0D6Cu: goto label_1d0d6c;
            case 0x1D0D70u: goto label_1d0d70;
            case 0x1D0D74u: goto label_1d0d74;
            case 0x1D0D78u: goto label_1d0d78;
            case 0x1D0D7Cu: goto label_1d0d7c;
            case 0x1D0D80u: goto label_1d0d80;
            case 0x1D0D84u: goto label_1d0d84;
            case 0x1D0D88u: goto label_1d0d88;
            case 0x1D0D8Cu: goto label_1d0d8c;
            case 0x1D0D90u: goto label_1d0d90;
            case 0x1D0D94u: goto label_1d0d94;
            case 0x1D0D98u: goto label_1d0d98;
            case 0x1D0D9Cu: goto label_1d0d9c;
            case 0x1D0DA0u: goto label_1d0da0;
            case 0x1D0DA4u: goto label_1d0da4;
            case 0x1D0DA8u: goto label_1d0da8;
            case 0x1D0DACu: goto label_1d0dac;
            case 0x1D0DB0u: goto label_1d0db0;
            case 0x1D0DB4u: goto label_1d0db4;
            case 0x1D0DB8u: goto label_1d0db8;
            case 0x1D0DBCu: goto label_1d0dbc;
            case 0x1D0DC0u: goto label_1d0dc0;
            case 0x1D0DC4u: goto label_1d0dc4;
            case 0x1D0DC8u: goto label_1d0dc8;
            case 0x1D0DCCu: goto label_1d0dcc;
            case 0x1D0DD0u: goto label_1d0dd0;
            case 0x1D0DD4u: goto label_1d0dd4;
            case 0x1D0DD8u: goto label_1d0dd8;
            case 0x1D0DDCu: goto label_1d0ddc;
            case 0x1D0DE0u: goto label_1d0de0;
            case 0x1D0DE4u: goto label_1d0de4;
            case 0x1D0DE8u: goto label_1d0de8;
            case 0x1D0DECu: goto label_1d0dec;
            case 0x1D0DF0u: goto label_1d0df0;
            case 0x1D0DF4u: goto label_1d0df4;
            case 0x1D0DF8u: goto label_1d0df8;
            case 0x1D0DFCu: goto label_1d0dfc;
            case 0x1D0E00u: goto label_1d0e00;
            case 0x1D0E04u: goto label_1d0e04;
            case 0x1D0E08u: goto label_1d0e08;
            case 0x1D0E0Cu: goto label_1d0e0c;
            case 0x1D0E10u: goto label_1d0e10;
            case 0x1D0E14u: goto label_1d0e14;
            case 0x1D0E18u: goto label_1d0e18;
            case 0x1D0E1Cu: goto label_1d0e1c;
            case 0x1D0E20u: goto label_1d0e20;
            case 0x1D0E24u: goto label_1d0e24;
            case 0x1D0E28u: goto label_1d0e28;
            case 0x1D0E2Cu: goto label_1d0e2c;
            case 0x1D0E30u: goto label_1d0e30;
            case 0x1D0E34u: goto label_1d0e34;
            case 0x1D0E38u: goto label_1d0e38;
            case 0x1D0E3Cu: goto label_1d0e3c;
            case 0x1D0E40u: goto label_1d0e40;
            case 0x1D0E44u: goto label_1d0e44;
            case 0x1D0E48u: goto label_1d0e48;
            case 0x1D0E4Cu: goto label_1d0e4c;
            case 0x1D0E50u: goto label_1d0e50;
            case 0x1D0E54u: goto label_1d0e54;
            case 0x1D0E58u: goto label_1d0e58;
            case 0x1D0E5Cu: goto label_1d0e5c;
            case 0x1D0E60u: goto label_1d0e60;
            case 0x1D0E64u: goto label_1d0e64;
            case 0x1D0E68u: goto label_1d0e68;
            case 0x1D0E6Cu: goto label_1d0e6c;
            case 0x1D0E70u: goto label_1d0e70;
            case 0x1D0E74u: goto label_1d0e74;
            case 0x1D0E78u: goto label_1d0e78;
            case 0x1D0E7Cu: goto label_1d0e7c;
            case 0x1D0E80u: goto label_1d0e80;
            case 0x1D0E84u: goto label_1d0e84;
            case 0x1D0E88u: goto label_1d0e88;
            case 0x1D0E8Cu: goto label_1d0e8c;
            case 0x1D0E90u: goto label_1d0e90;
            case 0x1D0E94u: goto label_1d0e94;
            case 0x1D0E98u: goto label_1d0e98;
            case 0x1D0E9Cu: goto label_1d0e9c;
            case 0x1D0EA0u: goto label_1d0ea0;
            case 0x1D0EA4u: goto label_1d0ea4;
            case 0x1D0EA8u: goto label_1d0ea8;
            case 0x1D0EACu: goto label_1d0eac;
            case 0x1D0EB0u: goto label_1d0eb0;
            case 0x1D0EB4u: goto label_1d0eb4;
            case 0x1D0EB8u: goto label_1d0eb8;
            case 0x1D0EBCu: goto label_1d0ebc;
            case 0x1D0EC0u: goto label_1d0ec0;
            case 0x1D0EC4u: goto label_1d0ec4;
            case 0x1D0EC8u: goto label_1d0ec8;
            case 0x1D0ECCu: goto label_1d0ecc;
            case 0x1D0ED0u: goto label_1d0ed0;
            case 0x1D0ED4u: goto label_1d0ed4;
            case 0x1D0ED8u: goto label_1d0ed8;
            case 0x1D0EDCu: goto label_1d0edc;
            case 0x1D0EE0u: goto label_1d0ee0;
            case 0x1D0EE4u: goto label_1d0ee4;
            case 0x1D0EE8u: goto label_1d0ee8;
            case 0x1D0EECu: goto label_1d0eec;
            case 0x1D0EF0u: goto label_1d0ef0;
            case 0x1D0EF4u: goto label_1d0ef4;
            case 0x1D0EF8u: goto label_1d0ef8;
            case 0x1D0EFCu: goto label_1d0efc;
            case 0x1D0F00u: goto label_1d0f00;
            case 0x1D0F04u: goto label_1d0f04;
            case 0x1D0F08u: goto label_1d0f08;
            case 0x1D0F0Cu: goto label_1d0f0c;
            case 0x1D0F10u: goto label_1d0f10;
            case 0x1D0F14u: goto label_1d0f14;
            case 0x1D0F18u: goto label_1d0f18;
            case 0x1D0F1Cu: goto label_1d0f1c;
            case 0x1D0F20u: goto label_1d0f20;
            case 0x1D0F24u: goto label_1d0f24;
            case 0x1D0F28u: goto label_1d0f28;
            case 0x1D0F2Cu: goto label_1d0f2c;
            case 0x1D0F30u: goto label_1d0f30;
            case 0x1D0F34u: goto label_1d0f34;
            case 0x1D0F38u: goto label_1d0f38;
            case 0x1D0F3Cu: goto label_1d0f3c;
            case 0x1D0F40u: goto label_1d0f40;
            case 0x1D0F44u: goto label_1d0f44;
            case 0x1D0F48u: goto label_1d0f48;
            case 0x1D0F4Cu: goto label_1d0f4c;
            case 0x1D0F50u: goto label_1d0f50;
            case 0x1D0F54u: goto label_1d0f54;
            case 0x1D0F58u: goto label_1d0f58;
            case 0x1D0F5Cu: goto label_1d0f5c;
            case 0x1D0F60u: goto label_1d0f60;
            case 0x1D0F64u: goto label_1d0f64;
            case 0x1D0F68u: goto label_1d0f68;
            case 0x1D0F6Cu: goto label_1d0f6c;
            case 0x1D0F70u: goto label_1d0f70;
            case 0x1D0F74u: goto label_1d0f74;
            case 0x1D0F78u: goto label_1d0f78;
            case 0x1D0F7Cu: goto label_1d0f7c;
            case 0x1D0F80u: goto label_1d0f80;
            case 0x1D0F84u: goto label_1d0f84;
            case 0x1D0F88u: goto label_1d0f88;
            case 0x1D0F8Cu: goto label_1d0f8c;
            case 0x1D0F90u: goto label_1d0f90;
            case 0x1D0F94u: goto label_1d0f94;
            case 0x1D0F98u: goto label_1d0f98;
            case 0x1D0F9Cu: goto label_1d0f9c;
            case 0x1D0FA0u: goto label_1d0fa0;
            case 0x1D0FA4u: goto label_1d0fa4;
            case 0x1D0FA8u: goto label_1d0fa8;
            case 0x1D0FACu: goto label_1d0fac;
            case 0x1D0FB0u: goto label_1d0fb0;
            case 0x1D0FB4u: goto label_1d0fb4;
            case 0x1D0FB8u: goto label_1d0fb8;
            case 0x1D0FBCu: goto label_1d0fbc;
            case 0x1D0FC0u: goto label_1d0fc0;
            case 0x1D0FC4u: goto label_1d0fc4;
            case 0x1D0FC8u: goto label_1d0fc8;
            case 0x1D0FCCu: goto label_1d0fcc;
            case 0x1D0FD0u: goto label_1d0fd0;
            case 0x1D0FD4u: goto label_1d0fd4;
            case 0x1D0FD8u: goto label_1d0fd8;
            case 0x1D0FDCu: goto label_1d0fdc;
            case 0x1D0FE0u: goto label_1d0fe0;
            case 0x1D0FE4u: goto label_1d0fe4;
            case 0x1D0FE8u: goto label_1d0fe8;
            case 0x1D0FECu: goto label_1d0fec;
            case 0x1D0FF0u: goto label_1d0ff0;
            case 0x1D0FF4u: goto label_1d0ff4;
            case 0x1D0FF8u: goto label_1d0ff8;
            case 0x1D0FFCu: goto label_1d0ffc;
            case 0x1D1000u: goto label_1d1000;
            case 0x1D1004u: goto label_1d1004;
            case 0x1D1008u: goto label_1d1008;
            case 0x1D100Cu: goto label_1d100c;
            case 0x1D1010u: goto label_1d1010;
            case 0x1D1014u: goto label_1d1014;
            case 0x1D1018u: goto label_1d1018;
            case 0x1D101Cu: goto label_1d101c;
            case 0x1D1020u: goto label_1d1020;
            case 0x1D1024u: goto label_1d1024;
            case 0x1D1028u: goto label_1d1028;
            case 0x1D102Cu: goto label_1d102c;
            case 0x1D1030u: goto label_1d1030;
            case 0x1D1034u: goto label_1d1034;
            case 0x1D1038u: goto label_1d1038;
            case 0x1D103Cu: goto label_1d103c;
            case 0x1D1040u: goto label_1d1040;
            case 0x1D1044u: goto label_1d1044;
            case 0x1D1048u: goto label_1d1048;
            case 0x1D104Cu: goto label_1d104c;
            case 0x1D1050u: goto label_1d1050;
            case 0x1D1054u: goto label_1d1054;
            case 0x1D1058u: goto label_1d1058;
            case 0x1D105Cu: goto label_1d105c;
            case 0x1D1060u: goto label_1d1060;
            case 0x1D1064u: goto label_1d1064;
            case 0x1D1068u: goto label_1d1068;
            case 0x1D106Cu: goto label_1d106c;
            case 0x1D1070u: goto label_1d1070;
            case 0x1D1074u: goto label_1d1074;
            case 0x1D1078u: goto label_1d1078;
            case 0x1D107Cu: goto label_1d107c;
            case 0x1D1080u: goto label_1d1080;
            case 0x1D1084u: goto label_1d1084;
            case 0x1D1088u: goto label_1d1088;
            case 0x1D108Cu: goto label_1d108c;
            case 0x1D1090u: goto label_1d1090;
            case 0x1D1094u: goto label_1d1094;
            case 0x1D1098u: goto label_1d1098;
            case 0x1D109Cu: goto label_1d109c;
            case 0x1D10A0u: goto label_1d10a0;
            case 0x1D10A4u: goto label_1d10a4;
            case 0x1D10A8u: goto label_1d10a8;
            case 0x1D10ACu: goto label_1d10ac;
            case 0x1D10B0u: goto label_1d10b0;
            case 0x1D10B4u: goto label_1d10b4;
            case 0x1D10B8u: goto label_1d10b8;
            case 0x1D10BCu: goto label_1d10bc;
            case 0x1D10C0u: goto label_1d10c0;
            case 0x1D10C4u: goto label_1d10c4;
            case 0x1D10C8u: goto label_1d10c8;
            case 0x1D10CCu: goto label_1d10cc;
            case 0x1D10D0u: goto label_1d10d0;
            case 0x1D10D4u: goto label_1d10d4;
            case 0x1D10D8u: goto label_1d10d8;
            case 0x1D10DCu: goto label_1d10dc;
            case 0x1D10E0u: goto label_1d10e0;
            case 0x1D10E4u: goto label_1d10e4;
            case 0x1D10E8u: goto label_1d10e8;
            case 0x1D10ECu: goto label_1d10ec;
            case 0x1D10F0u: goto label_1d10f0;
            case 0x1D10F4u: goto label_1d10f4;
            case 0x1D10F8u: goto label_1d10f8;
            case 0x1D10FCu: goto label_1d10fc;
            case 0x1D1100u: goto label_1d1100;
            case 0x1D1104u: goto label_1d1104;
            case 0x1D1108u: goto label_1d1108;
            case 0x1D110Cu: goto label_1d110c;
            case 0x1D1110u: goto label_1d1110;
            case 0x1D1114u: goto label_1d1114;
            case 0x1D1118u: goto label_1d1118;
            case 0x1D111Cu: goto label_1d111c;
            case 0x1D1120u: goto label_1d1120;
            case 0x1D1124u: goto label_1d1124;
            case 0x1D1128u: goto label_1d1128;
            case 0x1D112Cu: goto label_1d112c;
            case 0x1D1130u: goto label_1d1130;
            case 0x1D1134u: goto label_1d1134;
            case 0x1D1138u: goto label_1d1138;
            case 0x1D113Cu: goto label_1d113c;
            case 0x1D1140u: goto label_1d1140;
            case 0x1D1144u: goto label_1d1144;
            case 0x1D1148u: goto label_1d1148;
            case 0x1D114Cu: goto label_1d114c;
            case 0x1D1150u: goto label_1d1150;
            case 0x1D1154u: goto label_1d1154;
            case 0x1D1158u: goto label_1d1158;
            case 0x1D115Cu: goto label_1d115c;
            case 0x1D1160u: goto label_1d1160;
            case 0x1D1164u: goto label_1d1164;
            case 0x1D1168u: goto label_1d1168;
            case 0x1D116Cu: goto label_1d116c;
            case 0x1D1170u: goto label_1d1170;
            case 0x1D1174u: goto label_1d1174;
            case 0x1D1178u: goto label_1d1178;
            case 0x1D117Cu: goto label_1d117c;
            case 0x1D1180u: goto label_1d1180;
            case 0x1D1184u: goto label_1d1184;
            case 0x1D1188u: goto label_1d1188;
            case 0x1D118Cu: goto label_1d118c;
            case 0x1D1190u: goto label_1d1190;
            case 0x1D1194u: goto label_1d1194;
            case 0x1D1198u: goto label_1d1198;
            case 0x1D119Cu: goto label_1d119c;
            case 0x1D11A0u: goto label_1d11a0;
            case 0x1D11A4u: goto label_1d11a4;
            case 0x1D11A8u: goto label_1d11a8;
            case 0x1D11ACu: goto label_1d11ac;
            case 0x1D11B0u: goto label_1d11b0;
            case 0x1D11B4u: goto label_1d11b4;
            case 0x1D11B8u: goto label_1d11b8;
            case 0x1D11BCu: goto label_1d11bc;
            case 0x1D11C0u: goto label_1d11c0;
            case 0x1D11C4u: goto label_1d11c4;
            case 0x1D11C8u: goto label_1d11c8;
            case 0x1D11CCu: goto label_1d11cc;
            case 0x1D11D0u: goto label_1d11d0;
            case 0x1D11D4u: goto label_1d11d4;
            case 0x1D11D8u: goto label_1d11d8;
            case 0x1D11DCu: goto label_1d11dc;
            case 0x1D11E0u: goto label_1d11e0;
            case 0x1D11E4u: goto label_1d11e4;
            case 0x1D11E8u: goto label_1d11e8;
            case 0x1D11ECu: goto label_1d11ec;
            case 0x1D11F0u: goto label_1d11f0;
            case 0x1D11F4u: goto label_1d11f4;
            case 0x1D11F8u: goto label_1d11f8;
            case 0x1D11FCu: goto label_1d11fc;
            case 0x1D1200u: goto label_1d1200;
            case 0x1D1204u: goto label_1d1204;
            case 0x1D1208u: goto label_1d1208;
            case 0x1D120Cu: goto label_1d120c;
            case 0x1D1210u: goto label_1d1210;
            case 0x1D1214u: goto label_1d1214;
            case 0x1D1218u: goto label_1d1218;
            case 0x1D121Cu: goto label_1d121c;
            case 0x1D1220u: goto label_1d1220;
            case 0x1D1224u: goto label_1d1224;
            case 0x1D1228u: goto label_1d1228;
            case 0x1D122Cu: goto label_1d122c;
            case 0x1D1230u: goto label_1d1230;
            case 0x1D1234u: goto label_1d1234;
            case 0x1D1238u: goto label_1d1238;
            case 0x1D123Cu: goto label_1d123c;
            case 0x1D1240u: goto label_1d1240;
            case 0x1D1244u: goto label_1d1244;
            case 0x1D1248u: goto label_1d1248;
            case 0x1D124Cu: goto label_1d124c;
            case 0x1D1250u: goto label_1d1250;
            case 0x1D1254u: goto label_1d1254;
            case 0x1D1258u: goto label_1d1258;
            case 0x1D125Cu: goto label_1d125c;
            case 0x1D1260u: goto label_1d1260;
            case 0x1D1264u: goto label_1d1264;
            case 0x1D1268u: goto label_1d1268;
            case 0x1D126Cu: goto label_1d126c;
            case 0x1D1270u: goto label_1d1270;
            case 0x1D1274u: goto label_1d1274;
            case 0x1D1278u: goto label_1d1278;
            case 0x1D127Cu: goto label_1d127c;
            case 0x1D1280u: goto label_1d1280;
            case 0x1D1284u: goto label_1d1284;
            case 0x1D1288u: goto label_1d1288;
            case 0x1D128Cu: goto label_1d128c;
            case 0x1D1290u: goto label_1d1290;
            case 0x1D1294u: goto label_1d1294;
            case 0x1D1298u: goto label_1d1298;
            case 0x1D129Cu: goto label_1d129c;
            case 0x1D12A0u: goto label_1d12a0;
            case 0x1D12A4u: goto label_1d12a4;
            case 0x1D12A8u: goto label_1d12a8;
            case 0x1D12ACu: goto label_1d12ac;
            case 0x1D12B0u: goto label_1d12b0;
            case 0x1D12B4u: goto label_1d12b4;
            case 0x1D12B8u: goto label_1d12b8;
            case 0x1D12BCu: goto label_1d12bc;
            case 0x1D12C0u: goto label_1d12c0;
            case 0x1D12C4u: goto label_1d12c4;
            case 0x1D12C8u: goto label_1d12c8;
            case 0x1D12CCu: goto label_1d12cc;
            case 0x1D12D0u: goto label_1d12d0;
            case 0x1D12D4u: goto label_1d12d4;
            case 0x1D12D8u: goto label_1d12d8;
            case 0x1D12DCu: goto label_1d12dc;
            case 0x1D12E0u: goto label_1d12e0;
            case 0x1D12E4u: goto label_1d12e4;
            case 0x1D12E8u: goto label_1d12e8;
            case 0x1D12ECu: goto label_1d12ec;
            case 0x1D12F0u: goto label_1d12f0;
            case 0x1D12F4u: goto label_1d12f4;
            case 0x1D12F8u: goto label_1d12f8;
            case 0x1D12FCu: goto label_1d12fc;
            case 0x1D1300u: goto label_1d1300;
            case 0x1D1304u: goto label_1d1304;
            case 0x1D1308u: goto label_1d1308;
            case 0x1D130Cu: goto label_1d130c;
            case 0x1D1310u: goto label_1d1310;
            case 0x1D1314u: goto label_1d1314;
            case 0x1D1318u: goto label_1d1318;
            case 0x1D131Cu: goto label_1d131c;
            case 0x1D1320u: goto label_1d1320;
            case 0x1D1324u: goto label_1d1324;
            case 0x1D1328u: goto label_1d1328;
            case 0x1D132Cu: goto label_1d132c;
            case 0x1D1330u: goto label_1d1330;
            case 0x1D1334u: goto label_1d1334;
            case 0x1D1338u: goto label_1d1338;
            case 0x1D133Cu: goto label_1d133c;
            case 0x1D1340u: goto label_1d1340;
            case 0x1D1344u: goto label_1d1344;
            case 0x1D1348u: goto label_1d1348;
            case 0x1D134Cu: goto label_1d134c;
            case 0x1D1350u: goto label_1d1350;
            case 0x1D1354u: goto label_1d1354;
            case 0x1D1358u: goto label_1d1358;
            case 0x1D135Cu: goto label_1d135c;
            case 0x1D1360u: goto label_1d1360;
            case 0x1D1364u: goto label_1d1364;
            case 0x1D1368u: goto label_1d1368;
            case 0x1D136Cu: goto label_1d136c;
            case 0x1D1370u: goto label_1d1370;
            case 0x1D1374u: goto label_1d1374;
            case 0x1D1378u: goto label_1d1378;
            case 0x1D137Cu: goto label_1d137c;
            case 0x1D1380u: goto label_1d1380;
            case 0x1D1384u: goto label_1d1384;
            case 0x1D1388u: goto label_1d1388;
            case 0x1D138Cu: goto label_1d138c;
            case 0x1D1390u: goto label_1d1390;
            case 0x1D1394u: goto label_1d1394;
            case 0x1D1398u: goto label_1d1398;
            case 0x1D139Cu: goto label_1d139c;
            case 0x1D13A0u: goto label_1d13a0;
            case 0x1D13A4u: goto label_1d13a4;
            case 0x1D13A8u: goto label_1d13a8;
            case 0x1D13ACu: goto label_1d13ac;
            case 0x1D13B0u: goto label_1d13b0;
            case 0x1D13B4u: goto label_1d13b4;
            case 0x1D13B8u: goto label_1d13b8;
            case 0x1D13BCu: goto label_1d13bc;
            case 0x1D13C0u: goto label_1d13c0;
            case 0x1D13C4u: goto label_1d13c4;
            case 0x1D13C8u: goto label_1d13c8;
            case 0x1D13CCu: goto label_1d13cc;
            case 0x1D13D0u: goto label_1d13d0;
            case 0x1D13D4u: goto label_1d13d4;
            case 0x1D13D8u: goto label_1d13d8;
            case 0x1D13DCu: goto label_1d13dc;
            case 0x1D13E0u: goto label_1d13e0;
            case 0x1D13E4u: goto label_1d13e4;
            case 0x1D13E8u: goto label_1d13e8;
            case 0x1D13ECu: goto label_1d13ec;
            case 0x1D13F0u: goto label_1d13f0;
            case 0x1D13F4u: goto label_1d13f4;
            case 0x1D13F8u: goto label_1d13f8;
            case 0x1D13FCu: goto label_1d13fc;
            case 0x1D1400u: goto label_1d1400;
            case 0x1D1404u: goto label_1d1404;
            case 0x1D1408u: goto label_1d1408;
            case 0x1D140Cu: goto label_1d140c;
            case 0x1D1410u: goto label_1d1410;
            case 0x1D1414u: goto label_1d1414;
            case 0x1D1418u: goto label_1d1418;
            case 0x1D141Cu: goto label_1d141c;
            case 0x1D1420u: goto label_1d1420;
            case 0x1D1424u: goto label_1d1424;
            case 0x1D1428u: goto label_1d1428;
            case 0x1D142Cu: goto label_1d142c;
            case 0x1D1430u: goto label_1d1430;
            case 0x1D1434u: goto label_1d1434;
            case 0x1D1438u: goto label_1d1438;
            case 0x1D143Cu: goto label_1d143c;
            case 0x1D1440u: goto label_1d1440;
            case 0x1D1444u: goto label_1d1444;
            case 0x1D1448u: goto label_1d1448;
            case 0x1D144Cu: goto label_1d144c;
            case 0x1D1450u: goto label_1d1450;
            case 0x1D1454u: goto label_1d1454;
            case 0x1D1458u: goto label_1d1458;
            case 0x1D145Cu: goto label_1d145c;
            case 0x1D1460u: goto label_1d1460;
            case 0x1D1464u: goto label_1d1464;
            case 0x1D1468u: goto label_1d1468;
            case 0x1D146Cu: goto label_1d146c;
            case 0x1D1470u: goto label_1d1470;
            case 0x1D1474u: goto label_1d1474;
            case 0x1D1478u: goto label_1d1478;
            case 0x1D147Cu: goto label_1d147c;
            case 0x1D1480u: goto label_1d1480;
            case 0x1D1484u: goto label_1d1484;
            case 0x1D1488u: goto label_1d1488;
            case 0x1D148Cu: goto label_1d148c;
            case 0x1D1490u: goto label_1d1490;
            case 0x1D1494u: goto label_1d1494;
            case 0x1D1498u: goto label_1d1498;
            case 0x1D149Cu: goto label_1d149c;
            case 0x1D14A0u: goto label_1d14a0;
            case 0x1D14A4u: goto label_1d14a4;
            case 0x1D14A8u: goto label_1d14a8;
            case 0x1D14ACu: goto label_1d14ac;
            case 0x1D14B0u: goto label_1d14b0;
            case 0x1D14B4u: goto label_1d14b4;
            case 0x1D14B8u: goto label_1d14b8;
            case 0x1D14BCu: goto label_1d14bc;
            case 0x1D14C0u: goto label_1d14c0;
            case 0x1D14C4u: goto label_1d14c4;
            case 0x1D14C8u: goto label_1d14c8;
            case 0x1D14CCu: goto label_1d14cc;
            case 0x1D14D0u: goto label_1d14d0;
            case 0x1D14D4u: goto label_1d14d4;
            case 0x1D14D8u: goto label_1d14d8;
            case 0x1D14DCu: goto label_1d14dc;
            case 0x1D14E0u: goto label_1d14e0;
            case 0x1D14E4u: goto label_1d14e4;
            case 0x1D14E8u: goto label_1d14e8;
            case 0x1D14ECu: goto label_1d14ec;
            case 0x1D14F0u: goto label_1d14f0;
            case 0x1D14F4u: goto label_1d14f4;
            case 0x1D14F8u: goto label_1d14f8;
            case 0x1D14FCu: goto label_1d14fc;
            case 0x1D1500u: goto label_1d1500;
            case 0x1D1504u: goto label_1d1504;
            case 0x1D1508u: goto label_1d1508;
            case 0x1D150Cu: goto label_1d150c;
            case 0x1D1510u: goto label_1d1510;
            case 0x1D1514u: goto label_1d1514;
            case 0x1D1518u: goto label_1d1518;
            case 0x1D151Cu: goto label_1d151c;
            case 0x1D1520u: goto label_1d1520;
            case 0x1D1524u: goto label_1d1524;
            case 0x1D1528u: goto label_1d1528;
            case 0x1D152Cu: goto label_1d152c;
            case 0x1D1530u: goto label_1d1530;
            case 0x1D1534u: goto label_1d1534;
            case 0x1D1538u: goto label_1d1538;
            case 0x1D153Cu: goto label_1d153c;
            case 0x1D1540u: goto label_1d1540;
            case 0x1D1544u: goto label_1d1544;
            case 0x1D1548u: goto label_1d1548;
            case 0x1D154Cu: goto label_1d154c;
            case 0x1D1550u: goto label_1d1550;
            case 0x1D1554u: goto label_1d1554;
            case 0x1D1558u: goto label_1d1558;
            case 0x1D155Cu: goto label_1d155c;
            case 0x1D1560u: goto label_1d1560;
            case 0x1D1564u: goto label_1d1564;
            case 0x1D1568u: goto label_1d1568;
            case 0x1D156Cu: goto label_1d156c;
            case 0x1D1570u: goto label_1d1570;
            case 0x1D1574u: goto label_1d1574;
            case 0x1D1578u: goto label_1d1578;
            case 0x1D157Cu: goto label_1d157c;
            case 0x1D1580u: goto label_1d1580;
            case 0x1D1584u: goto label_1d1584;
            case 0x1D1588u: goto label_1d1588;
            case 0x1D158Cu: goto label_1d158c;
            case 0x1D1590u: goto label_1d1590;
            case 0x1D1594u: goto label_1d1594;
            case 0x1D1598u: goto label_1d1598;
            case 0x1D159Cu: goto label_1d159c;
            case 0x1D15A0u: goto label_1d15a0;
            case 0x1D15A4u: goto label_1d15a4;
            case 0x1D15A8u: goto label_1d15a8;
            case 0x1D15ACu: goto label_1d15ac;
            case 0x1D15B0u: goto label_1d15b0;
            case 0x1D15B4u: goto label_1d15b4;
            case 0x1D15B8u: goto label_1d15b8;
            case 0x1D15BCu: goto label_1d15bc;
            case 0x1D15C0u: goto label_1d15c0;
            case 0x1D15C4u: goto label_1d15c4;
            case 0x1D15C8u: goto label_1d15c8;
            case 0x1D15CCu: goto label_1d15cc;
            case 0x1D15D0u: goto label_1d15d0;
            case 0x1D15D4u: goto label_1d15d4;
            case 0x1D15D8u: goto label_1d15d8;
            case 0x1D15DCu: goto label_1d15dc;
            case 0x1D15E0u: goto label_1d15e0;
            case 0x1D15E4u: goto label_1d15e4;
            case 0x1D15E8u: goto label_1d15e8;
            case 0x1D15ECu: goto label_1d15ec;
            case 0x1D15F0u: goto label_1d15f0;
            case 0x1D15F4u: goto label_1d15f4;
            case 0x1D15F8u: goto label_1d15f8;
            case 0x1D15FCu: goto label_1d15fc;
            case 0x1D1600u: goto label_1d1600;
            case 0x1D1604u: goto label_1d1604;
            case 0x1D1608u: goto label_1d1608;
            case 0x1D160Cu: goto label_1d160c;
            case 0x1D1610u: goto label_1d1610;
            case 0x1D1614u: goto label_1d1614;
            case 0x1D1618u: goto label_1d1618;
            case 0x1D161Cu: goto label_1d161c;
            case 0x1D1620u: goto label_1d1620;
            case 0x1D1624u: goto label_1d1624;
            case 0x1D1628u: goto label_1d1628;
            case 0x1D162Cu: goto label_1d162c;
            case 0x1D1630u: goto label_1d1630;
            case 0x1D1634u: goto label_1d1634;
            case 0x1D1638u: goto label_1d1638;
            case 0x1D163Cu: goto label_1d163c;
            case 0x1D1640u: goto label_1d1640;
            case 0x1D1644u: goto label_1d1644;
            case 0x1D1648u: goto label_1d1648;
            case 0x1D164Cu: goto label_1d164c;
            case 0x1D1650u: goto label_1d1650;
            case 0x1D1654u: goto label_1d1654;
            case 0x1D1658u: goto label_1d1658;
            case 0x1D165Cu: goto label_1d165c;
            case 0x1D1660u: goto label_1d1660;
            case 0x1D1664u: goto label_1d1664;
            case 0x1D1668u: goto label_1d1668;
            case 0x1D166Cu: goto label_1d166c;
            case 0x1D1670u: goto label_1d1670;
            case 0x1D1674u: goto label_1d1674;
            case 0x1D1678u: goto label_1d1678;
            case 0x1D167Cu: goto label_1d167c;
            case 0x1D1680u: goto label_1d1680;
            case 0x1D1684u: goto label_1d1684;
            case 0x1D1688u: goto label_1d1688;
            case 0x1D168Cu: goto label_1d168c;
            case 0x1D1690u: goto label_1d1690;
            case 0x1D1694u: goto label_1d1694;
            case 0x1D1698u: goto label_1d1698;
            case 0x1D169Cu: goto label_1d169c;
            case 0x1D16A0u: goto label_1d16a0;
            case 0x1D16A4u: goto label_1d16a4;
            case 0x1D16A8u: goto label_1d16a8;
            case 0x1D16ACu: goto label_1d16ac;
            case 0x1D16B0u: goto label_1d16b0;
            case 0x1D16B4u: goto label_1d16b4;
            case 0x1D16B8u: goto label_1d16b8;
            case 0x1D16BCu: goto label_1d16bc;
            case 0x1D16C0u: goto label_1d16c0;
            case 0x1D16C4u: goto label_1d16c4;
            case 0x1D16C8u: goto label_1d16c8;
            case 0x1D16CCu: goto label_1d16cc;
            case 0x1D16D0u: goto label_1d16d0;
            case 0x1D16D4u: goto label_1d16d4;
            case 0x1D16D8u: goto label_1d16d8;
            case 0x1D16DCu: goto label_1d16dc;
            case 0x1D16E0u: goto label_1d16e0;
            case 0x1D16E4u: goto label_1d16e4;
            case 0x1D16E8u: goto label_1d16e8;
            case 0x1D16ECu: goto label_1d16ec;
            case 0x1D16F0u: goto label_1d16f0;
            case 0x1D16F4u: goto label_1d16f4;
            case 0x1D16F8u: goto label_1d16f8;
            case 0x1D16FCu: goto label_1d16fc;
            case 0x1D1700u: goto label_1d1700;
            case 0x1D1704u: goto label_1d1704;
            case 0x1D1708u: goto label_1d1708;
            case 0x1D170Cu: goto label_1d170c;
            case 0x1D1710u: goto label_1d1710;
            case 0x1D1714u: goto label_1d1714;
            case 0x1D1718u: goto label_1d1718;
            case 0x1D171Cu: goto label_1d171c;
            case 0x1D1720u: goto label_1d1720;
            case 0x1D1724u: goto label_1d1724;
            case 0x1D1728u: goto label_1d1728;
            case 0x1D172Cu: goto label_1d172c;
            case 0x1D1730u: goto label_1d1730;
            case 0x1D1734u: goto label_1d1734;
            case 0x1D1738u: goto label_1d1738;
            case 0x1D173Cu: goto label_1d173c;
            case 0x1D1740u: goto label_1d1740;
            case 0x1D1744u: goto label_1d1744;
            case 0x1D1748u: goto label_1d1748;
            case 0x1D174Cu: goto label_1d174c;
            case 0x1D1750u: goto label_1d1750;
            case 0x1D1754u: goto label_1d1754;
            case 0x1D1758u: goto label_1d1758;
            case 0x1D175Cu: goto label_1d175c;
            case 0x1D1760u: goto label_1d1760;
            case 0x1D1764u: goto label_1d1764;
            case 0x1D1768u: goto label_1d1768;
            case 0x1D176Cu: goto label_1d176c;
            case 0x1D1770u: goto label_1d1770;
            case 0x1D1774u: goto label_1d1774;
            case 0x1D1778u: goto label_1d1778;
            case 0x1D177Cu: goto label_1d177c;
            case 0x1D1780u: goto label_1d1780;
            case 0x1D1784u: goto label_1d1784;
            case 0x1D1788u: goto label_1d1788;
            case 0x1D178Cu: goto label_1d178c;
            case 0x1D1790u: goto label_1d1790;
            case 0x1D1794u: goto label_1d1794;
            case 0x1D1798u: goto label_1d1798;
            case 0x1D179Cu: goto label_1d179c;
            case 0x1D17A0u: goto label_1d17a0;
            case 0x1D17A4u: goto label_1d17a4;
            case 0x1D17A8u: goto label_1d17a8;
            case 0x1D17ACu: goto label_1d17ac;
            case 0x1D17B0u: goto label_1d17b0;
            case 0x1D17B4u: goto label_1d17b4;
            case 0x1D17B8u: goto label_1d17b8;
            case 0x1D17BCu: goto label_1d17bc;
            case 0x1D17C0u: goto label_1d17c0;
            case 0x1D17C4u: goto label_1d17c4;
            case 0x1D17C8u: goto label_1d17c8;
            case 0x1D17CCu: goto label_1d17cc;
            case 0x1D17D0u: goto label_1d17d0;
            case 0x1D17D4u: goto label_1d17d4;
            case 0x1D17D8u: goto label_1d17d8;
            case 0x1D17DCu: goto label_1d17dc;
            case 0x1D17E0u: goto label_1d17e0;
            case 0x1D17E4u: goto label_1d17e4;
            case 0x1D17E8u: goto label_1d17e8;
            case 0x1D17ECu: goto label_1d17ec;
            case 0x1D17F0u: goto label_1d17f0;
            case 0x1D17F4u: goto label_1d17f4;
            case 0x1D17F8u: goto label_1d17f8;
            case 0x1D17FCu: goto label_1d17fc;
            case 0x1D1800u: goto label_1d1800;
            case 0x1D1804u: goto label_1d1804;
            case 0x1D1808u: goto label_1d1808;
            case 0x1D180Cu: goto label_1d180c;
            case 0x1D1810u: goto label_1d1810;
            case 0x1D1814u: goto label_1d1814;
            case 0x1D1818u: goto label_1d1818;
            case 0x1D181Cu: goto label_1d181c;
            case 0x1D1820u: goto label_1d1820;
            case 0x1D1824u: goto label_1d1824;
            case 0x1D1828u: goto label_1d1828;
            case 0x1D182Cu: goto label_1d182c;
            case 0x1D1830u: goto label_1d1830;
            case 0x1D1834u: goto label_1d1834;
            case 0x1D1838u: goto label_1d1838;
            case 0x1D183Cu: goto label_1d183c;
            case 0x1D1840u: goto label_1d1840;
            case 0x1D1844u: goto label_1d1844;
            case 0x1D1848u: goto label_1d1848;
            case 0x1D184Cu: goto label_1d184c;
            case 0x1D1850u: goto label_1d1850;
            case 0x1D1854u: goto label_1d1854;
            case 0x1D1858u: goto label_1d1858;
            case 0x1D185Cu: goto label_1d185c;
            case 0x1D1860u: goto label_1d1860;
            case 0x1D1864u: goto label_1d1864;
            case 0x1D1868u: goto label_1d1868;
            case 0x1D186Cu: goto label_1d186c;
            case 0x1D1870u: goto label_1d1870;
            case 0x1D1874u: goto label_1d1874;
            case 0x1D1878u: goto label_1d1878;
            case 0x1D187Cu: goto label_1d187c;
            case 0x1D1880u: goto label_1d1880;
            case 0x1D1884u: goto label_1d1884;
            case 0x1D1888u: goto label_1d1888;
            case 0x1D188Cu: goto label_1d188c;
            case 0x1D1890u: goto label_1d1890;
            case 0x1D1894u: goto label_1d1894;
            case 0x1D1898u: goto label_1d1898;
            case 0x1D189Cu: goto label_1d189c;
            case 0x1D18A0u: goto label_1d18a0;
            case 0x1D18A4u: goto label_1d18a4;
            case 0x1D18A8u: goto label_1d18a8;
            case 0x1D18ACu: goto label_1d18ac;
            case 0x1D18B0u: goto label_1d18b0;
            case 0x1D18B4u: goto label_1d18b4;
            case 0x1D18B8u: goto label_1d18b8;
            case 0x1D18BCu: goto label_1d18bc;
            case 0x1D18C0u: goto label_1d18c0;
            case 0x1D18C4u: goto label_1d18c4;
            case 0x1D18C8u: goto label_1d18c8;
            case 0x1D18CCu: goto label_1d18cc;
            case 0x1D18D0u: goto label_1d18d0;
            case 0x1D18D4u: goto label_1d18d4;
            case 0x1D18D8u: goto label_1d18d8;
            case 0x1D18DCu: goto label_1d18dc;
            case 0x1D18E0u: goto label_1d18e0;
            case 0x1D18E4u: goto label_1d18e4;
            case 0x1D18E8u: goto label_1d18e8;
            case 0x1D18ECu: goto label_1d18ec;
            case 0x1D18F0u: goto label_1d18f0;
            case 0x1D18F4u: goto label_1d18f4;
            case 0x1D18F8u: goto label_1d18f8;
            case 0x1D18FCu: goto label_1d18fc;
            case 0x1D1900u: goto label_1d1900;
            case 0x1D1904u: goto label_1d1904;
            case 0x1D1908u: goto label_1d1908;
            case 0x1D190Cu: goto label_1d190c;
            case 0x1D1910u: goto label_1d1910;
            case 0x1D1914u: goto label_1d1914;
            case 0x1D1918u: goto label_1d1918;
            case 0x1D191Cu: goto label_1d191c;
            case 0x1D1920u: goto label_1d1920;
            case 0x1D1924u: goto label_1d1924;
            case 0x1D1928u: goto label_1d1928;
            case 0x1D192Cu: goto label_1d192c;
            case 0x1D1930u: goto label_1d1930;
            case 0x1D1934u: goto label_1d1934;
            case 0x1D1938u: goto label_1d1938;
            case 0x1D193Cu: goto label_1d193c;
            case 0x1D1940u: goto label_1d1940;
            case 0x1D1944u: goto label_1d1944;
            case 0x1D1948u: goto label_1d1948;
            case 0x1D194Cu: goto label_1d194c;
            case 0x1D1950u: goto label_1d1950;
            case 0x1D1954u: goto label_1d1954;
            case 0x1D1958u: goto label_1d1958;
            case 0x1D195Cu: goto label_1d195c;
            case 0x1D1960u: goto label_1d1960;
            case 0x1D1964u: goto label_1d1964;
            case 0x1D1968u: goto label_1d1968;
            case 0x1D196Cu: goto label_1d196c;
            case 0x1D1970u: goto label_1d1970;
            case 0x1D1974u: goto label_1d1974;
            case 0x1D1978u: goto label_1d1978;
            case 0x1D197Cu: goto label_1d197c;
            case 0x1D1980u: goto label_1d1980;
            case 0x1D1984u: goto label_1d1984;
            case 0x1D1988u: goto label_1d1988;
            case 0x1D198Cu: goto label_1d198c;
            case 0x1D1990u: goto label_1d1990;
            case 0x1D1994u: goto label_1d1994;
            case 0x1D1998u: goto label_1d1998;
            case 0x1D199Cu: goto label_1d199c;
            case 0x1D19A0u: goto label_1d19a0;
            case 0x1D19A4u: goto label_1d19a4;
            case 0x1D19A8u: goto label_1d19a8;
            case 0x1D19ACu: goto label_1d19ac;
            case 0x1D19B0u: goto label_1d19b0;
            case 0x1D19B4u: goto label_1d19b4;
            case 0x1D19B8u: goto label_1d19b8;
            case 0x1D19BCu: goto label_1d19bc;
            case 0x1D19C0u: goto label_1d19c0;
            case 0x1D19C4u: goto label_1d19c4;
            case 0x1D19C8u: goto label_1d19c8;
            case 0x1D19CCu: goto label_1d19cc;
            case 0x1D19D0u: goto label_1d19d0;
            case 0x1D19D4u: goto label_1d19d4;
            case 0x1D19D8u: goto label_1d19d8;
            case 0x1D19DCu: goto label_1d19dc;
            case 0x1D19E0u: goto label_1d19e0;
            case 0x1D19E4u: goto label_1d19e4;
            case 0x1D19E8u: goto label_1d19e8;
            case 0x1D19ECu: goto label_1d19ec;
            case 0x1D19F0u: goto label_1d19f0;
            case 0x1D19F4u: goto label_1d19f4;
            case 0x1D19F8u: goto label_1d19f8;
            case 0x1D19FCu: goto label_1d19fc;
            case 0x1D1A00u: goto label_1d1a00;
            case 0x1D1A04u: goto label_1d1a04;
            case 0x1D1A08u: goto label_1d1a08;
            case 0x1D1A0Cu: goto label_1d1a0c;
            case 0x1D1A10u: goto label_1d1a10;
            case 0x1D1A14u: goto label_1d1a14;
            case 0x1D1A18u: goto label_1d1a18;
            case 0x1D1A1Cu: goto label_1d1a1c;
            case 0x1D1A20u: goto label_1d1a20;
            case 0x1D1A24u: goto label_1d1a24;
            case 0x1D1A28u: goto label_1d1a28;
            case 0x1D1A2Cu: goto label_1d1a2c;
            case 0x1D1A30u: goto label_1d1a30;
            case 0x1D1A34u: goto label_1d1a34;
            case 0x1D1A38u: goto label_1d1a38;
            case 0x1D1A3Cu: goto label_1d1a3c;
            case 0x1D1A40u: goto label_1d1a40;
            case 0x1D1A44u: goto label_1d1a44;
            case 0x1D1A48u: goto label_1d1a48;
            case 0x1D1A4Cu: goto label_1d1a4c;
            case 0x1D1A50u: goto label_1d1a50;
            case 0x1D1A54u: goto label_1d1a54;
            case 0x1D1A58u: goto label_1d1a58;
            case 0x1D1A5Cu: goto label_1d1a5c;
            case 0x1D1A60u: goto label_1d1a60;
            case 0x1D1A64u: goto label_1d1a64;
            case 0x1D1A68u: goto label_1d1a68;
            case 0x1D1A6Cu: goto label_1d1a6c;
            case 0x1D1A70u: goto label_1d1a70;
            case 0x1D1A74u: goto label_1d1a74;
            case 0x1D1A78u: goto label_1d1a78;
            case 0x1D1A7Cu: goto label_1d1a7c;
            case 0x1D1A80u: goto label_1d1a80;
            case 0x1D1A84u: goto label_1d1a84;
            case 0x1D1A88u: goto label_1d1a88;
            case 0x1D1A8Cu: goto label_1d1a8c;
            case 0x1D1A90u: goto label_1d1a90;
            case 0x1D1A94u: goto label_1d1a94;
            case 0x1D1A98u: goto label_1d1a98;
            case 0x1D1A9Cu: goto label_1d1a9c;
            case 0x1D1AA0u: goto label_1d1aa0;
            case 0x1D1AA4u: goto label_1d1aa4;
            case 0x1D1AA8u: goto label_1d1aa8;
            case 0x1D1AACu: goto label_1d1aac;
            case 0x1D1AB0u: goto label_1d1ab0;
            case 0x1D1AB4u: goto label_1d1ab4;
            case 0x1D1AB8u: goto label_1d1ab8;
            case 0x1D1ABCu: goto label_1d1abc;
            case 0x1D1AC0u: goto label_1d1ac0;
            case 0x1D1AC4u: goto label_1d1ac4;
            case 0x1D1AC8u: goto label_1d1ac8;
            case 0x1D1ACCu: goto label_1d1acc;
            case 0x1D1AD0u: goto label_1d1ad0;
            case 0x1D1AD4u: goto label_1d1ad4;
            case 0x1D1AD8u: goto label_1d1ad8;
            case 0x1D1ADCu: goto label_1d1adc;
            case 0x1D1AE0u: goto label_1d1ae0;
            case 0x1D1AE4u: goto label_1d1ae4;
            case 0x1D1AE8u: goto label_1d1ae8;
            case 0x1D1AECu: goto label_1d1aec;
            case 0x1D1AF0u: goto label_1d1af0;
            case 0x1D1AF4u: goto label_1d1af4;
            case 0x1D1AF8u: goto label_1d1af8;
            case 0x1D1AFCu: goto label_1d1afc;
            case 0x1D1B00u: goto label_1d1b00;
            case 0x1D1B04u: goto label_1d1b04;
            case 0x1D1B08u: goto label_1d1b08;
            case 0x1D1B0Cu: goto label_1d1b0c;
            case 0x1D1B10u: goto label_1d1b10;
            case 0x1D1B14u: goto label_1d1b14;
            case 0x1D1B18u: goto label_1d1b18;
            case 0x1D1B1Cu: goto label_1d1b1c;
            case 0x1D1B20u: goto label_1d1b20;
            case 0x1D1B24u: goto label_1d1b24;
            case 0x1D1B28u: goto label_1d1b28;
            case 0x1D1B2Cu: goto label_1d1b2c;
            case 0x1D1B30u: goto label_1d1b30;
            case 0x1D1B34u: goto label_1d1b34;
            case 0x1D1B38u: goto label_1d1b38;
            case 0x1D1B3Cu: goto label_1d1b3c;
            case 0x1D1B40u: goto label_1d1b40;
            case 0x1D1B44u: goto label_1d1b44;
            case 0x1D1B48u: goto label_1d1b48;
            case 0x1D1B4Cu: goto label_1d1b4c;
            case 0x1D1B50u: goto label_1d1b50;
            case 0x1D1B54u: goto label_1d1b54;
            case 0x1D1B58u: goto label_1d1b58;
            case 0x1D1B5Cu: goto label_1d1b5c;
            case 0x1D1B60u: goto label_1d1b60;
            case 0x1D1B64u: goto label_1d1b64;
            case 0x1D1B68u: goto label_1d1b68;
            case 0x1D1B6Cu: goto label_1d1b6c;
            case 0x1D1B70u: goto label_1d1b70;
            case 0x1D1B74u: goto label_1d1b74;
            case 0x1D1B78u: goto label_1d1b78;
            case 0x1D1B7Cu: goto label_1d1b7c;
            case 0x1D1B80u: goto label_1d1b80;
            case 0x1D1B84u: goto label_1d1b84;
            case 0x1D1B88u: goto label_1d1b88;
            case 0x1D1B8Cu: goto label_1d1b8c;
            case 0x1D1B90u: goto label_1d1b90;
            case 0x1D1B94u: goto label_1d1b94;
            case 0x1D1B98u: goto label_1d1b98;
            case 0x1D1B9Cu: goto label_1d1b9c;
            case 0x1D1BA0u: goto label_1d1ba0;
            case 0x1D1BA4u: goto label_1d1ba4;
            case 0x1D1BA8u: goto label_1d1ba8;
            case 0x1D1BACu: goto label_1d1bac;
            case 0x1D1BB0u: goto label_1d1bb0;
            case 0x1D1BB4u: goto label_1d1bb4;
            case 0x1D1BB8u: goto label_1d1bb8;
            case 0x1D1BBCu: goto label_1d1bbc;
            case 0x1D1BC0u: goto label_1d1bc0;
            case 0x1D1BC4u: goto label_1d1bc4;
            case 0x1D1BC8u: goto label_1d1bc8;
            case 0x1D1BCCu: goto label_1d1bcc;
            case 0x1D1BD0u: goto label_1d1bd0;
            case 0x1D1BD4u: goto label_1d1bd4;
            case 0x1D1BD8u: goto label_1d1bd8;
            case 0x1D1BDCu: goto label_1d1bdc;
            case 0x1D1BE0u: goto label_1d1be0;
            case 0x1D1BE4u: goto label_1d1be4;
            case 0x1D1BE8u: goto label_1d1be8;
            case 0x1D1BECu: goto label_1d1bec;
            case 0x1D1BF0u: goto label_1d1bf0;
            case 0x1D1BF4u: goto label_1d1bf4;
            case 0x1D1BF8u: goto label_1d1bf8;
            case 0x1D1BFCu: goto label_1d1bfc;
            case 0x1D1C00u: goto label_1d1c00;
            case 0x1D1C04u: goto label_1d1c04;
            case 0x1D1C08u: goto label_1d1c08;
            case 0x1D1C0Cu: goto label_1d1c0c;
            case 0x1D1C10u: goto label_1d1c10;
            case 0x1D1C14u: goto label_1d1c14;
            case 0x1D1C18u: goto label_1d1c18;
            case 0x1D1C1Cu: goto label_1d1c1c;
            case 0x1D1C20u: goto label_1d1c20;
            case 0x1D1C24u: goto label_1d1c24;
            case 0x1D1C28u: goto label_1d1c28;
            case 0x1D1C2Cu: goto label_1d1c2c;
            case 0x1D1C30u: goto label_1d1c30;
            case 0x1D1C34u: goto label_1d1c34;
            case 0x1D1C38u: goto label_1d1c38;
            case 0x1D1C3Cu: goto label_1d1c3c;
            case 0x1D1C40u: goto label_1d1c40;
            case 0x1D1C44u: goto label_1d1c44;
            case 0x1D1C48u: goto label_1d1c48;
            case 0x1D1C4Cu: goto label_1d1c4c;
            case 0x1D1C50u: goto label_1d1c50;
            case 0x1D1C54u: goto label_1d1c54;
            case 0x1D1C58u: goto label_1d1c58;
            case 0x1D1C5Cu: goto label_1d1c5c;
            case 0x1D1C60u: goto label_1d1c60;
            case 0x1D1C64u: goto label_1d1c64;
            case 0x1D1C68u: goto label_1d1c68;
            case 0x1D1C6Cu: goto label_1d1c6c;
            case 0x1D1C70u: goto label_1d1c70;
            case 0x1D1C74u: goto label_1d1c74;
            case 0x1D1C78u: goto label_1d1c78;
            case 0x1D1C7Cu: goto label_1d1c7c;
            case 0x1D1C80u: goto label_1d1c80;
            case 0x1D1C84u: goto label_1d1c84;
            case 0x1D1C88u: goto label_1d1c88;
            case 0x1D1C8Cu: goto label_1d1c8c;
            case 0x1D1C90u: goto label_1d1c90;
            case 0x1D1C94u: goto label_1d1c94;
            case 0x1D1C98u: goto label_1d1c98;
            case 0x1D1C9Cu: goto label_1d1c9c;
            case 0x1D1CA0u: goto label_1d1ca0;
            case 0x1D1CA4u: goto label_1d1ca4;
            case 0x1D1CA8u: goto label_1d1ca8;
            case 0x1D1CACu: goto label_1d1cac;
            case 0x1D1CB0u: goto label_1d1cb0;
            case 0x1D1CB4u: goto label_1d1cb4;
            case 0x1D1CB8u: goto label_1d1cb8;
            case 0x1D1CBCu: goto label_1d1cbc;
            case 0x1D1CC0u: goto label_1d1cc0;
            case 0x1D1CC4u: goto label_1d1cc4;
            case 0x1D1CC8u: goto label_1d1cc8;
            case 0x1D1CCCu: goto label_1d1ccc;
            case 0x1D1CD0u: goto label_1d1cd0;
            case 0x1D1CD4u: goto label_1d1cd4;
            case 0x1D1CD8u: goto label_1d1cd8;
            case 0x1D1CDCu: goto label_1d1cdc;
            case 0x1D1CE0u: goto label_1d1ce0;
            case 0x1D1CE4u: goto label_1d1ce4;
            case 0x1D1CE8u: goto label_1d1ce8;
            case 0x1D1CECu: goto label_1d1cec;
            case 0x1D1CF0u: goto label_1d1cf0;
            case 0x1D1CF4u: goto label_1d1cf4;
            case 0x1D1CF8u: goto label_1d1cf8;
            case 0x1D1CFCu: goto label_1d1cfc;
            case 0x1D1D00u: goto label_1d1d00;
            case 0x1D1D04u: goto label_1d1d04;
            case 0x1D1D08u: goto label_1d1d08;
            case 0x1D1D0Cu: goto label_1d1d0c;
            case 0x1D1D10u: goto label_1d1d10;
            case 0x1D1D14u: goto label_1d1d14;
            case 0x1D1D18u: goto label_1d1d18;
            case 0x1D1D1Cu: goto label_1d1d1c;
            case 0x1D1D20u: goto label_1d1d20;
            case 0x1D1D24u: goto label_1d1d24;
            case 0x1D1D28u: goto label_1d1d28;
            case 0x1D1D2Cu: goto label_1d1d2c;
            case 0x1D1D30u: goto label_1d1d30;
            case 0x1D1D34u: goto label_1d1d34;
            case 0x1D1D38u: goto label_1d1d38;
            case 0x1D1D3Cu: goto label_1d1d3c;
            case 0x1D1D40u: goto label_1d1d40;
            case 0x1D1D44u: goto label_1d1d44;
            case 0x1D1D48u: goto label_1d1d48;
            case 0x1D1D4Cu: goto label_1d1d4c;
            case 0x1D1D50u: goto label_1d1d50;
            case 0x1D1D54u: goto label_1d1d54;
            case 0x1D1D58u: goto label_1d1d58;
            case 0x1D1D5Cu: goto label_1d1d5c;
            case 0x1D1D60u: goto label_1d1d60;
            case 0x1D1D64u: goto label_1d1d64;
            case 0x1D1D68u: goto label_1d1d68;
            case 0x1D1D6Cu: goto label_1d1d6c;
            case 0x1D1D70u: goto label_1d1d70;
            case 0x1D1D74u: goto label_1d1d74;
            case 0x1D1D78u: goto label_1d1d78;
            case 0x1D1D7Cu: goto label_1d1d7c;
            case 0x1D1D80u: goto label_1d1d80;
            case 0x1D1D84u: goto label_1d1d84;
            case 0x1D1D88u: goto label_1d1d88;
            case 0x1D1D8Cu: goto label_1d1d8c;
            case 0x1D1D90u: goto label_1d1d90;
            case 0x1D1D94u: goto label_1d1d94;
            case 0x1D1D98u: goto label_1d1d98;
            case 0x1D1D9Cu: goto label_1d1d9c;
            case 0x1D1DA0u: goto label_1d1da0;
            case 0x1D1DA4u: goto label_1d1da4;
            case 0x1D1DA8u: goto label_1d1da8;
            case 0x1D1DACu: goto label_1d1dac;
            case 0x1D1DB0u: goto label_1d1db0;
            case 0x1D1DB4u: goto label_1d1db4;
            case 0x1D1DB8u: goto label_1d1db8;
            case 0x1D1DBCu: goto label_1d1dbc;
            case 0x1D1DC0u: goto label_1d1dc0;
            case 0x1D1DC4u: goto label_1d1dc4;
            case 0x1D1DC8u: goto label_1d1dc8;
            case 0x1D1DCCu: goto label_1d1dcc;
            case 0x1D1DD0u: goto label_1d1dd0;
            case 0x1D1DD4u: goto label_1d1dd4;
            case 0x1D1DD8u: goto label_1d1dd8;
            case 0x1D1DDCu: goto label_1d1ddc;
            case 0x1D1DE0u: goto label_1d1de0;
            case 0x1D1DE4u: goto label_1d1de4;
            case 0x1D1DE8u: goto label_1d1de8;
            case 0x1D1DECu: goto label_1d1dec;
            case 0x1D1DF0u: goto label_1d1df0;
            case 0x1D1DF4u: goto label_1d1df4;
            case 0x1D1DF8u: goto label_1d1df8;
            case 0x1D1DFCu: goto label_1d1dfc;
            case 0x1D1E00u: goto label_1d1e00;
            case 0x1D1E04u: goto label_1d1e04;
            case 0x1D1E08u: goto label_1d1e08;
            case 0x1D1E0Cu: goto label_1d1e0c;
            case 0x1D1E10u: goto label_1d1e10;
            case 0x1D1E14u: goto label_1d1e14;
            case 0x1D1E18u: goto label_1d1e18;
            case 0x1D1E1Cu: goto label_1d1e1c;
            case 0x1D1E20u: goto label_1d1e20;
            case 0x1D1E24u: goto label_1d1e24;
            case 0x1D1E28u: goto label_1d1e28;
            case 0x1D1E2Cu: goto label_1d1e2c;
            case 0x1D1E30u: goto label_1d1e30;
            case 0x1D1E34u: goto label_1d1e34;
            case 0x1D1E38u: goto label_1d1e38;
            case 0x1D1E3Cu: goto label_1d1e3c;
            case 0x1D1E40u: goto label_1d1e40;
            case 0x1D1E44u: goto label_1d1e44;
            case 0x1D1E48u: goto label_1d1e48;
            case 0x1D1E4Cu: goto label_1d1e4c;
            case 0x1D1E50u: goto label_1d1e50;
            case 0x1D1E54u: goto label_1d1e54;
            case 0x1D1E58u: goto label_1d1e58;
            case 0x1D1E5Cu: goto label_1d1e5c;
            case 0x1D1E60u: goto label_1d1e60;
            case 0x1D1E64u: goto label_1d1e64;
            case 0x1D1E68u: goto label_1d1e68;
            case 0x1D1E6Cu: goto label_1d1e6c;
            case 0x1D1E70u: goto label_1d1e70;
            case 0x1D1E74u: goto label_1d1e74;
            case 0x1D1E78u: goto label_1d1e78;
            case 0x1D1E7Cu: goto label_1d1e7c;
            case 0x1D1E80u: goto label_1d1e80;
            case 0x1D1E84u: goto label_1d1e84;
            case 0x1D1E88u: goto label_1d1e88;
            case 0x1D1E8Cu: goto label_1d1e8c;
            case 0x1D1E90u: goto label_1d1e90;
            case 0x1D1E94u: goto label_1d1e94;
            case 0x1D1E98u: goto label_1d1e98;
            case 0x1D1E9Cu: goto label_1d1e9c;
            case 0x1D1EA0u: goto label_1d1ea0;
            case 0x1D1EA4u: goto label_1d1ea4;
            case 0x1D1EA8u: goto label_1d1ea8;
            case 0x1D1EACu: goto label_1d1eac;
            case 0x1D1EB0u: goto label_1d1eb0;
            case 0x1D1EB4u: goto label_1d1eb4;
            case 0x1D1EB8u: goto label_1d1eb8;
            case 0x1D1EBCu: goto label_1d1ebc;
            case 0x1D1EC0u: goto label_1d1ec0;
            case 0x1D1EC4u: goto label_1d1ec4;
            case 0x1D1EC8u: goto label_1d1ec8;
            case 0x1D1ECCu: goto label_1d1ecc;
            case 0x1D1ED0u: goto label_1d1ed0;
            case 0x1D1ED4u: goto label_1d1ed4;
            case 0x1D1ED8u: goto label_1d1ed8;
            case 0x1D1EDCu: goto label_1d1edc;
            case 0x1D1EE0u: goto label_1d1ee0;
            case 0x1D1EE4u: goto label_1d1ee4;
            case 0x1D1EE8u: goto label_1d1ee8;
            case 0x1D1EECu: goto label_1d1eec;
            case 0x1D1EF0u: goto label_1d1ef0;
            case 0x1D1EF4u: goto label_1d1ef4;
            case 0x1D1EF8u: goto label_1d1ef8;
            case 0x1D1EFCu: goto label_1d1efc;
            case 0x1D1F00u: goto label_1d1f00;
            case 0x1D1F04u: goto label_1d1f04;
            case 0x1D1F08u: goto label_1d1f08;
            case 0x1D1F0Cu: goto label_1d1f0c;
            case 0x1D1F10u: goto label_1d1f10;
            case 0x1D1F14u: goto label_1d1f14;
            case 0x1D1F18u: goto label_1d1f18;
            case 0x1D1F1Cu: goto label_1d1f1c;
            case 0x1D1F20u: goto label_1d1f20;
            case 0x1D1F24u: goto label_1d1f24;
            case 0x1D1F28u: goto label_1d1f28;
            case 0x1D1F2Cu: goto label_1d1f2c;
            case 0x1D1F30u: goto label_1d1f30;
            case 0x1D1F34u: goto label_1d1f34;
            case 0x1D1F38u: goto label_1d1f38;
            case 0x1D1F3Cu: goto label_1d1f3c;
            case 0x1D1F40u: goto label_1d1f40;
            case 0x1D1F44u: goto label_1d1f44;
            case 0x1D1F48u: goto label_1d1f48;
            case 0x1D1F4Cu: goto label_1d1f4c;
            case 0x1D1F50u: goto label_1d1f50;
            case 0x1D1F54u: goto label_1d1f54;
            case 0x1D1F58u: goto label_1d1f58;
            case 0x1D1F5Cu: goto label_1d1f5c;
            case 0x1D1F60u: goto label_1d1f60;
            case 0x1D1F64u: goto label_1d1f64;
            case 0x1D1F68u: goto label_1d1f68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D04D0u;
label_1d04d0:
    // 0x1d04d0: 0x291082a
    ctx->pc = 0x1d04d0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 17)));
label_1d04d4:
    // 0x1d04d4: 0x1020001a
label_1d04d8:
    if (ctx->pc == 0x1D04D8u) {
        ctx->pc = 0x1D04D8u;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D04DCu;
        goto label_1d04dc;
    }
    ctx->pc = 0x1D04D4u;
    {
        const bool branch_taken_0x1d04d4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D04D8u;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d04d4) {
            ctx->pc = 0x1D0540u;
            goto label_1d0540;
        }
    }
    ctx->pc = 0x1D04DCu;
label_1d04dc:
    // 0x1d04dc: 0x0
    ctx->pc = 0x1d04dcu;
    // NOP
label_1d04e0:
    // 0x1d04e0: 0x131080
    ctx->pc = 0x1d04e0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
label_1d04e4:
    // 0x1d04e4: 0x531021
    ctx->pc = 0x1d04e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1d04e8:
    // 0x1d04e8: 0x21100
    ctx->pc = 0x1d04e8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1d04ec:
    // 0x1d04ec: 0x242a821
    ctx->pc = 0x1d04ecu;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1d04f0:
    // 0x1d04f0: 0xc6a00024
    ctx->pc = 0x1d04f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d04f4:
    // 0x1d04f4: 0x27a40080
    ctx->pc = 0x1d04f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
label_1d04f8:
    // 0x1d04f8: 0x27a50090
    ctx->pc = 0x1d04f8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
label_1d04fc:
    // 0x1d04fc: 0xe7a00080
    ctx->pc = 0x1d04fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1d0500:
    // 0x1d0500: 0xc6a00028
    ctx->pc = 0x1d0500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0504:
    // 0x1d0504: 0xe7a00084
    ctx->pc = 0x1d0504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1d0508:
    // 0x1d0508: 0xc6a0002c
    ctx->pc = 0x1d0508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d050c:
    // 0x1d050c: 0xc06bf00
label_1d0510:
    if (ctx->pc == 0x1D0510u) {
        ctx->pc = 0x1D0510u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1D0514u;
        goto label_1d0514;
    }
    ctx->pc = 0x1D050Cu;
    SET_GPR_U32(ctx, 31, 0x1D0514u);
    ctx->pc = 0x1D0510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0514u; }
        else if (ctx->pc != 0x1D0514u) { ctx->pc = 0x1D0514u; }
    }
    if (ctx->pc != 0x1D0514u) { return; }
    ctx->pc = 0x1D0514u;
label_1d0514:
    // 0x1d0514: 0xc7a00090
    ctx->pc = 0x1d0514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0518:
    // 0x1d0518: 0xe6a00000
    ctx->pc = 0x1d0518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_1d051c:
    // 0x1d051c: 0xc7a00094
    ctx->pc = 0x1d051cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0520:
    // 0x1d0520: 0xe6a00004
    ctx->pc = 0x1d0520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
label_1d0524:
    // 0x1d0524: 0xc7a00098
    ctx->pc = 0x1d0524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0528:
    // 0x1d0528: 0xe6a00008
    ctx->pc = 0x1d0528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_1d052c:
    // 0x1d052c: 0x86030018
    ctx->pc = 0x1d052cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_1d0530:
    // 0x1d0530: 0x2639821
    ctx->pc = 0x1d0530u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_1d0534:
    // 0x1d0534: 0x271182a
    ctx->pc = 0x1d0534u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 17)));
label_1d0538:
    // 0x1d0538: 0x5460ffea
label_1d053c:
    if (ctx->pc == 0x1D053Cu) {
        ctx->pc = 0x1D053Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
        ctx->pc = 0x1D0540u;
        goto label_1d0540;
    }
    ctx->pc = 0x1D0538u;
    {
        const bool branch_taken_0x1d0538 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d0538) {
            ctx->pc = 0x1D053Cu;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
            ctx->pc = 0x1D04E4u;
            goto label_1d04e4;
        }
    }
    ctx->pc = 0x1D0540u;
label_1d0540:
    // 0x1d0540: 0x26940001
    ctx->pc = 0x1d0540u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_1d0544:
    // 0x1d0544: 0x1a80ffe3
label_1d0548:
    if (ctx->pc == 0x1D0548u) {
        ctx->pc = 0x1D0548u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 17)));
        ctx->pc = 0x1D054Cu;
        goto label_1d054c;
    }
    ctx->pc = 0x1D0544u;
    {
        const bool branch_taken_0x1d0544 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x1D0548u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 17)));
        if (branch_taken_0x1d0544) {
            ctx->pc = 0x1D04D4u;
            goto label_1d04d4;
        }
    }
    ctx->pc = 0x1D054Cu;
label_1d054c:
    // 0x1d054c: 0x10000679
label_1d0550:
    if (ctx->pc == 0x1D0550u) {
        ctx->pc = 0x1D0550u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
        ctx->pc = 0x1D0554u;
        goto label_1d0554;
    }
    ctx->pc = 0x1D054Cu;
    {
        const bool branch_taken_0x1d054c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D0550u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x1d054c) {
            ctx->pc = 0x1D1F34u;
            goto label_1d1f34;
        }
    }
    ctx->pc = 0x1D0554u;
label_1d0554:
    // 0x1d0554: 0x70009e28
    ctx->pc = 0x1d0554u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1d0558:
    // 0x1d0558: 0x271082a
    ctx->pc = 0x1d0558u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 17)));
label_1d055c:
    // 0x1d055c: 0x1020001a
label_1d0560:
    if (ctx->pc == 0x1D0560u) {
        ctx->pc = 0x1D0560u;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D0564u;
        goto label_1d0564;
    }
    ctx->pc = 0x1D055Cu;
    {
        const bool branch_taken_0x1d055c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D0560u;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d055c) {
            ctx->pc = 0x1D05C8u;
            goto label_1d05c8;
        }
    }
    ctx->pc = 0x1D0564u;
label_1d0564:
    // 0x1d0564: 0x0
    ctx->pc = 0x1d0564u;
    // NOP
label_1d0568:
    // 0x1d0568: 0x141080
    ctx->pc = 0x1d0568u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
label_1d056c:
    // 0x1d056c: 0x541021
    ctx->pc = 0x1d056cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1d0570:
    // 0x1d0570: 0x21100
    ctx->pc = 0x1d0570u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1d0574:
    // 0x1d0574: 0x242a821
    ctx->pc = 0x1d0574u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1d0578:
    // 0x1d0578: 0xc6a00024
    ctx->pc = 0x1d0578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d057c:
    // 0x1d057c: 0x27a40080
    ctx->pc = 0x1d057cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
label_1d0580:
    // 0x1d0580: 0x27a50090
    ctx->pc = 0x1d0580u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
label_1d0584:
    // 0x1d0584: 0xe7a00080
    ctx->pc = 0x1d0584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1d0588:
    // 0x1d0588: 0xc6a00028
    ctx->pc = 0x1d0588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d058c:
    // 0x1d058c: 0xe7a00084
    ctx->pc = 0x1d058cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1d0590:
    // 0x1d0590: 0xc6a0002c
    ctx->pc = 0x1d0590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0594:
    // 0x1d0594: 0xc06bf00
label_1d0598:
    if (ctx->pc == 0x1D0598u) {
        ctx->pc = 0x1D0598u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1D059Cu;
        goto label_1d059c;
    }
    ctx->pc = 0x1D0594u;
    SET_GPR_U32(ctx, 31, 0x1D059Cu);
    ctx->pc = 0x1D0598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D059Cu; }
        else if (ctx->pc != 0x1D059Cu) { ctx->pc = 0x1D059Cu; }
    }
    if (ctx->pc != 0x1D059Cu) { return; }
    ctx->pc = 0x1D059Cu;
label_1d059c:
    // 0x1d059c: 0xc7a00090
    ctx->pc = 0x1d059cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d05a0:
    // 0x1d05a0: 0xe6a00000
    ctx->pc = 0x1d05a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_1d05a4:
    // 0x1d05a4: 0xc7a00094
    ctx->pc = 0x1d05a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d05a8:
    // 0x1d05a8: 0xe6a00004
    ctx->pc = 0x1d05a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
label_1d05ac:
    // 0x1d05ac: 0xc7a00098
    ctx->pc = 0x1d05acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d05b0:
    // 0x1d05b0: 0xe6a00008
    ctx->pc = 0x1d05b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_1d05b4:
    // 0x1d05b4: 0x86030018
    ctx->pc = 0x1d05b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_1d05b8:
    // 0x1d05b8: 0x283a021
    ctx->pc = 0x1d05b8u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_1d05bc:
    // 0x1d05bc: 0x291182a
    ctx->pc = 0x1d05bcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 17)));
label_1d05c0:
    // 0x1d05c0: 0x5460ffea
label_1d05c4:
    if (ctx->pc == 0x1D05C4u) {
        ctx->pc = 0x1D05C4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x1D05C8u;
        goto label_1d05c8;
    }
    ctx->pc = 0x1D05C0u;
    {
        const bool branch_taken_0x1d05c0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d05c0) {
            ctx->pc = 0x1D05C4u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
            ctx->pc = 0x1D056Cu;
            goto label_1d056c;
        }
    }
    ctx->pc = 0x1D05C8u;
label_1d05c8:
    // 0x1d05c8: 0x26730001
    ctx->pc = 0x1d05c8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_1d05cc:
    // 0x1d05cc: 0x1a60ffe3
label_1d05d0:
    if (ctx->pc == 0x1D05D0u) {
        ctx->pc = 0x1D05D0u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 17)));
        ctx->pc = 0x1D05D4u;
        goto label_1d05d4;
    }
    ctx->pc = 0x1D05CCu;
    {
        const bool branch_taken_0x1d05cc = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1D05D0u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 17)));
        if (branch_taken_0x1d05cc) {
            ctx->pc = 0x1D055Cu;
            goto label_1d055c;
        }
    }
    ctx->pc = 0x1D05D4u;
label_1d05d4:
    // 0x1d05d4: 0x24140001
    ctx->pc = 0x1d05d4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
label_1d05d8:
    // 0x1d05d8: 0x291082a
    ctx->pc = 0x1d05d8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 17)));
label_1d05dc:
    // 0x1d05dc: 0x1020002a
label_1d05e0:
    if (ctx->pc == 0x1D05E0u) {
        ctx->pc = 0x1D05E0u;
        SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D05E4u;
        goto label_1d05e4;
    }
    ctx->pc = 0x1D05DCu;
    {
        const bool branch_taken_0x1d05dc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D05E0u;
        SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d05dc) {
            ctx->pc = 0x1D0688u;
            goto label_1d0688;
        }
    }
    ctx->pc = 0x1D05E4u;
label_1d05e4:
    // 0x1d05e4: 0x0
    ctx->pc = 0x1d05e4u;
    // NOP
label_1d05e8:
    // 0x1d05e8: 0x151080
    ctx->pc = 0x1d05e8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
label_1d05ec:
    // 0x1d05ec: 0x551021
    ctx->pc = 0x1d05ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1d05f0:
    // 0x1d05f0: 0x21100
    ctx->pc = 0x1d05f0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1d05f4:
    // 0x1d05f4: 0x2429821
    ctx->pc = 0x1d05f4u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1d05f8:
    // 0x1d05f8: 0xc6600024
    ctx->pc = 0x1d05f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d05fc:
    // 0x1d05fc: 0x27a40080
    ctx->pc = 0x1d05fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
label_1d0600:
    // 0x1d0600: 0x27a50090
    ctx->pc = 0x1d0600u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
label_1d0604:
    // 0x1d0604: 0xe7a00080
    ctx->pc = 0x1d0604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1d0608:
    // 0x1d0608: 0xc6600028
    ctx->pc = 0x1d0608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d060c:
    // 0x1d060c: 0xe7a00084
    ctx->pc = 0x1d060cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1d0610:
    // 0x1d0610: 0xc660002c
    ctx->pc = 0x1d0610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0614:
    // 0x1d0614: 0xc06bf00
label_1d0618:
    if (ctx->pc == 0x1D0618u) {
        ctx->pc = 0x1D0618u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1D061Cu;
        goto label_1d061c;
    }
    ctx->pc = 0x1D0614u;
    SET_GPR_U32(ctx, 31, 0x1D061Cu);
    ctx->pc = 0x1D0618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D061Cu; }
        else if (ctx->pc != 0x1D061Cu) { ctx->pc = 0x1D061Cu; }
    }
    if (ctx->pc != 0x1D061Cu) { return; }
    ctx->pc = 0x1D061Cu;
label_1d061c:
    // 0x1d061c: 0x3c033dcc
    ctx->pc = 0x1d061cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)15820 << 16));
label_1d0620:
    // 0x1d0620: 0x3463cccd
    ctx->pc = 0x1d0620u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52429));
label_1d0624:
    // 0x1d0624: 0x44831800
    ctx->pc = 0x1d0624u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 3);
label_1d0628:
    // 0x1d0628: 0xc7a10090
    ctx->pc = 0x1d0628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d062c:
    // 0x1d062c: 0x3c033f66
    ctx->pc = 0x1d062cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16230 << 16));
label_1d0630:
    // 0x1d0630: 0x34636666
    ctx->pc = 0x1d0630u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 26214));
label_1d0634:
    // 0x1d0634: 0xc6600000
    ctx->pc = 0x1d0634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0638:
    // 0x1d0638: 0x44831000
    ctx->pc = 0x1d0638u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
label_1d063c:
    // 0x1d063c: 0x0
    ctx->pc = 0x1d063cu;
    // NOP
label_1d0640:
    // 0x1d0640: 0x4601181a
    ctx->pc = 0x1d0640u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d0644:
    // 0x1d0644: 0x4600101c
    ctx->pc = 0x1d0644u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d0648:
    // 0x1d0648: 0xe6600000
    ctx->pc = 0x1d0648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_1d064c:
    // 0x1d064c: 0xc7a10094
    ctx->pc = 0x1d064cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0650:
    // 0x1d0650: 0xc6600004
    ctx->pc = 0x1d0650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0654:
    // 0x1d0654: 0x4601181a
    ctx->pc = 0x1d0654u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d0658:
    // 0x1d0658: 0x4600101c
    ctx->pc = 0x1d0658u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d065c:
    // 0x1d065c: 0xe6600004
    ctx->pc = 0x1d065cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_1d0660:
    // 0x1d0660: 0xc7a10098
    ctx->pc = 0x1d0660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0664:
    // 0x1d0664: 0xc6600008
    ctx->pc = 0x1d0664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0668:
    // 0x1d0668: 0x4601181a
    ctx->pc = 0x1d0668u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d066c:
    // 0x1d066c: 0x4600101c
    ctx->pc = 0x1d066cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d0670:
    // 0x1d0670: 0xe6600008
    ctx->pc = 0x1d0670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_1d0674:
    // 0x1d0674: 0x86030018
    ctx->pc = 0x1d0674u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_1d0678:
    // 0x1d0678: 0x2a3a821
    ctx->pc = 0x1d0678u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_1d067c:
    // 0x1d067c: 0x2b1182a
    ctx->pc = 0x1d067cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 17)));
label_1d0680:
    // 0x1d0680: 0x5460ffda
label_1d0684:
    if (ctx->pc == 0x1D0684u) {
        ctx->pc = 0x1D0684u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
        ctx->pc = 0x1D0688u;
        goto label_1d0688;
    }
    ctx->pc = 0x1D0680u;
    {
        const bool branch_taken_0x1d0680 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d0680) {
            ctx->pc = 0x1D0684u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
            ctx->pc = 0x1D05ECu;
            goto label_1d05ec;
        }
    }
    ctx->pc = 0x1D0688u;
label_1d0688:
    // 0x1d0688: 0x26940001
    ctx->pc = 0x1d0688u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_1d068c:
    // 0x1d068c: 0x2a810003
    ctx->pc = 0x1d068cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), 3));
label_1d0690:
    // 0x1d0690: 0x1420ffd2
label_1d0694:
    if (ctx->pc == 0x1D0694u) {
        ctx->pc = 0x1D0694u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 17)));
        ctx->pc = 0x1D0698u;
        goto label_1d0698;
    }
    ctx->pc = 0x1D0690u;
    {
        const bool branch_taken_0x1d0690 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D0694u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 17)));
        if (branch_taken_0x1d0690) {
            ctx->pc = 0x1D05DCu;
            goto label_1d05dc;
        }
    }
    ctx->pc = 0x1D0698u;
label_1d0698:
    // 0x1d0698: 0x10000625
label_1d069c:
    if (ctx->pc == 0x1D069Cu) {
        ctx->pc = 0x1D06A0u;
        goto label_1d06a0;
    }
    ctx->pc = 0x1D0698u;
    {
        const bool branch_taken_0x1d0698 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d0698) {
            ctx->pc = 0x1D1F30u;
            goto label_1d1f30;
        }
    }
    ctx->pc = 0x1D06A0u;
label_1d06a0:
    // 0x1d06a0: 0x70009e28
    ctx->pc = 0x1d06a0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1d06a4:
    // 0x1d06a4: 0x271082a
    ctx->pc = 0x1d06a4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 17)));
label_1d06a8:
    // 0x1d06a8: 0x10200019
label_1d06ac:
    if (ctx->pc == 0x1D06ACu) {
        ctx->pc = 0x1D06ACu;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D06B0u;
        goto label_1d06b0;
    }
    ctx->pc = 0x1D06A8u;
    {
        const bool branch_taken_0x1d06a8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D06ACu;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d06a8) {
            ctx->pc = 0x1D0710u;
            goto label_1d0710;
        }
    }
    ctx->pc = 0x1D06B0u;
label_1d06b0:
    // 0x1d06b0: 0x141080
    ctx->pc = 0x1d06b0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
label_1d06b4:
    // 0x1d06b4: 0x541021
    ctx->pc = 0x1d06b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1d06b8:
    // 0x1d06b8: 0x21100
    ctx->pc = 0x1d06b8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1d06bc:
    // 0x1d06bc: 0x242a821
    ctx->pc = 0x1d06bcu;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1d06c0:
    // 0x1d06c0: 0xc6a00030
    ctx->pc = 0x1d06c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d06c4:
    // 0x1d06c4: 0x27a40080
    ctx->pc = 0x1d06c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
label_1d06c8:
    // 0x1d06c8: 0x27a50090
    ctx->pc = 0x1d06c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
label_1d06cc:
    // 0x1d06cc: 0xe7a00080
    ctx->pc = 0x1d06ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1d06d0:
    // 0x1d06d0: 0xc6a00034
    ctx->pc = 0x1d06d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d06d4:
    // 0x1d06d4: 0xe7a00084
    ctx->pc = 0x1d06d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1d06d8:
    // 0x1d06d8: 0xc6a00038
    ctx->pc = 0x1d06d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d06dc:
    // 0x1d06dc: 0xc06bf00
label_1d06e0:
    if (ctx->pc == 0x1D06E0u) {
        ctx->pc = 0x1D06E0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1D06E4u;
        goto label_1d06e4;
    }
    ctx->pc = 0x1D06DCu;
    SET_GPR_U32(ctx, 31, 0x1D06E4u);
    ctx->pc = 0x1D06E0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D06E4u; }
        else if (ctx->pc != 0x1D06E4u) { ctx->pc = 0x1D06E4u; }
    }
    if (ctx->pc != 0x1D06E4u) { return; }
    ctx->pc = 0x1D06E4u;
label_1d06e4:
    // 0x1d06e4: 0xc7a00090
    ctx->pc = 0x1d06e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d06e8:
    // 0x1d06e8: 0xe6a00000
    ctx->pc = 0x1d06e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_1d06ec:
    // 0x1d06ec: 0xc7a00094
    ctx->pc = 0x1d06ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d06f0:
    // 0x1d06f0: 0xe6a00004
    ctx->pc = 0x1d06f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
label_1d06f4:
    // 0x1d06f4: 0xc7a00098
    ctx->pc = 0x1d06f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d06f8:
    // 0x1d06f8: 0xe6a00008
    ctx->pc = 0x1d06f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_1d06fc:
    // 0x1d06fc: 0x86030018
    ctx->pc = 0x1d06fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_1d0700:
    // 0x1d0700: 0x283a021
    ctx->pc = 0x1d0700u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_1d0704:
    // 0x1d0704: 0x291182a
    ctx->pc = 0x1d0704u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 17)));
label_1d0708:
    // 0x1d0708: 0x5460ffea
label_1d070c:
    if (ctx->pc == 0x1D070Cu) {
        ctx->pc = 0x1D070Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x1D0710u;
        goto label_1d0710;
    }
    ctx->pc = 0x1D0708u;
    {
        const bool branch_taken_0x1d0708 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d0708) {
            ctx->pc = 0x1D070Cu;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
            ctx->pc = 0x1D06B4u;
            goto label_1d06b4;
        }
    }
    ctx->pc = 0x1D0710u;
label_1d0710:
    // 0x1d0710: 0x26730001
    ctx->pc = 0x1d0710u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_1d0714:
    // 0x1d0714: 0x1a60ffe4
label_1d0718:
    if (ctx->pc == 0x1D0718u) {
        ctx->pc = 0x1D0718u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 17)));
        ctx->pc = 0x1D071Cu;
        goto label_1d071c;
    }
    ctx->pc = 0x1D0714u;
    {
        const bool branch_taken_0x1d0714 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1D0718u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 17)));
        if (branch_taken_0x1d0714) {
            ctx->pc = 0x1D06A8u;
            goto label_1d06a8;
        }
    }
    ctx->pc = 0x1D071Cu;
label_1d071c:
    // 0x1d071c: 0x24140001
    ctx->pc = 0x1d071cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
label_1d0720:
    // 0x1d0720: 0x291082a
    ctx->pc = 0x1d0720u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 17)));
label_1d0724:
    // 0x1d0724: 0x1020002a
label_1d0728:
    if (ctx->pc == 0x1D0728u) {
        ctx->pc = 0x1D0728u;
        SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D072Cu;
        goto label_1d072c;
    }
    ctx->pc = 0x1D0724u;
    {
        const bool branch_taken_0x1d0724 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D0728u;
        SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d0724) {
            ctx->pc = 0x1D07D0u;
            goto label_1d07d0;
        }
    }
    ctx->pc = 0x1D072Cu;
label_1d072c:
    // 0x1d072c: 0x0
    ctx->pc = 0x1d072cu;
    // NOP
label_1d0730:
    // 0x1d0730: 0x151080
    ctx->pc = 0x1d0730u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
label_1d0734:
    // 0x1d0734: 0x551021
    ctx->pc = 0x1d0734u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1d0738:
    // 0x1d0738: 0x21100
    ctx->pc = 0x1d0738u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1d073c:
    // 0x1d073c: 0x2429821
    ctx->pc = 0x1d073cu;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1d0740:
    // 0x1d0740: 0xc6600030
    ctx->pc = 0x1d0740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0744:
    // 0x1d0744: 0x27a40080
    ctx->pc = 0x1d0744u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
label_1d0748:
    // 0x1d0748: 0x27a50090
    ctx->pc = 0x1d0748u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
label_1d074c:
    // 0x1d074c: 0xe7a00080
    ctx->pc = 0x1d074cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1d0750:
    // 0x1d0750: 0xc6600034
    ctx->pc = 0x1d0750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0754:
    // 0x1d0754: 0xe7a00084
    ctx->pc = 0x1d0754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1d0758:
    // 0x1d0758: 0xc6600038
    ctx->pc = 0x1d0758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d075c:
    // 0x1d075c: 0xc06bf00
label_1d0760:
    if (ctx->pc == 0x1D0760u) {
        ctx->pc = 0x1D0760u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1D0764u;
        goto label_1d0764;
    }
    ctx->pc = 0x1D075Cu;
    SET_GPR_U32(ctx, 31, 0x1D0764u);
    ctx->pc = 0x1D0760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0764u; }
        else if (ctx->pc != 0x1D0764u) { ctx->pc = 0x1D0764u; }
    }
    if (ctx->pc != 0x1D0764u) { return; }
    ctx->pc = 0x1D0764u;
label_1d0764:
    // 0x1d0764: 0x3c033dcc
    ctx->pc = 0x1d0764u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15820 << 16));
label_1d0768:
    // 0x1d0768: 0x3463cccd
    ctx->pc = 0x1d0768u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52429));
label_1d076c:
    // 0x1d076c: 0x44831800
    ctx->pc = 0x1d076cu;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 3);
label_1d0770:
    // 0x1d0770: 0xc7a10090
    ctx->pc = 0x1d0770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0774:
    // 0x1d0774: 0x3c033f66
    ctx->pc = 0x1d0774u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16230 << 16));
label_1d0778:
    // 0x1d0778: 0x34636666
    ctx->pc = 0x1d0778u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 26214));
label_1d077c:
    // 0x1d077c: 0xc6600000
    ctx->pc = 0x1d077cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0780:
    // 0x1d0780: 0x44831000
    ctx->pc = 0x1d0780u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
label_1d0784:
    // 0x1d0784: 0x0
    ctx->pc = 0x1d0784u;
    // NOP
label_1d0788:
    // 0x1d0788: 0x4601181a
    ctx->pc = 0x1d0788u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d078c:
    // 0x1d078c: 0x4600101c
    ctx->pc = 0x1d078cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d0790:
    // 0x1d0790: 0xe6600000
    ctx->pc = 0x1d0790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_1d0794:
    // 0x1d0794: 0xc7a10094
    ctx->pc = 0x1d0794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0798:
    // 0x1d0798: 0xc6600004
    ctx->pc = 0x1d0798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d079c:
    // 0x1d079c: 0x4601181a
    ctx->pc = 0x1d079cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d07a0:
    // 0x1d07a0: 0x4600101c
    ctx->pc = 0x1d07a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d07a4:
    // 0x1d07a4: 0xe6600004
    ctx->pc = 0x1d07a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_1d07a8:
    // 0x1d07a8: 0xc7a10098
    ctx->pc = 0x1d07a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d07ac:
    // 0x1d07ac: 0xc6600008
    ctx->pc = 0x1d07acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d07b0:
    // 0x1d07b0: 0x4601181a
    ctx->pc = 0x1d07b0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d07b4:
    // 0x1d07b4: 0x4600101c
    ctx->pc = 0x1d07b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d07b8:
    // 0x1d07b8: 0xe6600008
    ctx->pc = 0x1d07b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_1d07bc:
    // 0x1d07bc: 0x86030018
    ctx->pc = 0x1d07bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_1d07c0:
    // 0x1d07c0: 0x2a3a821
    ctx->pc = 0x1d07c0u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_1d07c4:
    // 0x1d07c4: 0x2b1182a
    ctx->pc = 0x1d07c4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 17)));
label_1d07c8:
    // 0x1d07c8: 0x5460ffda
label_1d07cc:
    if (ctx->pc == 0x1D07CCu) {
        ctx->pc = 0x1D07CCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
        ctx->pc = 0x1D07D0u;
        goto label_1d07d0;
    }
    ctx->pc = 0x1D07C8u;
    {
        const bool branch_taken_0x1d07c8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d07c8) {
            ctx->pc = 0x1D07CCu;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
            ctx->pc = 0x1D0734u;
            goto label_1d0734;
        }
    }
    ctx->pc = 0x1D07D0u;
label_1d07d0:
    // 0x1d07d0: 0x26940001
    ctx->pc = 0x1d07d0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_1d07d4:
    // 0x1d07d4: 0x2a810003
    ctx->pc = 0x1d07d4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), 3));
label_1d07d8:
    // 0x1d07d8: 0x1420ffd2
label_1d07dc:
    if (ctx->pc == 0x1D07DCu) {
        ctx->pc = 0x1D07DCu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 17)));
        ctx->pc = 0x1D07E0u;
        goto label_1d07e0;
    }
    ctx->pc = 0x1D07D8u;
    {
        const bool branch_taken_0x1d07d8 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D07DCu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 17)));
        if (branch_taken_0x1d07d8) {
            ctx->pc = 0x1D0724u;
            goto label_1d0724;
        }
    }
    ctx->pc = 0x1D07E0u;
label_1d07e0:
    // 0x1d07e0: 0x100005d3
label_1d07e4:
    if (ctx->pc == 0x1D07E4u) {
        ctx->pc = 0x1D07E8u;
        goto label_1d07e8;
    }
    ctx->pc = 0x1D07E0u;
    {
        const bool branch_taken_0x1d07e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d07e0) {
            ctx->pc = 0x1D1F30u;
            goto label_1d1f30;
        }
    }
    ctx->pc = 0x1D07E8u;
label_1d07e8:
    // 0x1d07e8: 0x70009e28
    ctx->pc = 0x1d07e8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1d07ec:
    // 0x1d07ec: 0x271082a
    ctx->pc = 0x1d07ecu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 17)));
label_1d07f0:
    // 0x1d07f0: 0x10200019
label_1d07f4:
    if (ctx->pc == 0x1D07F4u) {
        ctx->pc = 0x1D07F4u;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D07F8u;
        goto label_1d07f8;
    }
    ctx->pc = 0x1D07F0u;
    {
        const bool branch_taken_0x1d07f0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D07F4u;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d07f0) {
            ctx->pc = 0x1D0858u;
            goto label_1d0858;
        }
    }
    ctx->pc = 0x1D07F8u;
label_1d07f8:
    // 0x1d07f8: 0x141080
    ctx->pc = 0x1d07f8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
label_1d07fc:
    // 0x1d07fc: 0x541021
    ctx->pc = 0x1d07fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1d0800:
    // 0x1d0800: 0x21100
    ctx->pc = 0x1d0800u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1d0804:
    // 0x1d0804: 0x242a821
    ctx->pc = 0x1d0804u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1d0808:
    // 0x1d0808: 0xc6a00024
    ctx->pc = 0x1d0808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d080c:
    // 0x1d080c: 0x27a40080
    ctx->pc = 0x1d080cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
label_1d0810:
    // 0x1d0810: 0x27a50090
    ctx->pc = 0x1d0810u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
label_1d0814:
    // 0x1d0814: 0xe7a00080
    ctx->pc = 0x1d0814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1d0818:
    // 0x1d0818: 0xc6a00028
    ctx->pc = 0x1d0818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d081c:
    // 0x1d081c: 0xe7a00084
    ctx->pc = 0x1d081cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1d0820:
    // 0x1d0820: 0xc6a0002c
    ctx->pc = 0x1d0820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0824:
    // 0x1d0824: 0xc06bf00
label_1d0828:
    if (ctx->pc == 0x1D0828u) {
        ctx->pc = 0x1D0828u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1D082Cu;
        goto label_1d082c;
    }
    ctx->pc = 0x1D0824u;
    SET_GPR_U32(ctx, 31, 0x1D082Cu);
    ctx->pc = 0x1D0828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D082Cu; }
        else if (ctx->pc != 0x1D082Cu) { ctx->pc = 0x1D082Cu; }
    }
    if (ctx->pc != 0x1D082Cu) { return; }
    ctx->pc = 0x1D082Cu;
label_1d082c:
    // 0x1d082c: 0xc7a00090
    ctx->pc = 0x1d082cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0830:
    // 0x1d0830: 0xe6a00000
    ctx->pc = 0x1d0830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_1d0834:
    // 0x1d0834: 0xc7a00094
    ctx->pc = 0x1d0834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0838:
    // 0x1d0838: 0xe6a00004
    ctx->pc = 0x1d0838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
label_1d083c:
    // 0x1d083c: 0xc7a00098
    ctx->pc = 0x1d083cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0840:
    // 0x1d0840: 0xe6a00008
    ctx->pc = 0x1d0840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_1d0844:
    // 0x1d0844: 0x86030018
    ctx->pc = 0x1d0844u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_1d0848:
    // 0x1d0848: 0x283a021
    ctx->pc = 0x1d0848u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_1d084c:
    // 0x1d084c: 0x291182a
    ctx->pc = 0x1d084cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 17)));
label_1d0850:
    // 0x1d0850: 0x5460ffea
label_1d0854:
    if (ctx->pc == 0x1D0854u) {
        ctx->pc = 0x1D0854u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x1D0858u;
        goto label_1d0858;
    }
    ctx->pc = 0x1D0850u;
    {
        const bool branch_taken_0x1d0850 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d0850) {
            ctx->pc = 0x1D0854u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
            ctx->pc = 0x1D07FCu;
            goto label_1d07fc;
        }
    }
    ctx->pc = 0x1D0858u;
label_1d0858:
    // 0x1d0858: 0x26730001
    ctx->pc = 0x1d0858u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_1d085c:
    // 0x1d085c: 0x2a610002
    ctx->pc = 0x1d085cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), 2));
label_1d0860:
    // 0x1d0860: 0x1420ffe3
label_1d0864:
    if (ctx->pc == 0x1D0864u) {
        ctx->pc = 0x1D0864u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 17)));
        ctx->pc = 0x1D0868u;
        goto label_1d0868;
    }
    ctx->pc = 0x1D0860u;
    {
        const bool branch_taken_0x1d0860 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D0864u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 17)));
        if (branch_taken_0x1d0860) {
            ctx->pc = 0x1D07F0u;
            goto label_1d07f0;
        }
    }
    ctx->pc = 0x1D0868u;
label_1d0868:
    // 0x1d0868: 0x86030018
    ctx->pc = 0x1d0868u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_1d086c:
    // 0x1d086c: 0x28630002
    ctx->pc = 0x1d086cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 2));
label_1d0870:
    // 0x1d0870: 0x146005af
label_1d0874:
    if (ctx->pc == 0x1D0874u) {
        ctx->pc = 0x1D0874u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1D0878u;
        goto label_1d0878;
    }
    ctx->pc = 0x1D0870u;
    {
        const bool branch_taken_0x1d0870 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D0874u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1d0870) {
            ctx->pc = 0x1D1F30u;
            goto label_1d1f30;
        }
    }
    ctx->pc = 0x1D0878u;
label_1d0878:
    // 0x1d0878: 0x291082a
    ctx->pc = 0x1d0878u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 17)));
label_1d087c:
    // 0x1d087c: 0x10200026
label_1d0880:
    if (ctx->pc == 0x1D0880u) {
        ctx->pc = 0x1D0880u;
        SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D0884u;
        goto label_1d0884;
    }
    ctx->pc = 0x1D087Cu;
    {
        const bool branch_taken_0x1d087c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D0880u;
        SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d087c) {
            ctx->pc = 0x1D0918u;
            goto label_1d0918;
        }
    }
    ctx->pc = 0x1D0884u;
label_1d0884:
    // 0x1d0884: 0x0
    ctx->pc = 0x1d0884u;
    // NOP
label_1d0888:
    // 0x1d0888: 0x151080
    ctx->pc = 0x1d0888u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
label_1d088c:
    // 0x1d088c: 0x551021
    ctx->pc = 0x1d088cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1d0890:
    // 0x1d0890: 0x21100
    ctx->pc = 0x1d0890u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1d0894:
    // 0x1d0894: 0x2429821
    ctx->pc = 0x1d0894u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1d0898:
    // 0x1d0898: 0xc6600024
    ctx->pc = 0x1d0898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d089c:
    // 0x1d089c: 0x27a40080
    ctx->pc = 0x1d089cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
label_1d08a0:
    // 0x1d08a0: 0x27a50090
    ctx->pc = 0x1d08a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
label_1d08a4:
    // 0x1d08a4: 0xe7a00080
    ctx->pc = 0x1d08a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1d08a8:
    // 0x1d08a8: 0xc6600028
    ctx->pc = 0x1d08a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d08ac:
    // 0x1d08ac: 0xe7a00084
    ctx->pc = 0x1d08acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1d08b0:
    // 0x1d08b0: 0xc660002c
    ctx->pc = 0x1d08b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d08b4:
    // 0x1d08b4: 0xc06bf00
label_1d08b8:
    if (ctx->pc == 0x1D08B8u) {
        ctx->pc = 0x1D08B8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1D08BCu;
        goto label_1d08bc;
    }
    ctx->pc = 0x1D08B4u;
    SET_GPR_U32(ctx, 31, 0x1D08BCu);
    ctx->pc = 0x1D08B8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D08BCu; }
        else if (ctx->pc != 0x1D08BCu) { ctx->pc = 0x1D08BCu; }
    }
    if (ctx->pc != 0x1D08BCu) { return; }
    ctx->pc = 0x1D08BCu;
label_1d08bc:
    // 0x1d08bc: 0xc7a10090
    ctx->pc = 0x1d08bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d08c0:
    // 0x1d08c0: 0xc6600000
    ctx->pc = 0x1d08c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d08c4:
    // 0x1d08c4: 0x3c033f00
    ctx->pc = 0x1d08c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16128 << 16));
label_1d08c8:
    // 0x1d08c8: 0x44831000
    ctx->pc = 0x1d08c8u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
label_1d08cc:
    // 0x1d08cc: 0x0
    ctx->pc = 0x1d08ccu;
    // NOP
label_1d08d0:
    // 0x1d08d0: 0x4601101a
    ctx->pc = 0x1d08d0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1d08d4:
    // 0x1d08d4: 0x4600101c
    ctx->pc = 0x1d08d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d08d8:
    // 0x1d08d8: 0xe6600000
    ctx->pc = 0x1d08d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_1d08dc:
    // 0x1d08dc: 0xc7a10094
    ctx->pc = 0x1d08dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d08e0:
    // 0x1d08e0: 0xc6600004
    ctx->pc = 0x1d08e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d08e4:
    // 0x1d08e4: 0x4601101a
    ctx->pc = 0x1d08e4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1d08e8:
    // 0x1d08e8: 0x4600101c
    ctx->pc = 0x1d08e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d08ec:
    // 0x1d08ec: 0xe6600004
    ctx->pc = 0x1d08ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_1d08f0:
    // 0x1d08f0: 0xc7a10098
    ctx->pc = 0x1d08f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d08f4:
    // 0x1d08f4: 0xc6600008
    ctx->pc = 0x1d08f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d08f8:
    // 0x1d08f8: 0x4601101a
    ctx->pc = 0x1d08f8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1d08fc:
    // 0x1d08fc: 0x4600101c
    ctx->pc = 0x1d08fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d0900:
    // 0x1d0900: 0xe6600008
    ctx->pc = 0x1d0900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_1d0904:
    // 0x1d0904: 0x86030018
    ctx->pc = 0x1d0904u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_1d0908:
    // 0x1d0908: 0x2a3a821
    ctx->pc = 0x1d0908u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_1d090c:
    // 0x1d090c: 0x2b1182a
    ctx->pc = 0x1d090cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 17)));
label_1d0910:
    // 0x1d0910: 0x5460ffde
label_1d0914:
    if (ctx->pc == 0x1D0914u) {
        ctx->pc = 0x1D0914u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
        ctx->pc = 0x1D0918u;
        goto label_1d0918;
    }
    ctx->pc = 0x1D0910u;
    {
        const bool branch_taken_0x1d0910 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d0910) {
            ctx->pc = 0x1D0914u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
            ctx->pc = 0x1D088Cu;
            goto label_1d088c;
        }
    }
    ctx->pc = 0x1D0918u;
label_1d0918:
    // 0x1d0918: 0x26940001
    ctx->pc = 0x1d0918u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_1d091c:
    // 0x1d091c: 0x2a810003
    ctx->pc = 0x1d091cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), 3));
label_1d0920:
    // 0x1d0920: 0x1420ffd6
label_1d0924:
    if (ctx->pc == 0x1D0924u) {
        ctx->pc = 0x1D0924u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 17)));
        ctx->pc = 0x1D0928u;
        goto label_1d0928;
    }
    ctx->pc = 0x1D0920u;
    {
        const bool branch_taken_0x1d0920 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D0924u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 17)));
        if (branch_taken_0x1d0920) {
            ctx->pc = 0x1D087Cu;
            goto label_1d087c;
        }
    }
    ctx->pc = 0x1D0928u;
label_1d0928:
    // 0x1d0928: 0x86030018
    ctx->pc = 0x1d0928u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_1d092c:
    // 0x1d092c: 0x28630003
    ctx->pc = 0x1d092cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 3));
label_1d0930:
    // 0x1d0930: 0x1460057f
label_1d0934:
    if (ctx->pc == 0x1D0934u) {
        ctx->pc = 0x1D0934u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1D0938u;
        goto label_1d0938;
    }
    ctx->pc = 0x1D0930u;
    {
        const bool branch_taken_0x1d0930 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D0934u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1d0930) {
            ctx->pc = 0x1D1F30u;
            goto label_1d1f30;
        }
    }
    ctx->pc = 0x1D0938u;
label_1d0938:
    // 0x1d0938: 0x1000002e
label_1d093c:
    if (ctx->pc == 0x1D093Cu) {
        ctx->pc = 0x1D093Cu;
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->pc = 0x1D0940u;
        goto label_1d0940;
    }
    ctx->pc = 0x1D0938u;
    {
        const bool branch_taken_0x1d0938 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D093Cu;
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
        if (branch_taken_0x1d0938) {
            ctx->pc = 0x1D09F4u;
            goto label_1d09f4;
        }
    }
    ctx->pc = 0x1D0940u;
label_1d0940:
    // 0x1d0940: 0x10200029
label_1d0944:
    if (ctx->pc == 0x1D0944u) {
        ctx->pc = 0x1D0944u;
        SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D0948u;
        goto label_1d0948;
    }
    ctx->pc = 0x1D0940u;
    {
        const bool branch_taken_0x1d0940 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D0944u;
        SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d0940) {
            ctx->pc = 0x1D09E8u;
            goto label_1d09e8;
        }
    }
    ctx->pc = 0x1D0948u;
label_1d0948:
    // 0x1d0948: 0x151080
    ctx->pc = 0x1d0948u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
label_1d094c:
    // 0x1d094c: 0x551021
    ctx->pc = 0x1d094cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1d0950:
    // 0x1d0950: 0x21100
    ctx->pc = 0x1d0950u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1d0954:
    // 0x1d0954: 0x2429821
    ctx->pc = 0x1d0954u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1d0958:
    // 0x1d0958: 0xc6600024
    ctx->pc = 0x1d0958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d095c:
    // 0x1d095c: 0x27a40080
    ctx->pc = 0x1d095cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
label_1d0960:
    // 0x1d0960: 0x27a50090
    ctx->pc = 0x1d0960u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
label_1d0964:
    // 0x1d0964: 0xe7a00080
    ctx->pc = 0x1d0964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1d0968:
    // 0x1d0968: 0xc6600028
    ctx->pc = 0x1d0968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d096c:
    // 0x1d096c: 0xe7a00084
    ctx->pc = 0x1d096cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1d0970:
    // 0x1d0970: 0xc660002c
    ctx->pc = 0x1d0970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0974:
    // 0x1d0974: 0xc06bf00
label_1d0978:
    if (ctx->pc == 0x1D0978u) {
        ctx->pc = 0x1D0978u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1D097Cu;
        goto label_1d097c;
    }
    ctx->pc = 0x1D0974u;
    SET_GPR_U32(ctx, 31, 0x1D097Cu);
    ctx->pc = 0x1D0978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D097Cu; }
        else if (ctx->pc != 0x1D097Cu) { ctx->pc = 0x1D097Cu; }
    }
    if (ctx->pc != 0x1D097Cu) { return; }
    ctx->pc = 0x1D097Cu;
label_1d097c:
    // 0x1d097c: 0x3c033c23
    ctx->pc = 0x1d097cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)15395 << 16));
label_1d0980:
    // 0x1d0980: 0x3463d70a
    ctx->pc = 0x1d0980u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 55050));
label_1d0984:
    // 0x1d0984: 0x44831800
    ctx->pc = 0x1d0984u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 3);
label_1d0988:
    // 0x1d0988: 0xc7a10090
    ctx->pc = 0x1d0988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d098c:
    // 0x1d098c: 0x3c033f7d
    ctx->pc = 0x1d098cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16253 << 16));
label_1d0990:
    // 0x1d0990: 0x346370a4
    ctx->pc = 0x1d0990u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 28836));
label_1d0994:
    // 0x1d0994: 0xc6600000
    ctx->pc = 0x1d0994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0998:
    // 0x1d0998: 0x44831000
    ctx->pc = 0x1d0998u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
label_1d099c:
    // 0x1d099c: 0x0
    ctx->pc = 0x1d099cu;
    // NOP
label_1d09a0:
    // 0x1d09a0: 0x4601181a
    ctx->pc = 0x1d09a0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d09a4:
    // 0x1d09a4: 0x4600101c
    ctx->pc = 0x1d09a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d09a8:
    // 0x1d09a8: 0xe6600000
    ctx->pc = 0x1d09a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_1d09ac:
    // 0x1d09ac: 0xc7a10094
    ctx->pc = 0x1d09acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d09b0:
    // 0x1d09b0: 0xc6600004
    ctx->pc = 0x1d09b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d09b4:
    // 0x1d09b4: 0x4601181a
    ctx->pc = 0x1d09b4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d09b8:
    // 0x1d09b8: 0x4600101c
    ctx->pc = 0x1d09b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d09bc:
    // 0x1d09bc: 0xe6600004
    ctx->pc = 0x1d09bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_1d09c0:
    // 0x1d09c0: 0xc7a10098
    ctx->pc = 0x1d09c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d09c4:
    // 0x1d09c4: 0xc6600008
    ctx->pc = 0x1d09c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d09c8:
    // 0x1d09c8: 0x4601181a
    ctx->pc = 0x1d09c8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d09cc:
    // 0x1d09cc: 0x4600101c
    ctx->pc = 0x1d09ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d09d0:
    // 0x1d09d0: 0xe6600008
    ctx->pc = 0x1d09d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_1d09d4:
    // 0x1d09d4: 0x86030018
    ctx->pc = 0x1d09d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_1d09d8:
    // 0x1d09d8: 0x2a3a821
    ctx->pc = 0x1d09d8u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_1d09dc:
    // 0x1d09dc: 0x2b1182a
    ctx->pc = 0x1d09dcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 17)));
label_1d09e0:
    // 0x1d09e0: 0x5460ffda
label_1d09e4:
    if (ctx->pc == 0x1D09E4u) {
        ctx->pc = 0x1D09E4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
        ctx->pc = 0x1D09E8u;
        goto label_1d09e8;
    }
    ctx->pc = 0x1D09E0u;
    {
        const bool branch_taken_0x1d09e0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d09e0) {
            ctx->pc = 0x1D09E4u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
            ctx->pc = 0x1D094Cu;
            goto label_1d094c;
        }
    }
    ctx->pc = 0x1D09E8u;
label_1d09e8:
    // 0x1d09e8: 0x26940001
    ctx->pc = 0x1d09e8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_1d09ec:
    // 0x1d09ec: 0x0
    ctx->pc = 0x1d09ecu;
    // NOP
label_1d09f0:
    // 0x1d09f0: 0x86030018
    ctx->pc = 0x1d09f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_1d09f4:
    // 0x1d09f4: 0x283182a
    ctx->pc = 0x1d09f4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 3)));
label_1d09f8:
    // 0x1d09f8: 0x1460ffd1
label_1d09fc:
    if (ctx->pc == 0x1D09FCu) {
        ctx->pc = 0x1D09FCu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 17)));
        ctx->pc = 0x1D0A00u;
        goto label_1d0a00;
    }
    ctx->pc = 0x1D09F8u;
    {
        const bool branch_taken_0x1d09f8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D09FCu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 17)));
        if (branch_taken_0x1d09f8) {
            ctx->pc = 0x1D0940u;
            goto label_1d0940;
        }
    }
    ctx->pc = 0x1D0A00u;
label_1d0a00:
    // 0x1d0a00: 0x1000054b
label_1d0a04:
    if (ctx->pc == 0x1D0A04u) {
        ctx->pc = 0x1D0A08u;
        goto label_1d0a08;
    }
    ctx->pc = 0x1D0A00u;
    {
        const bool branch_taken_0x1d0a00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d0a00) {
            ctx->pc = 0x1D1F30u;
            goto label_1d1f30;
        }
    }
    ctx->pc = 0x1D0A08u;
label_1d0a08:
    // 0x1d0a08: 0x10000039
label_1d0a0c:
    if (ctx->pc == 0x1D0A0Cu) {
        ctx->pc = 0x1D0A0Cu;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D0A10u;
        goto label_1d0a10;
    }
    ctx->pc = 0x1D0A08u;
    {
        const bool branch_taken_0x1d0a08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D0A0Cu;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d0a08) {
            ctx->pc = 0x1D0AF0u;
            goto label_1d0af0;
        }
    }
    ctx->pc = 0x1D0A10u;
label_1d0a10:
    // 0x1d0a10: 0x10200035
label_1d0a14:
    if (ctx->pc == 0x1D0A14u) {
        ctx->pc = 0x1D0A14u;
        SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D0A18u;
        goto label_1d0a18;
    }
    ctx->pc = 0x1D0A10u;
    {
        const bool branch_taken_0x1d0a10 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D0A14u;
        SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d0a10) {
            ctx->pc = 0x1D0AE8u;
            goto label_1d0ae8;
        }
    }
    ctx->pc = 0x1D0A18u;
label_1d0a18:
    // 0x1d0a18: 0x151080
    ctx->pc = 0x1d0a18u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
label_1d0a1c:
    // 0x1d0a1c: 0x551021
    ctx->pc = 0x1d0a1cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1d0a20:
    // 0x1d0a20: 0x21100
    ctx->pc = 0x1d0a20u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1d0a24:
    // 0x1d0a24: 0x2429821
    ctx->pc = 0x1d0a24u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1d0a28:
    // 0x1d0a28: 0xc6600024
    ctx->pc = 0x1d0a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0a2c:
    // 0x1d0a2c: 0x27a40080
    ctx->pc = 0x1d0a2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
label_1d0a30:
    // 0x1d0a30: 0x27a50090
    ctx->pc = 0x1d0a30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
label_1d0a34:
    // 0x1d0a34: 0xe7a00080
    ctx->pc = 0x1d0a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1d0a38:
    // 0x1d0a38: 0xc6600028
    ctx->pc = 0x1d0a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0a3c:
    // 0x1d0a3c: 0xe7a00084
    ctx->pc = 0x1d0a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1d0a40:
    // 0x1d0a40: 0xc660002c
    ctx->pc = 0x1d0a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0a44:
    // 0x1d0a44: 0xc06bf00
label_1d0a48:
    if (ctx->pc == 0x1D0A48u) {
        ctx->pc = 0x1D0A48u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1D0A4Cu;
        goto label_1d0a4c;
    }
    ctx->pc = 0x1D0A44u;
    SET_GPR_U32(ctx, 31, 0x1D0A4Cu);
    ctx->pc = 0x1D0A48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0A4Cu; }
        else if (ctx->pc != 0x1D0A4Cu) { ctx->pc = 0x1D0A4Cu; }
    }
    if (ctx->pc != 0x1D0A4Cu) { return; }
    ctx->pc = 0x1D0A4Cu;
label_1d0a4c:
    // 0x1d0a4c: 0x2aa10005
    ctx->pc = 0x1d0a4cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 21), 5));
label_1d0a50:
    // 0x1d0a50: 0x10200009
label_1d0a54:
    if (ctx->pc == 0x1D0A54u) {
        ctx->pc = 0x1D0A54u;
        SET_GPR_U32(ctx, 3, ((uint32_t)15820 << 16));
        ctx->pc = 0x1D0A58u;
        goto label_1d0a58;
    }
    ctx->pc = 0x1D0A50u;
    {
        const bool branch_taken_0x1d0a50 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D0A54u;
        SET_GPR_U32(ctx, 3, ((uint32_t)15820 << 16));
        if (branch_taken_0x1d0a50) {
            ctx->pc = 0x1D0A78u;
            goto label_1d0a78;
        }
    }
    ctx->pc = 0x1D0A58u;
label_1d0a58:
    // 0x1d0a58: 0xc7a00090
    ctx->pc = 0x1d0a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0a5c:
    // 0x1d0a5c: 0xe6600000
    ctx->pc = 0x1d0a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_1d0a60:
    // 0x1d0a60: 0xc7a00094
    ctx->pc = 0x1d0a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0a64:
    // 0x1d0a64: 0xe6600004
    ctx->pc = 0x1d0a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_1d0a68:
    // 0x1d0a68: 0xc7a00098
    ctx->pc = 0x1d0a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0a6c:
    // 0x1d0a6c: 0x10000018
label_1d0a70:
    if (ctx->pc == 0x1D0A70u) {
        ctx->pc = 0x1D0A70u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        ctx->pc = 0x1D0A74u;
        goto label_1d0a74;
    }
    ctx->pc = 0x1D0A6Cu;
    {
        const bool branch_taken_0x1d0a6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D0A70u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        if (branch_taken_0x1d0a6c) {
            ctx->pc = 0x1D0AD0u;
            goto label_1d0ad0;
        }
    }
    ctx->pc = 0x1D0A74u;
label_1d0a74:
    // 0x1d0a74: 0x3c033dcc
    ctx->pc = 0x1d0a74u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15820 << 16));
label_1d0a78:
    // 0x1d0a78: 0x3463cccd
    ctx->pc = 0x1d0a78u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52429));
label_1d0a7c:
    // 0x1d0a7c: 0x44831800
    ctx->pc = 0x1d0a7cu;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 3);
label_1d0a80:
    // 0x1d0a80: 0xc7a10090
    ctx->pc = 0x1d0a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0a84:
    // 0x1d0a84: 0x3c033f66
    ctx->pc = 0x1d0a84u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16230 << 16));
label_1d0a88:
    // 0x1d0a88: 0x34636666
    ctx->pc = 0x1d0a88u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 26214));
label_1d0a8c:
    // 0x1d0a8c: 0xc6600000
    ctx->pc = 0x1d0a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0a90:
    // 0x1d0a90: 0x44831000
    ctx->pc = 0x1d0a90u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
label_1d0a94:
    // 0x1d0a94: 0x0
    ctx->pc = 0x1d0a94u;
    // NOP
label_1d0a98:
    // 0x1d0a98: 0x4601181a
    ctx->pc = 0x1d0a98u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d0a9c:
    // 0x1d0a9c: 0x4600101c
    ctx->pc = 0x1d0a9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d0aa0:
    // 0x1d0aa0: 0xe6600000
    ctx->pc = 0x1d0aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_1d0aa4:
    // 0x1d0aa4: 0xc7a10094
    ctx->pc = 0x1d0aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0aa8:
    // 0x1d0aa8: 0xc6600004
    ctx->pc = 0x1d0aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0aac:
    // 0x1d0aac: 0x4601181a
    ctx->pc = 0x1d0aacu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d0ab0:
    // 0x1d0ab0: 0x4600101c
    ctx->pc = 0x1d0ab0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d0ab4:
    // 0x1d0ab4: 0xe6600004
    ctx->pc = 0x1d0ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_1d0ab8:
    // 0x1d0ab8: 0xc7a10098
    ctx->pc = 0x1d0ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0abc:
    // 0x1d0abc: 0xc6600008
    ctx->pc = 0x1d0abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0ac0:
    // 0x1d0ac0: 0x4601181a
    ctx->pc = 0x1d0ac0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d0ac4:
    // 0x1d0ac4: 0x4600101c
    ctx->pc = 0x1d0ac4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d0ac8:
    // 0x1d0ac8: 0xe6600008
    ctx->pc = 0x1d0ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_1d0acc:
    // 0x1d0acc: 0x0
    ctx->pc = 0x1d0accu;
    // NOP
label_1d0ad0:
    // 0x1d0ad0: 0x86030018
    ctx->pc = 0x1d0ad0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_1d0ad4:
    // 0x1d0ad4: 0x2a3a821
    ctx->pc = 0x1d0ad4u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_1d0ad8:
    // 0x1d0ad8: 0x2b1182a
    ctx->pc = 0x1d0ad8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 17)));
label_1d0adc:
    // 0x1d0adc: 0x5460ffcf
label_1d0ae0:
    if (ctx->pc == 0x1D0AE0u) {
        ctx->pc = 0x1D0AE0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
        ctx->pc = 0x1D0AE4u;
        goto label_1d0ae4;
    }
    ctx->pc = 0x1D0ADCu;
    {
        const bool branch_taken_0x1d0adc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d0adc) {
            ctx->pc = 0x1D0AE0u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
            ctx->pc = 0x1D0A1Cu;
            goto label_1d0a1c;
        }
    }
    ctx->pc = 0x1D0AE4u;
label_1d0ae4:
    // 0x1d0ae4: 0x0
    ctx->pc = 0x1d0ae4u;
    // NOP
label_1d0ae8:
    // 0x1d0ae8: 0x26940001
    ctx->pc = 0x1d0ae8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_1d0aec:
    // 0x1d0aec: 0x0
    ctx->pc = 0x1d0aecu;
    // NOP
label_1d0af0:
    // 0x1d0af0: 0x86030018
    ctx->pc = 0x1d0af0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_1d0af4:
    // 0x1d0af4: 0x283182a
    ctx->pc = 0x1d0af4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 3)));
label_1d0af8:
    // 0x1d0af8: 0x1460ffc5
label_1d0afc:
    if (ctx->pc == 0x1D0AFCu) {
        ctx->pc = 0x1D0AFCu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 17)));
        ctx->pc = 0x1D0B00u;
        goto label_1d0b00;
    }
    ctx->pc = 0x1D0AF8u;
    {
        const bool branch_taken_0x1d0af8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D0AFCu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 17)));
        if (branch_taken_0x1d0af8) {
            ctx->pc = 0x1D0A10u;
            goto label_1d0a10;
        }
    }
    ctx->pc = 0x1D0B00u;
label_1d0b00:
    // 0x1d0b00: 0x1000050b
label_1d0b04:
    if (ctx->pc == 0x1D0B04u) {
        ctx->pc = 0x1D0B08u;
        goto label_1d0b08;
    }
    ctx->pc = 0x1D0B00u;
    {
        const bool branch_taken_0x1d0b00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d0b00) {
            ctx->pc = 0x1D1F30u;
            goto label_1d1f30;
        }
    }
    ctx->pc = 0x1D0B08u;
label_1d0b08:
    // 0x1d0b08: 0x100000b7
label_1d0b0c:
    if (ctx->pc == 0x1D0B0Cu) {
        ctx->pc = 0x1D0B0Cu;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D0B10u;
        goto label_1d0b10;
    }
    ctx->pc = 0x1D0B08u;
    {
        const bool branch_taken_0x1d0b08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D0B0Cu;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d0b08) {
            ctx->pc = 0x1D0DE8u;
            goto label_1d0de8;
        }
    }
    ctx->pc = 0x1D0B10u;
label_1d0b10:
    // 0x1d0b10: 0x102000b3
label_1d0b14:
    if (ctx->pc == 0x1D0B14u) {
        ctx->pc = 0x1D0B14u;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D0B18u;
        goto label_1d0b18;
    }
    ctx->pc = 0x1D0B10u;
    {
        const bool branch_taken_0x1d0b10 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D0B14u;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d0b10) {
            ctx->pc = 0x1D0DE0u;
            goto label_1d0de0;
        }
    }
    ctx->pc = 0x1D0B18u;
label_1d0b18:
    // 0x1d0b18: 0x2a610003
    ctx->pc = 0x1d0b18u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), 3));
label_1d0b1c:
    // 0x1d0b1c: 0x10200016
label_1d0b20:
    if (ctx->pc == 0x1D0B20u) {
        ctx->pc = 0x1D0B20u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), 4));
        ctx->pc = 0x1D0B24u;
        goto label_1d0b24;
    }
    ctx->pc = 0x1D0B1Cu;
    {
        const bool branch_taken_0x1d0b1c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D0B20u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), 4));
        if (branch_taken_0x1d0b1c) {
            ctx->pc = 0x1D0B78u;
            goto label_1d0b78;
        }
    }
    ctx->pc = 0x1D0B24u;
label_1d0b24:
    // 0x1d0b24: 0x141080
    ctx->pc = 0x1d0b24u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
label_1d0b28:
    // 0x1d0b28: 0x541021
    ctx->pc = 0x1d0b28u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1d0b2c:
    // 0x1d0b2c: 0x21100
    ctx->pc = 0x1d0b2cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1d0b30:
    // 0x1d0b30: 0x242a821
    ctx->pc = 0x1d0b30u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1d0b34:
    // 0x1d0b34: 0xc6a00030
    ctx->pc = 0x1d0b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0b38:
    // 0x1d0b38: 0x27a40080
    ctx->pc = 0x1d0b38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
label_1d0b3c:
    // 0x1d0b3c: 0x27a50090
    ctx->pc = 0x1d0b3cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
label_1d0b40:
    // 0x1d0b40: 0xe7a00080
    ctx->pc = 0x1d0b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1d0b44:
    // 0x1d0b44: 0xc6a00034
    ctx->pc = 0x1d0b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0b48:
    // 0x1d0b48: 0xe7a00084
    ctx->pc = 0x1d0b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1d0b4c:
    // 0x1d0b4c: 0xc6a00038
    ctx->pc = 0x1d0b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0b50:
    // 0x1d0b50: 0xc06bf00
label_1d0b54:
    if (ctx->pc == 0x1D0B54u) {
        ctx->pc = 0x1D0B54u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1D0B58u;
        goto label_1d0b58;
    }
    ctx->pc = 0x1D0B50u;
    SET_GPR_U32(ctx, 31, 0x1D0B58u);
    ctx->pc = 0x1D0B54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0B58u; }
        else if (ctx->pc != 0x1D0B58u) { ctx->pc = 0x1D0B58u; }
    }
    if (ctx->pc != 0x1D0B58u) { return; }
    ctx->pc = 0x1D0B58u;
label_1d0b58:
    // 0x1d0b58: 0xc7a00090
    ctx->pc = 0x1d0b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0b5c:
    // 0x1d0b5c: 0xe6a00000
    ctx->pc = 0x1d0b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_1d0b60:
    // 0x1d0b60: 0xc7a00094
    ctx->pc = 0x1d0b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0b64:
    // 0x1d0b64: 0xe6a00004
    ctx->pc = 0x1d0b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
label_1d0b68:
    // 0x1d0b68: 0xc7a00098
    ctx->pc = 0x1d0b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0b6c:
    // 0x1d0b6c: 0x10000096
label_1d0b70:
    if (ctx->pc == 0x1D0B70u) {
        ctx->pc = 0x1D0B70u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
        ctx->pc = 0x1D0B74u;
        goto label_1d0b74;
    }
    ctx->pc = 0x1D0B6Cu;
    {
        const bool branch_taken_0x1d0b6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D0B70u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
        if (branch_taken_0x1d0b6c) {
            ctx->pc = 0x1D0DC8u;
            goto label_1d0dc8;
        }
    }
    ctx->pc = 0x1D0B74u;
label_1d0b74:
    // 0x1d0b74: 0x2a610004
    ctx->pc = 0x1d0b74u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), 4));
label_1d0b78:
    // 0x1d0b78: 0x10200022
label_1d0b7c:
    if (ctx->pc == 0x1D0B7Cu) {
        ctx->pc = 0x1D0B7Cu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), 5));
        ctx->pc = 0x1D0B80u;
        goto label_1d0b80;
    }
    ctx->pc = 0x1D0B78u;
    {
        const bool branch_taken_0x1d0b78 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D0B7Cu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), 5));
        if (branch_taken_0x1d0b78) {
            ctx->pc = 0x1D0C04u;
            goto label_1d0c04;
        }
    }
    ctx->pc = 0x1D0B80u;
label_1d0b80:
    // 0x1d0b80: 0x141080
    ctx->pc = 0x1d0b80u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
label_1d0b84:
    // 0x1d0b84: 0x541021
    ctx->pc = 0x1d0b84u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1d0b88:
    // 0x1d0b88: 0x21100
    ctx->pc = 0x1d0b88u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1d0b8c:
    // 0x1d0b8c: 0x242a821
    ctx->pc = 0x1d0b8cu;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1d0b90:
    // 0x1d0b90: 0xc6a00030
    ctx->pc = 0x1d0b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0b94:
    // 0x1d0b94: 0x27a40080
    ctx->pc = 0x1d0b94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
label_1d0b98:
    // 0x1d0b98: 0x27a50090
    ctx->pc = 0x1d0b98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
label_1d0b9c:
    // 0x1d0b9c: 0xe7a00080
    ctx->pc = 0x1d0b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1d0ba0:
    // 0x1d0ba0: 0xc6a00034
    ctx->pc = 0x1d0ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0ba4:
    // 0x1d0ba4: 0xe7a00084
    ctx->pc = 0x1d0ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1d0ba8:
    // 0x1d0ba8: 0xc6a00038
    ctx->pc = 0x1d0ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0bac:
    // 0x1d0bac: 0xc06bf00
label_1d0bb0:
    if (ctx->pc == 0x1D0BB0u) {
        ctx->pc = 0x1D0BB0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1D0BB4u;
        goto label_1d0bb4;
    }
    ctx->pc = 0x1D0BACu;
    SET_GPR_U32(ctx, 31, 0x1D0BB4u);
    ctx->pc = 0x1D0BB0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0BB4u; }
        else if (ctx->pc != 0x1D0BB4u) { ctx->pc = 0x1D0BB4u; }
    }
    if (ctx->pc != 0x1D0BB4u) { return; }
    ctx->pc = 0x1D0BB4u;
label_1d0bb4:
    // 0x1d0bb4: 0xc7a10090
    ctx->pc = 0x1d0bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0bb8:
    // 0x1d0bb8: 0xc6a00000
    ctx->pc = 0x1d0bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0bbc:
    // 0x1d0bbc: 0x3c033f00
    ctx->pc = 0x1d0bbcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16128 << 16));
label_1d0bc0:
    // 0x1d0bc0: 0x44831000
    ctx->pc = 0x1d0bc0u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
label_1d0bc4:
    // 0x1d0bc4: 0x0
    ctx->pc = 0x1d0bc4u;
    // NOP
label_1d0bc8:
    // 0x1d0bc8: 0x4601101a
    ctx->pc = 0x1d0bc8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1d0bcc:
    // 0x1d0bcc: 0x4600101c
    ctx->pc = 0x1d0bccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d0bd0:
    // 0x1d0bd0: 0xe6a00000
    ctx->pc = 0x1d0bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_1d0bd4:
    // 0x1d0bd4: 0xc7a10094
    ctx->pc = 0x1d0bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0bd8:
    // 0x1d0bd8: 0xc6a00004
    ctx->pc = 0x1d0bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0bdc:
    // 0x1d0bdc: 0x4601101a
    ctx->pc = 0x1d0bdcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1d0be0:
    // 0x1d0be0: 0x4600101c
    ctx->pc = 0x1d0be0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d0be4:
    // 0x1d0be4: 0xe6a00004
    ctx->pc = 0x1d0be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
label_1d0be8:
    // 0x1d0be8: 0xc7a10098
    ctx->pc = 0x1d0be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0bec:
    // 0x1d0bec: 0xc6a00008
    ctx->pc = 0x1d0becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0bf0:
    // 0x1d0bf0: 0x4601101a
    ctx->pc = 0x1d0bf0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1d0bf4:
    // 0x1d0bf4: 0x4600101c
    ctx->pc = 0x1d0bf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d0bf8:
    // 0x1d0bf8: 0x10000073
label_1d0bfc:
    if (ctx->pc == 0x1D0BFCu) {
        ctx->pc = 0x1D0BFCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
        ctx->pc = 0x1D0C00u;
        goto label_1d0c00;
    }
    ctx->pc = 0x1D0BF8u;
    {
        const bool branch_taken_0x1d0bf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D0BFCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
        if (branch_taken_0x1d0bf8) {
            ctx->pc = 0x1D0DC8u;
            goto label_1d0dc8;
        }
    }
    ctx->pc = 0x1D0C00u;
label_1d0c00:
    // 0x1d0c00: 0x2a610005
    ctx->pc = 0x1d0c00u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), 5));
label_1d0c04:
    // 0x1d0c04: 0x10200026
label_1d0c08:
    if (ctx->pc == 0x1D0C08u) {
        ctx->pc = 0x1D0C08u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), 7));
        ctx->pc = 0x1D0C0Cu;
        goto label_1d0c0c;
    }
    ctx->pc = 0x1D0C04u;
    {
        const bool branch_taken_0x1d0c04 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D0C08u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), 7));
        if (branch_taken_0x1d0c04) {
            ctx->pc = 0x1D0CA0u;
            goto label_1d0ca0;
        }
    }
    ctx->pc = 0x1D0C0Cu;
label_1d0c0c:
    // 0x1d0c0c: 0x141080
    ctx->pc = 0x1d0c0cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
label_1d0c10:
    // 0x1d0c10: 0x541021
    ctx->pc = 0x1d0c10u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1d0c14:
    // 0x1d0c14: 0x21100
    ctx->pc = 0x1d0c14u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1d0c18:
    // 0x1d0c18: 0x242a821
    ctx->pc = 0x1d0c18u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1d0c1c:
    // 0x1d0c1c: 0xc6a00030
    ctx->pc = 0x1d0c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0c20:
    // 0x1d0c20: 0x27a40080
    ctx->pc = 0x1d0c20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
label_1d0c24:
    // 0x1d0c24: 0x27a50090
    ctx->pc = 0x1d0c24u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
label_1d0c28:
    // 0x1d0c28: 0xe7a00080
    ctx->pc = 0x1d0c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1d0c2c:
    // 0x1d0c2c: 0xc6a00034
    ctx->pc = 0x1d0c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0c30:
    // 0x1d0c30: 0xe7a00084
    ctx->pc = 0x1d0c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1d0c34:
    // 0x1d0c34: 0xc6a00038
    ctx->pc = 0x1d0c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0c38:
    // 0x1d0c38: 0xc06bf00
label_1d0c3c:
    if (ctx->pc == 0x1D0C3Cu) {
        ctx->pc = 0x1D0C3Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1D0C40u;
        goto label_1d0c40;
    }
    ctx->pc = 0x1D0C38u;
    SET_GPR_U32(ctx, 31, 0x1D0C40u);
    ctx->pc = 0x1D0C3Cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0C40u; }
        else if (ctx->pc != 0x1D0C40u) { ctx->pc = 0x1D0C40u; }
    }
    if (ctx->pc != 0x1D0C40u) { return; }
    ctx->pc = 0x1D0C40u;
label_1d0c40:
    // 0x1d0c40: 0x3c033dcc
    ctx->pc = 0x1d0c40u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15820 << 16));
label_1d0c44:
    // 0x1d0c44: 0x3463cccd
    ctx->pc = 0x1d0c44u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52429));
label_1d0c48:
    // 0x1d0c48: 0x44831800
    ctx->pc = 0x1d0c48u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 3);
label_1d0c4c:
    // 0x1d0c4c: 0xc7a10090
    ctx->pc = 0x1d0c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0c50:
    // 0x1d0c50: 0x3c033f66
    ctx->pc = 0x1d0c50u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16230 << 16));
label_1d0c54:
    // 0x1d0c54: 0x34636666
    ctx->pc = 0x1d0c54u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 26214));
label_1d0c58:
    // 0x1d0c58: 0xc6a00000
    ctx->pc = 0x1d0c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0c5c:
    // 0x1d0c5c: 0x44831000
    ctx->pc = 0x1d0c5cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
label_1d0c60:
    // 0x1d0c60: 0x0
    ctx->pc = 0x1d0c60u;
    // NOP
label_1d0c64:
    // 0x1d0c64: 0x4601181a
    ctx->pc = 0x1d0c64u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d0c68:
    // 0x1d0c68: 0x4600101c
    ctx->pc = 0x1d0c68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d0c6c:
    // 0x1d0c6c: 0xe6a00000
    ctx->pc = 0x1d0c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_1d0c70:
    // 0x1d0c70: 0xc7a10094
    ctx->pc = 0x1d0c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0c74:
    // 0x1d0c74: 0xc6a00004
    ctx->pc = 0x1d0c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0c78:
    // 0x1d0c78: 0x4601181a
    ctx->pc = 0x1d0c78u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d0c7c:
    // 0x1d0c7c: 0x4600101c
    ctx->pc = 0x1d0c7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d0c80:
    // 0x1d0c80: 0xe6a00004
    ctx->pc = 0x1d0c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
label_1d0c84:
    // 0x1d0c84: 0xc7a10098
    ctx->pc = 0x1d0c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0c88:
    // 0x1d0c88: 0xc6a00008
    ctx->pc = 0x1d0c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0c8c:
    // 0x1d0c8c: 0x4601181a
    ctx->pc = 0x1d0c8cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d0c90:
    // 0x1d0c90: 0x4600101c
    ctx->pc = 0x1d0c90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d0c94:
    // 0x1d0c94: 0x1000004c
label_1d0c98:
    if (ctx->pc == 0x1D0C98u) {
        ctx->pc = 0x1D0C98u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
        ctx->pc = 0x1D0C9Cu;
        goto label_1d0c9c;
    }
    ctx->pc = 0x1D0C94u;
    {
        const bool branch_taken_0x1d0c94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D0C98u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
        if (branch_taken_0x1d0c94) {
            ctx->pc = 0x1D0DC8u;
            goto label_1d0dc8;
        }
    }
    ctx->pc = 0x1D0C9Cu;
label_1d0c9c:
    // 0x1d0c9c: 0x2a610007
    ctx->pc = 0x1d0c9cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), 7));
label_1d0ca0:
    // 0x1d0ca0: 0x10200026
label_1d0ca4:
    if (ctx->pc == 0x1D0CA4u) {
        ctx->pc = 0x1D0CA4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x1D0CA8u;
        goto label_1d0ca8;
    }
    ctx->pc = 0x1D0CA0u;
    {
        const bool branch_taken_0x1d0ca0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D0CA4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x1d0ca0) {
            ctx->pc = 0x1D0D3Cu;
            goto label_1d0d3c;
        }
    }
    ctx->pc = 0x1D0CA8u;
label_1d0ca8:
    // 0x1d0ca8: 0x141080
    ctx->pc = 0x1d0ca8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
label_1d0cac:
    // 0x1d0cac: 0x541021
    ctx->pc = 0x1d0cacu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1d0cb0:
    // 0x1d0cb0: 0x21100
    ctx->pc = 0x1d0cb0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1d0cb4:
    // 0x1d0cb4: 0x242a821
    ctx->pc = 0x1d0cb4u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1d0cb8:
    // 0x1d0cb8: 0xc6a00030
    ctx->pc = 0x1d0cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0cbc:
    // 0x1d0cbc: 0x27a40080
    ctx->pc = 0x1d0cbcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
label_1d0cc0:
    // 0x1d0cc0: 0x27a50090
    ctx->pc = 0x1d0cc0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
label_1d0cc4:
    // 0x1d0cc4: 0xe7a00080
    ctx->pc = 0x1d0cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1d0cc8:
    // 0x1d0cc8: 0xc6a00034
    ctx->pc = 0x1d0cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0ccc:
    // 0x1d0ccc: 0xe7a00084
    ctx->pc = 0x1d0cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1d0cd0:
    // 0x1d0cd0: 0xc6a00038
    ctx->pc = 0x1d0cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0cd4:
    // 0x1d0cd4: 0xc06bf00
label_1d0cd8:
    if (ctx->pc == 0x1D0CD8u) {
        ctx->pc = 0x1D0CD8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1D0CDCu;
        goto label_1d0cdc;
    }
    ctx->pc = 0x1D0CD4u;
    SET_GPR_U32(ctx, 31, 0x1D0CDCu);
    ctx->pc = 0x1D0CD8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0CDCu; }
        else if (ctx->pc != 0x1D0CDCu) { ctx->pc = 0x1D0CDCu; }
    }
    if (ctx->pc != 0x1D0CDCu) { return; }
    ctx->pc = 0x1D0CDCu;
label_1d0cdc:
    // 0x1d0cdc: 0x3c033c23
    ctx->pc = 0x1d0cdcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)15395 << 16));
label_1d0ce0:
    // 0x1d0ce0: 0x3463d70a
    ctx->pc = 0x1d0ce0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 55050));
label_1d0ce4:
    // 0x1d0ce4: 0x44831800
    ctx->pc = 0x1d0ce4u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 3);
label_1d0ce8:
    // 0x1d0ce8: 0xc7a10090
    ctx->pc = 0x1d0ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0cec:
    // 0x1d0cec: 0x3c033f7d
    ctx->pc = 0x1d0cecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16253 << 16));
label_1d0cf0:
    // 0x1d0cf0: 0x346370a4
    ctx->pc = 0x1d0cf0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 28836));
label_1d0cf4:
    // 0x1d0cf4: 0xc6a00000
    ctx->pc = 0x1d0cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0cf8:
    // 0x1d0cf8: 0x44831000
    ctx->pc = 0x1d0cf8u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
label_1d0cfc:
    // 0x1d0cfc: 0x0
    ctx->pc = 0x1d0cfcu;
    // NOP
label_1d0d00:
    // 0x1d0d00: 0x4601181a
    ctx->pc = 0x1d0d00u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d0d04:
    // 0x1d0d04: 0x4600101c
    ctx->pc = 0x1d0d04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d0d08:
    // 0x1d0d08: 0xe6a00000
    ctx->pc = 0x1d0d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_1d0d0c:
    // 0x1d0d0c: 0xc7a10094
    ctx->pc = 0x1d0d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0d10:
    // 0x1d0d10: 0xc6a00004
    ctx->pc = 0x1d0d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0d14:
    // 0x1d0d14: 0x4601181a
    ctx->pc = 0x1d0d14u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d0d18:
    // 0x1d0d18: 0x4600101c
    ctx->pc = 0x1d0d18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d0d1c:
    // 0x1d0d1c: 0xe6a00004
    ctx->pc = 0x1d0d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
label_1d0d20:
    // 0x1d0d20: 0xc7a10098
    ctx->pc = 0x1d0d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0d24:
    // 0x1d0d24: 0xc6a00008
    ctx->pc = 0x1d0d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0d28:
    // 0x1d0d28: 0x4601181a
    ctx->pc = 0x1d0d28u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d0d2c:
    // 0x1d0d2c: 0x4600101c
    ctx->pc = 0x1d0d2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d0d30:
    // 0x1d0d30: 0x10000025
label_1d0d34:
    if (ctx->pc == 0x1D0D34u) {
        ctx->pc = 0x1D0D34u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
        ctx->pc = 0x1D0D38u;
        goto label_1d0d38;
    }
    ctx->pc = 0x1D0D30u;
    {
        const bool branch_taken_0x1d0d30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D0D34u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
        if (branch_taken_0x1d0d30) {
            ctx->pc = 0x1D0DC8u;
            goto label_1d0dc8;
        }
    }
    ctx->pc = 0x1D0D38u;
label_1d0d38:
    // 0x1d0d38: 0x141080
    ctx->pc = 0x1d0d38u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
label_1d0d3c:
    // 0x1d0d3c: 0x541021
    ctx->pc = 0x1d0d3cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1d0d40:
    // 0x1d0d40: 0x21100
    ctx->pc = 0x1d0d40u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1d0d44:
    // 0x1d0d44: 0x242a821
    ctx->pc = 0x1d0d44u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1d0d48:
    // 0x1d0d48: 0xc6a00030
    ctx->pc = 0x1d0d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0d4c:
    // 0x1d0d4c: 0x27a40080
    ctx->pc = 0x1d0d4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
label_1d0d50:
    // 0x1d0d50: 0x27a50090
    ctx->pc = 0x1d0d50u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
label_1d0d54:
    // 0x1d0d54: 0xe7a00080
    ctx->pc = 0x1d0d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1d0d58:
    // 0x1d0d58: 0xc6a00034
    ctx->pc = 0x1d0d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0d5c:
    // 0x1d0d5c: 0xe7a00084
    ctx->pc = 0x1d0d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1d0d60:
    // 0x1d0d60: 0xc6a00038
    ctx->pc = 0x1d0d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0d64:
    // 0x1d0d64: 0xc06bf00
label_1d0d68:
    if (ctx->pc == 0x1D0D68u) {
        ctx->pc = 0x1D0D68u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1D0D6Cu;
        goto label_1d0d6c;
    }
    ctx->pc = 0x1D0D64u;
    SET_GPR_U32(ctx, 31, 0x1D0D6Cu);
    ctx->pc = 0x1D0D68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0D6Cu; }
        else if (ctx->pc != 0x1D0D6Cu) { ctx->pc = 0x1D0D6Cu; }
    }
    if (ctx->pc != 0x1D0D6Cu) { return; }
    ctx->pc = 0x1D0D6Cu;
label_1d0d6c:
    // 0x1d0d6c: 0x3c033ba3
    ctx->pc = 0x1d0d6cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)15267 << 16));
label_1d0d70:
    // 0x1d0d70: 0x3463d70a
    ctx->pc = 0x1d0d70u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 55050));
label_1d0d74:
    // 0x1d0d74: 0x44831800
    ctx->pc = 0x1d0d74u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 3);
label_1d0d78:
    // 0x1d0d78: 0xc7a10090
    ctx->pc = 0x1d0d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0d7c:
    // 0x1d0d7c: 0x3c033f7e
    ctx->pc = 0x1d0d7cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16254 << 16));
label_1d0d80:
    // 0x1d0d80: 0x3463b852
    ctx->pc = 0x1d0d80u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 47186));
label_1d0d84:
    // 0x1d0d84: 0xc6a00000
    ctx->pc = 0x1d0d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0d88:
    // 0x1d0d88: 0x44831000
    ctx->pc = 0x1d0d88u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
label_1d0d8c:
    // 0x1d0d8c: 0x0
    ctx->pc = 0x1d0d8cu;
    // NOP
label_1d0d90:
    // 0x1d0d90: 0x4601181a
    ctx->pc = 0x1d0d90u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d0d94:
    // 0x1d0d94: 0x4600101c
    ctx->pc = 0x1d0d94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d0d98:
    // 0x1d0d98: 0xe6a00000
    ctx->pc = 0x1d0d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_1d0d9c:
    // 0x1d0d9c: 0xc7a10094
    ctx->pc = 0x1d0d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0da0:
    // 0x1d0da0: 0xc6a00004
    ctx->pc = 0x1d0da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0da4:
    // 0x1d0da4: 0x4601181a
    ctx->pc = 0x1d0da4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d0da8:
    // 0x1d0da8: 0x4600101c
    ctx->pc = 0x1d0da8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d0dac:
    // 0x1d0dac: 0xe6a00004
    ctx->pc = 0x1d0dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
label_1d0db0:
    // 0x1d0db0: 0xc7a10098
    ctx->pc = 0x1d0db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0db4:
    // 0x1d0db4: 0xc6a00008
    ctx->pc = 0x1d0db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0db8:
    // 0x1d0db8: 0x4601181a
    ctx->pc = 0x1d0db8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d0dbc:
    // 0x1d0dbc: 0x4600101c
    ctx->pc = 0x1d0dbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d0dc0:
    // 0x1d0dc0: 0xe6a00008
    ctx->pc = 0x1d0dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_1d0dc4:
    // 0x1d0dc4: 0x0
    ctx->pc = 0x1d0dc4u;
    // NOP
label_1d0dc8:
    // 0x1d0dc8: 0x86030018
    ctx->pc = 0x1d0dc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_1d0dcc:
    // 0x1d0dcc: 0x283a021
    ctx->pc = 0x1d0dccu;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_1d0dd0:
    // 0x1d0dd0: 0x291182a
    ctx->pc = 0x1d0dd0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 17)));
label_1d0dd4:
    // 0x1d0dd4: 0x1460ff51
label_1d0dd8:
    if (ctx->pc == 0x1D0DD8u) {
        ctx->pc = 0x1D0DD8u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), 3));
        ctx->pc = 0x1D0DDCu;
        goto label_1d0ddc;
    }
    ctx->pc = 0x1D0DD4u;
    {
        const bool branch_taken_0x1d0dd4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D0DD8u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), 3));
        if (branch_taken_0x1d0dd4) {
            ctx->pc = 0x1D0B1Cu;
            goto label_1d0b1c;
        }
    }
    ctx->pc = 0x1D0DDCu;
label_1d0ddc:
    // 0x1d0ddc: 0x0
    ctx->pc = 0x1d0ddcu;
    // NOP
label_1d0de0:
    // 0x1d0de0: 0x26730001
    ctx->pc = 0x1d0de0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_1d0de4:
    // 0x1d0de4: 0x0
    ctx->pc = 0x1d0de4u;
    // NOP
label_1d0de8:
    // 0x1d0de8: 0x86030018
    ctx->pc = 0x1d0de8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_1d0dec:
    // 0x1d0dec: 0x263182a
    ctx->pc = 0x1d0decu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 3)));
label_1d0df0:
    // 0x1d0df0: 0x1460ff47
label_1d0df4:
    if (ctx->pc == 0x1D0DF4u) {
        ctx->pc = 0x1D0DF4u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 17)));
        ctx->pc = 0x1D0DF8u;
        goto label_1d0df8;
    }
    ctx->pc = 0x1D0DF0u;
    {
        const bool branch_taken_0x1d0df0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D0DF4u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 17)));
        if (branch_taken_0x1d0df0) {
            ctx->pc = 0x1D0B10u;
            goto label_1d0b10;
        }
    }
    ctx->pc = 0x1D0DF8u;
label_1d0df8:
    // 0x1d0df8: 0x1000044d
label_1d0dfc:
    if (ctx->pc == 0x1D0DFCu) {
        ctx->pc = 0x1D0E00u;
        goto label_1d0e00;
    }
    ctx->pc = 0x1D0DF8u;
    {
        const bool branch_taken_0x1d0df8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d0df8) {
            ctx->pc = 0x1D1F30u;
            goto label_1d1f30;
        }
    }
    ctx->pc = 0x1D0E00u;
label_1d0e00:
    // 0x1d0e00: 0x1000006d
label_1d0e04:
    if (ctx->pc == 0x1D0E04u) {
        ctx->pc = 0x1D0E04u;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D0E08u;
        goto label_1d0e08;
    }
    ctx->pc = 0x1D0E00u;
    {
        const bool branch_taken_0x1d0e00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D0E04u;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d0e00) {
            ctx->pc = 0x1D0FB8u;
            goto label_1d0fb8;
        }
    }
    ctx->pc = 0x1D0E08u;
label_1d0e08:
    // 0x1d0e08: 0x10200069
label_1d0e0c:
    if (ctx->pc == 0x1D0E0Cu) {
        ctx->pc = 0x1D0E0Cu;
        SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D0E10u;
        goto label_1d0e10;
    }
    ctx->pc = 0x1D0E08u;
    {
        const bool branch_taken_0x1d0e08 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D0E0Cu;
        SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d0e08) {
            ctx->pc = 0x1D0FB0u;
            goto label_1d0fb0;
        }
    }
    ctx->pc = 0x1D0E10u;
label_1d0e10:
    // 0x1d0e10: 0x2a810003
    ctx->pc = 0x1d0e10u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), 3));
label_1d0e14:
    // 0x1d0e14: 0x10200016
label_1d0e18:
    if (ctx->pc == 0x1D0E18u) {
        ctx->pc = 0x1D0E18u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), 5));
        ctx->pc = 0x1D0E1Cu;
        goto label_1d0e1c;
    }
    ctx->pc = 0x1D0E14u;
    {
        const bool branch_taken_0x1d0e14 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D0E18u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), 5));
        if (branch_taken_0x1d0e14) {
            ctx->pc = 0x1D0E70u;
            goto label_1d0e70;
        }
    }
    ctx->pc = 0x1D0E1Cu;
label_1d0e1c:
    // 0x1d0e1c: 0x151080
    ctx->pc = 0x1d0e1cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
label_1d0e20:
    // 0x1d0e20: 0x551021
    ctx->pc = 0x1d0e20u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1d0e24:
    // 0x1d0e24: 0x21100
    ctx->pc = 0x1d0e24u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1d0e28:
    // 0x1d0e28: 0x2429821
    ctx->pc = 0x1d0e28u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1d0e2c:
    // 0x1d0e2c: 0xc6600030
    ctx->pc = 0x1d0e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0e30:
    // 0x1d0e30: 0x27a40080
    ctx->pc = 0x1d0e30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
label_1d0e34:
    // 0x1d0e34: 0x27a50090
    ctx->pc = 0x1d0e34u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
label_1d0e38:
    // 0x1d0e38: 0xe7a00080
    ctx->pc = 0x1d0e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1d0e3c:
    // 0x1d0e3c: 0xc6600034
    ctx->pc = 0x1d0e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0e40:
    // 0x1d0e40: 0xe7a00084
    ctx->pc = 0x1d0e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1d0e44:
    // 0x1d0e44: 0xc6600038
    ctx->pc = 0x1d0e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0e48:
    // 0x1d0e48: 0xc06bf00
label_1d0e4c:
    if (ctx->pc == 0x1D0E4Cu) {
        ctx->pc = 0x1D0E4Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1D0E50u;
        goto label_1d0e50;
    }
    ctx->pc = 0x1D0E48u;
    SET_GPR_U32(ctx, 31, 0x1D0E50u);
    ctx->pc = 0x1D0E4Cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0E50u; }
        else if (ctx->pc != 0x1D0E50u) { ctx->pc = 0x1D0E50u; }
    }
    if (ctx->pc != 0x1D0E50u) { return; }
    ctx->pc = 0x1D0E50u;
label_1d0e50:
    // 0x1d0e50: 0xc7a00090
    ctx->pc = 0x1d0e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0e54:
    // 0x1d0e54: 0xe6600000
    ctx->pc = 0x1d0e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_1d0e58:
    // 0x1d0e58: 0xc7a00094
    ctx->pc = 0x1d0e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0e5c:
    // 0x1d0e5c: 0xe6600004
    ctx->pc = 0x1d0e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_1d0e60:
    // 0x1d0e60: 0xc7a00098
    ctx->pc = 0x1d0e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0e64:
    // 0x1d0e64: 0x1000004c
label_1d0e68:
    if (ctx->pc == 0x1D0E68u) {
        ctx->pc = 0x1D0E68u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        ctx->pc = 0x1D0E6Cu;
        goto label_1d0e6c;
    }
    ctx->pc = 0x1D0E64u;
    {
        const bool branch_taken_0x1d0e64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D0E68u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        if (branch_taken_0x1d0e64) {
            ctx->pc = 0x1D0F98u;
            goto label_1d0f98;
        }
    }
    ctx->pc = 0x1D0E6Cu;
label_1d0e6c:
    // 0x1d0e6c: 0x2a810005
    ctx->pc = 0x1d0e6cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), 5));
label_1d0e70:
    // 0x1d0e70: 0x10200026
label_1d0e74:
    if (ctx->pc == 0x1D0E74u) {
        ctx->pc = 0x1D0E74u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
        ctx->pc = 0x1D0E78u;
        goto label_1d0e78;
    }
    ctx->pc = 0x1D0E70u;
    {
        const bool branch_taken_0x1d0e70 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D0E74u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
        if (branch_taken_0x1d0e70) {
            ctx->pc = 0x1D0F0Cu;
            goto label_1d0f0c;
        }
    }
    ctx->pc = 0x1D0E78u;
label_1d0e78:
    // 0x1d0e78: 0x151080
    ctx->pc = 0x1d0e78u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
label_1d0e7c:
    // 0x1d0e7c: 0x551021
    ctx->pc = 0x1d0e7cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1d0e80:
    // 0x1d0e80: 0x21100
    ctx->pc = 0x1d0e80u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1d0e84:
    // 0x1d0e84: 0x2429821
    ctx->pc = 0x1d0e84u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1d0e88:
    // 0x1d0e88: 0xc6600030
    ctx->pc = 0x1d0e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0e8c:
    // 0x1d0e8c: 0x27a40080
    ctx->pc = 0x1d0e8cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
label_1d0e90:
    // 0x1d0e90: 0x27a50090
    ctx->pc = 0x1d0e90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
label_1d0e94:
    // 0x1d0e94: 0xe7a00080
    ctx->pc = 0x1d0e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1d0e98:
    // 0x1d0e98: 0xc6600034
    ctx->pc = 0x1d0e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0e9c:
    // 0x1d0e9c: 0xe7a00084
    ctx->pc = 0x1d0e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1d0ea0:
    // 0x1d0ea0: 0xc6600038
    ctx->pc = 0x1d0ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0ea4:
    // 0x1d0ea4: 0xc06bf00
label_1d0ea8:
    if (ctx->pc == 0x1D0EA8u) {
        ctx->pc = 0x1D0EA8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1D0EACu;
        goto label_1d0eac;
    }
    ctx->pc = 0x1D0EA4u;
    SET_GPR_U32(ctx, 31, 0x1D0EACu);
    ctx->pc = 0x1D0EA8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0EACu; }
        else if (ctx->pc != 0x1D0EACu) { ctx->pc = 0x1D0EACu; }
    }
    if (ctx->pc != 0x1D0EACu) { return; }
    ctx->pc = 0x1D0EACu;
label_1d0eac:
    // 0x1d0eac: 0x3c033ecc
    ctx->pc = 0x1d0eacu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16076 << 16));
label_1d0eb0:
    // 0x1d0eb0: 0x3463cccd
    ctx->pc = 0x1d0eb0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52429));
label_1d0eb4:
    // 0x1d0eb4: 0x44831800
    ctx->pc = 0x1d0eb4u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 3);
label_1d0eb8:
    // 0x1d0eb8: 0xc7a10090
    ctx->pc = 0x1d0eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0ebc:
    // 0x1d0ebc: 0x3c033f19
    ctx->pc = 0x1d0ebcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16153 << 16));
label_1d0ec0:
    // 0x1d0ec0: 0x3463999a
    ctx->pc = 0x1d0ec0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 39322));
label_1d0ec4:
    // 0x1d0ec4: 0xc6600000
    ctx->pc = 0x1d0ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0ec8:
    // 0x1d0ec8: 0x44831000
    ctx->pc = 0x1d0ec8u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
label_1d0ecc:
    // 0x1d0ecc: 0x0
    ctx->pc = 0x1d0eccu;
    // NOP
label_1d0ed0:
    // 0x1d0ed0: 0x4601181a
    ctx->pc = 0x1d0ed0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d0ed4:
    // 0x1d0ed4: 0x4600101c
    ctx->pc = 0x1d0ed4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d0ed8:
    // 0x1d0ed8: 0xe6600000
    ctx->pc = 0x1d0ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_1d0edc:
    // 0x1d0edc: 0xc7a10094
    ctx->pc = 0x1d0edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0ee0:
    // 0x1d0ee0: 0xc6600004
    ctx->pc = 0x1d0ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0ee4:
    // 0x1d0ee4: 0x4601181a
    ctx->pc = 0x1d0ee4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d0ee8:
    // 0x1d0ee8: 0x4600101c
    ctx->pc = 0x1d0ee8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d0eec:
    // 0x1d0eec: 0xe6600004
    ctx->pc = 0x1d0eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_1d0ef0:
    // 0x1d0ef0: 0xc7a10098
    ctx->pc = 0x1d0ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0ef4:
    // 0x1d0ef4: 0xc6600008
    ctx->pc = 0x1d0ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0ef8:
    // 0x1d0ef8: 0x4601181a
    ctx->pc = 0x1d0ef8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d0efc:
    // 0x1d0efc: 0x4600101c
    ctx->pc = 0x1d0efcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d0f00:
    // 0x1d0f00: 0x10000025
label_1d0f04:
    if (ctx->pc == 0x1D0F04u) {
        ctx->pc = 0x1D0F04u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        ctx->pc = 0x1D0F08u;
        goto label_1d0f08;
    }
    ctx->pc = 0x1D0F00u;
    {
        const bool branch_taken_0x1d0f00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D0F04u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        if (branch_taken_0x1d0f00) {
            ctx->pc = 0x1D0F98u;
            goto label_1d0f98;
        }
    }
    ctx->pc = 0x1D0F08u;
label_1d0f08:
    // 0x1d0f08: 0x151080
    ctx->pc = 0x1d0f08u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
label_1d0f0c:
    // 0x1d0f0c: 0x551021
    ctx->pc = 0x1d0f0cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1d0f10:
    // 0x1d0f10: 0x21100
    ctx->pc = 0x1d0f10u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1d0f14:
    // 0x1d0f14: 0x2429821
    ctx->pc = 0x1d0f14u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1d0f18:
    // 0x1d0f18: 0xc6600030
    ctx->pc = 0x1d0f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0f1c:
    // 0x1d0f1c: 0x27a40080
    ctx->pc = 0x1d0f1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
label_1d0f20:
    // 0x1d0f20: 0x27a50090
    ctx->pc = 0x1d0f20u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
label_1d0f24:
    // 0x1d0f24: 0xe7a00080
    ctx->pc = 0x1d0f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1d0f28:
    // 0x1d0f28: 0xc6600034
    ctx->pc = 0x1d0f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0f2c:
    // 0x1d0f2c: 0xe7a00084
    ctx->pc = 0x1d0f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1d0f30:
    // 0x1d0f30: 0xc6600038
    ctx->pc = 0x1d0f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0f34:
    // 0x1d0f34: 0xc06bf00
label_1d0f38:
    if (ctx->pc == 0x1D0F38u) {
        ctx->pc = 0x1D0F38u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1D0F3Cu;
        goto label_1d0f3c;
    }
    ctx->pc = 0x1D0F34u;
    SET_GPR_U32(ctx, 31, 0x1D0F3Cu);
    ctx->pc = 0x1D0F38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0F3Cu; }
        else if (ctx->pc != 0x1D0F3Cu) { ctx->pc = 0x1D0F3Cu; }
    }
    if (ctx->pc != 0x1D0F3Cu) { return; }
    ctx->pc = 0x1D0F3Cu;
label_1d0f3c:
    // 0x1d0f3c: 0x3c033c23
    ctx->pc = 0x1d0f3cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)15395 << 16));
label_1d0f40:
    // 0x1d0f40: 0x3463d70a
    ctx->pc = 0x1d0f40u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 55050));
label_1d0f44:
    // 0x1d0f44: 0x44831800
    ctx->pc = 0x1d0f44u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 3);
label_1d0f48:
    // 0x1d0f48: 0xc7a10090
    ctx->pc = 0x1d0f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0f4c:
    // 0x1d0f4c: 0x3c033f7d
    ctx->pc = 0x1d0f4cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16253 << 16));
label_1d0f50:
    // 0x1d0f50: 0x346370a4
    ctx->pc = 0x1d0f50u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 28836));
label_1d0f54:
    // 0x1d0f54: 0xc6600000
    ctx->pc = 0x1d0f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0f58:
    // 0x1d0f58: 0x44831000
    ctx->pc = 0x1d0f58u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
label_1d0f5c:
    // 0x1d0f5c: 0x0
    ctx->pc = 0x1d0f5cu;
    // NOP
label_1d0f60:
    // 0x1d0f60: 0x4601181a
    ctx->pc = 0x1d0f60u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d0f64:
    // 0x1d0f64: 0x4600101c
    ctx->pc = 0x1d0f64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d0f68:
    // 0x1d0f68: 0xe6600000
    ctx->pc = 0x1d0f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_1d0f6c:
    // 0x1d0f6c: 0xc7a10094
    ctx->pc = 0x1d0f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0f70:
    // 0x1d0f70: 0xc6600004
    ctx->pc = 0x1d0f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0f74:
    // 0x1d0f74: 0x4601181a
    ctx->pc = 0x1d0f74u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d0f78:
    // 0x1d0f78: 0x4600101c
    ctx->pc = 0x1d0f78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d0f7c:
    // 0x1d0f7c: 0xe6600004
    ctx->pc = 0x1d0f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_1d0f80:
    // 0x1d0f80: 0xc7a10098
    ctx->pc = 0x1d0f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0f84:
    // 0x1d0f84: 0xc6600008
    ctx->pc = 0x1d0f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0f88:
    // 0x1d0f88: 0x4601181a
    ctx->pc = 0x1d0f88u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d0f8c:
    // 0x1d0f8c: 0x4600101c
    ctx->pc = 0x1d0f8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d0f90:
    // 0x1d0f90: 0xe6600008
    ctx->pc = 0x1d0f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_1d0f94:
    // 0x1d0f94: 0x0
    ctx->pc = 0x1d0f94u;
    // NOP
label_1d0f98:
    // 0x1d0f98: 0x86030018
    ctx->pc = 0x1d0f98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_1d0f9c:
    // 0x1d0f9c: 0x2a3a821
    ctx->pc = 0x1d0f9cu;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_1d0fa0:
    // 0x1d0fa0: 0x2b1182a
    ctx->pc = 0x1d0fa0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 17)));
label_1d0fa4:
    // 0x1d0fa4: 0x1460ff9b
label_1d0fa8:
    if (ctx->pc == 0x1D0FA8u) {
        ctx->pc = 0x1D0FA8u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), 3));
        ctx->pc = 0x1D0FACu;
        goto label_1d0fac;
    }
    ctx->pc = 0x1D0FA4u;
    {
        const bool branch_taken_0x1d0fa4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D0FA8u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), 3));
        if (branch_taken_0x1d0fa4) {
            ctx->pc = 0x1D0E14u;
            goto label_1d0e14;
        }
    }
    ctx->pc = 0x1D0FACu;
label_1d0fac:
    // 0x1d0fac: 0x0
    ctx->pc = 0x1d0facu;
    // NOP
label_1d0fb0:
    // 0x1d0fb0: 0x26940001
    ctx->pc = 0x1d0fb0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_1d0fb4:
    // 0x1d0fb4: 0x0
    ctx->pc = 0x1d0fb4u;
    // NOP
label_1d0fb8:
    // 0x1d0fb8: 0x86030018
    ctx->pc = 0x1d0fb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_1d0fbc:
    // 0x1d0fbc: 0x283182a
    ctx->pc = 0x1d0fbcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 3)));
label_1d0fc0:
    // 0x1d0fc0: 0x1460ff91
label_1d0fc4:
    if (ctx->pc == 0x1D0FC4u) {
        ctx->pc = 0x1D0FC4u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 17)));
        ctx->pc = 0x1D0FC8u;
        goto label_1d0fc8;
    }
    ctx->pc = 0x1D0FC0u;
    {
        const bool branch_taken_0x1d0fc0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D0FC4u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 17)));
        if (branch_taken_0x1d0fc0) {
            ctx->pc = 0x1D0E08u;
            goto label_1d0e08;
        }
    }
    ctx->pc = 0x1D0FC8u;
label_1d0fc8:
    // 0x1d0fc8: 0x100003d9
label_1d0fcc:
    if (ctx->pc == 0x1D0FCCu) {
        ctx->pc = 0x1D0FD0u;
        goto label_1d0fd0;
    }
    ctx->pc = 0x1D0FC8u;
    {
        const bool branch_taken_0x1d0fc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d0fc8) {
            ctx->pc = 0x1D1F30u;
            goto label_1d1f30;
        }
    }
    ctx->pc = 0x1D0FD0u;
label_1d0fd0:
    // 0x1d0fd0: 0x1000001d
label_1d0fd4:
    if (ctx->pc == 0x1D0FD4u) {
        ctx->pc = 0x1D0FD4u;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D0FD8u;
        goto label_1d0fd8;
    }
    ctx->pc = 0x1D0FD0u;
    {
        const bool branch_taken_0x1d0fd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D0FD4u;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d0fd0) {
            ctx->pc = 0x1D1048u;
            goto label_1d1048;
        }
    }
    ctx->pc = 0x1D0FD8u;
label_1d0fd8:
    // 0x1d0fd8: 0x10200019
label_1d0fdc:
    if (ctx->pc == 0x1D0FDCu) {
        ctx->pc = 0x1D0FDCu;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D0FE0u;
        goto label_1d0fe0;
    }
    ctx->pc = 0x1D0FD8u;
    {
        const bool branch_taken_0x1d0fd8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D0FDCu;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d0fd8) {
            ctx->pc = 0x1D1040u;
            goto label_1d1040;
        }
    }
    ctx->pc = 0x1D0FE0u;
label_1d0fe0:
    // 0x1d0fe0: 0x141080
    ctx->pc = 0x1d0fe0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
label_1d0fe4:
    // 0x1d0fe4: 0x541021
    ctx->pc = 0x1d0fe4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1d0fe8:
    // 0x1d0fe8: 0x21100
    ctx->pc = 0x1d0fe8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1d0fec:
    // 0x1d0fec: 0x242a821
    ctx->pc = 0x1d0fecu;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1d0ff0:
    // 0x1d0ff0: 0xc6a00030
    ctx->pc = 0x1d0ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0ff4:
    // 0x1d0ff4: 0x27a40080
    ctx->pc = 0x1d0ff4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
label_1d0ff8:
    // 0x1d0ff8: 0x27a50090
    ctx->pc = 0x1d0ff8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
label_1d0ffc:
    // 0x1d0ffc: 0xe7a00080
    ctx->pc = 0x1d0ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1d1000:
    // 0x1d1000: 0xc6a00034
    ctx->pc = 0x1d1000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1004:
    // 0x1d1004: 0xe7a00084
    ctx->pc = 0x1d1004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1d1008:
    // 0x1d1008: 0xc6a00038
    ctx->pc = 0x1d1008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d100c:
    // 0x1d100c: 0xc06bf00
label_1d1010:
    if (ctx->pc == 0x1D1010u) {
        ctx->pc = 0x1D1010u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1D1014u;
        goto label_1d1014;
    }
    ctx->pc = 0x1D100Cu;
    SET_GPR_U32(ctx, 31, 0x1D1014u);
    ctx->pc = 0x1D1010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1014u; }
        else if (ctx->pc != 0x1D1014u) { ctx->pc = 0x1D1014u; }
    }
    if (ctx->pc != 0x1D1014u) { return; }
    ctx->pc = 0x1D1014u;
label_1d1014:
    // 0x1d1014: 0xc7a00090
    ctx->pc = 0x1d1014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1018:
    // 0x1d1018: 0xe6a00000
    ctx->pc = 0x1d1018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_1d101c:
    // 0x1d101c: 0xc7a00094
    ctx->pc = 0x1d101cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1020:
    // 0x1d1020: 0xe6a00004
    ctx->pc = 0x1d1020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
label_1d1024:
    // 0x1d1024: 0xc7a00098
    ctx->pc = 0x1d1024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1028:
    // 0x1d1028: 0xe6a00008
    ctx->pc = 0x1d1028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_1d102c:
    // 0x1d102c: 0x86030018
    ctx->pc = 0x1d102cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_1d1030:
    // 0x1d1030: 0x283a021
    ctx->pc = 0x1d1030u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_1d1034:
    // 0x1d1034: 0x291182a
    ctx->pc = 0x1d1034u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 17)));
label_1d1038:
    // 0x1d1038: 0x5460ffea
label_1d103c:
    if (ctx->pc == 0x1D103Cu) {
        ctx->pc = 0x1D103Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x1D1040u;
        goto label_1d1040;
    }
    ctx->pc = 0x1D1038u;
    {
        const bool branch_taken_0x1d1038 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d1038) {
            ctx->pc = 0x1D103Cu;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
            ctx->pc = 0x1D0FE4u;
            goto label_1d0fe4;
        }
    }
    ctx->pc = 0x1D1040u;
label_1d1040:
    // 0x1d1040: 0x26730001
    ctx->pc = 0x1d1040u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_1d1044:
    // 0x1d1044: 0x0
    ctx->pc = 0x1d1044u;
    // NOP
label_1d1048:
    // 0x1d1048: 0x86030018
    ctx->pc = 0x1d1048u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_1d104c:
    // 0x1d104c: 0x263182a
    ctx->pc = 0x1d104cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 3)));
label_1d1050:
    // 0x1d1050: 0x1460ffe1
label_1d1054:
    if (ctx->pc == 0x1D1054u) {
        ctx->pc = 0x1D1054u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 17)));
        ctx->pc = 0x1D1058u;
        goto label_1d1058;
    }
    ctx->pc = 0x1D1050u;
    {
        const bool branch_taken_0x1d1050 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D1054u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 17)));
        if (branch_taken_0x1d1050) {
            ctx->pc = 0x1D0FD8u;
            goto label_1d0fd8;
        }
    }
    ctx->pc = 0x1D1058u;
label_1d1058:
    // 0x1d1058: 0x100003b5
label_1d105c:
    if (ctx->pc == 0x1D105Cu) {
        ctx->pc = 0x1D1060u;
        goto label_1d1060;
    }
    ctx->pc = 0x1D1058u;
    {
        const bool branch_taken_0x1d1058 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d1058) {
            ctx->pc = 0x1D1F30u;
            goto label_1d1f30;
        }
    }
    ctx->pc = 0x1D1060u;
label_1d1060:
    // 0x1d1060: 0x8f858c48
    ctx->pc = 0x1d1060u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
label_1d1064:
    // 0x1d1064: 0x24030123
    ctx->pc = 0x1d1064u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 291));
label_1d1068:
    // 0x1d1068: 0x84a400d0
    ctx->pc = 0x1d1068u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 208)));
label_1d106c:
    // 0x1d106c: 0x14830014
label_1d1070:
    if (ctx->pc == 0x1D1070u) {
        ctx->pc = 0x1D1070u;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D1074u;
        goto label_1d1074;
    }
    ctx->pc = 0x1D106Cu;
    {
        const bool branch_taken_0x1d106c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1D1070u;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d106c) {
            ctx->pc = 0x1D10C0u;
            goto label_1d10c0;
        }
    }
    ctx->pc = 0x1D1074u;
label_1d1074:
    // 0x1d1074: 0x8ca40004
    ctx->pc = 0x1d1074u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1d1078:
    // 0x1d1078: 0x3c034416
    ctx->pc = 0x1d1078u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17430 << 16));
label_1d107c:
    // 0x1d107c: 0x44830000
    ctx->pc = 0x1d107cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_1d1080:
    // 0x1d1080: 0x41840
    ctx->pc = 0x1d1080u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
label_1d1084:
    // 0x1d1084: 0x641821
    ctx->pc = 0x1d1084u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d1088:
    // 0x1d1088: 0x31880
    ctx->pc = 0x1d1088u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_1d108c:
    // 0x1d108c: 0x641821
    ctx->pc = 0x1d108cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d1090:
    // 0x1d1090: 0x31900
    ctx->pc = 0x1d1090u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
label_1d1094:
    // 0x1d1094: 0x651821
    ctx->pc = 0x1d1094u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1d1098:
    // 0x1d1098: 0xc46100c0
    ctx->pc = 0x1d1098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d109c:
    // 0x1d109c: 0x46000834
    ctx->pc = 0x1d109cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d10a0:
    // 0x1d10a0: 0x0
    ctx->pc = 0x1d10a0u;
    // NOP
label_1d10a4:
    // 0x1d10a4: 0x45010005
label_1d10a8:
    if (ctx->pc == 0x1D10A8u) {
        ctx->pc = 0x1D10A8u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D10ACu;
        goto label_1d10ac;
    }
    ctx->pc = 0x1D10A4u;
    {
        const bool branch_taken_0x1d10a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D10A8u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d10a4) {
            ctx->pc = 0x1D10BCu;
            goto label_1d10bc;
        }
    }
    ctx->pc = 0x1D10ACu;
label_1d10ac:
    // 0x1d10ac: 0xc074ac0
label_1d10b0:
    if (ctx->pc == 0x1D10B0u) {
        ctx->pc = 0x1D10B4u;
        goto label_1d10b4;
    }
    ctx->pc = 0x1D10ACu;
    SET_GPR_U32(ctx, 31, 0x1D10B4u);
    ctx->pc = 0x1D2B00u;
    {
        const uint32_t __entryPc = ctx->pc;
        bos2MantMove__6CClothFv_0x1d2b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D10B4u; }
        else if (ctx->pc != 0x1D10B4u) { ctx->pc = 0x1D10B4u; }
    }
    if (ctx->pc != 0x1D10B4u) { return; }
    ctx->pc = 0x1D10B4u;
label_1d10b4:
    // 0x1d10b4: 0x1000039e
label_1d10b8:
    if (ctx->pc == 0x1D10B8u) {
        ctx->pc = 0x1D10BCu;
        goto label_1d10bc;
    }
    ctx->pc = 0x1D10B4u;
    {
        const bool branch_taken_0x1d10b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d10b4) {
            ctx->pc = 0x1D1F30u;
            goto label_1d1f30;
        }
    }
    ctx->pc = 0x1D10BCu;
label_1d10bc:
    // 0x1d10bc: 0x70009e28
    ctx->pc = 0x1d10bcu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1d10c0:
    // 0x1d10c0: 0x100000d4
label_1d10c4:
    if (ctx->pc == 0x1D10C4u) {
        ctx->pc = 0x1D10C4u;
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->pc = 0x1D10C8u;
        goto label_1d10c8;
    }
    ctx->pc = 0x1D10C0u;
    {
        const bool branch_taken_0x1d10c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D10C4u;
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
        if (branch_taken_0x1d10c0) {
            ctx->pc = 0x1D1414u;
            goto label_1d1414;
        }
    }
    ctx->pc = 0x1D10C8u;
label_1d10c8:
    // 0x1d10c8: 0x102000cf
label_1d10cc:
    if (ctx->pc == 0x1D10CCu) {
        ctx->pc = 0x1D10CCu;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D10D0u;
        goto label_1d10d0;
    }
    ctx->pc = 0x1D10C8u;
    {
        const bool branch_taken_0x1d10c8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D10CCu;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d10c8) {
            ctx->pc = 0x1D1408u;
            goto label_1d1408;
        }
    }
    ctx->pc = 0x1D10D0u;
label_1d10d0:
    // 0x1d10d0: 0x2a610004
    ctx->pc = 0x1d10d0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), 4));
label_1d10d4:
    // 0x1d10d4: 0x10200025
label_1d10d8:
    if (ctx->pc == 0x1D10D8u) {
        ctx->pc = 0x1D10D8u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), 7));
        ctx->pc = 0x1D10DCu;
        goto label_1d10dc;
    }
    ctx->pc = 0x1D10D4u;
    {
        const bool branch_taken_0x1d10d4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D10D8u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), 7));
        if (branch_taken_0x1d10d4) {
            ctx->pc = 0x1D116Cu;
            goto label_1d116c;
        }
    }
    ctx->pc = 0x1D10DCu;
label_1d10dc:
    // 0x1d10dc: 0x141080
    ctx->pc = 0x1d10dcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
label_1d10e0:
    // 0x1d10e0: 0x541021
    ctx->pc = 0x1d10e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1d10e4:
    // 0x1d10e4: 0x21100
    ctx->pc = 0x1d10e4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1d10e8:
    // 0x1d10e8: 0x242a821
    ctx->pc = 0x1d10e8u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1d10ec:
    // 0x1d10ec: 0x3c023f66
    ctx->pc = 0x1d10ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16230 << 16));
label_1d10f0:
    // 0x1d10f0: 0x34426666
    ctx->pc = 0x1d10f0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 26214));
label_1d10f4:
    // 0x1d10f4: 0x44821800
    ctx->pc = 0x1d10f4u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 2);
label_1d10f8:
    // 0x1d10f8: 0xc6a10030
    ctx->pc = 0x1d10f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d10fc:
    // 0x1d10fc: 0x3c023dcc
    ctx->pc = 0x1d10fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)15820 << 16));
label_1d1100:
    // 0x1d1100: 0x3442cccd
    ctx->pc = 0x1d1100u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 52429));
label_1d1104:
    // 0x1d1104: 0xc6a00024
    ctx->pc = 0x1d1104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1108:
    // 0x1d1108: 0x44821000
    ctx->pc = 0x1d1108u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
label_1d110c:
    // 0x1d110c: 0x27a40080
    ctx->pc = 0x1d110cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
label_1d1110:
    // 0x1d1110: 0x4601181a
    ctx->pc = 0x1d1110u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d1114:
    // 0x1d1114: 0x27a50090
    ctx->pc = 0x1d1114u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
label_1d1118:
    // 0x1d1118: 0x4600101c
    ctx->pc = 0x1d1118u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d111c:
    // 0x1d111c: 0xe7a00080
    ctx->pc = 0x1d111cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1d1120:
    // 0x1d1120: 0xc6a10034
    ctx->pc = 0x1d1120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1124:
    // 0x1d1124: 0xc6a00028
    ctx->pc = 0x1d1124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1128:
    // 0x1d1128: 0x4601181a
    ctx->pc = 0x1d1128u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d112c:
    // 0x1d112c: 0x4600101c
    ctx->pc = 0x1d112cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d1130:
    // 0x1d1130: 0xe7a00084
    ctx->pc = 0x1d1130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1d1134:
    // 0x1d1134: 0xc6a10038
    ctx->pc = 0x1d1134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1138:
    // 0x1d1138: 0xc6a0002c
    ctx->pc = 0x1d1138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d113c:
    // 0x1d113c: 0x4601181a
    ctx->pc = 0x1d113cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d1140:
    // 0x1d1140: 0x4600101c
    ctx->pc = 0x1d1140u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d1144:
    // 0x1d1144: 0xc06bf00
label_1d1148:
    if (ctx->pc == 0x1D1148u) {
        ctx->pc = 0x1D1148u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1D114Cu;
        goto label_1d114c;
    }
    ctx->pc = 0x1D1144u;
    SET_GPR_U32(ctx, 31, 0x1D114Cu);
    ctx->pc = 0x1D1148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D114Cu; }
        else if (ctx->pc != 0x1D114Cu) { ctx->pc = 0x1D114Cu; }
    }
    if (ctx->pc != 0x1D114Cu) { return; }
    ctx->pc = 0x1D114Cu;
label_1d114c:
    // 0x1d114c: 0xc7a00090
    ctx->pc = 0x1d114cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1150:
    // 0x1d1150: 0xe6a00000
    ctx->pc = 0x1d1150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_1d1154:
    // 0x1d1154: 0xc7a00094
    ctx->pc = 0x1d1154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1158:
    // 0x1d1158: 0xe6a00004
    ctx->pc = 0x1d1158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
label_1d115c:
    // 0x1d115c: 0xc7a00098
    ctx->pc = 0x1d115cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1160:
    // 0x1d1160: 0x100000a3
label_1d1164:
    if (ctx->pc == 0x1D1164u) {
        ctx->pc = 0x1D1164u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
        ctx->pc = 0x1D1168u;
        goto label_1d1168;
    }
    ctx->pc = 0x1D1160u;
    {
        const bool branch_taken_0x1d1160 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D1164u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
        if (branch_taken_0x1d1160) {
            ctx->pc = 0x1D13F0u;
            goto label_1d13f0;
        }
    }
    ctx->pc = 0x1D1168u;
label_1d1168:
    // 0x1d1168: 0x2a610007
    ctx->pc = 0x1d1168u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), 7));
label_1d116c:
    // 0x1d116c: 0x10200035
label_1d1170:
    if (ctx->pc == 0x1D1170u) {
        ctx->pc = 0x1D1170u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), 10));
        ctx->pc = 0x1D1174u;
        goto label_1d1174;
    }
    ctx->pc = 0x1D116Cu;
    {
        const bool branch_taken_0x1d116c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D1170u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), 10));
        if (branch_taken_0x1d116c) {
            ctx->pc = 0x1D1244u;
            goto label_1d1244;
        }
    }
    ctx->pc = 0x1D1174u;
label_1d1174:
    // 0x1d1174: 0x141080
    ctx->pc = 0x1d1174u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
label_1d1178:
    // 0x1d1178: 0x541021
    ctx->pc = 0x1d1178u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1d117c:
    // 0x1d117c: 0x21100
    ctx->pc = 0x1d117cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1d1180:
    // 0x1d1180: 0x242a821
    ctx->pc = 0x1d1180u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1d1184:
    // 0x1d1184: 0x3c023f33
    ctx->pc = 0x1d1184u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16179 << 16));
label_1d1188:
    // 0x1d1188: 0x34423333
    ctx->pc = 0x1d1188u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 13107));
label_1d118c:
    // 0x1d118c: 0x44821800
    ctx->pc = 0x1d118cu;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 2);
label_1d1190:
    // 0x1d1190: 0xc6a10030
    ctx->pc = 0x1d1190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1194:
    // 0x1d1194: 0x3c023e99
    ctx->pc = 0x1d1194u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16025 << 16));
label_1d1198:
    // 0x1d1198: 0x3442999a
    ctx->pc = 0x1d1198u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39322));
label_1d119c:
    // 0x1d119c: 0xc6a00024
    ctx->pc = 0x1d119cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d11a0:
    // 0x1d11a0: 0x44821000
    ctx->pc = 0x1d11a0u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
label_1d11a4:
    // 0x1d11a4: 0x27a40080
    ctx->pc = 0x1d11a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
label_1d11a8:
    // 0x1d11a8: 0x4601181a
    ctx->pc = 0x1d11a8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d11ac:
    // 0x1d11ac: 0x27a50090
    ctx->pc = 0x1d11acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
label_1d11b0:
    // 0x1d11b0: 0x4600101c
    ctx->pc = 0x1d11b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d11b4:
    // 0x1d11b4: 0xe7a00080
    ctx->pc = 0x1d11b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1d11b8:
    // 0x1d11b8: 0xc6a10034
    ctx->pc = 0x1d11b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d11bc:
    // 0x1d11bc: 0xc6a00028
    ctx->pc = 0x1d11bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d11c0:
    // 0x1d11c0: 0x4601181a
    ctx->pc = 0x1d11c0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d11c4:
    // 0x1d11c4: 0x4600101c
    ctx->pc = 0x1d11c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d11c8:
    // 0x1d11c8: 0xe7a00084
    ctx->pc = 0x1d11c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1d11cc:
    // 0x1d11cc: 0xc6a10038
    ctx->pc = 0x1d11ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d11d0:
    // 0x1d11d0: 0xc6a0002c
    ctx->pc = 0x1d11d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d11d4:
    // 0x1d11d4: 0x4601181a
    ctx->pc = 0x1d11d4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d11d8:
    // 0x1d11d8: 0x4600101c
    ctx->pc = 0x1d11d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d11dc:
    // 0x1d11dc: 0xc06bf00
label_1d11e0:
    if (ctx->pc == 0x1D11E0u) {
        ctx->pc = 0x1D11E0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1D11E4u;
        goto label_1d11e4;
    }
    ctx->pc = 0x1D11DCu;
    SET_GPR_U32(ctx, 31, 0x1D11E4u);
    ctx->pc = 0x1D11E0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D11E4u; }
        else if (ctx->pc != 0x1D11E4u) { ctx->pc = 0x1D11E4u; }
    }
    if (ctx->pc != 0x1D11E4u) { return; }
    ctx->pc = 0x1D11E4u;
label_1d11e4:
    // 0x1d11e4: 0x3c033f19
    ctx->pc = 0x1d11e4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16153 << 16));
label_1d11e8:
    // 0x1d11e8: 0x3463999a
    ctx->pc = 0x1d11e8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 39322));
label_1d11ec:
    // 0x1d11ec: 0x44831800
    ctx->pc = 0x1d11ecu;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 3);
label_1d11f0:
    // 0x1d11f0: 0xc7a10090
    ctx->pc = 0x1d11f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d11f4:
    // 0x1d11f4: 0x3c033ecc
    ctx->pc = 0x1d11f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16076 << 16));
label_1d11f8:
    // 0x1d11f8: 0x3463cccd
    ctx->pc = 0x1d11f8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52429));
label_1d11fc:
    // 0x1d11fc: 0xc6a00000
    ctx->pc = 0x1d11fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1200:
    // 0x1d1200: 0x44831000
    ctx->pc = 0x1d1200u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
label_1d1204:
    // 0x1d1204: 0x0
    ctx->pc = 0x1d1204u;
    // NOP
label_1d1208:
    // 0x1d1208: 0x4601181a
    ctx->pc = 0x1d1208u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d120c:
    // 0x1d120c: 0x4600101c
    ctx->pc = 0x1d120cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d1210:
    // 0x1d1210: 0xe6a00000
    ctx->pc = 0x1d1210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_1d1214:
    // 0x1d1214: 0xc7a10094
    ctx->pc = 0x1d1214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1218:
    // 0x1d1218: 0xc6a00004
    ctx->pc = 0x1d1218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d121c:
    // 0x1d121c: 0x4601181a
    ctx->pc = 0x1d121cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d1220:
    // 0x1d1220: 0x4600101c
    ctx->pc = 0x1d1220u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d1224:
    // 0x1d1224: 0xe6a00004
    ctx->pc = 0x1d1224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
label_1d1228:
    // 0x1d1228: 0xc7a10098
    ctx->pc = 0x1d1228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d122c:
    // 0x1d122c: 0xc6a00008
    ctx->pc = 0x1d122cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1230:
    // 0x1d1230: 0x4601181a
    ctx->pc = 0x1d1230u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d1234:
    // 0x1d1234: 0x4600101c
    ctx->pc = 0x1d1234u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d1238:
    // 0x1d1238: 0x1000006d
label_1d123c:
    if (ctx->pc == 0x1D123Cu) {
        ctx->pc = 0x1D123Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
        ctx->pc = 0x1D1240u;
        goto label_1d1240;
    }
    ctx->pc = 0x1D1238u;
    {
        const bool branch_taken_0x1d1238 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D123Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
        if (branch_taken_0x1d1238) {
            ctx->pc = 0x1D13F0u;
            goto label_1d13f0;
        }
    }
    ctx->pc = 0x1D1240u;
label_1d1240:
    // 0x1d1240: 0x2a61000a
    ctx->pc = 0x1d1240u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), 10));
label_1d1244:
    // 0x1d1244: 0x10200035
label_1d1248:
    if (ctx->pc == 0x1D1248u) {
        ctx->pc = 0x1D1248u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), 15));
        ctx->pc = 0x1D124Cu;
        goto label_1d124c;
    }
    ctx->pc = 0x1D1244u;
    {
        const bool branch_taken_0x1d1244 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D1248u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), 15));
        if (branch_taken_0x1d1244) {
            ctx->pc = 0x1D131Cu;
            goto label_1d131c;
        }
    }
    ctx->pc = 0x1D124Cu;
label_1d124c:
    // 0x1d124c: 0x141080
    ctx->pc = 0x1d124cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
label_1d1250:
    // 0x1d1250: 0x541021
    ctx->pc = 0x1d1250u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1d1254:
    // 0x1d1254: 0x21100
    ctx->pc = 0x1d1254u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1d1258:
    // 0x1d1258: 0x242a821
    ctx->pc = 0x1d1258u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1d125c:
    // 0x1d125c: 0x3c023f66
    ctx->pc = 0x1d125cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16230 << 16));
label_1d1260:
    // 0x1d1260: 0x34426666
    ctx->pc = 0x1d1260u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 26214));
label_1d1264:
    // 0x1d1264: 0x44821800
    ctx->pc = 0x1d1264u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 2);
label_1d1268:
    // 0x1d1268: 0xc6a10030
    ctx->pc = 0x1d1268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d126c:
    // 0x1d126c: 0x3c023dcc
    ctx->pc = 0x1d126cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)15820 << 16));
label_1d1270:
    // 0x1d1270: 0x3442cccd
    ctx->pc = 0x1d1270u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 52429));
label_1d1274:
    // 0x1d1274: 0xc6a00024
    ctx->pc = 0x1d1274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1278:
    // 0x1d1278: 0x44821000
    ctx->pc = 0x1d1278u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
label_1d127c:
    // 0x1d127c: 0x27a40080
    ctx->pc = 0x1d127cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
label_1d1280:
    // 0x1d1280: 0x4601181a
    ctx->pc = 0x1d1280u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d1284:
    // 0x1d1284: 0x27a50090
    ctx->pc = 0x1d1284u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
label_1d1288:
    // 0x1d1288: 0x4600101c
    ctx->pc = 0x1d1288u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d128c:
    // 0x1d128c: 0xe7a00080
    ctx->pc = 0x1d128cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1d1290:
    // 0x1d1290: 0xc6a10034
    ctx->pc = 0x1d1290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1294:
    // 0x1d1294: 0xc6a00028
    ctx->pc = 0x1d1294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1298:
    // 0x1d1298: 0x4601181a
    ctx->pc = 0x1d1298u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d129c:
    // 0x1d129c: 0x4600101c
    ctx->pc = 0x1d129cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d12a0:
    // 0x1d12a0: 0xe7a00084
    ctx->pc = 0x1d12a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1d12a4:
    // 0x1d12a4: 0xc6a10038
    ctx->pc = 0x1d12a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d12a8:
    // 0x1d12a8: 0xc6a0002c
    ctx->pc = 0x1d12a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d12ac:
    // 0x1d12ac: 0x4601181a
    ctx->pc = 0x1d12acu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d12b0:
    // 0x1d12b0: 0x4600101c
    ctx->pc = 0x1d12b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d12b4:
    // 0x1d12b4: 0xc06bf00
label_1d12b8:
    if (ctx->pc == 0x1D12B8u) {
        ctx->pc = 0x1D12B8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1D12BCu;
        goto label_1d12bc;
    }
    ctx->pc = 0x1D12B4u;
    SET_GPR_U32(ctx, 31, 0x1D12BCu);
    ctx->pc = 0x1D12B8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D12BCu; }
        else if (ctx->pc != 0x1D12BCu) { ctx->pc = 0x1D12BCu; }
    }
    if (ctx->pc != 0x1D12BCu) { return; }
    ctx->pc = 0x1D12BCu;
label_1d12bc:
    // 0x1d12bc: 0x3c033d4c
    ctx->pc = 0x1d12bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)15692 << 16));
label_1d12c0:
    // 0x1d12c0: 0x3463cccd
    ctx->pc = 0x1d12c0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52429));
label_1d12c4:
    // 0x1d12c4: 0x44831800
    ctx->pc = 0x1d12c4u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 3);
label_1d12c8:
    // 0x1d12c8: 0xc7a10090
    ctx->pc = 0x1d12c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d12cc:
    // 0x1d12cc: 0x3c033f73
    ctx->pc = 0x1d12ccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16243 << 16));
label_1d12d0:
    // 0x1d12d0: 0x34633333
    ctx->pc = 0x1d12d0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 13107));
label_1d12d4:
    // 0x1d12d4: 0xc6a00000
    ctx->pc = 0x1d12d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d12d8:
    // 0x1d12d8: 0x44831000
    ctx->pc = 0x1d12d8u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
label_1d12dc:
    // 0x1d12dc: 0x0
    ctx->pc = 0x1d12dcu;
    // NOP
label_1d12e0:
    // 0x1d12e0: 0x4601181a
    ctx->pc = 0x1d12e0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d12e4:
    // 0x1d12e4: 0x4600101c
    ctx->pc = 0x1d12e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d12e8:
    // 0x1d12e8: 0xe6a00000
    ctx->pc = 0x1d12e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_1d12ec:
    // 0x1d12ec: 0xc7a10094
    ctx->pc = 0x1d12ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d12f0:
    // 0x1d12f0: 0xc6a00004
    ctx->pc = 0x1d12f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d12f4:
    // 0x1d12f4: 0x4601181a
    ctx->pc = 0x1d12f4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d12f8:
    // 0x1d12f8: 0x4600101c
    ctx->pc = 0x1d12f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d12fc:
    // 0x1d12fc: 0xe6a00004
    ctx->pc = 0x1d12fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
label_1d1300:
    // 0x1d1300: 0xc7a10098
    ctx->pc = 0x1d1300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1304:
    // 0x1d1304: 0xc6a00008
    ctx->pc = 0x1d1304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1308:
    // 0x1d1308: 0x4601181a
    ctx->pc = 0x1d1308u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d130c:
    // 0x1d130c: 0x4600101c
    ctx->pc = 0x1d130cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d1310:
    // 0x1d1310: 0x10000037
label_1d1314:
    if (ctx->pc == 0x1D1314u) {
        ctx->pc = 0x1D1314u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
        ctx->pc = 0x1D1318u;
        goto label_1d1318;
    }
    ctx->pc = 0x1D1310u;
    {
        const bool branch_taken_0x1d1310 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D1314u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
        if (branch_taken_0x1d1310) {
            ctx->pc = 0x1D13F0u;
            goto label_1d13f0;
        }
    }
    ctx->pc = 0x1D1318u;
label_1d1318:
    // 0x1d1318: 0x2a61000f
    ctx->pc = 0x1d1318u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), 15));
label_1d131c:
    // 0x1d131c: 0x10200034
label_1d1320:
    if (ctx->pc == 0x1D1320u) {
        ctx->pc = 0x1D1324u;
        goto label_1d1324;
    }
    ctx->pc = 0x1D131Cu;
    {
        const bool branch_taken_0x1d131c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d131c) {
            ctx->pc = 0x1D13F0u;
            goto label_1d13f0;
        }
    }
    ctx->pc = 0x1D1324u;
label_1d1324:
    // 0x1d1324: 0x141080
    ctx->pc = 0x1d1324u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
label_1d1328:
    // 0x1d1328: 0x541021
    ctx->pc = 0x1d1328u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1d132c:
    // 0x1d132c: 0x21100
    ctx->pc = 0x1d132cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1d1330:
    // 0x1d1330: 0x242a821
    ctx->pc = 0x1d1330u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1d1334:
    // 0x1d1334: 0x3c023f66
    ctx->pc = 0x1d1334u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16230 << 16));
label_1d1338:
    // 0x1d1338: 0x34426666
    ctx->pc = 0x1d1338u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 26214));
label_1d133c:
    // 0x1d133c: 0x44821800
    ctx->pc = 0x1d133cu;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 2);
label_1d1340:
    // 0x1d1340: 0xc6a10030
    ctx->pc = 0x1d1340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1344:
    // 0x1d1344: 0x3c023dcc
    ctx->pc = 0x1d1344u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15820 << 16));
label_1d1348:
    // 0x1d1348: 0x3442cccd
    ctx->pc = 0x1d1348u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 52429));
label_1d134c:
    // 0x1d134c: 0xc6a00024
    ctx->pc = 0x1d134cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1350:
    // 0x1d1350: 0x44821000
    ctx->pc = 0x1d1350u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
label_1d1354:
    // 0x1d1354: 0x27a40080
    ctx->pc = 0x1d1354u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
label_1d1358:
    // 0x1d1358: 0x4601181a
    ctx->pc = 0x1d1358u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d135c:
    // 0x1d135c: 0x27a50090
    ctx->pc = 0x1d135cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
label_1d1360:
    // 0x1d1360: 0x4600101c
    ctx->pc = 0x1d1360u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d1364:
    // 0x1d1364: 0xe7a00080
    ctx->pc = 0x1d1364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1d1368:
    // 0x1d1368: 0xc6a10034
    ctx->pc = 0x1d1368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d136c:
    // 0x1d136c: 0xc6a00028
    ctx->pc = 0x1d136cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1370:
    // 0x1d1370: 0x4601181a
    ctx->pc = 0x1d1370u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d1374:
    // 0x1d1374: 0x4600101c
    ctx->pc = 0x1d1374u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d1378:
    // 0x1d1378: 0xe7a00084
    ctx->pc = 0x1d1378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1d137c:
    // 0x1d137c: 0xc6a10038
    ctx->pc = 0x1d137cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1380:
    // 0x1d1380: 0xc6a0002c
    ctx->pc = 0x1d1380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1384:
    // 0x1d1384: 0x4601181a
    ctx->pc = 0x1d1384u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d1388:
    // 0x1d1388: 0x4600101c
    ctx->pc = 0x1d1388u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d138c:
    // 0x1d138c: 0xc06bf00
label_1d1390:
    if (ctx->pc == 0x1D1390u) {
        ctx->pc = 0x1D1390u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1D1394u;
        goto label_1d1394;
    }
    ctx->pc = 0x1D138Cu;
    SET_GPR_U32(ctx, 31, 0x1D1394u);
    ctx->pc = 0x1D1390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1394u; }
        else if (ctx->pc != 0x1D1394u) { ctx->pc = 0x1D1394u; }
    }
    if (ctx->pc != 0x1D1394u) { return; }
    ctx->pc = 0x1D1394u;
label_1d1394:
    // 0x1d1394: 0x3c033ba3
    ctx->pc = 0x1d1394u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15267 << 16));
label_1d1398:
    // 0x1d1398: 0x3463d70a
    ctx->pc = 0x1d1398u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 55050));
label_1d139c:
    // 0x1d139c: 0x44831800
    ctx->pc = 0x1d139cu;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 3);
label_1d13a0:
    // 0x1d13a0: 0xc7a10090
    ctx->pc = 0x1d13a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d13a4:
    // 0x1d13a4: 0x3c033f7e
    ctx->pc = 0x1d13a4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16254 << 16));
label_1d13a8:
    // 0x1d13a8: 0x3463b852
    ctx->pc = 0x1d13a8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 47186));
label_1d13ac:
    // 0x1d13ac: 0xc6a00000
    ctx->pc = 0x1d13acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d13b0:
    // 0x1d13b0: 0x44831000
    ctx->pc = 0x1d13b0u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
label_1d13b4:
    // 0x1d13b4: 0x0
    ctx->pc = 0x1d13b4u;
    // NOP
label_1d13b8:
    // 0x1d13b8: 0x4601181a
    ctx->pc = 0x1d13b8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d13bc:
    // 0x1d13bc: 0x4600101c
    ctx->pc = 0x1d13bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d13c0:
    // 0x1d13c0: 0xe6a00000
    ctx->pc = 0x1d13c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_1d13c4:
    // 0x1d13c4: 0xc7a10094
    ctx->pc = 0x1d13c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d13c8:
    // 0x1d13c8: 0xc6a00004
    ctx->pc = 0x1d13c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d13cc:
    // 0x1d13cc: 0x4601181a
    ctx->pc = 0x1d13ccu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d13d0:
    // 0x1d13d0: 0x4600101c
    ctx->pc = 0x1d13d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d13d4:
    // 0x1d13d4: 0xe6a00004
    ctx->pc = 0x1d13d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
label_1d13d8:
    // 0x1d13d8: 0xc7a10098
    ctx->pc = 0x1d13d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d13dc:
    // 0x1d13dc: 0xc6a00008
    ctx->pc = 0x1d13dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d13e0:
    // 0x1d13e0: 0x4601181a
    ctx->pc = 0x1d13e0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d13e4:
    // 0x1d13e4: 0x4600101c
    ctx->pc = 0x1d13e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d13e8:
    // 0x1d13e8: 0xe6a00008
    ctx->pc = 0x1d13e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_1d13ec:
    // 0x1d13ec: 0x0
    ctx->pc = 0x1d13ecu;
    // NOP
label_1d13f0:
    // 0x1d13f0: 0x86030018
    ctx->pc = 0x1d13f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_1d13f4:
    // 0x1d13f4: 0x283a021
    ctx->pc = 0x1d13f4u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_1d13f8:
    // 0x1d13f8: 0x291182a
    ctx->pc = 0x1d13f8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 17)));
label_1d13fc:
    // 0x1d13fc: 0x1460ff35
label_1d1400:
    if (ctx->pc == 0x1D1400u) {
        ctx->pc = 0x1D1400u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), 4));
        ctx->pc = 0x1D1404u;
        goto label_1d1404;
    }
    ctx->pc = 0x1D13FCu;
    {
        const bool branch_taken_0x1d13fc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D1400u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), 4));
        if (branch_taken_0x1d13fc) {
            ctx->pc = 0x1D10D4u;
            goto label_1d10d4;
        }
    }
    ctx->pc = 0x1D1404u;
label_1d1404:
    // 0x1d1404: 0x0
    ctx->pc = 0x1d1404u;
    // NOP
label_1d1408:
    // 0x1d1408: 0x26730001
    ctx->pc = 0x1d1408u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_1d140c:
    // 0x1d140c: 0x0
    ctx->pc = 0x1d140cu;
    // NOP
label_1d1410:
    // 0x1d1410: 0x86030018
    ctx->pc = 0x1d1410u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_1d1414:
    // 0x1d1414: 0x263182a
    ctx->pc = 0x1d1414u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 3)));
label_1d1418:
    // 0x1d1418: 0x1460ff2b
label_1d141c:
    if (ctx->pc == 0x1D141Cu) {
        ctx->pc = 0x1D141Cu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 17)));
        ctx->pc = 0x1D1420u;
        goto label_1d1420;
    }
    ctx->pc = 0x1D1418u;
    {
        const bool branch_taken_0x1d1418 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D141Cu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 17)));
        if (branch_taken_0x1d1418) {
            ctx->pc = 0x1D10C8u;
            goto label_1d10c8;
        }
    }
    ctx->pc = 0x1D1420u;
label_1d1420:
    // 0x1d1420: 0x100002c3
label_1d1424:
    if (ctx->pc == 0x1D1424u) {
        ctx->pc = 0x1D1428u;
        goto label_1d1428;
    }
    ctx->pc = 0x1D1420u;
    {
        const bool branch_taken_0x1d1420 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d1420) {
            ctx->pc = 0x1D1F30u;
            goto label_1d1f30;
        }
    }
    ctx->pc = 0x1D1428u;
label_1d1428:
    // 0x1d1428: 0x1000006d
label_1d142c:
    if (ctx->pc == 0x1D142Cu) {
        ctx->pc = 0x1D142Cu;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D1430u;
        goto label_1d1430;
    }
    ctx->pc = 0x1D1428u;
    {
        const bool branch_taken_0x1d1428 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D142Cu;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d1428) {
            ctx->pc = 0x1D15E0u;
            goto label_1d15e0;
        }
    }
    ctx->pc = 0x1D1430u;
label_1d1430:
    // 0x1d1430: 0x10200069
label_1d1434:
    if (ctx->pc == 0x1D1434u) {
        ctx->pc = 0x1D1434u;
        SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D1438u;
        goto label_1d1438;
    }
    ctx->pc = 0x1D1430u;
    {
        const bool branch_taken_0x1d1430 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D1434u;
        SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d1430) {
            ctx->pc = 0x1D15D8u;
            goto label_1d15d8;
        }
    }
    ctx->pc = 0x1D1438u;
label_1d1438:
    // 0x1d1438: 0x2a810003
    ctx->pc = 0x1d1438u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), 3));
label_1d143c:
    // 0x1d143c: 0x10200016
label_1d1440:
    if (ctx->pc == 0x1D1440u) {
        ctx->pc = 0x1D1440u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), 8));
        ctx->pc = 0x1D1444u;
        goto label_1d1444;
    }
    ctx->pc = 0x1D143Cu;
    {
        const bool branch_taken_0x1d143c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D1440u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), 8));
        if (branch_taken_0x1d143c) {
            ctx->pc = 0x1D1498u;
            goto label_1d1498;
        }
    }
    ctx->pc = 0x1D1444u;
label_1d1444:
    // 0x1d1444: 0x151080
    ctx->pc = 0x1d1444u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
label_1d1448:
    // 0x1d1448: 0x551021
    ctx->pc = 0x1d1448u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1d144c:
    // 0x1d144c: 0x21100
    ctx->pc = 0x1d144cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1d1450:
    // 0x1d1450: 0x2429821
    ctx->pc = 0x1d1450u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1d1454:
    // 0x1d1454: 0xc6600030
    ctx->pc = 0x1d1454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1458:
    // 0x1d1458: 0x27a40080
    ctx->pc = 0x1d1458u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
label_1d145c:
    // 0x1d145c: 0x27a50090
    ctx->pc = 0x1d145cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
label_1d1460:
    // 0x1d1460: 0xe7a00080
    ctx->pc = 0x1d1460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1d1464:
    // 0x1d1464: 0xc6600034
    ctx->pc = 0x1d1464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1468:
    // 0x1d1468: 0xe7a00084
    ctx->pc = 0x1d1468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1d146c:
    // 0x1d146c: 0xc6600038
    ctx->pc = 0x1d146cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1470:
    // 0x1d1470: 0xc06bf00
label_1d1474:
    if (ctx->pc == 0x1D1474u) {
        ctx->pc = 0x1D1474u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1D1478u;
        goto label_1d1478;
    }
    ctx->pc = 0x1D1470u;
    SET_GPR_U32(ctx, 31, 0x1D1478u);
    ctx->pc = 0x1D1474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1478u; }
        else if (ctx->pc != 0x1D1478u) { ctx->pc = 0x1D1478u; }
    }
    if (ctx->pc != 0x1D1478u) { return; }
    ctx->pc = 0x1D1478u;
label_1d1478:
    // 0x1d1478: 0xc7a00090
    ctx->pc = 0x1d1478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d147c:
    // 0x1d147c: 0xe6600000
    ctx->pc = 0x1d147cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_1d1480:
    // 0x1d1480: 0xc7a00094
    ctx->pc = 0x1d1480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1484:
    // 0x1d1484: 0xe6600004
    ctx->pc = 0x1d1484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_1d1488:
    // 0x1d1488: 0xc7a00098
    ctx->pc = 0x1d1488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d148c:
    // 0x1d148c: 0x1000004c
label_1d1490:
    if (ctx->pc == 0x1D1490u) {
        ctx->pc = 0x1D1490u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        ctx->pc = 0x1D1494u;
        goto label_1d1494;
    }
    ctx->pc = 0x1D148Cu;
    {
        const bool branch_taken_0x1d148c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D1490u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        if (branch_taken_0x1d148c) {
            ctx->pc = 0x1D15C0u;
            goto label_1d15c0;
        }
    }
    ctx->pc = 0x1D1494u;
label_1d1494:
    // 0x1d1494: 0x2a810008
    ctx->pc = 0x1d1494u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), 8));
label_1d1498:
    // 0x1d1498: 0x10200026
label_1d149c:
    if (ctx->pc == 0x1D149Cu) {
        ctx->pc = 0x1D149Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
        ctx->pc = 0x1D14A0u;
        goto label_1d14a0;
    }
    ctx->pc = 0x1D1498u;
    {
        const bool branch_taken_0x1d1498 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D149Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
        if (branch_taken_0x1d1498) {
            ctx->pc = 0x1D1534u;
            goto label_1d1534;
        }
    }
    ctx->pc = 0x1D14A0u;
label_1d14a0:
    // 0x1d14a0: 0x151080
    ctx->pc = 0x1d14a0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
label_1d14a4:
    // 0x1d14a4: 0x551021
    ctx->pc = 0x1d14a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1d14a8:
    // 0x1d14a8: 0x21100
    ctx->pc = 0x1d14a8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1d14ac:
    // 0x1d14ac: 0x2429821
    ctx->pc = 0x1d14acu;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1d14b0:
    // 0x1d14b0: 0xc6600030
    ctx->pc = 0x1d14b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d14b4:
    // 0x1d14b4: 0x27a40080
    ctx->pc = 0x1d14b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
label_1d14b8:
    // 0x1d14b8: 0x27a50090
    ctx->pc = 0x1d14b8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
label_1d14bc:
    // 0x1d14bc: 0xe7a00080
    ctx->pc = 0x1d14bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1d14c0:
    // 0x1d14c0: 0xc6600034
    ctx->pc = 0x1d14c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d14c4:
    // 0x1d14c4: 0xe7a00084
    ctx->pc = 0x1d14c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1d14c8:
    // 0x1d14c8: 0xc6600038
    ctx->pc = 0x1d14c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d14cc:
    // 0x1d14cc: 0xc06bf00
label_1d14d0:
    if (ctx->pc == 0x1D14D0u) {
        ctx->pc = 0x1D14D0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1D14D4u;
        goto label_1d14d4;
    }
    ctx->pc = 0x1D14CCu;
    SET_GPR_U32(ctx, 31, 0x1D14D4u);
    ctx->pc = 0x1D14D0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D14D4u; }
        else if (ctx->pc != 0x1D14D4u) { ctx->pc = 0x1D14D4u; }
    }
    if (ctx->pc != 0x1D14D4u) { return; }
    ctx->pc = 0x1D14D4u;
label_1d14d4:
    // 0x1d14d4: 0x3c033ecc
    ctx->pc = 0x1d14d4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16076 << 16));
label_1d14d8:
    // 0x1d14d8: 0x3463cccd
    ctx->pc = 0x1d14d8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52429));
label_1d14dc:
    // 0x1d14dc: 0x44831800
    ctx->pc = 0x1d14dcu;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 3);
label_1d14e0:
    // 0x1d14e0: 0xc7a10090
    ctx->pc = 0x1d14e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d14e4:
    // 0x1d14e4: 0x3c033f19
    ctx->pc = 0x1d14e4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16153 << 16));
label_1d14e8:
    // 0x1d14e8: 0x3463999a
    ctx->pc = 0x1d14e8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 39322));
label_1d14ec:
    // 0x1d14ec: 0xc6600000
    ctx->pc = 0x1d14ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d14f0:
    // 0x1d14f0: 0x44831000
    ctx->pc = 0x1d14f0u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
label_1d14f4:
    // 0x1d14f4: 0x0
    ctx->pc = 0x1d14f4u;
    // NOP
label_1d14f8:
    // 0x1d14f8: 0x4601181a
    ctx->pc = 0x1d14f8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d14fc:
    // 0x1d14fc: 0x4600101c
    ctx->pc = 0x1d14fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d1500:
    // 0x1d1500: 0xe6600000
    ctx->pc = 0x1d1500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_1d1504:
    // 0x1d1504: 0xc7a10094
    ctx->pc = 0x1d1504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1508:
    // 0x1d1508: 0xc6600004
    ctx->pc = 0x1d1508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d150c:
    // 0x1d150c: 0x4601181a
    ctx->pc = 0x1d150cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d1510:
    // 0x1d1510: 0x4600101c
    ctx->pc = 0x1d1510u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d1514:
    // 0x1d1514: 0xe6600004
    ctx->pc = 0x1d1514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_1d1518:
    // 0x1d1518: 0xc7a10098
    ctx->pc = 0x1d1518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d151c:
    // 0x1d151c: 0xc6600008
    ctx->pc = 0x1d151cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1520:
    // 0x1d1520: 0x4601181a
    ctx->pc = 0x1d1520u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d1524:
    // 0x1d1524: 0x4600101c
    ctx->pc = 0x1d1524u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d1528:
    // 0x1d1528: 0x10000025
label_1d152c:
    if (ctx->pc == 0x1D152Cu) {
        ctx->pc = 0x1D152Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        ctx->pc = 0x1D1530u;
        goto label_1d1530;
    }
    ctx->pc = 0x1D1528u;
    {
        const bool branch_taken_0x1d1528 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D152Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        if (branch_taken_0x1d1528) {
            ctx->pc = 0x1D15C0u;
            goto label_1d15c0;
        }
    }
    ctx->pc = 0x1D1530u;
label_1d1530:
    // 0x1d1530: 0x151080
    ctx->pc = 0x1d1530u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
label_1d1534:
    // 0x1d1534: 0x551021
    ctx->pc = 0x1d1534u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1d1538:
    // 0x1d1538: 0x21100
    ctx->pc = 0x1d1538u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1d153c:
    // 0x1d153c: 0x2429821
    ctx->pc = 0x1d153cu;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1d1540:
    // 0x1d1540: 0xc6600030
    ctx->pc = 0x1d1540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1544:
    // 0x1d1544: 0x27a40080
    ctx->pc = 0x1d1544u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
label_1d1548:
    // 0x1d1548: 0x27a50090
    ctx->pc = 0x1d1548u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
label_1d154c:
    // 0x1d154c: 0xe7a00080
    ctx->pc = 0x1d154cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1d1550:
    // 0x1d1550: 0xc6600034
    ctx->pc = 0x1d1550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1554:
    // 0x1d1554: 0xe7a00084
    ctx->pc = 0x1d1554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1d1558:
    // 0x1d1558: 0xc6600038
    ctx->pc = 0x1d1558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d155c:
    // 0x1d155c: 0xc06bf00
label_1d1560:
    if (ctx->pc == 0x1D1560u) {
        ctx->pc = 0x1D1560u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1D1564u;
        goto label_1d1564;
    }
    ctx->pc = 0x1D155Cu;
    SET_GPR_U32(ctx, 31, 0x1D1564u);
    ctx->pc = 0x1D1560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1564u; }
        else if (ctx->pc != 0x1D1564u) { ctx->pc = 0x1D1564u; }
    }
    if (ctx->pc != 0x1D1564u) { return; }
    ctx->pc = 0x1D1564u;
label_1d1564:
    // 0x1d1564: 0x3c033c23
    ctx->pc = 0x1d1564u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15395 << 16));
label_1d1568:
    // 0x1d1568: 0x3463d70a
    ctx->pc = 0x1d1568u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 55050));
label_1d156c:
    // 0x1d156c: 0x44831800
    ctx->pc = 0x1d156cu;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 3);
label_1d1570:
    // 0x1d1570: 0xc7a10090
    ctx->pc = 0x1d1570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1574:
    // 0x1d1574: 0x3c033f7d
    ctx->pc = 0x1d1574u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16253 << 16));
label_1d1578:
    // 0x1d1578: 0x346370a4
    ctx->pc = 0x1d1578u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 28836));
label_1d157c:
    // 0x1d157c: 0xc6600000
    ctx->pc = 0x1d157cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1580:
    // 0x1d1580: 0x44831000
    ctx->pc = 0x1d1580u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
label_1d1584:
    // 0x1d1584: 0x0
    ctx->pc = 0x1d1584u;
    // NOP
label_1d1588:
    // 0x1d1588: 0x4601181a
    ctx->pc = 0x1d1588u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d158c:
    // 0x1d158c: 0x4600101c
    ctx->pc = 0x1d158cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d1590:
    // 0x1d1590: 0xe6600000
    ctx->pc = 0x1d1590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_1d1594:
    // 0x1d1594: 0xc7a10094
    ctx->pc = 0x1d1594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1598:
    // 0x1d1598: 0xc6600004
    ctx->pc = 0x1d1598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d159c:
    // 0x1d159c: 0x4601181a
    ctx->pc = 0x1d159cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d15a0:
    // 0x1d15a0: 0x4600101c
    ctx->pc = 0x1d15a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d15a4:
    // 0x1d15a4: 0xe6600004
    ctx->pc = 0x1d15a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_1d15a8:
    // 0x1d15a8: 0xc7a10098
    ctx->pc = 0x1d15a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d15ac:
    // 0x1d15ac: 0xc6600008
    ctx->pc = 0x1d15acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d15b0:
    // 0x1d15b0: 0x4601181a
    ctx->pc = 0x1d15b0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d15b4:
    // 0x1d15b4: 0x4600101c
    ctx->pc = 0x1d15b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d15b8:
    // 0x1d15b8: 0xe6600008
    ctx->pc = 0x1d15b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_1d15bc:
    // 0x1d15bc: 0x0
    ctx->pc = 0x1d15bcu;
    // NOP
label_1d15c0:
    // 0x1d15c0: 0x86030018
    ctx->pc = 0x1d15c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_1d15c4:
    // 0x1d15c4: 0x2a3a821
    ctx->pc = 0x1d15c4u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_1d15c8:
    // 0x1d15c8: 0x2b1182a
    ctx->pc = 0x1d15c8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 17)));
label_1d15cc:
    // 0x1d15cc: 0x1460ff9b
label_1d15d0:
    if (ctx->pc == 0x1D15D0u) {
        ctx->pc = 0x1D15D0u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), 3));
        ctx->pc = 0x1D15D4u;
        goto label_1d15d4;
    }
    ctx->pc = 0x1D15CCu;
    {
        const bool branch_taken_0x1d15cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D15D0u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), 3));
        if (branch_taken_0x1d15cc) {
            ctx->pc = 0x1D143Cu;
            goto label_1d143c;
        }
    }
    ctx->pc = 0x1D15D4u;
label_1d15d4:
    // 0x1d15d4: 0x0
    ctx->pc = 0x1d15d4u;
    // NOP
label_1d15d8:
    // 0x1d15d8: 0x26940001
    ctx->pc = 0x1d15d8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_1d15dc:
    // 0x1d15dc: 0x0
    ctx->pc = 0x1d15dcu;
    // NOP
label_1d15e0:
    // 0x1d15e0: 0x86030018
    ctx->pc = 0x1d15e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_1d15e4:
    // 0x1d15e4: 0x283182a
    ctx->pc = 0x1d15e4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 3)));
label_1d15e8:
    // 0x1d15e8: 0x1460ff91
label_1d15ec:
    if (ctx->pc == 0x1D15ECu) {
        ctx->pc = 0x1D15ECu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 17)));
        ctx->pc = 0x1D15F0u;
        goto label_1d15f0;
    }
    ctx->pc = 0x1D15E8u;
    {
        const bool branch_taken_0x1d15e8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D15ECu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 17)));
        if (branch_taken_0x1d15e8) {
            ctx->pc = 0x1D1430u;
            goto label_1d1430;
        }
    }
    ctx->pc = 0x1D15F0u;
label_1d15f0:
    // 0x1d15f0: 0x1000024f
label_1d15f4:
    if (ctx->pc == 0x1D15F4u) {
        ctx->pc = 0x1D15F8u;
        goto label_1d15f8;
    }
    ctx->pc = 0x1D15F0u;
    {
        const bool branch_taken_0x1d15f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d15f0) {
            ctx->pc = 0x1D1F30u;
            goto label_1d1f30;
        }
    }
    ctx->pc = 0x1D15F8u;
label_1d15f8:
    // 0x1d15f8: 0x1000006d
label_1d15fc:
    if (ctx->pc == 0x1D15FCu) {
        ctx->pc = 0x1D15FCu;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D1600u;
        goto label_1d1600;
    }
    ctx->pc = 0x1D15F8u;
    {
        const bool branch_taken_0x1d15f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D15FCu;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d15f8) {
            ctx->pc = 0x1D17B0u;
            goto label_1d17b0;
        }
    }
    ctx->pc = 0x1D1600u;
label_1d1600:
    // 0x1d1600: 0x10200069
label_1d1604:
    if (ctx->pc == 0x1D1604u) {
        ctx->pc = 0x1D1604u;
        SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D1608u;
        goto label_1d1608;
    }
    ctx->pc = 0x1D1600u;
    {
        const bool branch_taken_0x1d1600 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D1604u;
        SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d1600) {
            ctx->pc = 0x1D17A8u;
            goto label_1d17a8;
        }
    }
    ctx->pc = 0x1D1608u;
label_1d1608:
    // 0x1d1608: 0x2a810006
    ctx->pc = 0x1d1608u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), 6));
label_1d160c:
    // 0x1d160c: 0x10200016
label_1d1610:
    if (ctx->pc == 0x1D1610u) {
        ctx->pc = 0x1D1610u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), 7));
        ctx->pc = 0x1D1614u;
        goto label_1d1614;
    }
    ctx->pc = 0x1D160Cu;
    {
        const bool branch_taken_0x1d160c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D1610u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), 7));
        if (branch_taken_0x1d160c) {
            ctx->pc = 0x1D1668u;
            goto label_1d1668;
        }
    }
    ctx->pc = 0x1D1614u;
label_1d1614:
    // 0x1d1614: 0x151080
    ctx->pc = 0x1d1614u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
label_1d1618:
    // 0x1d1618: 0x551021
    ctx->pc = 0x1d1618u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1d161c:
    // 0x1d161c: 0x21100
    ctx->pc = 0x1d161cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1d1620:
    // 0x1d1620: 0x2429821
    ctx->pc = 0x1d1620u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1d1624:
    // 0x1d1624: 0xc6600030
    ctx->pc = 0x1d1624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1628:
    // 0x1d1628: 0x27a40080
    ctx->pc = 0x1d1628u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
label_1d162c:
    // 0x1d162c: 0x27a50090
    ctx->pc = 0x1d162cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
label_1d1630:
    // 0x1d1630: 0xe7a00080
    ctx->pc = 0x1d1630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1d1634:
    // 0x1d1634: 0xc6600034
    ctx->pc = 0x1d1634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1638:
    // 0x1d1638: 0xe7a00084
    ctx->pc = 0x1d1638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1d163c:
    // 0x1d163c: 0xc6600038
    ctx->pc = 0x1d163cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1640:
    // 0x1d1640: 0xc06bf00
label_1d1644:
    if (ctx->pc == 0x1D1644u) {
        ctx->pc = 0x1D1644u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1D1648u;
        goto label_1d1648;
    }
    ctx->pc = 0x1D1640u;
    SET_GPR_U32(ctx, 31, 0x1D1648u);
    ctx->pc = 0x1D1644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1648u; }
        else if (ctx->pc != 0x1D1648u) { ctx->pc = 0x1D1648u; }
    }
    if (ctx->pc != 0x1D1648u) { return; }
    ctx->pc = 0x1D1648u;
label_1d1648:
    // 0x1d1648: 0xc7a00090
    ctx->pc = 0x1d1648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d164c:
    // 0x1d164c: 0xe6600000
    ctx->pc = 0x1d164cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_1d1650:
    // 0x1d1650: 0xc7a00094
    ctx->pc = 0x1d1650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1654:
    // 0x1d1654: 0xe6600004
    ctx->pc = 0x1d1654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_1d1658:
    // 0x1d1658: 0xc7a00098
    ctx->pc = 0x1d1658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d165c:
    // 0x1d165c: 0x1000004c
label_1d1660:
    if (ctx->pc == 0x1D1660u) {
        ctx->pc = 0x1D1660u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        ctx->pc = 0x1D1664u;
        goto label_1d1664;
    }
    ctx->pc = 0x1D165Cu;
    {
        const bool branch_taken_0x1d165c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D1660u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        if (branch_taken_0x1d165c) {
            ctx->pc = 0x1D1790u;
            goto label_1d1790;
        }
    }
    ctx->pc = 0x1D1664u;
label_1d1664:
    // 0x1d1664: 0x2a810007
    ctx->pc = 0x1d1664u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), 7));
label_1d1668:
    // 0x1d1668: 0x10200026
label_1d166c:
    if (ctx->pc == 0x1D166Cu) {
        ctx->pc = 0x1D166Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
        ctx->pc = 0x1D1670u;
        goto label_1d1670;
    }
    ctx->pc = 0x1D1668u;
    {
        const bool branch_taken_0x1d1668 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D166Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
        if (branch_taken_0x1d1668) {
            ctx->pc = 0x1D1704u;
            goto label_1d1704;
        }
    }
    ctx->pc = 0x1D1670u;
label_1d1670:
    // 0x1d1670: 0x151080
    ctx->pc = 0x1d1670u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
label_1d1674:
    // 0x1d1674: 0x551021
    ctx->pc = 0x1d1674u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1d1678:
    // 0x1d1678: 0x21100
    ctx->pc = 0x1d1678u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1d167c:
    // 0x1d167c: 0x2429821
    ctx->pc = 0x1d167cu;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1d1680:
    // 0x1d1680: 0xc6600030
    ctx->pc = 0x1d1680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1684:
    // 0x1d1684: 0x27a40080
    ctx->pc = 0x1d1684u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
label_1d1688:
    // 0x1d1688: 0x27a50090
    ctx->pc = 0x1d1688u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
label_1d168c:
    // 0x1d168c: 0xe7a00080
    ctx->pc = 0x1d168cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1d1690:
    // 0x1d1690: 0xc6600034
    ctx->pc = 0x1d1690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1694:
    // 0x1d1694: 0xe7a00084
    ctx->pc = 0x1d1694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1d1698:
    // 0x1d1698: 0xc6600038
    ctx->pc = 0x1d1698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d169c:
    // 0x1d169c: 0xc06bf00
label_1d16a0:
    if (ctx->pc == 0x1D16A0u) {
        ctx->pc = 0x1D16A0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1D16A4u;
        goto label_1d16a4;
    }
    ctx->pc = 0x1D169Cu;
    SET_GPR_U32(ctx, 31, 0x1D16A4u);
    ctx->pc = 0x1D16A0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D16A4u; }
        else if (ctx->pc != 0x1D16A4u) { ctx->pc = 0x1D16A4u; }
    }
    if (ctx->pc != 0x1D16A4u) { return; }
    ctx->pc = 0x1D16A4u;
label_1d16a4:
    // 0x1d16a4: 0x3c033e4c
    ctx->pc = 0x1d16a4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15948 << 16));
label_1d16a8:
    // 0x1d16a8: 0x3463cccd
    ctx->pc = 0x1d16a8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52429));
label_1d16ac:
    // 0x1d16ac: 0x44831800
    ctx->pc = 0x1d16acu;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 3);
label_1d16b0:
    // 0x1d16b0: 0xc7a10090
    ctx->pc = 0x1d16b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d16b4:
    // 0x1d16b4: 0x3c033f4c
    ctx->pc = 0x1d16b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16204 << 16));
label_1d16b8:
    // 0x1d16b8: 0x3463cccd
    ctx->pc = 0x1d16b8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52429));
label_1d16bc:
    // 0x1d16bc: 0xc6600000
    ctx->pc = 0x1d16bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d16c0:
    // 0x1d16c0: 0x44831000
    ctx->pc = 0x1d16c0u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
label_1d16c4:
    // 0x1d16c4: 0x0
    ctx->pc = 0x1d16c4u;
    // NOP
label_1d16c8:
    // 0x1d16c8: 0x4601181a
    ctx->pc = 0x1d16c8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d16cc:
    // 0x1d16cc: 0x4600101c
    ctx->pc = 0x1d16ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d16d0:
    // 0x1d16d0: 0xe6600000
    ctx->pc = 0x1d16d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_1d16d4:
    // 0x1d16d4: 0xc7a10094
    ctx->pc = 0x1d16d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d16d8:
    // 0x1d16d8: 0xc6600004
    ctx->pc = 0x1d16d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d16dc:
    // 0x1d16dc: 0x4601181a
    ctx->pc = 0x1d16dcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d16e0:
    // 0x1d16e0: 0x4600101c
    ctx->pc = 0x1d16e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d16e4:
    // 0x1d16e4: 0xe6600004
    ctx->pc = 0x1d16e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_1d16e8:
    // 0x1d16e8: 0xc7a10098
    ctx->pc = 0x1d16e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d16ec:
    // 0x1d16ec: 0xc6600008
    ctx->pc = 0x1d16ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d16f0:
    // 0x1d16f0: 0x4601181a
    ctx->pc = 0x1d16f0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d16f4:
    // 0x1d16f4: 0x4600101c
    ctx->pc = 0x1d16f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d16f8:
    // 0x1d16f8: 0x10000025
label_1d16fc:
    if (ctx->pc == 0x1D16FCu) {
        ctx->pc = 0x1D16FCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        ctx->pc = 0x1D1700u;
        goto label_1d1700;
    }
    ctx->pc = 0x1D16F8u;
    {
        const bool branch_taken_0x1d16f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D16FCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        if (branch_taken_0x1d16f8) {
            ctx->pc = 0x1D1790u;
            goto label_1d1790;
        }
    }
    ctx->pc = 0x1D1700u;
label_1d1700:
    // 0x1d1700: 0x151080
    ctx->pc = 0x1d1700u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
label_1d1704:
    // 0x1d1704: 0x551021
    ctx->pc = 0x1d1704u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1d1708:
    // 0x1d1708: 0x21100
    ctx->pc = 0x1d1708u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1d170c:
    // 0x1d170c: 0x2429821
    ctx->pc = 0x1d170cu;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1d1710:
    // 0x1d1710: 0xc6600030
    ctx->pc = 0x1d1710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1714:
    // 0x1d1714: 0x27a40080
    ctx->pc = 0x1d1714u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
label_1d1718:
    // 0x1d1718: 0x27a50090
    ctx->pc = 0x1d1718u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
label_1d171c:
    // 0x1d171c: 0xe7a00080
    ctx->pc = 0x1d171cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1d1720:
    // 0x1d1720: 0xc6600034
    ctx->pc = 0x1d1720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1724:
    // 0x1d1724: 0xe7a00084
    ctx->pc = 0x1d1724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1d1728:
    // 0x1d1728: 0xc6600038
    ctx->pc = 0x1d1728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d172c:
    // 0x1d172c: 0xc06bf00
label_1d1730:
    if (ctx->pc == 0x1D1730u) {
        ctx->pc = 0x1D1730u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1D1734u;
        goto label_1d1734;
    }
    ctx->pc = 0x1D172Cu;
    SET_GPR_U32(ctx, 31, 0x1D1734u);
    ctx->pc = 0x1D1730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1734u; }
        else if (ctx->pc != 0x1D1734u) { ctx->pc = 0x1D1734u; }
    }
    if (ctx->pc != 0x1D1734u) { return; }
    ctx->pc = 0x1D1734u;
label_1d1734:
    // 0x1d1734: 0x3c033c23
    ctx->pc = 0x1d1734u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15395 << 16));
label_1d1738:
    // 0x1d1738: 0x3463d70a
    ctx->pc = 0x1d1738u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 55050));
label_1d173c:
    // 0x1d173c: 0x44831800
    ctx->pc = 0x1d173cu;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 3);
label_1d1740:
    // 0x1d1740: 0xc7a10090
    ctx->pc = 0x1d1740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1744:
    // 0x1d1744: 0x3c033f7d
    ctx->pc = 0x1d1744u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16253 << 16));
label_1d1748:
    // 0x1d1748: 0x346370a4
    ctx->pc = 0x1d1748u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 28836));
label_1d174c:
    // 0x1d174c: 0xc6600000
    ctx->pc = 0x1d174cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1750:
    // 0x1d1750: 0x44831000
    ctx->pc = 0x1d1750u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
label_1d1754:
    // 0x1d1754: 0x0
    ctx->pc = 0x1d1754u;
    // NOP
label_1d1758:
    // 0x1d1758: 0x4601181a
    ctx->pc = 0x1d1758u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d175c:
    // 0x1d175c: 0x4600101c
    ctx->pc = 0x1d175cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d1760:
    // 0x1d1760: 0xe6600000
    ctx->pc = 0x1d1760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_1d1764:
    // 0x1d1764: 0xc7a10094
    ctx->pc = 0x1d1764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1768:
    // 0x1d1768: 0xc6600004
    ctx->pc = 0x1d1768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d176c:
    // 0x1d176c: 0x4601181a
    ctx->pc = 0x1d176cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d1770:
    // 0x1d1770: 0x4600101c
    ctx->pc = 0x1d1770u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d1774:
    // 0x1d1774: 0xe6600004
    ctx->pc = 0x1d1774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_1d1778:
    // 0x1d1778: 0xc7a10098
    ctx->pc = 0x1d1778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d177c:
    // 0x1d177c: 0xc6600008
    ctx->pc = 0x1d177cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1780:
    // 0x1d1780: 0x4601181a
    ctx->pc = 0x1d1780u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d1784:
    // 0x1d1784: 0x4600101c
    ctx->pc = 0x1d1784u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d1788:
    // 0x1d1788: 0xe6600008
    ctx->pc = 0x1d1788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_1d178c:
    // 0x1d178c: 0x0
    ctx->pc = 0x1d178cu;
    // NOP
label_1d1790:
    // 0x1d1790: 0x86030018
    ctx->pc = 0x1d1790u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_1d1794:
    // 0x1d1794: 0x2a3a821
    ctx->pc = 0x1d1794u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_1d1798:
    // 0x1d1798: 0x2b1182a
    ctx->pc = 0x1d1798u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 17)));
label_1d179c:
    // 0x1d179c: 0x1460ff9b
label_1d17a0:
    if (ctx->pc == 0x1D17A0u) {
        ctx->pc = 0x1D17A0u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), 6));
        ctx->pc = 0x1D17A4u;
        goto label_1d17a4;
    }
    ctx->pc = 0x1D179Cu;
    {
        const bool branch_taken_0x1d179c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D17A0u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), 6));
        if (branch_taken_0x1d179c) {
            ctx->pc = 0x1D160Cu;
            goto label_1d160c;
        }
    }
    ctx->pc = 0x1D17A4u;
label_1d17a4:
    // 0x1d17a4: 0x0
    ctx->pc = 0x1d17a4u;
    // NOP
label_1d17a8:
    // 0x1d17a8: 0x26940001
    ctx->pc = 0x1d17a8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_1d17ac:
    // 0x1d17ac: 0x0
    ctx->pc = 0x1d17acu;
    // NOP
label_1d17b0:
    // 0x1d17b0: 0x86030018
    ctx->pc = 0x1d17b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_1d17b4:
    // 0x1d17b4: 0x283182a
    ctx->pc = 0x1d17b4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 3)));
label_1d17b8:
    // 0x1d17b8: 0x1460ff91
label_1d17bc:
    if (ctx->pc == 0x1D17BCu) {
        ctx->pc = 0x1D17BCu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 17)));
        ctx->pc = 0x1D17C0u;
        goto label_1d17c0;
    }
    ctx->pc = 0x1D17B8u;
    {
        const bool branch_taken_0x1d17b8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D17BCu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 17)));
        if (branch_taken_0x1d17b8) {
            ctx->pc = 0x1D1600u;
            goto label_1d1600;
        }
    }
    ctx->pc = 0x1D17C0u;
label_1d17c0:
    // 0x1d17c0: 0x100001db
label_1d17c4:
    if (ctx->pc == 0x1D17C4u) {
        ctx->pc = 0x1D17C8u;
        goto label_1d17c8;
    }
    ctx->pc = 0x1D17C0u;
    {
        const bool branch_taken_0x1d17c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d17c0) {
            ctx->pc = 0x1D1F30u;
            goto label_1d1f30;
        }
    }
    ctx->pc = 0x1D17C8u;
label_1d17c8:
    // 0x1d17c8: 0x10000049
label_1d17cc:
    if (ctx->pc == 0x1D17CCu) {
        ctx->pc = 0x1D17CCu;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D17D0u;
        goto label_1d17d0;
    }
    ctx->pc = 0x1D17C8u;
    {
        const bool branch_taken_0x1d17c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D17CCu;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d17c8) {
            ctx->pc = 0x1D18F0u;
            goto label_1d18f0;
        }
    }
    ctx->pc = 0x1D17D0u;
label_1d17d0:
    // 0x1d17d0: 0x10200045
label_1d17d4:
    if (ctx->pc == 0x1D17D4u) {
        ctx->pc = 0x1D17D4u;
        SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D17D8u;
        goto label_1d17d8;
    }
    ctx->pc = 0x1D17D0u;
    {
        const bool branch_taken_0x1d17d0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D17D4u;
        SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d17d0) {
            ctx->pc = 0x1D18E8u;
            goto label_1d18e8;
        }
    }
    ctx->pc = 0x1D17D8u;
label_1d17d8:
    // 0x1d17d8: 0x2a810005
    ctx->pc = 0x1d17d8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), 5));
label_1d17dc:
    // 0x1d17dc: 0x10200016
label_1d17e0:
    if (ctx->pc == 0x1D17E0u) {
        ctx->pc = 0x1D17E0u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), 6));
        ctx->pc = 0x1D17E4u;
        goto label_1d17e4;
    }
    ctx->pc = 0x1D17DCu;
    {
        const bool branch_taken_0x1d17dc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D17E0u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), 6));
        if (branch_taken_0x1d17dc) {
            ctx->pc = 0x1D1838u;
            goto label_1d1838;
        }
    }
    ctx->pc = 0x1D17E4u;
label_1d17e4:
    // 0x1d17e4: 0x151080
    ctx->pc = 0x1d17e4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
label_1d17e8:
    // 0x1d17e8: 0x551021
    ctx->pc = 0x1d17e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1d17ec:
    // 0x1d17ec: 0x21100
    ctx->pc = 0x1d17ecu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1d17f0:
    // 0x1d17f0: 0x2429821
    ctx->pc = 0x1d17f0u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1d17f4:
    // 0x1d17f4: 0xc6600030
    ctx->pc = 0x1d17f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d17f8:
    // 0x1d17f8: 0x27a40080
    ctx->pc = 0x1d17f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
label_1d17fc:
    // 0x1d17fc: 0x27a50090
    ctx->pc = 0x1d17fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
label_1d1800:
    // 0x1d1800: 0xe7a00080
    ctx->pc = 0x1d1800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1d1804:
    // 0x1d1804: 0xc6600034
    ctx->pc = 0x1d1804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1808:
    // 0x1d1808: 0xe7a00084
    ctx->pc = 0x1d1808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1d180c:
    // 0x1d180c: 0xc6600038
    ctx->pc = 0x1d180cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1810:
    // 0x1d1810: 0xc06bf00
label_1d1814:
    if (ctx->pc == 0x1D1814u) {
        ctx->pc = 0x1D1814u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1D1818u;
        goto label_1d1818;
    }
    ctx->pc = 0x1D1810u;
    SET_GPR_U32(ctx, 31, 0x1D1818u);
    ctx->pc = 0x1D1814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1818u; }
        else if (ctx->pc != 0x1D1818u) { ctx->pc = 0x1D1818u; }
    }
    if (ctx->pc != 0x1D1818u) { return; }
    ctx->pc = 0x1D1818u;
label_1d1818:
    // 0x1d1818: 0xc7a00090
    ctx->pc = 0x1d1818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d181c:
    // 0x1d181c: 0xe6600000
    ctx->pc = 0x1d181cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_1d1820:
    // 0x1d1820: 0xc7a00094
    ctx->pc = 0x1d1820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1824:
    // 0x1d1824: 0xe6600004
    ctx->pc = 0x1d1824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_1d1828:
    // 0x1d1828: 0xc7a00098
    ctx->pc = 0x1d1828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d182c:
    // 0x1d182c: 0x10000028
label_1d1830:
    if (ctx->pc == 0x1D1830u) {
        ctx->pc = 0x1D1830u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        ctx->pc = 0x1D1834u;
        goto label_1d1834;
    }
    ctx->pc = 0x1D182Cu;
    {
        const bool branch_taken_0x1d182c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D1830u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        if (branch_taken_0x1d182c) {
            ctx->pc = 0x1D18D0u;
            goto label_1d18d0;
        }
    }
    ctx->pc = 0x1D1834u;
label_1d1834:
    // 0x1d1834: 0x2a810006
    ctx->pc = 0x1d1834u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), 6));
label_1d1838:
    // 0x1d1838: 0x10200025
label_1d183c:
    if (ctx->pc == 0x1D183Cu) {
        ctx->pc = 0x1D1840u;
        goto label_1d1840;
    }
    ctx->pc = 0x1D1838u;
    {
        const bool branch_taken_0x1d1838 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d1838) {
            ctx->pc = 0x1D18D0u;
            goto label_1d18d0;
        }
    }
    ctx->pc = 0x1D1840u;
label_1d1840:
    // 0x1d1840: 0x151080
    ctx->pc = 0x1d1840u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
label_1d1844:
    // 0x1d1844: 0x551021
    ctx->pc = 0x1d1844u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1d1848:
    // 0x1d1848: 0x21100
    ctx->pc = 0x1d1848u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1d184c:
    // 0x1d184c: 0x2429821
    ctx->pc = 0x1d184cu;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1d1850:
    // 0x1d1850: 0xc6600030
    ctx->pc = 0x1d1850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1854:
    // 0x1d1854: 0x27a40080
    ctx->pc = 0x1d1854u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
label_1d1858:
    // 0x1d1858: 0x27a50090
    ctx->pc = 0x1d1858u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
label_1d185c:
    // 0x1d185c: 0xe7a00080
    ctx->pc = 0x1d185cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1d1860:
    // 0x1d1860: 0xc6600034
    ctx->pc = 0x1d1860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1864:
    // 0x1d1864: 0xe7a00084
    ctx->pc = 0x1d1864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1d1868:
    // 0x1d1868: 0xc6600038
    ctx->pc = 0x1d1868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d186c:
    // 0x1d186c: 0xc06bf00
label_1d1870:
    if (ctx->pc == 0x1D1870u) {
        ctx->pc = 0x1D1870u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1D1874u;
        goto label_1d1874;
    }
    ctx->pc = 0x1D186Cu;
    SET_GPR_U32(ctx, 31, 0x1D1874u);
    ctx->pc = 0x1D1870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1874u; }
        else if (ctx->pc != 0x1D1874u) { ctx->pc = 0x1D1874u; }
    }
    if (ctx->pc != 0x1D1874u) { return; }
    ctx->pc = 0x1D1874u;
label_1d1874:
    // 0x1d1874: 0x3c033f4c
    ctx->pc = 0x1d1874u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16204 << 16));
label_1d1878:
    // 0x1d1878: 0x3463cccd
    ctx->pc = 0x1d1878u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52429));
label_1d187c:
    // 0x1d187c: 0x44831800
    ctx->pc = 0x1d187cu;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 3);
label_1d1880:
    // 0x1d1880: 0xc7a10090
    ctx->pc = 0x1d1880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1884:
    // 0x1d1884: 0x3c033e4c
    ctx->pc = 0x1d1884u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15948 << 16));
label_1d1888:
    // 0x1d1888: 0x3463cccd
    ctx->pc = 0x1d1888u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52429));
label_1d188c:
    // 0x1d188c: 0xc6600000
    ctx->pc = 0x1d188cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1890:
    // 0x1d1890: 0x44831000
    ctx->pc = 0x1d1890u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
label_1d1894:
    // 0x1d1894: 0x0
    ctx->pc = 0x1d1894u;
    // NOP
label_1d1898:
    // 0x1d1898: 0x4601181a
    ctx->pc = 0x1d1898u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d189c:
    // 0x1d189c: 0x4600101c
    ctx->pc = 0x1d189cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d18a0:
    // 0x1d18a0: 0xe6600000
    ctx->pc = 0x1d18a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_1d18a4:
    // 0x1d18a4: 0xc7a10094
    ctx->pc = 0x1d18a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d18a8:
    // 0x1d18a8: 0xc6600004
    ctx->pc = 0x1d18a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d18ac:
    // 0x1d18ac: 0x4601181a
    ctx->pc = 0x1d18acu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d18b0:
    // 0x1d18b0: 0x4600101c
    ctx->pc = 0x1d18b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d18b4:
    // 0x1d18b4: 0xe6600004
    ctx->pc = 0x1d18b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_1d18b8:
    // 0x1d18b8: 0xc7a10098
    ctx->pc = 0x1d18b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d18bc:
    // 0x1d18bc: 0xc6600008
    ctx->pc = 0x1d18bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d18c0:
    // 0x1d18c0: 0x4601181a
    ctx->pc = 0x1d18c0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d18c4:
    // 0x1d18c4: 0x4600101c
    ctx->pc = 0x1d18c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d18c8:
    // 0x1d18c8: 0xe6600008
    ctx->pc = 0x1d18c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_1d18cc:
    // 0x1d18cc: 0x0
    ctx->pc = 0x1d18ccu;
    // NOP
label_1d18d0:
    // 0x1d18d0: 0x86030018
    ctx->pc = 0x1d18d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_1d18d4:
    // 0x1d18d4: 0x2a3a821
    ctx->pc = 0x1d18d4u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_1d18d8:
    // 0x1d18d8: 0x2b1182a
    ctx->pc = 0x1d18d8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 17)));
label_1d18dc:
    // 0x1d18dc: 0x1460ffbf
label_1d18e0:
    if (ctx->pc == 0x1D18E0u) {
        ctx->pc = 0x1D18E0u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), 5));
        ctx->pc = 0x1D18E4u;
        goto label_1d18e4;
    }
    ctx->pc = 0x1D18DCu;
    {
        const bool branch_taken_0x1d18dc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D18E0u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), 5));
        if (branch_taken_0x1d18dc) {
            ctx->pc = 0x1D17DCu;
            goto label_1d17dc;
        }
    }
    ctx->pc = 0x1D18E4u;
label_1d18e4:
    // 0x1d18e4: 0x0
    ctx->pc = 0x1d18e4u;
    // NOP
label_1d18e8:
    // 0x1d18e8: 0x26940001
    ctx->pc = 0x1d18e8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_1d18ec:
    // 0x1d18ec: 0x0
    ctx->pc = 0x1d18ecu;
    // NOP
label_1d18f0:
    // 0x1d18f0: 0x86030018
    ctx->pc = 0x1d18f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_1d18f4:
    // 0x1d18f4: 0x283182a
    ctx->pc = 0x1d18f4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 3)));
label_1d18f8:
    // 0x1d18f8: 0x1460ffb5
label_1d18fc:
    if (ctx->pc == 0x1D18FCu) {
        ctx->pc = 0x1D18FCu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 17)));
        ctx->pc = 0x1D1900u;
        goto label_1d1900;
    }
    ctx->pc = 0x1D18F8u;
    {
        const bool branch_taken_0x1d18f8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D18FCu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 17)));
        if (branch_taken_0x1d18f8) {
            ctx->pc = 0x1D17D0u;
            goto label_1d17d0;
        }
    }
    ctx->pc = 0x1D1900u;
label_1d1900:
    // 0x1d1900: 0x1000018b
label_1d1904:
    if (ctx->pc == 0x1D1904u) {
        ctx->pc = 0x1D1908u;
        goto label_1d1908;
    }
    ctx->pc = 0x1D1900u;
    {
        const bool branch_taken_0x1d1900 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d1900) {
            ctx->pc = 0x1D1F30u;
            goto label_1d1f30;
        }
    }
    ctx->pc = 0x1D1908u;
label_1d1908:
    // 0x1d1908: 0x10000021
label_1d190c:
    if (ctx->pc == 0x1D190Cu) {
        ctx->pc = 0x1D190Cu;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D1910u;
        goto label_1d1910;
    }
    ctx->pc = 0x1D1908u;
    {
        const bool branch_taken_0x1d1908 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D190Cu;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d1908) {
            ctx->pc = 0x1D1990u;
            goto label_1d1990;
        }
    }
    ctx->pc = 0x1D1910u;
label_1d1910:
    // 0x1d1910: 0x1020001d
label_1d1914:
    if (ctx->pc == 0x1D1914u) {
        ctx->pc = 0x1D1914u;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D1918u;
        goto label_1d1918;
    }
    ctx->pc = 0x1D1910u;
    {
        const bool branch_taken_0x1d1910 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D1914u;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d1910) {
            ctx->pc = 0x1D1988u;
            goto label_1d1988;
        }
    }
    ctx->pc = 0x1D1918u;
label_1d1918:
    // 0x1d1918: 0x2a610005
    ctx->pc = 0x1d1918u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), 5));
label_1d191c:
    // 0x1d191c: 0x10200014
label_1d1920:
    if (ctx->pc == 0x1D1920u) {
        ctx->pc = 0x1D1920u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x1D1924u;
        goto label_1d1924;
    }
    ctx->pc = 0x1D191Cu;
    {
        const bool branch_taken_0x1d191c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D1920u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x1d191c) {
            ctx->pc = 0x1D1970u;
            goto label_1d1970;
        }
    }
    ctx->pc = 0x1D1924u;
label_1d1924:
    // 0x1d1924: 0x541021
    ctx->pc = 0x1d1924u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1d1928:
    // 0x1d1928: 0x21100
    ctx->pc = 0x1d1928u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1d192c:
    // 0x1d192c: 0x242a821
    ctx->pc = 0x1d192cu;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1d1930:
    // 0x1d1930: 0xc6a00030
    ctx->pc = 0x1d1930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1934:
    // 0x1d1934: 0x27a40080
    ctx->pc = 0x1d1934u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
label_1d1938:
    // 0x1d1938: 0x27a50090
    ctx->pc = 0x1d1938u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
label_1d193c:
    // 0x1d193c: 0xe7a00080
    ctx->pc = 0x1d193cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1d1940:
    // 0x1d1940: 0xc6a00034
    ctx->pc = 0x1d1940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1944:
    // 0x1d1944: 0xe7a00084
    ctx->pc = 0x1d1944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1d1948:
    // 0x1d1948: 0xc6a00038
    ctx->pc = 0x1d1948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d194c:
    // 0x1d194c: 0xc06bf00
label_1d1950:
    if (ctx->pc == 0x1D1950u) {
        ctx->pc = 0x1D1950u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1D1954u;
        goto label_1d1954;
    }
    ctx->pc = 0x1D194Cu;
    SET_GPR_U32(ctx, 31, 0x1D1954u);
    ctx->pc = 0x1D1950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1954u; }
        else if (ctx->pc != 0x1D1954u) { ctx->pc = 0x1D1954u; }
    }
    if (ctx->pc != 0x1D1954u) { return; }
    ctx->pc = 0x1D1954u;
label_1d1954:
    // 0x1d1954: 0xc7a00090
    ctx->pc = 0x1d1954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1958:
    // 0x1d1958: 0xe6a00000
    ctx->pc = 0x1d1958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_1d195c:
    // 0x1d195c: 0xc7a00094
    ctx->pc = 0x1d195cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1960:
    // 0x1d1960: 0xe6a00004
    ctx->pc = 0x1d1960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
label_1d1964:
    // 0x1d1964: 0xc7a00098
    ctx->pc = 0x1d1964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1968:
    // 0x1d1968: 0xe6a00008
    ctx->pc = 0x1d1968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_1d196c:
    // 0x1d196c: 0x0
    ctx->pc = 0x1d196cu;
    // NOP
label_1d1970:
    // 0x1d1970: 0x86020018
    ctx->pc = 0x1d1970u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_1d1974:
    // 0x1d1974: 0x282a021
    ctx->pc = 0x1d1974u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1d1978:
    // 0x1d1978: 0x291102a
    ctx->pc = 0x1d1978u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 17)));
label_1d197c:
    // 0x1d197c: 0x1440ffe7
label_1d1980:
    if (ctx->pc == 0x1D1980u) {
        ctx->pc = 0x1D1980u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), 5));
        ctx->pc = 0x1D1984u;
        goto label_1d1984;
    }
    ctx->pc = 0x1D197Cu;
    {
        const bool branch_taken_0x1d197c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D1980u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), 5));
        if (branch_taken_0x1d197c) {
            ctx->pc = 0x1D191Cu;
            goto label_1d191c;
        }
    }
    ctx->pc = 0x1D1984u;
label_1d1984:
    // 0x1d1984: 0x0
    ctx->pc = 0x1d1984u;
    // NOP
label_1d1988:
    // 0x1d1988: 0x26730001
    ctx->pc = 0x1d1988u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_1d198c:
    // 0x1d198c: 0x0
    ctx->pc = 0x1d198cu;
    // NOP
label_1d1990:
    // 0x1d1990: 0x86020018
    ctx->pc = 0x1d1990u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_1d1994:
    // 0x1d1994: 0x262102a
    ctx->pc = 0x1d1994u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 2)));
label_1d1998:
    // 0x1d1998: 0x1440ffdd
label_1d199c:
    if (ctx->pc == 0x1D199Cu) {
        ctx->pc = 0x1D199Cu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 17)));
        ctx->pc = 0x1D19A0u;
        goto label_1d19a0;
    }
    ctx->pc = 0x1D1998u;
    {
        const bool branch_taken_0x1d1998 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D199Cu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 17)));
        if (branch_taken_0x1d1998) {
            ctx->pc = 0x1D1910u;
            goto label_1d1910;
        }
    }
    ctx->pc = 0x1D19A0u;
label_1d19a0:
    // 0x1d19a0: 0xc074a48
label_1d19a4:
    if (ctx->pc == 0x1D19A4u) {
        ctx->pc = 0x1D19A4u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D19A8u;
        goto label_1d19a8;
    }
    ctx->pc = 0x1D19A0u;
    SET_GPR_U32(ctx, 31, 0x1D19A8u);
    ctx->pc = 0x1D19A4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1D2920u;
    {
        const uint32_t __entryPc = ctx->pc;
        testMantMove__6CClothFv_0x1d2920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D19A8u; }
        else if (ctx->pc != 0x1D19A8u) { ctx->pc = 0x1D19A8u; }
    }
    if (ctx->pc != 0x1D19A8u) { return; }
    ctx->pc = 0x1D19A8u;
label_1d19a8:
    // 0x1d19a8: 0x10000161
label_1d19ac:
    if (ctx->pc == 0x1D19ACu) {
        ctx->pc = 0x1D19B0u;
        goto label_1d19b0;
    }
    ctx->pc = 0x1D19A8u;
    {
        const bool branch_taken_0x1d19a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d19a8) {
            ctx->pc = 0x1D1F30u;
            goto label_1d1f30;
        }
    }
    ctx->pc = 0x1D19B0u;
label_1d19b0:
    // 0x1d19b0: 0x10000045
label_1d19b4:
    if (ctx->pc == 0x1D19B4u) {
        ctx->pc = 0x1D19B4u;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D19B8u;
        goto label_1d19b8;
    }
    ctx->pc = 0x1D19B0u;
    {
        const bool branch_taken_0x1d19b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D19B4u;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d19b0) {
            ctx->pc = 0x1D1AC8u;
            goto label_1d1ac8;
        }
    }
    ctx->pc = 0x1D19B8u;
label_1d19b8:
    // 0x1d19b8: 0x10200041
label_1d19bc:
    if (ctx->pc == 0x1D19BCu) {
        ctx->pc = 0x1D19BCu;
        SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D19C0u;
        goto label_1d19c0;
    }
    ctx->pc = 0x1D19B8u;
    {
        const bool branch_taken_0x1d19b8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D19BCu;
        SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d19b8) {
            ctx->pc = 0x1D1AC0u;
            goto label_1d1ac0;
        }
    }
    ctx->pc = 0x1D19C0u;
label_1d19c0:
    // 0x1d19c0: 0x2a810008
    ctx->pc = 0x1d19c0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), 8));
label_1d19c4:
    // 0x1d19c4: 0x10200016
label_1d19c8:
    if (ctx->pc == 0x1D19C8u) {
        ctx->pc = 0x1D19C8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
        ctx->pc = 0x1D19CCu;
        goto label_1d19cc;
    }
    ctx->pc = 0x1D19C4u;
    {
        const bool branch_taken_0x1d19c4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D19C8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
        if (branch_taken_0x1d19c4) {
            ctx->pc = 0x1D1A20u;
            goto label_1d1a20;
        }
    }
    ctx->pc = 0x1D19CCu;
label_1d19cc:
    // 0x1d19cc: 0x151080
    ctx->pc = 0x1d19ccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
label_1d19d0:
    // 0x1d19d0: 0x551021
    ctx->pc = 0x1d19d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1d19d4:
    // 0x1d19d4: 0x21100
    ctx->pc = 0x1d19d4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1d19d8:
    // 0x1d19d8: 0x2429821
    ctx->pc = 0x1d19d8u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1d19dc:
    // 0x1d19dc: 0xc6600030
    ctx->pc = 0x1d19dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d19e0:
    // 0x1d19e0: 0x27a40080
    ctx->pc = 0x1d19e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
label_1d19e4:
    // 0x1d19e4: 0x27a50090
    ctx->pc = 0x1d19e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
label_1d19e8:
    // 0x1d19e8: 0xe7a00080
    ctx->pc = 0x1d19e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1d19ec:
    // 0x1d19ec: 0xc6600034
    ctx->pc = 0x1d19ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d19f0:
    // 0x1d19f0: 0xe7a00084
    ctx->pc = 0x1d19f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1d19f4:
    // 0x1d19f4: 0xc6600038
    ctx->pc = 0x1d19f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d19f8:
    // 0x1d19f8: 0xc06bf00
label_1d19fc:
    if (ctx->pc == 0x1D19FCu) {
        ctx->pc = 0x1D19FCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1D1A00u;
        goto label_1d1a00;
    }
    ctx->pc = 0x1D19F8u;
    SET_GPR_U32(ctx, 31, 0x1D1A00u);
    ctx->pc = 0x1D19FCu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1A00u; }
        else if (ctx->pc != 0x1D1A00u) { ctx->pc = 0x1D1A00u; }
    }
    if (ctx->pc != 0x1D1A00u) { return; }
    ctx->pc = 0x1D1A00u;
label_1d1a00:
    // 0x1d1a00: 0xc7a00090
    ctx->pc = 0x1d1a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1a04:
    // 0x1d1a04: 0xe6600000
    ctx->pc = 0x1d1a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_1d1a08:
    // 0x1d1a08: 0xc7a00094
    ctx->pc = 0x1d1a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1a0c:
    // 0x1d1a0c: 0xe6600004
    ctx->pc = 0x1d1a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_1d1a10:
    // 0x1d1a10: 0xc7a00098
    ctx->pc = 0x1d1a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1a14:
    // 0x1d1a14: 0x10000024
label_1d1a18:
    if (ctx->pc == 0x1D1A18u) {
        ctx->pc = 0x1D1A18u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        ctx->pc = 0x1D1A1Cu;
        goto label_1d1a1c;
    }
    ctx->pc = 0x1D1A14u;
    {
        const bool branch_taken_0x1d1a14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D1A18u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        if (branch_taken_0x1d1a14) {
            ctx->pc = 0x1D1AA8u;
            goto label_1d1aa8;
        }
    }
    ctx->pc = 0x1D1A1Cu;
label_1d1a1c:
    // 0x1d1a1c: 0x151080
    ctx->pc = 0x1d1a1cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
label_1d1a20:
    // 0x1d1a20: 0x551021
    ctx->pc = 0x1d1a20u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1d1a24:
    // 0x1d1a24: 0x21100
    ctx->pc = 0x1d1a24u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1d1a28:
    // 0x1d1a28: 0x2429821
    ctx->pc = 0x1d1a28u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1d1a2c:
    // 0x1d1a2c: 0xc6600030
    ctx->pc = 0x1d1a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1a30:
    // 0x1d1a30: 0x27a40080
    ctx->pc = 0x1d1a30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
label_1d1a34:
    // 0x1d1a34: 0x27a50090
    ctx->pc = 0x1d1a34u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
label_1d1a38:
    // 0x1d1a38: 0xe7a00080
    ctx->pc = 0x1d1a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1d1a3c:
    // 0x1d1a3c: 0xc6600034
    ctx->pc = 0x1d1a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1a40:
    // 0x1d1a40: 0xe7a00084
    ctx->pc = 0x1d1a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1d1a44:
    // 0x1d1a44: 0xc6600038
    ctx->pc = 0x1d1a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1a48:
    // 0x1d1a48: 0xc06bf00
label_1d1a4c:
    if (ctx->pc == 0x1D1A4Cu) {
        ctx->pc = 0x1D1A4Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1D1A50u;
        goto label_1d1a50;
    }
    ctx->pc = 0x1D1A48u;
    SET_GPR_U32(ctx, 31, 0x1D1A50u);
    ctx->pc = 0x1D1A4Cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1A50u; }
        else if (ctx->pc != 0x1D1A50u) { ctx->pc = 0x1D1A50u; }
    }
    if (ctx->pc != 0x1D1A50u) { return; }
    ctx->pc = 0x1D1A50u;
label_1d1a50:
    // 0x1d1a50: 0x3c033dcc
    ctx->pc = 0x1d1a50u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15820 << 16));
label_1d1a54:
    // 0x1d1a54: 0x3463cccd
    ctx->pc = 0x1d1a54u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52429));
label_1d1a58:
    // 0x1d1a58: 0x44831800
    ctx->pc = 0x1d1a58u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 3);
label_1d1a5c:
    // 0x1d1a5c: 0xc7a10090
    ctx->pc = 0x1d1a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1a60:
    // 0x1d1a60: 0x3c033f66
    ctx->pc = 0x1d1a60u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16230 << 16));
label_1d1a64:
    // 0x1d1a64: 0x34636666
    ctx->pc = 0x1d1a64u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 26214));
label_1d1a68:
    // 0x1d1a68: 0xc6600000
    ctx->pc = 0x1d1a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1a6c:
    // 0x1d1a6c: 0x44831000
    ctx->pc = 0x1d1a6cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
label_1d1a70:
    // 0x1d1a70: 0x0
    ctx->pc = 0x1d1a70u;
    // NOP
label_1d1a74:
    // 0x1d1a74: 0x4601181a
    ctx->pc = 0x1d1a74u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d1a78:
    // 0x1d1a78: 0x4600101c
    ctx->pc = 0x1d1a78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d1a7c:
    // 0x1d1a7c: 0xe6600000
    ctx->pc = 0x1d1a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_1d1a80:
    // 0x1d1a80: 0xc7a10094
    ctx->pc = 0x1d1a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1a84:
    // 0x1d1a84: 0xc6600004
    ctx->pc = 0x1d1a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1a88:
    // 0x1d1a88: 0x4601181a
    ctx->pc = 0x1d1a88u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d1a8c:
    // 0x1d1a8c: 0x4600101c
    ctx->pc = 0x1d1a8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d1a90:
    // 0x1d1a90: 0xe6600004
    ctx->pc = 0x1d1a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_1d1a94:
    // 0x1d1a94: 0xc7a10098
    ctx->pc = 0x1d1a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1a98:
    // 0x1d1a98: 0xc6600008
    ctx->pc = 0x1d1a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1a9c:
    // 0x1d1a9c: 0x4601181a
    ctx->pc = 0x1d1a9cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d1aa0:
    // 0x1d1aa0: 0x4600101c
    ctx->pc = 0x1d1aa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d1aa4:
    // 0x1d1aa4: 0xe6600008
    ctx->pc = 0x1d1aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_1d1aa8:
    // 0x1d1aa8: 0x86030018
    ctx->pc = 0x1d1aa8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_1d1aac:
    // 0x1d1aac: 0x2a3a821
    ctx->pc = 0x1d1aacu;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_1d1ab0:
    // 0x1d1ab0: 0x2b1182a
    ctx->pc = 0x1d1ab0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 17)));
label_1d1ab4:
    // 0x1d1ab4: 0x1460ffc3
label_1d1ab8:
    if (ctx->pc == 0x1D1AB8u) {
        ctx->pc = 0x1D1AB8u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), 8));
        ctx->pc = 0x1D1ABCu;
        goto label_1d1abc;
    }
    ctx->pc = 0x1D1AB4u;
    {
        const bool branch_taken_0x1d1ab4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D1AB8u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), 8));
        if (branch_taken_0x1d1ab4) {
            ctx->pc = 0x1D19C4u;
            goto label_1d19c4;
        }
    }
    ctx->pc = 0x1D1ABCu;
label_1d1abc:
    // 0x1d1abc: 0x0
    ctx->pc = 0x1d1abcu;
    // NOP
label_1d1ac0:
    // 0x1d1ac0: 0x26940001
    ctx->pc = 0x1d1ac0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_1d1ac4:
    // 0x1d1ac4: 0x0
    ctx->pc = 0x1d1ac4u;
    // NOP
label_1d1ac8:
    // 0x1d1ac8: 0x86030018
    ctx->pc = 0x1d1ac8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_1d1acc:
    // 0x1d1acc: 0x283182a
    ctx->pc = 0x1d1accu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 3)));
label_1d1ad0:
    // 0x1d1ad0: 0x1460ffb9
label_1d1ad4:
    if (ctx->pc == 0x1D1AD4u) {
        ctx->pc = 0x1D1AD4u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 17)));
        ctx->pc = 0x1D1AD8u;
        goto label_1d1ad8;
    }
    ctx->pc = 0x1D1AD0u;
    {
        const bool branch_taken_0x1d1ad0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D1AD4u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 17)));
        if (branch_taken_0x1d1ad0) {
            ctx->pc = 0x1D19B8u;
            goto label_1d19b8;
        }
    }
    ctx->pc = 0x1D1AD8u;
label_1d1ad8:
    // 0x1d1ad8: 0x10000115
label_1d1adc:
    if (ctx->pc == 0x1D1ADCu) {
        ctx->pc = 0x1D1AE0u;
        goto label_1d1ae0;
    }
    ctx->pc = 0x1D1AD8u;
    {
        const bool branch_taken_0x1d1ad8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d1ad8) {
            ctx->pc = 0x1D1F30u;
            goto label_1d1f30;
        }
    }
    ctx->pc = 0x1D1AE0u;
label_1d1ae0:
    // 0x1d1ae0: 0x11082a
    ctx->pc = 0x1d1ae0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 17)));
label_1d1ae4:
    // 0x1d1ae4: 0x10200112
label_1d1ae8:
    if (ctx->pc == 0x1D1AE8u) {
        ctx->pc = 0x1D1AE8u;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D1AECu;
        goto label_1d1aec;
    }
    ctx->pc = 0x1D1AE4u;
    {
        const bool branch_taken_0x1d1ae4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D1AE8u;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d1ae4) {
            ctx->pc = 0x1D1F30u;
            goto label_1d1f30;
        }
    }
    ctx->pc = 0x1D1AECu;
label_1d1aec:
    // 0x1d1aec: 0x3c02002c
    ctx->pc = 0x1d1aecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
label_1d1af0:
    // 0x1d1af0: 0x2450dc80
    ctx->pc = 0x1d1af0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294958208));
label_1d1af4:
    // 0x1d1af4: 0xc6150000
    ctx->pc = 0x1d1af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1d1af8:
    // 0x1d1af8: 0xc6400030
    ctx->pc = 0x1d1af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1afc:
    // 0x1d1afc: 0x3c023f80
    ctx->pc = 0x1d1afcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
label_1d1b00:
    // 0x1d1b00: 0x44820800
    ctx->pc = 0x1d1b00u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_1d1b04:
    // 0x1d1b04: 0x27a40080
    ctx->pc = 0x1d1b04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
label_1d1b08:
    // 0x1d1b08: 0x27a50090
    ctx->pc = 0x1d1b08u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
label_1d1b0c:
    // 0x1d1b0c: 0x46150d01
    ctx->pc = 0x1d1b0cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
label_1d1b10:
    // 0x1d1b10: 0xe7a00080
    ctx->pc = 0x1d1b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1d1b14:
    // 0x1d1b14: 0xc6400034
    ctx->pc = 0x1d1b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1b18:
    // 0x1d1b18: 0xe7a00084
    ctx->pc = 0x1d1b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1d1b1c:
    // 0x1d1b1c: 0xc6400038
    ctx->pc = 0x1d1b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1b20:
    // 0x1d1b20: 0xc06bf00
label_1d1b24:
    if (ctx->pc == 0x1D1B24u) {
        ctx->pc = 0x1D1B24u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1D1B28u;
        goto label_1d1b28;
    }
    ctx->pc = 0x1D1B20u;
    SET_GPR_U32(ctx, 31, 0x1D1B28u);
    ctx->pc = 0x1D1B24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1B28u; }
        else if (ctx->pc != 0x1D1B28u) { ctx->pc = 0x1D1B28u; }
    }
    if (ctx->pc != 0x1D1B28u) { return; }
    ctx->pc = 0x1D1B28u;
label_1d1b28:
    // 0x1d1b28: 0xc6410000
    ctx->pc = 0x1d1b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1b2c:
    // 0x1d1b2c: 0xc7a00090
    ctx->pc = 0x1d1b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1b30:
    // 0x1d1b30: 0x26730001
    ctx->pc = 0x1d1b30u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_1d1b34:
    // 0x1d1b34: 0x271182a
    ctx->pc = 0x1d1b34u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 17)));
label_1d1b38:
    // 0x1d1b38: 0x26100004
    ctx->pc = 0x1d1b38u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
label_1d1b3c:
    // 0x1d1b3c: 0x4601a81a
    ctx->pc = 0x1d1b3cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_1d1b40:
    // 0x1d1b40: 0x4614001c
    ctx->pc = 0x1d1b40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[20]));
label_1d1b44:
    // 0x1d1b44: 0xe6400000
    ctx->pc = 0x1d1b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_1d1b48:
    // 0x1d1b48: 0xc6410004
    ctx->pc = 0x1d1b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1b4c:
    // 0x1d1b4c: 0xc7a00094
    ctx->pc = 0x1d1b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1b50:
    // 0x1d1b50: 0x4601a81a
    ctx->pc = 0x1d1b50u;
    ctx->f[31] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_1d1b54:
    // 0x1d1b54: 0x4614001c
    ctx->pc = 0x1d1b54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[20]));
label_1d1b58:
    // 0x1d1b58: 0xe6400004
    ctx->pc = 0x1d1b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_1d1b5c:
    // 0x1d1b5c: 0xc6410008
    ctx->pc = 0x1d1b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1b60:
    // 0x1d1b60: 0xc7a00098
    ctx->pc = 0x1d1b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1b64:
    // 0x1d1b64: 0x4601a81a
    ctx->pc = 0x1d1b64u;
    ctx->f[31] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_1d1b68:
    // 0x1d1b68: 0x4614001c
    ctx->pc = 0x1d1b68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[20]));
label_1d1b6c:
    // 0x1d1b6c: 0xe6400008
    ctx->pc = 0x1d1b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_1d1b70:
    // 0x1d1b70: 0x1460ffe0
label_1d1b74:
    if (ctx->pc == 0x1D1B74u) {
        ctx->pc = 0x1D1B74u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x1D1B78u;
        goto label_1d1b78;
    }
    ctx->pc = 0x1D1B70u;
    {
        const bool branch_taken_0x1d1b70 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D1B74u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 80));
        if (branch_taken_0x1d1b70) {
            ctx->pc = 0x1D1AF4u;
            goto label_1d1af4;
        }
    }
    ctx->pc = 0x1D1B78u;
label_1d1b78:
    // 0x1d1b78: 0x100000ed
label_1d1b7c:
    if (ctx->pc == 0x1D1B7Cu) {
        ctx->pc = 0x1D1B80u;
        goto label_1d1b80;
    }
    ctx->pc = 0x1D1B78u;
    {
        const bool branch_taken_0x1d1b78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d1b78) {
            ctx->pc = 0x1D1F30u;
            goto label_1d1f30;
        }
    }
    ctx->pc = 0x1D1B80u;
label_1d1b80:
    // 0x1d1b80: 0x70009e28
    ctx->pc = 0x1d1b80u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1d1b84:
    // 0x1d1b84: 0x271082a
    ctx->pc = 0x1d1b84u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 17)));
label_1d1b88:
    // 0x1d1b88: 0x10200019
label_1d1b8c:
    if (ctx->pc == 0x1D1B8Cu) {
        ctx->pc = 0x1D1B8Cu;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D1B90u;
        goto label_1d1b90;
    }
    ctx->pc = 0x1D1B88u;
    {
        const bool branch_taken_0x1d1b88 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D1B8Cu;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d1b88) {
            ctx->pc = 0x1D1BF0u;
            goto label_1d1bf0;
        }
    }
    ctx->pc = 0x1D1B90u;
label_1d1b90:
    // 0x1d1b90: 0x141080
    ctx->pc = 0x1d1b90u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
label_1d1b94:
    // 0x1d1b94: 0x541021
    ctx->pc = 0x1d1b94u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1d1b98:
    // 0x1d1b98: 0x21100
    ctx->pc = 0x1d1b98u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1d1b9c:
    // 0x1d1b9c: 0x242a821
    ctx->pc = 0x1d1b9cu;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1d1ba0:
    // 0x1d1ba0: 0xc6a00030
    ctx->pc = 0x1d1ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1ba4:
    // 0x1d1ba4: 0x27a40080
    ctx->pc = 0x1d1ba4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
label_1d1ba8:
    // 0x1d1ba8: 0x27a50090
    ctx->pc = 0x1d1ba8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
label_1d1bac:
    // 0x1d1bac: 0xe7a00080
    ctx->pc = 0x1d1bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1d1bb0:
    // 0x1d1bb0: 0xc6a00034
    ctx->pc = 0x1d1bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1bb4:
    // 0x1d1bb4: 0xe7a00084
    ctx->pc = 0x1d1bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1d1bb8:
    // 0x1d1bb8: 0xc6a00038
    ctx->pc = 0x1d1bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1bbc:
    // 0x1d1bbc: 0xc06bf00
label_1d1bc0:
    if (ctx->pc == 0x1D1BC0u) {
        ctx->pc = 0x1D1BC0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1D1BC4u;
        goto label_1d1bc4;
    }
    ctx->pc = 0x1D1BBCu;
    SET_GPR_U32(ctx, 31, 0x1D1BC4u);
    ctx->pc = 0x1D1BC0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1BC4u; }
        else if (ctx->pc != 0x1D1BC4u) { ctx->pc = 0x1D1BC4u; }
    }
    if (ctx->pc != 0x1D1BC4u) { return; }
    ctx->pc = 0x1D1BC4u;
label_1d1bc4:
    // 0x1d1bc4: 0xc7a00090
    ctx->pc = 0x1d1bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1bc8:
    // 0x1d1bc8: 0xe6a00000
    ctx->pc = 0x1d1bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_1d1bcc:
    // 0x1d1bcc: 0xc7a00094
    ctx->pc = 0x1d1bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1bd0:
    // 0x1d1bd0: 0xe6a00004
    ctx->pc = 0x1d1bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
label_1d1bd4:
    // 0x1d1bd4: 0xc7a00098
    ctx->pc = 0x1d1bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1bd8:
    // 0x1d1bd8: 0xe6a00008
    ctx->pc = 0x1d1bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_1d1bdc:
    // 0x1d1bdc: 0x86030018
    ctx->pc = 0x1d1bdcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_1d1be0:
    // 0x1d1be0: 0x283a021
    ctx->pc = 0x1d1be0u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_1d1be4:
    // 0x1d1be4: 0x291182a
    ctx->pc = 0x1d1be4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 17)));
label_1d1be8:
    // 0x1d1be8: 0x5460ffea
label_1d1bec:
    if (ctx->pc == 0x1D1BECu) {
        ctx->pc = 0x1D1BECu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x1D1BF0u;
        goto label_1d1bf0;
    }
    ctx->pc = 0x1D1BE8u;
    {
        const bool branch_taken_0x1d1be8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d1be8) {
            ctx->pc = 0x1D1BECu;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
            ctx->pc = 0x1D1B94u;
            goto label_1d1b94;
        }
    }
    ctx->pc = 0x1D1BF0u;
label_1d1bf0:
    // 0x1d1bf0: 0x26730001
    ctx->pc = 0x1d1bf0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_1d1bf4:
    // 0x1d1bf4: 0x1a60ffe4
label_1d1bf8:
    if (ctx->pc == 0x1D1BF8u) {
        ctx->pc = 0x1D1BF8u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 17)));
        ctx->pc = 0x1D1BFCu;
        goto label_1d1bfc;
    }
    ctx->pc = 0x1D1BF4u;
    {
        const bool branch_taken_0x1d1bf4 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1D1BF8u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 17)));
        if (branch_taken_0x1d1bf4) {
            ctx->pc = 0x1D1B88u;
            goto label_1d1b88;
        }
    }
    ctx->pc = 0x1D1BFCu;
label_1d1bfc:
    // 0x1d1bfc: 0x24140001
    ctx->pc = 0x1d1bfcu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
label_1d1c00:
    // 0x1d1c00: 0x291082a
    ctx->pc = 0x1d1c00u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 17)));
label_1d1c04:
    // 0x1d1c04: 0x1020002a
label_1d1c08:
    if (ctx->pc == 0x1D1C08u) {
        ctx->pc = 0x1D1C08u;
        SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D1C0Cu;
        goto label_1d1c0c;
    }
    ctx->pc = 0x1D1C04u;
    {
        const bool branch_taken_0x1d1c04 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D1C08u;
        SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d1c04) {
            ctx->pc = 0x1D1CB0u;
            goto label_1d1cb0;
        }
    }
    ctx->pc = 0x1D1C0Cu;
label_1d1c0c:
    // 0x1d1c0c: 0x0
    ctx->pc = 0x1d1c0cu;
    // NOP
label_1d1c10:
    // 0x1d1c10: 0x151080
    ctx->pc = 0x1d1c10u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
label_1d1c14:
    // 0x1d1c14: 0x551021
    ctx->pc = 0x1d1c14u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1d1c18:
    // 0x1d1c18: 0x21100
    ctx->pc = 0x1d1c18u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1d1c1c:
    // 0x1d1c1c: 0x2429821
    ctx->pc = 0x1d1c1cu;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1d1c20:
    // 0x1d1c20: 0xc6600030
    ctx->pc = 0x1d1c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1c24:
    // 0x1d1c24: 0x27a40080
    ctx->pc = 0x1d1c24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
label_1d1c28:
    // 0x1d1c28: 0x27a50090
    ctx->pc = 0x1d1c28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
label_1d1c2c:
    // 0x1d1c2c: 0xe7a00080
    ctx->pc = 0x1d1c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1d1c30:
    // 0x1d1c30: 0xc6600034
    ctx->pc = 0x1d1c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1c34:
    // 0x1d1c34: 0xe7a00084
    ctx->pc = 0x1d1c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1d1c38:
    // 0x1d1c38: 0xc6600038
    ctx->pc = 0x1d1c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1c3c:
    // 0x1d1c3c: 0xc06bf00
label_1d1c40:
    if (ctx->pc == 0x1D1C40u) {
        ctx->pc = 0x1D1C40u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1D1C44u;
        goto label_1d1c44;
    }
    ctx->pc = 0x1D1C3Cu;
    SET_GPR_U32(ctx, 31, 0x1D1C44u);
    ctx->pc = 0x1D1C40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1C44u; }
        else if (ctx->pc != 0x1D1C44u) { ctx->pc = 0x1D1C44u; }
    }
    if (ctx->pc != 0x1D1C44u) { return; }
    ctx->pc = 0x1D1C44u;
label_1d1c44:
    // 0x1d1c44: 0x3c033d75
    ctx->pc = 0x1d1c44u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15733 << 16));
label_1d1c48:
    // 0x1d1c48: 0x3463c28f
    ctx->pc = 0x1d1c48u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 49807));
label_1d1c4c:
    // 0x1d1c4c: 0x44831800
    ctx->pc = 0x1d1c4cu;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 3);
label_1d1c50:
    // 0x1d1c50: 0xc7a10090
    ctx->pc = 0x1d1c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1c54:
    // 0x1d1c54: 0x3c033f70
    ctx->pc = 0x1d1c54u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16240 << 16));
label_1d1c58:
    // 0x1d1c58: 0x3463a3d7
    ctx->pc = 0x1d1c58u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 41943));
label_1d1c5c:
    // 0x1d1c5c: 0xc6600000
    ctx->pc = 0x1d1c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1c60:
    // 0x1d1c60: 0x44831000
    ctx->pc = 0x1d1c60u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
label_1d1c64:
    // 0x1d1c64: 0x0
    ctx->pc = 0x1d1c64u;
    // NOP
label_1d1c68:
    // 0x1d1c68: 0x4601181a
    ctx->pc = 0x1d1c68u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d1c6c:
    // 0x1d1c6c: 0x4600101c
    ctx->pc = 0x1d1c6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d1c70:
    // 0x1d1c70: 0xe6600000
    ctx->pc = 0x1d1c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_1d1c74:
    // 0x1d1c74: 0xc7a10094
    ctx->pc = 0x1d1c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1c78:
    // 0x1d1c78: 0xc6600004
    ctx->pc = 0x1d1c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1c7c:
    // 0x1d1c7c: 0x4601181a
    ctx->pc = 0x1d1c7cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d1c80:
    // 0x1d1c80: 0x4600101c
    ctx->pc = 0x1d1c80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d1c84:
    // 0x1d1c84: 0xe6600004
    ctx->pc = 0x1d1c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_1d1c88:
    // 0x1d1c88: 0xc7a10098
    ctx->pc = 0x1d1c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1c8c:
    // 0x1d1c8c: 0xc6600008
    ctx->pc = 0x1d1c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1c90:
    // 0x1d1c90: 0x4601181a
    ctx->pc = 0x1d1c90u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d1c94:
    // 0x1d1c94: 0x4600101c
    ctx->pc = 0x1d1c94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_1d1c98:
    // 0x1d1c98: 0xe6600008
    ctx->pc = 0x1d1c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_1d1c9c:
    // 0x1d1c9c: 0x86030018
    ctx->pc = 0x1d1c9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_1d1ca0:
    // 0x1d1ca0: 0x2a3a821
    ctx->pc = 0x1d1ca0u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_1d1ca4:
    // 0x1d1ca4: 0x2b1182a
    ctx->pc = 0x1d1ca4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 17)));
label_1d1ca8:
    // 0x1d1ca8: 0x5460ffda
label_1d1cac:
    if (ctx->pc == 0x1D1CACu) {
        ctx->pc = 0x1D1CACu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
        ctx->pc = 0x1D1CB0u;
        goto label_1d1cb0;
    }
    ctx->pc = 0x1D1CA8u;
    {
        const bool branch_taken_0x1d1ca8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d1ca8) {
            ctx->pc = 0x1D1CACu;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
            ctx->pc = 0x1D1C14u;
            goto label_1d1c14;
        }
    }
    ctx->pc = 0x1D1CB0u;
label_1d1cb0:
    // 0x1d1cb0: 0x26940001
    ctx->pc = 0x1d1cb0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_1d1cb4:
    // 0x1d1cb4: 0x2a810003
    ctx->pc = 0x1d1cb4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), 3));
label_1d1cb8:
    // 0x1d1cb8: 0x1420ffd2
label_1d1cbc:
    if (ctx->pc == 0x1D1CBCu) {
        ctx->pc = 0x1D1CBCu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 17)));
        ctx->pc = 0x1D1CC0u;
        goto label_1d1cc0;
    }
    ctx->pc = 0x1D1CB8u;
    {
        const bool branch_taken_0x1d1cb8 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D1CBCu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 17)));
        if (branch_taken_0x1d1cb8) {
            ctx->pc = 0x1D1C04u;
            goto label_1d1c04;
        }
    }
    ctx->pc = 0x1D1CC0u;
label_1d1cc0:
    // 0x1d1cc0: 0x1000009b
label_1d1cc4:
    if (ctx->pc == 0x1D1CC4u) {
        ctx->pc = 0x1D1CC8u;
        goto label_1d1cc8;
    }
    ctx->pc = 0x1D1CC0u;
    {
        const bool branch_taken_0x1d1cc0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d1cc0) {
            ctx->pc = 0x1D1F30u;
            goto label_1d1f30;
        }
    }
    ctx->pc = 0x1D1CC8u;
label_1d1cc8:
    // 0x1d1cc8: 0x11082a
    ctx->pc = 0x1d1cc8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 17)));
label_1d1ccc:
    // 0x1d1ccc: 0x10200098
label_1d1cd0:
    if (ctx->pc == 0x1D1CD0u) {
        ctx->pc = 0x1D1CD0u;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D1CD4u;
        goto label_1d1cd4;
    }
    ctx->pc = 0x1D1CCCu;
    {
        const bool branch_taken_0x1d1ccc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D1CD0u;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d1ccc) {
            ctx->pc = 0x1D1F30u;
            goto label_1d1f30;
        }
    }
    ctx->pc = 0x1D1CD4u;
label_1d1cd4:
    // 0x1d1cd4: 0x3c02002c
    ctx->pc = 0x1d1cd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
label_1d1cd8:
    // 0x1d1cd8: 0x2450ded0
    ctx->pc = 0x1d1cd8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294958800));
label_1d1cdc:
    // 0x1d1cdc: 0xc6150000
    ctx->pc = 0x1d1cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1d1ce0:
    // 0x1d1ce0: 0xc6400030
    ctx->pc = 0x1d1ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1ce4:
    // 0x1d1ce4: 0x3c023f80
    ctx->pc = 0x1d1ce4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
label_1d1ce8:
    // 0x1d1ce8: 0x44820800
    ctx->pc = 0x1d1ce8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_1d1cec:
    // 0x1d1cec: 0x27a40080
    ctx->pc = 0x1d1cecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
label_1d1cf0:
    // 0x1d1cf0: 0x27a50090
    ctx->pc = 0x1d1cf0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
label_1d1cf4:
    // 0x1d1cf4: 0x46150d01
    ctx->pc = 0x1d1cf4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
label_1d1cf8:
    // 0x1d1cf8: 0xe7a00080
    ctx->pc = 0x1d1cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1d1cfc:
    // 0x1d1cfc: 0xc6400034
    ctx->pc = 0x1d1cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1d00:
    // 0x1d1d00: 0xe7a00084
    ctx->pc = 0x1d1d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1d1d04:
    // 0x1d1d04: 0xc6400038
    ctx->pc = 0x1d1d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1d08:
    // 0x1d1d08: 0xc06bf00
label_1d1d0c:
    if (ctx->pc == 0x1D1D0Cu) {
        ctx->pc = 0x1D1D0Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1D1D10u;
        goto label_1d1d10;
    }
    ctx->pc = 0x1D1D08u;
    SET_GPR_U32(ctx, 31, 0x1D1D10u);
    ctx->pc = 0x1D1D0Cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1D10u; }
        else if (ctx->pc != 0x1D1D10u) { ctx->pc = 0x1D1D10u; }
    }
    if (ctx->pc != 0x1D1D10u) { return; }
    ctx->pc = 0x1D1D10u;
label_1d1d10:
    // 0x1d1d10: 0xc6410000
    ctx->pc = 0x1d1d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1d14:
    // 0x1d1d14: 0xc7a00090
    ctx->pc = 0x1d1d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1d18:
    // 0x1d1d18: 0x26730001
    ctx->pc = 0x1d1d18u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_1d1d1c:
    // 0x1d1d1c: 0x271182a
    ctx->pc = 0x1d1d1cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 17)));
label_1d1d20:
    // 0x1d1d20: 0x26100004
    ctx->pc = 0x1d1d20u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
label_1d1d24:
    // 0x1d1d24: 0x4601a81a
    ctx->pc = 0x1d1d24u;
    ctx->f[31] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_1d1d28:
    // 0x1d1d28: 0x4614001c
    ctx->pc = 0x1d1d28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[20]));
label_1d1d2c:
    // 0x1d1d2c: 0xe6400000
    ctx->pc = 0x1d1d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_1d1d30:
    // 0x1d1d30: 0xc6410004
    ctx->pc = 0x1d1d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1d34:
    // 0x1d1d34: 0xc7a00094
    ctx->pc = 0x1d1d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1d38:
    // 0x1d1d38: 0x4601a81a
    ctx->pc = 0x1d1d38u;
    ctx->f[31] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_1d1d3c:
    // 0x1d1d3c: 0x4614001c
    ctx->pc = 0x1d1d3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[20]));
label_1d1d40:
    // 0x1d1d40: 0xe6400004
    ctx->pc = 0x1d1d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_1d1d44:
    // 0x1d1d44: 0xc6410008
    ctx->pc = 0x1d1d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1d48:
    // 0x1d1d48: 0xc7a00098
    ctx->pc = 0x1d1d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1d4c:
    // 0x1d1d4c: 0x4601a81a
    ctx->pc = 0x1d1d4cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_1d1d50:
    // 0x1d1d50: 0x4614001c
    ctx->pc = 0x1d1d50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[20]));
label_1d1d54:
    // 0x1d1d54: 0xe6400008
    ctx->pc = 0x1d1d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_1d1d58:
    // 0x1d1d58: 0x1460ffe0
label_1d1d5c:
    if (ctx->pc == 0x1D1D5Cu) {
        ctx->pc = 0x1D1D5Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x1D1D60u;
        goto label_1d1d60;
    }
    ctx->pc = 0x1D1D58u;
    {
        const bool branch_taken_0x1d1d58 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D1D5Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 80));
        if (branch_taken_0x1d1d58) {
            ctx->pc = 0x1D1CDCu;
            goto label_1d1cdc;
        }
    }
    ctx->pc = 0x1D1D60u;
label_1d1d60:
    // 0x1d1d60: 0x10000073
label_1d1d64:
    if (ctx->pc == 0x1D1D64u) {
        ctx->pc = 0x1D1D68u;
        goto label_1d1d68;
    }
    ctx->pc = 0x1D1D60u;
    {
        const bool branch_taken_0x1d1d60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d1d60) {
            ctx->pc = 0x1D1F30u;
            goto label_1d1f30;
        }
    }
    ctx->pc = 0x1D1D68u;
label_1d1d68:
    // 0x1d1d68: 0x11082a
    ctx->pc = 0x1d1d68u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 17)));
label_1d1d6c:
    // 0x1d1d6c: 0x10200070
label_1d1d70:
    if (ctx->pc == 0x1D1D70u) {
        ctx->pc = 0x1D1D70u;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D1D74u;
        goto label_1d1d74;
    }
    ctx->pc = 0x1D1D6Cu;
    {
        const bool branch_taken_0x1d1d6c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D1D70u;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d1d6c) {
            ctx->pc = 0x1D1F30u;
            goto label_1d1f30;
        }
    }
    ctx->pc = 0x1D1D74u;
label_1d1d74:
    // 0x1d1d74: 0x3c02002c
    ctx->pc = 0x1d1d74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
label_1d1d78:
    // 0x1d1d78: 0x2450dfa0
    ctx->pc = 0x1d1d78u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294959008));
label_1d1d7c:
    // 0x1d1d7c: 0xc6150000
    ctx->pc = 0x1d1d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1d1d80:
    // 0x1d1d80: 0xc6400030
    ctx->pc = 0x1d1d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1d84:
    // 0x1d1d84: 0x3c023f80
    ctx->pc = 0x1d1d84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
label_1d1d88:
    // 0x1d1d88: 0x44820800
    ctx->pc = 0x1d1d88u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_1d1d8c:
    // 0x1d1d8c: 0x27a40080
    ctx->pc = 0x1d1d8cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
label_1d1d90:
    // 0x1d1d90: 0x27a50090
    ctx->pc = 0x1d1d90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
label_1d1d94:
    // 0x1d1d94: 0x46150d01
    ctx->pc = 0x1d1d94u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
label_1d1d98:
    // 0x1d1d98: 0xe7a00080
    ctx->pc = 0x1d1d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1d1d9c:
    // 0x1d1d9c: 0xc6400034
    ctx->pc = 0x1d1d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1da0:
    // 0x1d1da0: 0xe7a00084
    ctx->pc = 0x1d1da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1d1da4:
    // 0x1d1da4: 0xc6400038
    ctx->pc = 0x1d1da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1da8:
    // 0x1d1da8: 0xc06bf00
label_1d1dac:
    if (ctx->pc == 0x1D1DACu) {
        ctx->pc = 0x1D1DACu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1D1DB0u;
        goto label_1d1db0;
    }
    ctx->pc = 0x1D1DA8u;
    SET_GPR_U32(ctx, 31, 0x1D1DB0u);
    ctx->pc = 0x1D1DACu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1DB0u; }
        else if (ctx->pc != 0x1D1DB0u) { ctx->pc = 0x1D1DB0u; }
    }
    if (ctx->pc != 0x1D1DB0u) { return; }
    ctx->pc = 0x1D1DB0u;
label_1d1db0:
    // 0x1d1db0: 0xc6410000
    ctx->pc = 0x1d1db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1db4:
    // 0x1d1db4: 0xc7a00090
    ctx->pc = 0x1d1db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1db8:
    // 0x1d1db8: 0x26730001
    ctx->pc = 0x1d1db8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_1d1dbc:
    // 0x1d1dbc: 0x271182a
    ctx->pc = 0x1d1dbcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 17)));
label_1d1dc0:
    // 0x1d1dc0: 0x26100004
    ctx->pc = 0x1d1dc0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
label_1d1dc4:
    // 0x1d1dc4: 0x4601a81a
    ctx->pc = 0x1d1dc4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_1d1dc8:
    // 0x1d1dc8: 0x4614001c
    ctx->pc = 0x1d1dc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[20]));
label_1d1dcc:
    // 0x1d1dcc: 0xe6400000
    ctx->pc = 0x1d1dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_1d1dd0:
    // 0x1d1dd0: 0xc6410004
    ctx->pc = 0x1d1dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1dd4:
    // 0x1d1dd4: 0xc7a00094
    ctx->pc = 0x1d1dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1dd8:
    // 0x1d1dd8: 0x4601a81a
    ctx->pc = 0x1d1dd8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_1d1ddc:
    // 0x1d1ddc: 0x4614001c
    ctx->pc = 0x1d1ddcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[20]));
label_1d1de0:
    // 0x1d1de0: 0xe6400004
    ctx->pc = 0x1d1de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_1d1de4:
    // 0x1d1de4: 0xc6410008
    ctx->pc = 0x1d1de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1de8:
    // 0x1d1de8: 0xc7a00098
    ctx->pc = 0x1d1de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1dec:
    // 0x1d1dec: 0x4601a81a
    ctx->pc = 0x1d1decu;
    ctx->f[31] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_1d1df0:
    // 0x1d1df0: 0x4614001c
    ctx->pc = 0x1d1df0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[20]));
label_1d1df4:
    // 0x1d1df4: 0xe6400008
    ctx->pc = 0x1d1df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_1d1df8:
    // 0x1d1df8: 0x1460ffe0
label_1d1dfc:
    if (ctx->pc == 0x1D1DFCu) {
        ctx->pc = 0x1D1DFCu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x1D1E00u;
        goto label_1d1e00;
    }
    ctx->pc = 0x1D1DF8u;
    {
        const bool branch_taken_0x1d1df8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D1DFCu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 80));
        if (branch_taken_0x1d1df8) {
            ctx->pc = 0x1D1D7Cu;
            goto label_1d1d7c;
        }
    }
    ctx->pc = 0x1D1E00u;
label_1d1e00:
    // 0x1d1e00: 0x1000004b
label_1d1e04:
    if (ctx->pc == 0x1D1E04u) {
        ctx->pc = 0x1D1E08u;
        goto label_1d1e08;
    }
    ctx->pc = 0x1D1E00u;
    {
        const bool branch_taken_0x1d1e00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d1e00) {
            ctx->pc = 0x1D1F30u;
            goto label_1d1f30;
        }
    }
    ctx->pc = 0x1D1E08u;
label_1d1e08:
    // 0x1d1e08: 0x1000001d
label_1d1e0c:
    if (ctx->pc == 0x1D1E0Cu) {
        ctx->pc = 0x1D1E0Cu;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D1E10u;
        goto label_1d1e10;
    }
    ctx->pc = 0x1D1E08u;
    {
        const bool branch_taken_0x1d1e08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D1E0Cu;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d1e08) {
            ctx->pc = 0x1D1E80u;
            goto label_1d1e80;
        }
    }
    ctx->pc = 0x1D1E10u;
label_1d1e10:
    // 0x1d1e10: 0x10200019
label_1d1e14:
    if (ctx->pc == 0x1D1E14u) {
        ctx->pc = 0x1D1E14u;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D1E18u;
        goto label_1d1e18;
    }
    ctx->pc = 0x1D1E10u;
    {
        const bool branch_taken_0x1d1e10 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D1E14u;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d1e10) {
            ctx->pc = 0x1D1E78u;
            goto label_1d1e78;
        }
    }
    ctx->pc = 0x1D1E18u;
label_1d1e18:
    // 0x1d1e18: 0x141080
    ctx->pc = 0x1d1e18u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
label_1d1e1c:
    // 0x1d1e1c: 0x541021
    ctx->pc = 0x1d1e1cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1d1e20:
    // 0x1d1e20: 0x21100
    ctx->pc = 0x1d1e20u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1d1e24:
    // 0x1d1e24: 0x242a821
    ctx->pc = 0x1d1e24u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1d1e28:
    // 0x1d1e28: 0xc6a00030
    ctx->pc = 0x1d1e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1e2c:
    // 0x1d1e2c: 0x27a40080
    ctx->pc = 0x1d1e2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
label_1d1e30:
    // 0x1d1e30: 0x27a50090
    ctx->pc = 0x1d1e30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
label_1d1e34:
    // 0x1d1e34: 0xe7a00080
    ctx->pc = 0x1d1e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1d1e38:
    // 0x1d1e38: 0xc6a00034
    ctx->pc = 0x1d1e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1e3c:
    // 0x1d1e3c: 0xe7a00084
    ctx->pc = 0x1d1e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1d1e40:
    // 0x1d1e40: 0xc6a00038
    ctx->pc = 0x1d1e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1e44:
    // 0x1d1e44: 0xc06bf00
label_1d1e48:
    if (ctx->pc == 0x1D1E48u) {
        ctx->pc = 0x1D1E48u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1D1E4Cu;
        goto label_1d1e4c;
    }
    ctx->pc = 0x1D1E44u;
    SET_GPR_U32(ctx, 31, 0x1D1E4Cu);
    ctx->pc = 0x1D1E48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1E4Cu; }
        else if (ctx->pc != 0x1D1E4Cu) { ctx->pc = 0x1D1E4Cu; }
    }
    if (ctx->pc != 0x1D1E4Cu) { return; }
    ctx->pc = 0x1D1E4Cu;
label_1d1e4c:
    // 0x1d1e4c: 0xc7a00090
    ctx->pc = 0x1d1e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1e50:
    // 0x1d1e50: 0xe6a00000
    ctx->pc = 0x1d1e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_1d1e54:
    // 0x1d1e54: 0xc7a00094
    ctx->pc = 0x1d1e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1e58:
    // 0x1d1e58: 0xe6a00004
    ctx->pc = 0x1d1e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
label_1d1e5c:
    // 0x1d1e5c: 0xc7a00098
    ctx->pc = 0x1d1e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1e60:
    // 0x1d1e60: 0xe6a00008
    ctx->pc = 0x1d1e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_1d1e64:
    // 0x1d1e64: 0x86030018
    ctx->pc = 0x1d1e64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_1d1e68:
    // 0x1d1e68: 0x283a021
    ctx->pc = 0x1d1e68u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_1d1e6c:
    // 0x1d1e6c: 0x291182a
    ctx->pc = 0x1d1e6cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 17)));
label_1d1e70:
    // 0x1d1e70: 0x5460ffea
label_1d1e74:
    if (ctx->pc == 0x1D1E74u) {
        ctx->pc = 0x1D1E74u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x1D1E78u;
        goto label_1d1e78;
    }
    ctx->pc = 0x1D1E70u;
    {
        const bool branch_taken_0x1d1e70 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d1e70) {
            ctx->pc = 0x1D1E74u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
            ctx->pc = 0x1D1E1Cu;
            goto label_1d1e1c;
        }
    }
    ctx->pc = 0x1D1E78u;
label_1d1e78:
    // 0x1d1e78: 0x26730001
    ctx->pc = 0x1d1e78u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_1d1e7c:
    // 0x1d1e7c: 0x0
    ctx->pc = 0x1d1e7cu;
    // NOP
label_1d1e80:
    // 0x1d1e80: 0x86030018
    ctx->pc = 0x1d1e80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_1d1e84:
    // 0x1d1e84: 0x263182a
    ctx->pc = 0x1d1e84u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 3)));
label_1d1e88:
    // 0x1d1e88: 0x1460ffe1
label_1d1e8c:
    if (ctx->pc == 0x1D1E8Cu) {
        ctx->pc = 0x1D1E8Cu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 17)));
        ctx->pc = 0x1D1E90u;
        goto label_1d1e90;
    }
    ctx->pc = 0x1D1E88u;
    {
        const bool branch_taken_0x1d1e88 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D1E8Cu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 17)));
        if (branch_taken_0x1d1e88) {
            ctx->pc = 0x1D1E10u;
            goto label_1d1e10;
        }
    }
    ctx->pc = 0x1D1E90u;
label_1d1e90:
    // 0x1d1e90: 0x10000027
label_1d1e94:
    if (ctx->pc == 0x1D1E94u) {
        ctx->pc = 0x1D1E98u;
        goto label_1d1e98;
    }
    ctx->pc = 0x1D1E90u;
    {
        const bool branch_taken_0x1d1e90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d1e90) {
            ctx->pc = 0x1D1F30u;
            goto label_1d1f30;
        }
    }
    ctx->pc = 0x1D1E98u;
label_1d1e98:
    // 0x1d1e98: 0x11082a
    ctx->pc = 0x1d1e98u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 17)));
label_1d1e9c:
    // 0x1d1e9c: 0x10200024
label_1d1ea0:
    if (ctx->pc == 0x1D1EA0u) {
        ctx->pc = 0x1D1EA0u;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D1EA4u;
        goto label_1d1ea4;
    }
    ctx->pc = 0x1D1E9Cu;
    {
        const bool branch_taken_0x1d1e9c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D1EA0u;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d1e9c) {
            ctx->pc = 0x1D1F30u;
            goto label_1d1f30;
        }
    }
    ctx->pc = 0x1D1EA4u;
label_1d1ea4:
    // 0x1d1ea4: 0x3c02002c
    ctx->pc = 0x1d1ea4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
label_1d1ea8:
    // 0x1d1ea8: 0x2450e240
    ctx->pc = 0x1d1ea8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294959680));
label_1d1eac:
    // 0x1d1eac: 0xc6150000
    ctx->pc = 0x1d1eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1d1eb0:
    // 0x1d1eb0: 0xc6400030
    ctx->pc = 0x1d1eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1eb4:
    // 0x1d1eb4: 0x3c023f80
    ctx->pc = 0x1d1eb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
label_1d1eb8:
    // 0x1d1eb8: 0x44820800
    ctx->pc = 0x1d1eb8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_1d1ebc:
    // 0x1d1ebc: 0x27a40080
    ctx->pc = 0x1d1ebcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
label_1d1ec0:
    // 0x1d1ec0: 0x27a50090
    ctx->pc = 0x1d1ec0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
label_1d1ec4:
    // 0x1d1ec4: 0x46150d01
    ctx->pc = 0x1d1ec4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
label_1d1ec8:
    // 0x1d1ec8: 0xe7a00080
    ctx->pc = 0x1d1ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1d1ecc:
    // 0x1d1ecc: 0xc6400034
    ctx->pc = 0x1d1eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1ed0:
    // 0x1d1ed0: 0xe7a00084
    ctx->pc = 0x1d1ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1d1ed4:
    // 0x1d1ed4: 0xc6400038
    ctx->pc = 0x1d1ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1ed8:
    // 0x1d1ed8: 0xc06bf00
label_1d1edc:
    if (ctx->pc == 0x1D1EDCu) {
        ctx->pc = 0x1D1EDCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1D1EE0u;
        goto label_1d1ee0;
    }
    ctx->pc = 0x1D1ED8u;
    SET_GPR_U32(ctx, 31, 0x1D1EE0u);
    ctx->pc = 0x1D1EDCu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1EE0u; }
        else if (ctx->pc != 0x1D1EE0u) { ctx->pc = 0x1D1EE0u; }
    }
    if (ctx->pc != 0x1D1EE0u) { return; }
    ctx->pc = 0x1D1EE0u;
label_1d1ee0:
    // 0x1d1ee0: 0xc6410000
    ctx->pc = 0x1d1ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1ee4:
    // 0x1d1ee4: 0xc7a00090
    ctx->pc = 0x1d1ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1ee8:
    // 0x1d1ee8: 0x26730001
    ctx->pc = 0x1d1ee8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_1d1eec:
    // 0x1d1eec: 0x271182a
    ctx->pc = 0x1d1eecu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 17)));
label_1d1ef0:
    // 0x1d1ef0: 0x26100004
    ctx->pc = 0x1d1ef0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
label_1d1ef4:
    // 0x1d1ef4: 0x4601a81a
    ctx->pc = 0x1d1ef4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_1d1ef8:
    // 0x1d1ef8: 0x4614001c
    ctx->pc = 0x1d1ef8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[20]));
label_1d1efc:
    // 0x1d1efc: 0xe6400000
    ctx->pc = 0x1d1efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_1d1f00:
    // 0x1d1f00: 0xc6410004
    ctx->pc = 0x1d1f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1f04:
    // 0x1d1f04: 0xc7a00094
    ctx->pc = 0x1d1f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1f08:
    // 0x1d1f08: 0x4601a81a
    ctx->pc = 0x1d1f08u;
    ctx->f[31] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_1d1f0c:
    // 0x1d1f0c: 0x4614001c
    ctx->pc = 0x1d1f0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[20]));
label_1d1f10:
    // 0x1d1f10: 0xe6400004
    ctx->pc = 0x1d1f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_1d1f14:
    // 0x1d1f14: 0xc6410008
    ctx->pc = 0x1d1f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1f18:
    // 0x1d1f18: 0xc7a00098
    ctx->pc = 0x1d1f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1f1c:
    // 0x1d1f1c: 0x4601a81a
    ctx->pc = 0x1d1f1cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_1d1f20:
    // 0x1d1f20: 0x4614001c
    ctx->pc = 0x1d1f20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[20]));
label_1d1f24:
    // 0x1d1f24: 0xe6400008
    ctx->pc = 0x1d1f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_1d1f28:
    // 0x1d1f28: 0x1460ffe0
label_1d1f2c:
    if (ctx->pc == 0x1D1F2Cu) {
        ctx->pc = 0x1D1F2Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x1D1F30u;
        goto label_1d1f30;
    }
    ctx->pc = 0x1D1F28u;
    {
        const bool branch_taken_0x1d1f28 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D1F2Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 80));
        if (branch_taken_0x1d1f28) {
            ctx->pc = 0x1D1EACu;
            goto label_1d1eac;
        }
    }
    ctx->pc = 0x1D1F30u;
label_1d1f30:
    // 0x1d1f30: 0x4bff6b7e
    ctx->pc = 0x1d1f30u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_1d1f34:
    // 0x1d1f34: 0x4bfe6b7e
    ctx->pc = 0x1d1f34u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_1d1f38:
    // 0x1d1f38: 0x4bfd6b7e
    ctx->pc = 0x1d1f38u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_1d1f3c:
    // 0x1d1f3c: 0x4bfc6b7e
    ctx->pc = 0x1d1f3cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_1d1f40:
    // 0x1d1f40: 0x7bbf0070
    ctx->pc = 0x1d1f40u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1d1f44:
    // 0x1d1f44: 0x7bb50060
    ctx->pc = 0x1d1f44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d1f48:
    // 0x1d1f48: 0x7bb40050
    ctx->pc = 0x1d1f48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d1f4c:
    // 0x1d1f4c: 0x7bb30040
    ctx->pc = 0x1d1f4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d1f50:
    // 0x1d1f50: 0x7bb20030
    ctx->pc = 0x1d1f50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d1f54:
    // 0x1d1f54: 0x7bb10020
    ctx->pc = 0x1d1f54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d1f58:
    // 0x1d1f58: 0x7bb00010
    ctx->pc = 0x1d1f58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1f5c:
    // 0x1d1f5c: 0xc7b50004
    ctx->pc = 0x1d1f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1d1f60:
    // 0x1d1f60: 0xc7b40000
    ctx->pc = 0x1d1f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d1f64:
    // 0x1d1f64: 0x3e00008
label_1d1f68:
    if (ctx->pc == 0x1D1F68u) {
        ctx->pc = 0x1D1F68u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x1D1F6Cu;
        goto label_fallthrough_0x1d1f64;
    }
    ctx->pc = 0x1D1F64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1F68u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D0450u: goto label_1d0450;
            case 0x1D0454u: goto label_1d0454;
            case 0x1D0458u: goto label_1d0458;
            case 0x1D045Cu: goto label_1d045c;
            case 0x1D0460u: goto label_1d0460;
            case 0x1D0464u: goto label_1d0464;
            case 0x1D0468u: goto label_1d0468;
            case 0x1D046Cu: goto label_1d046c;
            case 0x1D0470u: goto label_1d0470;
            case 0x1D0474u: goto label_1d0474;
            case 0x1D0478u: goto label_1d0478;
            case 0x1D047Cu: goto label_1d047c;
            case 0x1D0480u: goto label_1d0480;
            case 0x1D0484u: goto label_1d0484;
            case 0x1D0488u: goto label_1d0488;
            case 0x1D048Cu: goto label_1d048c;
            case 0x1D0490u: goto label_1d0490;
            case 0x1D0494u: goto label_1d0494;
            case 0x1D0498u: goto label_1d0498;
            case 0x1D049Cu: goto label_1d049c;
            case 0x1D04A0u: goto label_1d04a0;
            case 0x1D04A4u: goto label_1d04a4;
            case 0x1D04A8u: goto label_1d04a8;
            case 0x1D04ACu: goto label_1d04ac;
            case 0x1D04B0u: goto label_1d04b0;
            case 0x1D04B4u: goto label_1d04b4;
            case 0x1D04B8u: goto label_1d04b8;
            case 0x1D04BCu: goto label_1d04bc;
            case 0x1D04C0u: goto label_1d04c0;
            case 0x1D04C4u: goto label_1d04c4;
            case 0x1D04C8u: goto label_1d04c8;
            case 0x1D04CCu: goto label_1d04cc;
            case 0x1D04D0u: goto label_1d04d0;
            case 0x1D04D4u: goto label_1d04d4;
            case 0x1D04D8u: goto label_1d04d8;
            case 0x1D04DCu: goto label_1d04dc;
            case 0x1D04E0u: goto label_1d04e0;
            case 0x1D04E4u: goto label_1d04e4;
            case 0x1D04E8u: goto label_1d04e8;
            case 0x1D04ECu: goto label_1d04ec;
            case 0x1D04F0u: goto label_1d04f0;
            case 0x1D04F4u: goto label_1d04f4;
            case 0x1D04F8u: goto label_1d04f8;
            case 0x1D04FCu: goto label_1d04fc;
            case 0x1D0500u: goto label_1d0500;
            case 0x1D0504u: goto label_1d0504;
            case 0x1D0508u: goto label_1d0508;
            case 0x1D050Cu: goto label_1d050c;
            case 0x1D0510u: goto label_1d0510;
            case 0x1D0514u: goto label_1d0514;
            case 0x1D0518u: goto label_1d0518;
            case 0x1D051Cu: goto label_1d051c;
            case 0x1D0520u: goto label_1d0520;
            case 0x1D0524u: goto label_1d0524;
            case 0x1D0528u: goto label_1d0528;
            case 0x1D052Cu: goto label_1d052c;
            case 0x1D0530u: goto label_1d0530;
            case 0x1D0534u: goto label_1d0534;
            case 0x1D0538u: goto label_1d0538;
            case 0x1D053Cu: goto label_1d053c;
            case 0x1D0540u: goto label_1d0540;
            case 0x1D0544u: goto label_1d0544;
            case 0x1D0548u: goto label_1d0548;
            case 0x1D054Cu: goto label_1d054c;
            case 0x1D0550u: goto label_1d0550;
            case 0x1D0554u: goto label_1d0554;
            case 0x1D0558u: goto label_1d0558;
            case 0x1D055Cu: goto label_1d055c;
            case 0x1D0560u: goto label_1d0560;
            case 0x1D0564u: goto label_1d0564;
            case 0x1D0568u: goto label_1d0568;
            case 0x1D056Cu: goto label_1d056c;
            case 0x1D0570u: goto label_1d0570;
            case 0x1D0574u: goto label_1d0574;
            case 0x1D0578u: goto label_1d0578;
            case 0x1D057Cu: goto label_1d057c;
            case 0x1D0580u: goto label_1d0580;
            case 0x1D0584u: goto label_1d0584;
            case 0x1D0588u: goto label_1d0588;
            case 0x1D058Cu: goto label_1d058c;
            case 0x1D0590u: goto label_1d0590;
            case 0x1D0594u: goto label_1d0594;
            case 0x1D0598u: goto label_1d0598;
            case 0x1D059Cu: goto label_1d059c;
            case 0x1D05A0u: goto label_1d05a0;
            case 0x1D05A4u: goto label_1d05a4;
            case 0x1D05A8u: goto label_1d05a8;
            case 0x1D05ACu: goto label_1d05ac;
            case 0x1D05B0u: goto label_1d05b0;
            case 0x1D05B4u: goto label_1d05b4;
            case 0x1D05B8u: goto label_1d05b8;
            case 0x1D05BCu: goto label_1d05bc;
            case 0x1D05C0u: goto label_1d05c0;
            case 0x1D05C4u: goto label_1d05c4;
            case 0x1D05C8u: goto label_1d05c8;
            case 0x1D05CCu: goto label_1d05cc;
            case 0x1D05D0u: goto label_1d05d0;
            case 0x1D05D4u: goto label_1d05d4;
            case 0x1D05D8u: goto label_1d05d8;
            case 0x1D05DCu: goto label_1d05dc;
            case 0x1D05E0u: goto label_1d05e0;
            case 0x1D05E4u: goto label_1d05e4;
            case 0x1D05E8u: goto label_1d05e8;
            case 0x1D05ECu: goto label_1d05ec;
            case 0x1D05F0u: goto label_1d05f0;
            case 0x1D05F4u: goto label_1d05f4;
            case 0x1D05F8u: goto label_1d05f8;
            case 0x1D05FCu: goto label_1d05fc;
            case 0x1D0600u: goto label_1d0600;
            case 0x1D0604u: goto label_1d0604;
            case 0x1D0608u: goto label_1d0608;
            case 0x1D060Cu: goto label_1d060c;
            case 0x1D0610u: goto label_1d0610;
            case 0x1D0614u: goto label_1d0614;
            case 0x1D0618u: goto label_1d0618;
            case 0x1D061Cu: goto label_1d061c;
            case 0x1D0620u: goto label_1d0620;
            case 0x1D0624u: goto label_1d0624;
            case 0x1D0628u: goto label_1d0628;
            case 0x1D062Cu: goto label_1d062c;
            case 0x1D0630u: goto label_1d0630;
            case 0x1D0634u: goto label_1d0634;
            case 0x1D0638u: goto label_1d0638;
            case 0x1D063Cu: goto label_1d063c;
            case 0x1D0640u: goto label_1d0640;
            case 0x1D0644u: goto label_1d0644;
            case 0x1D0648u: goto label_1d0648;
            case 0x1D064Cu: goto label_1d064c;
            case 0x1D0650u: goto label_1d0650;
            case 0x1D0654u: goto label_1d0654;
            case 0x1D0658u: goto label_1d0658;
            case 0x1D065Cu: goto label_1d065c;
            case 0x1D0660u: goto label_1d0660;
            case 0x1D0664u: goto label_1d0664;
            case 0x1D0668u: goto label_1d0668;
            case 0x1D066Cu: goto label_1d066c;
            case 0x1D0670u: goto label_1d0670;
            case 0x1D0674u: goto label_1d0674;
            case 0x1D0678u: goto label_1d0678;
            case 0x1D067Cu: goto label_1d067c;
            case 0x1D0680u: goto label_1d0680;
            case 0x1D0684u: goto label_1d0684;
            case 0x1D0688u: goto label_1d0688;
            case 0x1D068Cu: goto label_1d068c;
            case 0x1D0690u: goto label_1d0690;
            case 0x1D0694u: goto label_1d0694;
            case 0x1D0698u: goto label_1d0698;
            case 0x1D069Cu: goto label_1d069c;
            case 0x1D06A0u: goto label_1d06a0;
            case 0x1D06A4u: goto label_1d06a4;
            case 0x1D06A8u: goto label_1d06a8;
            case 0x1D06ACu: goto label_1d06ac;
            case 0x1D06B0u: goto label_1d06b0;
            case 0x1D06B4u: goto label_1d06b4;
            case 0x1D06B8u: goto label_1d06b8;
            case 0x1D06BCu: goto label_1d06bc;
            case 0x1D06C0u: goto label_1d06c0;
            case 0x1D06C4u: goto label_1d06c4;
            case 0x1D06C8u: goto label_1d06c8;
            case 0x1D06CCu: goto label_1d06cc;
            case 0x1D06D0u: goto label_1d06d0;
            case 0x1D06D4u: goto label_1d06d4;
            case 0x1D06D8u: goto label_1d06d8;
            case 0x1D06DCu: goto label_1d06dc;
            case 0x1D06E0u: goto label_1d06e0;
            case 0x1D06E4u: goto label_1d06e4;
            case 0x1D06E8u: goto label_1d06e8;
            case 0x1D06ECu: goto label_1d06ec;
            case 0x1D06F0u: goto label_1d06f0;
            case 0x1D06F4u: goto label_1d06f4;
            case 0x1D06F8u: goto label_1d06f8;
            case 0x1D06FCu: goto label_1d06fc;
            case 0x1D0700u: goto label_1d0700;
            case 0x1D0704u: goto label_1d0704;
            case 0x1D0708u: goto label_1d0708;
            case 0x1D070Cu: goto label_1d070c;
            case 0x1D0710u: goto label_1d0710;
            case 0x1D0714u: goto label_1d0714;
            case 0x1D0718u: goto label_1d0718;
            case 0x1D071Cu: goto label_1d071c;
            case 0x1D0720u: goto label_1d0720;
            case 0x1D0724u: goto label_1d0724;
            case 0x1D0728u: goto label_1d0728;
            case 0x1D072Cu: goto label_1d072c;
            case 0x1D0730u: goto label_1d0730;
            case 0x1D0734u: goto label_1d0734;
            case 0x1D0738u: goto label_1d0738;
            case 0x1D073Cu: goto label_1d073c;
            case 0x1D0740u: goto label_1d0740;
            case 0x1D0744u: goto label_1d0744;
            case 0x1D0748u: goto label_1d0748;
            case 0x1D074Cu: goto label_1d074c;
            case 0x1D0750u: goto label_1d0750;
            case 0x1D0754u: goto label_1d0754;
            case 0x1D0758u: goto label_1d0758;
            case 0x1D075Cu: goto label_1d075c;
            case 0x1D0760u: goto label_1d0760;
            case 0x1D0764u: goto label_1d0764;
            case 0x1D0768u: goto label_1d0768;
            case 0x1D076Cu: goto label_1d076c;
            case 0x1D0770u: goto label_1d0770;
            case 0x1D0774u: goto label_1d0774;
            case 0x1D0778u: goto label_1d0778;
            case 0x1D077Cu: goto label_1d077c;
            case 0x1D0780u: goto label_1d0780;
            case 0x1D0784u: goto label_1d0784;
            case 0x1D0788u: goto label_1d0788;
            case 0x1D078Cu: goto label_1d078c;
            case 0x1D0790u: goto label_1d0790;
            case 0x1D0794u: goto label_1d0794;
            case 0x1D0798u: goto label_1d0798;
            case 0x1D079Cu: goto label_1d079c;
            case 0x1D07A0u: goto label_1d07a0;
            case 0x1D07A4u: goto label_1d07a4;
            case 0x1D07A8u: goto label_1d07a8;
            case 0x1D07ACu: goto label_1d07ac;
            case 0x1D07B0u: goto label_1d07b0;
            case 0x1D07B4u: goto label_1d07b4;
            case 0x1D07B8u: goto label_1d07b8;
            case 0x1D07BCu: goto label_1d07bc;
            case 0x1D07C0u: goto label_1d07c0;
            case 0x1D07C4u: goto label_1d07c4;
            case 0x1D07C8u: goto label_1d07c8;
            case 0x1D07CCu: goto label_1d07cc;
            case 0x1D07D0u: goto label_1d07d0;
            case 0x1D07D4u: goto label_1d07d4;
            case 0x1D07D8u: goto label_1d07d8;
            case 0x1D07DCu: goto label_1d07dc;
            case 0x1D07E0u: goto label_1d07e0;
            case 0x1D07E4u: goto label_1d07e4;
            case 0x1D07E8u: goto label_1d07e8;
            case 0x1D07ECu: goto label_1d07ec;
            case 0x1D07F0u: goto label_1d07f0;
            case 0x1D07F4u: goto label_1d07f4;
            case 0x1D07F8u: goto label_1d07f8;
            case 0x1D07FCu: goto label_1d07fc;
            case 0x1D0800u: goto label_1d0800;
            case 0x1D0804u: goto label_1d0804;
            case 0x1D0808u: goto label_1d0808;
            case 0x1D080Cu: goto label_1d080c;
            case 0x1D0810u: goto label_1d0810;
            case 0x1D0814u: goto label_1d0814;
            case 0x1D0818u: goto label_1d0818;
            case 0x1D081Cu: goto label_1d081c;
            case 0x1D0820u: goto label_1d0820;
            case 0x1D0824u: goto label_1d0824;
            case 0x1D0828u: goto label_1d0828;
            case 0x1D082Cu: goto label_1d082c;
            case 0x1D0830u: goto label_1d0830;
            case 0x1D0834u: goto label_1d0834;
            case 0x1D0838u: goto label_1d0838;
            case 0x1D083Cu: goto label_1d083c;
            case 0x1D0840u: goto label_1d0840;
            case 0x1D0844u: goto label_1d0844;
            case 0x1D0848u: goto label_1d0848;
            case 0x1D084Cu: goto label_1d084c;
            case 0x1D0850u: goto label_1d0850;
            case 0x1D0854u: goto label_1d0854;
            case 0x1D0858u: goto label_1d0858;
            case 0x1D085Cu: goto label_1d085c;
            case 0x1D0860u: goto label_1d0860;
            case 0x1D0864u: goto label_1d0864;
            case 0x1D0868u: goto label_1d0868;
            case 0x1D086Cu: goto label_1d086c;
            case 0x1D0870u: goto label_1d0870;
            case 0x1D0874u: goto label_1d0874;
            case 0x1D0878u: goto label_1d0878;
            case 0x1D087Cu: goto label_1d087c;
            case 0x1D0880u: goto label_1d0880;
            case 0x1D0884u: goto label_1d0884;
            case 0x1D0888u: goto label_1d0888;
            case 0x1D088Cu: goto label_1d088c;
            case 0x1D0890u: goto label_1d0890;
            case 0x1D0894u: goto label_1d0894;
            case 0x1D0898u: goto label_1d0898;
            case 0x1D089Cu: goto label_1d089c;
            case 0x1D08A0u: goto label_1d08a0;
            case 0x1D08A4u: goto label_1d08a4;
            case 0x1D08A8u: goto label_1d08a8;
            case 0x1D08ACu: goto label_1d08ac;
            case 0x1D08B0u: goto label_1d08b0;
            case 0x1D08B4u: goto label_1d08b4;
            case 0x1D08B8u: goto label_1d08b8;
            case 0x1D08BCu: goto label_1d08bc;
            case 0x1D08C0u: goto label_1d08c0;
            case 0x1D08C4u: goto label_1d08c4;
            case 0x1D08C8u: goto label_1d08c8;
            case 0x1D08CCu: goto label_1d08cc;
            case 0x1D08D0u: goto label_1d08d0;
            case 0x1D08D4u: goto label_1d08d4;
            case 0x1D08D8u: goto label_1d08d8;
            case 0x1D08DCu: goto label_1d08dc;
            case 0x1D08E0u: goto label_1d08e0;
            case 0x1D08E4u: goto label_1d08e4;
            case 0x1D08E8u: goto label_1d08e8;
            case 0x1D08ECu: goto label_1d08ec;
            case 0x1D08F0u: goto label_1d08f0;
            case 0x1D08F4u: goto label_1d08f4;
            case 0x1D08F8u: goto label_1d08f8;
            case 0x1D08FCu: goto label_1d08fc;
            case 0x1D0900u: goto label_1d0900;
            case 0x1D0904u: goto label_1d0904;
            case 0x1D0908u: goto label_1d0908;
            case 0x1D090Cu: goto label_1d090c;
            case 0x1D0910u: goto label_1d0910;
            case 0x1D0914u: goto label_1d0914;
            case 0x1D0918u: goto label_1d0918;
            case 0x1D091Cu: goto label_1d091c;
            case 0x1D0920u: goto label_1d0920;
            case 0x1D0924u: goto label_1d0924;
            case 0x1D0928u: goto label_1d0928;
            case 0x1D092Cu: goto label_1d092c;
            case 0x1D0930u: goto label_1d0930;
            case 0x1D0934u: goto label_1d0934;
            case 0x1D0938u: goto label_1d0938;
            case 0x1D093Cu: goto label_1d093c;
            case 0x1D0940u: goto label_1d0940;
            case 0x1D0944u: goto label_1d0944;
            case 0x1D0948u: goto label_1d0948;
            case 0x1D094Cu: goto label_1d094c;
            case 0x1D0950u: goto label_1d0950;
            case 0x1D0954u: goto label_1d0954;
            case 0x1D0958u: goto label_1d0958;
            case 0x1D095Cu: goto label_1d095c;
            case 0x1D0960u: goto label_1d0960;
            case 0x1D0964u: goto label_1d0964;
            case 0x1D0968u: goto label_1d0968;
            case 0x1D096Cu: goto label_1d096c;
            case 0x1D0970u: goto label_1d0970;
            case 0x1D0974u: goto label_1d0974;
            case 0x1D0978u: goto label_1d0978;
            case 0x1D097Cu: goto label_1d097c;
            case 0x1D0980u: goto label_1d0980;
            case 0x1D0984u: goto label_1d0984;
            case 0x1D0988u: goto label_1d0988;
            case 0x1D098Cu: goto label_1d098c;
            case 0x1D0990u: goto label_1d0990;
            case 0x1D0994u: goto label_1d0994;
            case 0x1D0998u: goto label_1d0998;
            case 0x1D099Cu: goto label_1d099c;
            case 0x1D09A0u: goto label_1d09a0;
            case 0x1D09A4u: goto label_1d09a4;
            case 0x1D09A8u: goto label_1d09a8;
            case 0x1D09ACu: goto label_1d09ac;
            case 0x1D09B0u: goto label_1d09b0;
            case 0x1D09B4u: goto label_1d09b4;
            case 0x1D09B8u: goto label_1d09b8;
            case 0x1D09BCu: goto label_1d09bc;
            case 0x1D09C0u: goto label_1d09c0;
            case 0x1D09C4u: goto label_1d09c4;
            case 0x1D09C8u: goto label_1d09c8;
            case 0x1D09CCu: goto label_1d09cc;
            case 0x1D09D0u: goto label_1d09d0;
            case 0x1D09D4u: goto label_1d09d4;
            case 0x1D09D8u: goto label_1d09d8;
            case 0x1D09DCu: goto label_1d09dc;
            case 0x1D09E0u: goto label_1d09e0;
            case 0x1D09E4u: goto label_1d09e4;
            case 0x1D09E8u: goto label_1d09e8;
            case 0x1D09ECu: goto label_1d09ec;
            case 0x1D09F0u: goto label_1d09f0;
            case 0x1D09F4u: goto label_1d09f4;
            case 0x1D09F8u: goto label_1d09f8;
            case 0x1D09FCu: goto label_1d09fc;
            case 0x1D0A00u: goto label_1d0a00;
            case 0x1D0A04u: goto label_1d0a04;
            case 0x1D0A08u: goto label_1d0a08;
            case 0x1D0A0Cu: goto label_1d0a0c;
            case 0x1D0A10u: goto label_1d0a10;
            case 0x1D0A14u: goto label_1d0a14;
            case 0x1D0A18u: goto label_1d0a18;
            case 0x1D0A1Cu: goto label_1d0a1c;
            case 0x1D0A20u: goto label_1d0a20;
            case 0x1D0A24u: goto label_1d0a24;
            case 0x1D0A28u: goto label_1d0a28;
            case 0x1D0A2Cu: goto label_1d0a2c;
            case 0x1D0A30u: goto label_1d0a30;
            case 0x1D0A34u: goto label_1d0a34;
            case 0x1D0A38u: goto label_1d0a38;
            case 0x1D0A3Cu: goto label_1d0a3c;
            case 0x1D0A40u: goto label_1d0a40;
            case 0x1D0A44u: goto label_1d0a44;
            case 0x1D0A48u: goto label_1d0a48;
            case 0x1D0A4Cu: goto label_1d0a4c;
            case 0x1D0A50u: goto label_1d0a50;
            case 0x1D0A54u: goto label_1d0a54;
            case 0x1D0A58u: goto label_1d0a58;
            case 0x1D0A5Cu: goto label_1d0a5c;
            case 0x1D0A60u: goto label_1d0a60;
            case 0x1D0A64u: goto label_1d0a64;
            case 0x1D0A68u: goto label_1d0a68;
            case 0x1D0A6Cu: goto label_1d0a6c;
            case 0x1D0A70u: goto label_1d0a70;
            case 0x1D0A74u: goto label_1d0a74;
            case 0x1D0A78u: goto label_1d0a78;
            case 0x1D0A7Cu: goto label_1d0a7c;
            case 0x1D0A80u: goto label_1d0a80;
            case 0x1D0A84u: goto label_1d0a84;
            case 0x1D0A88u: goto label_1d0a88;
            case 0x1D0A8Cu: goto label_1d0a8c;
            case 0x1D0A90u: goto label_1d0a90;
            case 0x1D0A94u: goto label_1d0a94;
            case 0x1D0A98u: goto label_1d0a98;
            case 0x1D0A9Cu: goto label_1d0a9c;
            case 0x1D0AA0u: goto label_1d0aa0;
            case 0x1D0AA4u: goto label_1d0aa4;
            case 0x1D0AA8u: goto label_1d0aa8;
            case 0x1D0AACu: goto label_1d0aac;
            case 0x1D0AB0u: goto label_1d0ab0;
            case 0x1D0AB4u: goto label_1d0ab4;
            case 0x1D0AB8u: goto label_1d0ab8;
            case 0x1D0ABCu: goto label_1d0abc;
            case 0x1D0AC0u: goto label_1d0ac0;
            case 0x1D0AC4u: goto label_1d0ac4;
            case 0x1D0AC8u: goto label_1d0ac8;
            case 0x1D0ACCu: goto label_1d0acc;
            case 0x1D0AD0u: goto label_1d0ad0;
            case 0x1D0AD4u: goto label_1d0ad4;
            case 0x1D0AD8u: goto label_1d0ad8;
            case 0x1D0ADCu: goto label_1d0adc;
            case 0x1D0AE0u: goto label_1d0ae0;
            case 0x1D0AE4u: goto label_1d0ae4;
            case 0x1D0AE8u: goto label_1d0ae8;
            case 0x1D0AECu: goto label_1d0aec;
            case 0x1D0AF0u: goto label_1d0af0;
            case 0x1D0AF4u: goto label_1d0af4;
            case 0x1D0AF8u: goto label_1d0af8;
            case 0x1D0AFCu: goto label_1d0afc;
            case 0x1D0B00u: goto label_1d0b00;
            case 0x1D0B04u: goto label_1d0b04;
            case 0x1D0B08u: goto label_1d0b08;
            case 0x1D0B0Cu: goto label_1d0b0c;
            case 0x1D0B10u: goto label_1d0b10;
            case 0x1D0B14u: goto label_1d0b14;
            case 0x1D0B18u: goto label_1d0b18;
            case 0x1D0B1Cu: goto label_1d0b1c;
            case 0x1D0B20u: goto label_1d0b20;
            case 0x1D0B24u: goto label_1d0b24;
            case 0x1D0B28u: goto label_1d0b28;
            case 0x1D0B2Cu: goto label_1d0b2c;
            case 0x1D0B30u: goto label_1d0b30;
            case 0x1D0B34u: goto label_1d0b34;
            case 0x1D0B38u: goto label_1d0b38;
            case 0x1D0B3Cu: goto label_1d0b3c;
            case 0x1D0B40u: goto label_1d0b40;
            case 0x1D0B44u: goto label_1d0b44;
            case 0x1D0B48u: goto label_1d0b48;
            case 0x1D0B4Cu: goto label_1d0b4c;
            case 0x1D0B50u: goto label_1d0b50;
            case 0x1D0B54u: goto label_1d0b54;
            case 0x1D0B58u: goto label_1d0b58;
            case 0x1D0B5Cu: goto label_1d0b5c;
            case 0x1D0B60u: goto label_1d0b60;
            case 0x1D0B64u: goto label_1d0b64;
            case 0x1D0B68u: goto label_1d0b68;
            case 0x1D0B6Cu: goto label_1d0b6c;
            case 0x1D0B70u: goto label_1d0b70;
            case 0x1D0B74u: goto label_1d0b74;
            case 0x1D0B78u: goto label_1d0b78;
            case 0x1D0B7Cu: goto label_1d0b7c;
            case 0x1D0B80u: goto label_1d0b80;
            case 0x1D0B84u: goto label_1d0b84;
            case 0x1D0B88u: goto label_1d0b88;
            case 0x1D0B8Cu: goto label_1d0b8c;
            case 0x1D0B90u: goto label_1d0b90;
            case 0x1D0B94u: goto label_1d0b94;
            case 0x1D0B98u: goto label_1d0b98;
            case 0x1D0B9Cu: goto label_1d0b9c;
            case 0x1D0BA0u: goto label_1d0ba0;
            case 0x1D0BA4u: goto label_1d0ba4;
            case 0x1D0BA8u: goto label_1d0ba8;
            case 0x1D0BACu: goto label_1d0bac;
            case 0x1D0BB0u: goto label_1d0bb0;
            case 0x1D0BB4u: goto label_1d0bb4;
            case 0x1D0BB8u: goto label_1d0bb8;
            case 0x1D0BBCu: goto label_1d0bbc;
            case 0x1D0BC0u: goto label_1d0bc0;
            case 0x1D0BC4u: goto label_1d0bc4;
            case 0x1D0BC8u: goto label_1d0bc8;
            case 0x1D0BCCu: goto label_1d0bcc;
            case 0x1D0BD0u: goto label_1d0bd0;
            case 0x1D0BD4u: goto label_1d0bd4;
            case 0x1D0BD8u: goto label_1d0bd8;
            case 0x1D0BDCu: goto label_1d0bdc;
            case 0x1D0BE0u: goto label_1d0be0;
            case 0x1D0BE4u: goto label_1d0be4;
            case 0x1D0BE8u: goto label_1d0be8;
            case 0x1D0BECu: goto label_1d0bec;
            case 0x1D0BF0u: goto label_1d0bf0;
            case 0x1D0BF4u: goto label_1d0bf4;
            case 0x1D0BF8u: goto label_1d0bf8;
            case 0x1D0BFCu: goto label_1d0bfc;
            case 0x1D0C00u: goto label_1d0c00;
            case 0x1D0C04u: goto label_1d0c04;
            case 0x1D0C08u: goto label_1d0c08;
            case 0x1D0C0Cu: goto label_1d0c0c;
            case 0x1D0C10u: goto label_1d0c10;
            case 0x1D0C14u: goto label_1d0c14;
            case 0x1D0C18u: goto label_1d0c18;
            case 0x1D0C1Cu: goto label_1d0c1c;
            case 0x1D0C20u: goto label_1d0c20;
            case 0x1D0C24u: goto label_1d0c24;
            case 0x1D0C28u: goto label_1d0c28;
            case 0x1D0C2Cu: goto label_1d0c2c;
            case 0x1D0C30u: goto label_1d0c30;
            case 0x1D0C34u: goto label_1d0c34;
            case 0x1D0C38u: goto label_1d0c38;
            case 0x1D0C3Cu: goto label_1d0c3c;
            case 0x1D0C40u: goto label_1d0c40;
            case 0x1D0C44u: goto label_1d0c44;
            case 0x1D0C48u: goto label_1d0c48;
            case 0x1D0C4Cu: goto label_1d0c4c;
            case 0x1D0C50u: goto label_1d0c50;
            case 0x1D0C54u: goto label_1d0c54;
            case 0x1D0C58u: goto label_1d0c58;
            case 0x1D0C5Cu: goto label_1d0c5c;
            case 0x1D0C60u: goto label_1d0c60;
            case 0x1D0C64u: goto label_1d0c64;
            case 0x1D0C68u: goto label_1d0c68;
            case 0x1D0C6Cu: goto label_1d0c6c;
            case 0x1D0C70u: goto label_1d0c70;
            case 0x1D0C74u: goto label_1d0c74;
            case 0x1D0C78u: goto label_1d0c78;
            case 0x1D0C7Cu: goto label_1d0c7c;
            case 0x1D0C80u: goto label_1d0c80;
            case 0x1D0C84u: goto label_1d0c84;
            case 0x1D0C88u: goto label_1d0c88;
            case 0x1D0C8Cu: goto label_1d0c8c;
            case 0x1D0C90u: goto label_1d0c90;
            case 0x1D0C94u: goto label_1d0c94;
            case 0x1D0C98u: goto label_1d0c98;
            case 0x1D0C9Cu: goto label_1d0c9c;
            case 0x1D0CA0u: goto label_1d0ca0;
            case 0x1D0CA4u: goto label_1d0ca4;
            case 0x1D0CA8u: goto label_1d0ca8;
            case 0x1D0CACu: goto label_1d0cac;
            case 0x1D0CB0u: goto label_1d0cb0;
            case 0x1D0CB4u: goto label_1d0cb4;
            case 0x1D0CB8u: goto label_1d0cb8;
            case 0x1D0CBCu: goto label_1d0cbc;
            case 0x1D0CC0u: goto label_1d0cc0;
            case 0x1D0CC4u: goto label_1d0cc4;
            case 0x1D0CC8u: goto label_1d0cc8;
            case 0x1D0CCCu: goto label_1d0ccc;
            case 0x1D0CD0u: goto label_1d0cd0;
            case 0x1D0CD4u: goto label_1d0cd4;
            case 0x1D0CD8u: goto label_1d0cd8;
            case 0x1D0CDCu: goto label_1d0cdc;
            case 0x1D0CE0u: goto label_1d0ce0;
            case 0x1D0CE4u: goto label_1d0ce4;
            case 0x1D0CE8u: goto label_1d0ce8;
            case 0x1D0CECu: goto label_1d0cec;
            case 0x1D0CF0u: goto label_1d0cf0;
            case 0x1D0CF4u: goto label_1d0cf4;
            case 0x1D0CF8u: goto label_1d0cf8;
            case 0x1D0CFCu: goto label_1d0cfc;
            case 0x1D0D00u: goto label_1d0d00;
            case 0x1D0D04u: goto label_1d0d04;
            case 0x1D0D08u: goto label_1d0d08;
            case 0x1D0D0Cu: goto label_1d0d0c;
            case 0x1D0D10u: goto label_1d0d10;
            case 0x1D0D14u: goto label_1d0d14;
            case 0x1D0D18u: goto label_1d0d18;
            case 0x1D0D1Cu: goto label_1d0d1c;
            case 0x1D0D20u: goto label_1d0d20;
            case 0x1D0D24u: goto label_1d0d24;
            case 0x1D0D28u: goto label_1d0d28;
            case 0x1D0D2Cu: goto label_1d0d2c;
            case 0x1D0D30u: goto label_1d0d30;
            case 0x1D0D34u: goto label_1d0d34;
            case 0x1D0D38u: goto label_1d0d38;
            case 0x1D0D3Cu: goto label_1d0d3c;
            case 0x1D0D40u: goto label_1d0d40;
            case 0x1D0D44u: goto label_1d0d44;
            case 0x1D0D48u: goto label_1d0d48;
            case 0x1D0D4Cu: goto label_1d0d4c;
            case 0x1D0D50u: goto label_1d0d50;
            case 0x1D0D54u: goto label_1d0d54;
            case 0x1D0D58u: goto label_1d0d58;
            case 0x1D0D5Cu: goto label_1d0d5c;
            case 0x1D0D60u: goto label_1d0d60;
            case 0x1D0D64u: goto label_1d0d64;
            case 0x1D0D68u: goto label_1d0d68;
            case 0x1D0D6Cu: goto label_1d0d6c;
            case 0x1D0D70u: goto label_1d0d70;
            case 0x1D0D74u: goto label_1d0d74;
            case 0x1D0D78u: goto label_1d0d78;
            case 0x1D0D7Cu: goto label_1d0d7c;
            case 0x1D0D80u: goto label_1d0d80;
            case 0x1D0D84u: goto label_1d0d84;
            case 0x1D0D88u: goto label_1d0d88;
            case 0x1D0D8Cu: goto label_1d0d8c;
            case 0x1D0D90u: goto label_1d0d90;
            case 0x1D0D94u: goto label_1d0d94;
            case 0x1D0D98u: goto label_1d0d98;
            case 0x1D0D9Cu: goto label_1d0d9c;
            case 0x1D0DA0u: goto label_1d0da0;
            case 0x1D0DA4u: goto label_1d0da4;
            case 0x1D0DA8u: goto label_1d0da8;
            case 0x1D0DACu: goto label_1d0dac;
            case 0x1D0DB0u: goto label_1d0db0;
            case 0x1D0DB4u: goto label_1d0db4;
            case 0x1D0DB8u: goto label_1d0db8;
            case 0x1D0DBCu: goto label_1d0dbc;
            case 0x1D0DC0u: goto label_1d0dc0;
            case 0x1D0DC4u: goto label_1d0dc4;
            case 0x1D0DC8u: goto label_1d0dc8;
            case 0x1D0DCCu: goto label_1d0dcc;
            case 0x1D0DD0u: goto label_1d0dd0;
            case 0x1D0DD4u: goto label_1d0dd4;
            case 0x1D0DD8u: goto label_1d0dd8;
            case 0x1D0DDCu: goto label_1d0ddc;
            case 0x1D0DE0u: goto label_1d0de0;
            case 0x1D0DE4u: goto label_1d0de4;
            case 0x1D0DE8u: goto label_1d0de8;
            case 0x1D0DECu: goto label_1d0dec;
            case 0x1D0DF0u: goto label_1d0df0;
            case 0x1D0DF4u: goto label_1d0df4;
            case 0x1D0DF8u: goto label_1d0df8;
            case 0x1D0DFCu: goto label_1d0dfc;
            case 0x1D0E00u: goto label_1d0e00;
            case 0x1D0E04u: goto label_1d0e04;
            case 0x1D0E08u: goto label_1d0e08;
            case 0x1D0E0Cu: goto label_1d0e0c;
            case 0x1D0E10u: goto label_1d0e10;
            case 0x1D0E14u: goto label_1d0e14;
            case 0x1D0E18u: goto label_1d0e18;
            case 0x1D0E1Cu: goto label_1d0e1c;
            case 0x1D0E20u: goto label_1d0e20;
            case 0x1D0E24u: goto label_1d0e24;
            case 0x1D0E28u: goto label_1d0e28;
            case 0x1D0E2Cu: goto label_1d0e2c;
            case 0x1D0E30u: goto label_1d0e30;
            case 0x1D0E34u: goto label_1d0e34;
            case 0x1D0E38u: goto label_1d0e38;
            case 0x1D0E3Cu: goto label_1d0e3c;
            case 0x1D0E40u: goto label_1d0e40;
            case 0x1D0E44u: goto label_1d0e44;
            case 0x1D0E48u: goto label_1d0e48;
            case 0x1D0E4Cu: goto label_1d0e4c;
            case 0x1D0E50u: goto label_1d0e50;
            case 0x1D0E54u: goto label_1d0e54;
            case 0x1D0E58u: goto label_1d0e58;
            case 0x1D0E5Cu: goto label_1d0e5c;
            case 0x1D0E60u: goto label_1d0e60;
            case 0x1D0E64u: goto label_1d0e64;
            case 0x1D0E68u: goto label_1d0e68;
            case 0x1D0E6Cu: goto label_1d0e6c;
            case 0x1D0E70u: goto label_1d0e70;
            case 0x1D0E74u: goto label_1d0e74;
            case 0x1D0E78u: goto label_1d0e78;
            case 0x1D0E7Cu: goto label_1d0e7c;
            case 0x1D0E80u: goto label_1d0e80;
            case 0x1D0E84u: goto label_1d0e84;
            case 0x1D0E88u: goto label_1d0e88;
            case 0x1D0E8Cu: goto label_1d0e8c;
            case 0x1D0E90u: goto label_1d0e90;
            case 0x1D0E94u: goto label_1d0e94;
            case 0x1D0E98u: goto label_1d0e98;
            case 0x1D0E9Cu: goto label_1d0e9c;
            case 0x1D0EA0u: goto label_1d0ea0;
            case 0x1D0EA4u: goto label_1d0ea4;
            case 0x1D0EA8u: goto label_1d0ea8;
            case 0x1D0EACu: goto label_1d0eac;
            case 0x1D0EB0u: goto label_1d0eb0;
            case 0x1D0EB4u: goto label_1d0eb4;
            case 0x1D0EB8u: goto label_1d0eb8;
            case 0x1D0EBCu: goto label_1d0ebc;
            case 0x1D0EC0u: goto label_1d0ec0;
            case 0x1D0EC4u: goto label_1d0ec4;
            case 0x1D0EC8u: goto label_1d0ec8;
            case 0x1D0ECCu: goto label_1d0ecc;
            case 0x1D0ED0u: goto label_1d0ed0;
            case 0x1D0ED4u: goto label_1d0ed4;
            case 0x1D0ED8u: goto label_1d0ed8;
            case 0x1D0EDCu: goto label_1d0edc;
            case 0x1D0EE0u: goto label_1d0ee0;
            case 0x1D0EE4u: goto label_1d0ee4;
            case 0x1D0EE8u: goto label_1d0ee8;
            case 0x1D0EECu: goto label_1d0eec;
            case 0x1D0EF0u: goto label_1d0ef0;
            case 0x1D0EF4u: goto label_1d0ef4;
            case 0x1D0EF8u: goto label_1d0ef8;
            case 0x1D0EFCu: goto label_1d0efc;
            case 0x1D0F00u: goto label_1d0f00;
            case 0x1D0F04u: goto label_1d0f04;
            case 0x1D0F08u: goto label_1d0f08;
            case 0x1D0F0Cu: goto label_1d0f0c;
            case 0x1D0F10u: goto label_1d0f10;
            case 0x1D0F14u: goto label_1d0f14;
            case 0x1D0F18u: goto label_1d0f18;
            case 0x1D0F1Cu: goto label_1d0f1c;
            case 0x1D0F20u: goto label_1d0f20;
            case 0x1D0F24u: goto label_1d0f24;
            case 0x1D0F28u: goto label_1d0f28;
            case 0x1D0F2Cu: goto label_1d0f2c;
            case 0x1D0F30u: goto label_1d0f30;
            case 0x1D0F34u: goto label_1d0f34;
            case 0x1D0F38u: goto label_1d0f38;
            case 0x1D0F3Cu: goto label_1d0f3c;
            case 0x1D0F40u: goto label_1d0f40;
            case 0x1D0F44u: goto label_1d0f44;
            case 0x1D0F48u: goto label_1d0f48;
            case 0x1D0F4Cu: goto label_1d0f4c;
            case 0x1D0F50u: goto label_1d0f50;
            case 0x1D0F54u: goto label_1d0f54;
            case 0x1D0F58u: goto label_1d0f58;
            case 0x1D0F5Cu: goto label_1d0f5c;
            case 0x1D0F60u: goto label_1d0f60;
            case 0x1D0F64u: goto label_1d0f64;
            case 0x1D0F68u: goto label_1d0f68;
            case 0x1D0F6Cu: goto label_1d0f6c;
            case 0x1D0F70u: goto label_1d0f70;
            case 0x1D0F74u: goto label_1d0f74;
            case 0x1D0F78u: goto label_1d0f78;
            case 0x1D0F7Cu: goto label_1d0f7c;
            case 0x1D0F80u: goto label_1d0f80;
            case 0x1D0F84u: goto label_1d0f84;
            case 0x1D0F88u: goto label_1d0f88;
            case 0x1D0F8Cu: goto label_1d0f8c;
            case 0x1D0F90u: goto label_1d0f90;
            case 0x1D0F94u: goto label_1d0f94;
            case 0x1D0F98u: goto label_1d0f98;
            case 0x1D0F9Cu: goto label_1d0f9c;
            case 0x1D0FA0u: goto label_1d0fa0;
            case 0x1D0FA4u: goto label_1d0fa4;
            case 0x1D0FA8u: goto label_1d0fa8;
            case 0x1D0FACu: goto label_1d0fac;
            case 0x1D0FB0u: goto label_1d0fb0;
            case 0x1D0FB4u: goto label_1d0fb4;
            case 0x1D0FB8u: goto label_1d0fb8;
            case 0x1D0FBCu: goto label_1d0fbc;
            case 0x1D0FC0u: goto label_1d0fc0;
            case 0x1D0FC4u: goto label_1d0fc4;
            case 0x1D0FC8u: goto label_1d0fc8;
            case 0x1D0FCCu: goto label_1d0fcc;
            case 0x1D0FD0u: goto label_1d0fd0;
            case 0x1D0FD4u: goto label_1d0fd4;
            case 0x1D0FD8u: goto label_1d0fd8;
            case 0x1D0FDCu: goto label_1d0fdc;
            case 0x1D0FE0u: goto label_1d0fe0;
            case 0x1D0FE4u: goto label_1d0fe4;
            case 0x1D0FE8u: goto label_1d0fe8;
            case 0x1D0FECu: goto label_1d0fec;
            case 0x1D0FF0u: goto label_1d0ff0;
            case 0x1D0FF4u: goto label_1d0ff4;
            case 0x1D0FF8u: goto label_1d0ff8;
            case 0x1D0FFCu: goto label_1d0ffc;
            case 0x1D1000u: goto label_1d1000;
            case 0x1D1004u: goto label_1d1004;
            case 0x1D1008u: goto label_1d1008;
            case 0x1D100Cu: goto label_1d100c;
            case 0x1D1010u: goto label_1d1010;
            case 0x1D1014u: goto label_1d1014;
            case 0x1D1018u: goto label_1d1018;
            case 0x1D101Cu: goto label_1d101c;
            case 0x1D1020u: goto label_1d1020;
            case 0x1D1024u: goto label_1d1024;
            case 0x1D1028u: goto label_1d1028;
            case 0x1D102Cu: goto label_1d102c;
            case 0x1D1030u: goto label_1d1030;
            case 0x1D1034u: goto label_1d1034;
            case 0x1D1038u: goto label_1d1038;
            case 0x1D103Cu: goto label_1d103c;
            case 0x1D1040u: goto label_1d1040;
            case 0x1D1044u: goto label_1d1044;
            case 0x1D1048u: goto label_1d1048;
            case 0x1D104Cu: goto label_1d104c;
            case 0x1D1050u: goto label_1d1050;
            case 0x1D1054u: goto label_1d1054;
            case 0x1D1058u: goto label_1d1058;
            case 0x1D105Cu: goto label_1d105c;
            case 0x1D1060u: goto label_1d1060;
            case 0x1D1064u: goto label_1d1064;
            case 0x1D1068u: goto label_1d1068;
            case 0x1D106Cu: goto label_1d106c;
            case 0x1D1070u: goto label_1d1070;
            case 0x1D1074u: goto label_1d1074;
            case 0x1D1078u: goto label_1d1078;
            case 0x1D107Cu: goto label_1d107c;
            case 0x1D1080u: goto label_1d1080;
            case 0x1D1084u: goto label_1d1084;
            case 0x1D1088u: goto label_1d1088;
            case 0x1D108Cu: goto label_1d108c;
            case 0x1D1090u: goto label_1d1090;
            case 0x1D1094u: goto label_1d1094;
            case 0x1D1098u: goto label_1d1098;
            case 0x1D109Cu: goto label_1d109c;
            case 0x1D10A0u: goto label_1d10a0;
            case 0x1D10A4u: goto label_1d10a4;
            case 0x1D10A8u: goto label_1d10a8;
            case 0x1D10ACu: goto label_1d10ac;
            case 0x1D10B0u: goto label_1d10b0;
            case 0x1D10B4u: goto label_1d10b4;
            case 0x1D10B8u: goto label_1d10b8;
            case 0x1D10BCu: goto label_1d10bc;
            case 0x1D10C0u: goto label_1d10c0;
            case 0x1D10C4u: goto label_1d10c4;
            case 0x1D10C8u: goto label_1d10c8;
            case 0x1D10CCu: goto label_1d10cc;
            case 0x1D10D0u: goto label_1d10d0;
            case 0x1D10D4u: goto label_1d10d4;
            case 0x1D10D8u: goto label_1d10d8;
            case 0x1D10DCu: goto label_1d10dc;
            case 0x1D10E0u: goto label_1d10e0;
            case 0x1D10E4u: goto label_1d10e4;
            case 0x1D10E8u: goto label_1d10e8;
            case 0x1D10ECu: goto label_1d10ec;
            case 0x1D10F0u: goto label_1d10f0;
            case 0x1D10F4u: goto label_1d10f4;
            case 0x1D10F8u: goto label_1d10f8;
            case 0x1D10FCu: goto label_1d10fc;
            case 0x1D1100u: goto label_1d1100;
            case 0x1D1104u: goto label_1d1104;
            case 0x1D1108u: goto label_1d1108;
            case 0x1D110Cu: goto label_1d110c;
            case 0x1D1110u: goto label_1d1110;
            case 0x1D1114u: goto label_1d1114;
            case 0x1D1118u: goto label_1d1118;
            case 0x1D111Cu: goto label_1d111c;
            case 0x1D1120u: goto label_1d1120;
            case 0x1D1124u: goto label_1d1124;
            case 0x1D1128u: goto label_1d1128;
            case 0x1D112Cu: goto label_1d112c;
            case 0x1D1130u: goto label_1d1130;
            case 0x1D1134u: goto label_1d1134;
            case 0x1D1138u: goto label_1d1138;
            case 0x1D113Cu: goto label_1d113c;
            case 0x1D1140u: goto label_1d1140;
            case 0x1D1144u: goto label_1d1144;
            case 0x1D1148u: goto label_1d1148;
            case 0x1D114Cu: goto label_1d114c;
            case 0x1D1150u: goto label_1d1150;
            case 0x1D1154u: goto label_1d1154;
            case 0x1D1158u: goto label_1d1158;
            case 0x1D115Cu: goto label_1d115c;
            case 0x1D1160u: goto label_1d1160;
            case 0x1D1164u: goto label_1d1164;
            case 0x1D1168u: goto label_1d1168;
            case 0x1D116Cu: goto label_1d116c;
            case 0x1D1170u: goto label_1d1170;
            case 0x1D1174u: goto label_1d1174;
            case 0x1D1178u: goto label_1d1178;
            case 0x1D117Cu: goto label_1d117c;
            case 0x1D1180u: goto label_1d1180;
            case 0x1D1184u: goto label_1d1184;
            case 0x1D1188u: goto label_1d1188;
            case 0x1D118Cu: goto label_1d118c;
            case 0x1D1190u: goto label_1d1190;
            case 0x1D1194u: goto label_1d1194;
            case 0x1D1198u: goto label_1d1198;
            case 0x1D119Cu: goto label_1d119c;
            case 0x1D11A0u: goto label_1d11a0;
            case 0x1D11A4u: goto label_1d11a4;
            case 0x1D11A8u: goto label_1d11a8;
            case 0x1D11ACu: goto label_1d11ac;
            case 0x1D11B0u: goto label_1d11b0;
            case 0x1D11B4u: goto label_1d11b4;
            case 0x1D11B8u: goto label_1d11b8;
            case 0x1D11BCu: goto label_1d11bc;
            case 0x1D11C0u: goto label_1d11c0;
            case 0x1D11C4u: goto label_1d11c4;
            case 0x1D11C8u: goto label_1d11c8;
            case 0x1D11CCu: goto label_1d11cc;
            case 0x1D11D0u: goto label_1d11d0;
            case 0x1D11D4u: goto label_1d11d4;
            case 0x1D11D8u: goto label_1d11d8;
            case 0x1D11DCu: goto label_1d11dc;
            case 0x1D11E0u: goto label_1d11e0;
            case 0x1D11E4u: goto label_1d11e4;
            case 0x1D11E8u: goto label_1d11e8;
            case 0x1D11ECu: goto label_1d11ec;
            case 0x1D11F0u: goto label_1d11f0;
            case 0x1D11F4u: goto label_1d11f4;
            case 0x1D11F8u: goto label_1d11f8;
            case 0x1D11FCu: goto label_1d11fc;
            case 0x1D1200u: goto label_1d1200;
            case 0x1D1204u: goto label_1d1204;
            case 0x1D1208u: goto label_1d1208;
            case 0x1D120Cu: goto label_1d120c;
            case 0x1D1210u: goto label_1d1210;
            case 0x1D1214u: goto label_1d1214;
            case 0x1D1218u: goto label_1d1218;
            case 0x1D121Cu: goto label_1d121c;
            case 0x1D1220u: goto label_1d1220;
            case 0x1D1224u: goto label_1d1224;
            case 0x1D1228u: goto label_1d1228;
            case 0x1D122Cu: goto label_1d122c;
            case 0x1D1230u: goto label_1d1230;
            case 0x1D1234u: goto label_1d1234;
            case 0x1D1238u: goto label_1d1238;
            case 0x1D123Cu: goto label_1d123c;
            case 0x1D1240u: goto label_1d1240;
            case 0x1D1244u: goto label_1d1244;
            case 0x1D1248u: goto label_1d1248;
            case 0x1D124Cu: goto label_1d124c;
            case 0x1D1250u: goto label_1d1250;
            case 0x1D1254u: goto label_1d1254;
            case 0x1D1258u: goto label_1d1258;
            case 0x1D125Cu: goto label_1d125c;
            case 0x1D1260u: goto label_1d1260;
            case 0x1D1264u: goto label_1d1264;
            case 0x1D1268u: goto label_1d1268;
            case 0x1D126Cu: goto label_1d126c;
            case 0x1D1270u: goto label_1d1270;
            case 0x1D1274u: goto label_1d1274;
            case 0x1D1278u: goto label_1d1278;
            case 0x1D127Cu: goto label_1d127c;
            case 0x1D1280u: goto label_1d1280;
            case 0x1D1284u: goto label_1d1284;
            case 0x1D1288u: goto label_1d1288;
            case 0x1D128Cu: goto label_1d128c;
            case 0x1D1290u: goto label_1d1290;
            case 0x1D1294u: goto label_1d1294;
            case 0x1D1298u: goto label_1d1298;
            case 0x1D129Cu: goto label_1d129c;
            case 0x1D12A0u: goto label_1d12a0;
            case 0x1D12A4u: goto label_1d12a4;
            case 0x1D12A8u: goto label_1d12a8;
            case 0x1D12ACu: goto label_1d12ac;
            case 0x1D12B0u: goto label_1d12b0;
            case 0x1D12B4u: goto label_1d12b4;
            case 0x1D12B8u: goto label_1d12b8;
            case 0x1D12BCu: goto label_1d12bc;
            case 0x1D12C0u: goto label_1d12c0;
            case 0x1D12C4u: goto label_1d12c4;
            case 0x1D12C8u: goto label_1d12c8;
            case 0x1D12CCu: goto label_1d12cc;
            case 0x1D12D0u: goto label_1d12d0;
            case 0x1D12D4u: goto label_1d12d4;
            case 0x1D12D8u: goto label_1d12d8;
            case 0x1D12DCu: goto label_1d12dc;
            case 0x1D12E0u: goto label_1d12e0;
            case 0x1D12E4u: goto label_1d12e4;
            case 0x1D12E8u: goto label_1d12e8;
            case 0x1D12ECu: goto label_1d12ec;
            case 0x1D12F0u: goto label_1d12f0;
            case 0x1D12F4u: goto label_1d12f4;
            case 0x1D12F8u: goto label_1d12f8;
            case 0x1D12FCu: goto label_1d12fc;
            case 0x1D1300u: goto label_1d1300;
            case 0x1D1304u: goto label_1d1304;
            case 0x1D1308u: goto label_1d1308;
            case 0x1D130Cu: goto label_1d130c;
            case 0x1D1310u: goto label_1d1310;
            case 0x1D1314u: goto label_1d1314;
            case 0x1D1318u: goto label_1d1318;
            case 0x1D131Cu: goto label_1d131c;
            case 0x1D1320u: goto label_1d1320;
            case 0x1D1324u: goto label_1d1324;
            case 0x1D1328u: goto label_1d1328;
            case 0x1D132Cu: goto label_1d132c;
            case 0x1D1330u: goto label_1d1330;
            case 0x1D1334u: goto label_1d1334;
            case 0x1D1338u: goto label_1d1338;
            case 0x1D133Cu: goto label_1d133c;
            case 0x1D1340u: goto label_1d1340;
            case 0x1D1344u: goto label_1d1344;
            case 0x1D1348u: goto label_1d1348;
            case 0x1D134Cu: goto label_1d134c;
            case 0x1D1350u: goto label_1d1350;
            case 0x1D1354u: goto label_1d1354;
            case 0x1D1358u: goto label_1d1358;
            case 0x1D135Cu: goto label_1d135c;
            case 0x1D1360u: goto label_1d1360;
            case 0x1D1364u: goto label_1d1364;
            case 0x1D1368u: goto label_1d1368;
            case 0x1D136Cu: goto label_1d136c;
            case 0x1D1370u: goto label_1d1370;
            case 0x1D1374u: goto label_1d1374;
            case 0x1D1378u: goto label_1d1378;
            case 0x1D137Cu: goto label_1d137c;
            case 0x1D1380u: goto label_1d1380;
            case 0x1D1384u: goto label_1d1384;
            case 0x1D1388u: goto label_1d1388;
            case 0x1D138Cu: goto label_1d138c;
            case 0x1D1390u: goto label_1d1390;
            case 0x1D1394u: goto label_1d1394;
            case 0x1D1398u: goto label_1d1398;
            case 0x1D139Cu: goto label_1d139c;
            case 0x1D13A0u: goto label_1d13a0;
            case 0x1D13A4u: goto label_1d13a4;
            case 0x1D13A8u: goto label_1d13a8;
            case 0x1D13ACu: goto label_1d13ac;
            case 0x1D13B0u: goto label_1d13b0;
            case 0x1D13B4u: goto label_1d13b4;
            case 0x1D13B8u: goto label_1d13b8;
            case 0x1D13BCu: goto label_1d13bc;
            case 0x1D13C0u: goto label_1d13c0;
            case 0x1D13C4u: goto label_1d13c4;
            case 0x1D13C8u: goto label_1d13c8;
            case 0x1D13CCu: goto label_1d13cc;
            case 0x1D13D0u: goto label_1d13d0;
            case 0x1D13D4u: goto label_1d13d4;
            case 0x1D13D8u: goto label_1d13d8;
            case 0x1D13DCu: goto label_1d13dc;
            case 0x1D13E0u: goto label_1d13e0;
            case 0x1D13E4u: goto label_1d13e4;
            case 0x1D13E8u: goto label_1d13e8;
            case 0x1D13ECu: goto label_1d13ec;
            case 0x1D13F0u: goto label_1d13f0;
            case 0x1D13F4u: goto label_1d13f4;
            case 0x1D13F8u: goto label_1d13f8;
            case 0x1D13FCu: goto label_1d13fc;
            case 0x1D1400u: goto label_1d1400;
            case 0x1D1404u: goto label_1d1404;
            case 0x1D1408u: goto label_1d1408;
            case 0x1D140Cu: goto label_1d140c;
            case 0x1D1410u: goto label_1d1410;
            case 0x1D1414u: goto label_1d1414;
            case 0x1D1418u: goto label_1d1418;
            case 0x1D141Cu: goto label_1d141c;
            case 0x1D1420u: goto label_1d1420;
            case 0x1D1424u: goto label_1d1424;
            case 0x1D1428u: goto label_1d1428;
            case 0x1D142Cu: goto label_1d142c;
            case 0x1D1430u: goto label_1d1430;
            case 0x1D1434u: goto label_1d1434;
            case 0x1D1438u: goto label_1d1438;
            case 0x1D143Cu: goto label_1d143c;
            case 0x1D1440u: goto label_1d1440;
            case 0x1D1444u: goto label_1d1444;
            case 0x1D1448u: goto label_1d1448;
            case 0x1D144Cu: goto label_1d144c;
            case 0x1D1450u: goto label_1d1450;
            case 0x1D1454u: goto label_1d1454;
            case 0x1D1458u: goto label_1d1458;
            case 0x1D145Cu: goto label_1d145c;
            case 0x1D1460u: goto label_1d1460;
            case 0x1D1464u: goto label_1d1464;
            case 0x1D1468u: goto label_1d1468;
            case 0x1D146Cu: goto label_1d146c;
            case 0x1D1470u: goto label_1d1470;
            case 0x1D1474u: goto label_1d1474;
            case 0x1D1478u: goto label_1d1478;
            case 0x1D147Cu: goto label_1d147c;
            case 0x1D1480u: goto label_1d1480;
            case 0x1D1484u: goto label_1d1484;
            case 0x1D1488u: goto label_1d1488;
            case 0x1D148Cu: goto label_1d148c;
            case 0x1D1490u: goto label_1d1490;
            case 0x1D1494u: goto label_1d1494;
            case 0x1D1498u: goto label_1d1498;
            case 0x1D149Cu: goto label_1d149c;
            case 0x1D14A0u: goto label_1d14a0;
            case 0x1D14A4u: goto label_1d14a4;
            case 0x1D14A8u: goto label_1d14a8;
            case 0x1D14ACu: goto label_1d14ac;
            case 0x1D14B0u: goto label_1d14b0;
            case 0x1D14B4u: goto label_1d14b4;
            case 0x1D14B8u: goto label_1d14b8;
            case 0x1D14BCu: goto label_1d14bc;
            case 0x1D14C0u: goto label_1d14c0;
            case 0x1D14C4u: goto label_1d14c4;
            case 0x1D14C8u: goto label_1d14c8;
            case 0x1D14CCu: goto label_1d14cc;
            case 0x1D14D0u: goto label_1d14d0;
            case 0x1D14D4u: goto label_1d14d4;
            case 0x1D14D8u: goto label_1d14d8;
            case 0x1D14DCu: goto label_1d14dc;
            case 0x1D14E0u: goto label_1d14e0;
            case 0x1D14E4u: goto label_1d14e4;
            case 0x1D14E8u: goto label_1d14e8;
            case 0x1D14ECu: goto label_1d14ec;
            case 0x1D14F0u: goto label_1d14f0;
            case 0x1D14F4u: goto label_1d14f4;
            case 0x1D14F8u: goto label_1d14f8;
            case 0x1D14FCu: goto label_1d14fc;
            case 0x1D1500u: goto label_1d1500;
            case 0x1D1504u: goto label_1d1504;
            case 0x1D1508u: goto label_1d1508;
            case 0x1D150Cu: goto label_1d150c;
            case 0x1D1510u: goto label_1d1510;
            case 0x1D1514u: goto label_1d1514;
            case 0x1D1518u: goto label_1d1518;
            case 0x1D151Cu: goto label_1d151c;
            case 0x1D1520u: goto label_1d1520;
            case 0x1D1524u: goto label_1d1524;
            case 0x1D1528u: goto label_1d1528;
            case 0x1D152Cu: goto label_1d152c;
            case 0x1D1530u: goto label_1d1530;
            case 0x1D1534u: goto label_1d1534;
            case 0x1D1538u: goto label_1d1538;
            case 0x1D153Cu: goto label_1d153c;
            case 0x1D1540u: goto label_1d1540;
            case 0x1D1544u: goto label_1d1544;
            case 0x1D1548u: goto label_1d1548;
            case 0x1D154Cu: goto label_1d154c;
            case 0x1D1550u: goto label_1d1550;
            case 0x1D1554u: goto label_1d1554;
            case 0x1D1558u: goto label_1d1558;
            case 0x1D155Cu: goto label_1d155c;
            case 0x1D1560u: goto label_1d1560;
            case 0x1D1564u: goto label_1d1564;
            case 0x1D1568u: goto label_1d1568;
            case 0x1D156Cu: goto label_1d156c;
            case 0x1D1570u: goto label_1d1570;
            case 0x1D1574u: goto label_1d1574;
            case 0x1D1578u: goto label_1d1578;
            case 0x1D157Cu: goto label_1d157c;
            case 0x1D1580u: goto label_1d1580;
            case 0x1D1584u: goto label_1d1584;
            case 0x1D1588u: goto label_1d1588;
            case 0x1D158Cu: goto label_1d158c;
            case 0x1D1590u: goto label_1d1590;
            case 0x1D1594u: goto label_1d1594;
            case 0x1D1598u: goto label_1d1598;
            case 0x1D159Cu: goto label_1d159c;
            case 0x1D15A0u: goto label_1d15a0;
            case 0x1D15A4u: goto label_1d15a4;
            case 0x1D15A8u: goto label_1d15a8;
            case 0x1D15ACu: goto label_1d15ac;
            case 0x1D15B0u: goto label_1d15b0;
            case 0x1D15B4u: goto label_1d15b4;
            case 0x1D15B8u: goto label_1d15b8;
            case 0x1D15BCu: goto label_1d15bc;
            case 0x1D15C0u: goto label_1d15c0;
            case 0x1D15C4u: goto label_1d15c4;
            case 0x1D15C8u: goto label_1d15c8;
            case 0x1D15CCu: goto label_1d15cc;
            case 0x1D15D0u: goto label_1d15d0;
            case 0x1D15D4u: goto label_1d15d4;
            case 0x1D15D8u: goto label_1d15d8;
            case 0x1D15DCu: goto label_1d15dc;
            case 0x1D15E0u: goto label_1d15e0;
            case 0x1D15E4u: goto label_1d15e4;
            case 0x1D15E8u: goto label_1d15e8;
            case 0x1D15ECu: goto label_1d15ec;
            case 0x1D15F0u: goto label_1d15f0;
            case 0x1D15F4u: goto label_1d15f4;
            case 0x1D15F8u: goto label_1d15f8;
            case 0x1D15FCu: goto label_1d15fc;
            case 0x1D1600u: goto label_1d1600;
            case 0x1D1604u: goto label_1d1604;
            case 0x1D1608u: goto label_1d1608;
            case 0x1D160Cu: goto label_1d160c;
            case 0x1D1610u: goto label_1d1610;
            case 0x1D1614u: goto label_1d1614;
            case 0x1D1618u: goto label_1d1618;
            case 0x1D161Cu: goto label_1d161c;
            case 0x1D1620u: goto label_1d1620;
            case 0x1D1624u: goto label_1d1624;
            case 0x1D1628u: goto label_1d1628;
            case 0x1D162Cu: goto label_1d162c;
            case 0x1D1630u: goto label_1d1630;
            case 0x1D1634u: goto label_1d1634;
            case 0x1D1638u: goto label_1d1638;
            case 0x1D163Cu: goto label_1d163c;
            case 0x1D1640u: goto label_1d1640;
            case 0x1D1644u: goto label_1d1644;
            case 0x1D1648u: goto label_1d1648;
            case 0x1D164Cu: goto label_1d164c;
            case 0x1D1650u: goto label_1d1650;
            case 0x1D1654u: goto label_1d1654;
            case 0x1D1658u: goto label_1d1658;
            case 0x1D165Cu: goto label_1d165c;
            case 0x1D1660u: goto label_1d1660;
            case 0x1D1664u: goto label_1d1664;
            case 0x1D1668u: goto label_1d1668;
            case 0x1D166Cu: goto label_1d166c;
            case 0x1D1670u: goto label_1d1670;
            case 0x1D1674u: goto label_1d1674;
            case 0x1D1678u: goto label_1d1678;
            case 0x1D167Cu: goto label_1d167c;
            case 0x1D1680u: goto label_1d1680;
            case 0x1D1684u: goto label_1d1684;
            case 0x1D1688u: goto label_1d1688;
            case 0x1D168Cu: goto label_1d168c;
            case 0x1D1690u: goto label_1d1690;
            case 0x1D1694u: goto label_1d1694;
            case 0x1D1698u: goto label_1d1698;
            case 0x1D169Cu: goto label_1d169c;
            case 0x1D16A0u: goto label_1d16a0;
            case 0x1D16A4u: goto label_1d16a4;
            case 0x1D16A8u: goto label_1d16a8;
            case 0x1D16ACu: goto label_1d16ac;
            case 0x1D16B0u: goto label_1d16b0;
            case 0x1D16B4u: goto label_1d16b4;
            case 0x1D16B8u: goto label_1d16b8;
            case 0x1D16BCu: goto label_1d16bc;
            case 0x1D16C0u: goto label_1d16c0;
            case 0x1D16C4u: goto label_1d16c4;
            case 0x1D16C8u: goto label_1d16c8;
            case 0x1D16CCu: goto label_1d16cc;
            case 0x1D16D0u: goto label_1d16d0;
            case 0x1D16D4u: goto label_1d16d4;
            case 0x1D16D8u: goto label_1d16d8;
            case 0x1D16DCu: goto label_1d16dc;
            case 0x1D16E0u: goto label_1d16e0;
            case 0x1D16E4u: goto label_1d16e4;
            case 0x1D16E8u: goto label_1d16e8;
            case 0x1D16ECu: goto label_1d16ec;
            case 0x1D16F0u: goto label_1d16f0;
            case 0x1D16F4u: goto label_1d16f4;
            case 0x1D16F8u: goto label_1d16f8;
            case 0x1D16FCu: goto label_1d16fc;
            case 0x1D1700u: goto label_1d1700;
            case 0x1D1704u: goto label_1d1704;
            case 0x1D1708u: goto label_1d1708;
            case 0x1D170Cu: goto label_1d170c;
            case 0x1D1710u: goto label_1d1710;
            case 0x1D1714u: goto label_1d1714;
            case 0x1D1718u: goto label_1d1718;
            case 0x1D171Cu: goto label_1d171c;
            case 0x1D1720u: goto label_1d1720;
            case 0x1D1724u: goto label_1d1724;
            case 0x1D1728u: goto label_1d1728;
            case 0x1D172Cu: goto label_1d172c;
            case 0x1D1730u: goto label_1d1730;
            case 0x1D1734u: goto label_1d1734;
            case 0x1D1738u: goto label_1d1738;
            case 0x1D173Cu: goto label_1d173c;
            case 0x1D1740u: goto label_1d1740;
            case 0x1D1744u: goto label_1d1744;
            case 0x1D1748u: goto label_1d1748;
            case 0x1D174Cu: goto label_1d174c;
            case 0x1D1750u: goto label_1d1750;
            case 0x1D1754u: goto label_1d1754;
            case 0x1D1758u: goto label_1d1758;
            case 0x1D175Cu: goto label_1d175c;
            case 0x1D1760u: goto label_1d1760;
            case 0x1D1764u: goto label_1d1764;
            case 0x1D1768u: goto label_1d1768;
            case 0x1D176Cu: goto label_1d176c;
            case 0x1D1770u: goto label_1d1770;
            case 0x1D1774u: goto label_1d1774;
            case 0x1D1778u: goto label_1d1778;
            case 0x1D177Cu: goto label_1d177c;
            case 0x1D1780u: goto label_1d1780;
            case 0x1D1784u: goto label_1d1784;
            case 0x1D1788u: goto label_1d1788;
            case 0x1D178Cu: goto label_1d178c;
            case 0x1D1790u: goto label_1d1790;
            case 0x1D1794u: goto label_1d1794;
            case 0x1D1798u: goto label_1d1798;
            case 0x1D179Cu: goto label_1d179c;
            case 0x1D17A0u: goto label_1d17a0;
            case 0x1D17A4u: goto label_1d17a4;
            case 0x1D17A8u: goto label_1d17a8;
            case 0x1D17ACu: goto label_1d17ac;
            case 0x1D17B0u: goto label_1d17b0;
            case 0x1D17B4u: goto label_1d17b4;
            case 0x1D17B8u: goto label_1d17b8;
            case 0x1D17BCu: goto label_1d17bc;
            case 0x1D17C0u: goto label_1d17c0;
            case 0x1D17C4u: goto label_1d17c4;
            case 0x1D17C8u: goto label_1d17c8;
            case 0x1D17CCu: goto label_1d17cc;
            case 0x1D17D0u: goto label_1d17d0;
            case 0x1D17D4u: goto label_1d17d4;
            case 0x1D17D8u: goto label_1d17d8;
            case 0x1D17DCu: goto label_1d17dc;
            case 0x1D17E0u: goto label_1d17e0;
            case 0x1D17E4u: goto label_1d17e4;
            case 0x1D17E8u: goto label_1d17e8;
            case 0x1D17ECu: goto label_1d17ec;
            case 0x1D17F0u: goto label_1d17f0;
            case 0x1D17F4u: goto label_1d17f4;
            case 0x1D17F8u: goto label_1d17f8;
            case 0x1D17FCu: goto label_1d17fc;
            case 0x1D1800u: goto label_1d1800;
            case 0x1D1804u: goto label_1d1804;
            case 0x1D1808u: goto label_1d1808;
            case 0x1D180Cu: goto label_1d180c;
            case 0x1D1810u: goto label_1d1810;
            case 0x1D1814u: goto label_1d1814;
            case 0x1D1818u: goto label_1d1818;
            case 0x1D181Cu: goto label_1d181c;
            case 0x1D1820u: goto label_1d1820;
            case 0x1D1824u: goto label_1d1824;
            case 0x1D1828u: goto label_1d1828;
            case 0x1D182Cu: goto label_1d182c;
            case 0x1D1830u: goto label_1d1830;
            case 0x1D1834u: goto label_1d1834;
            case 0x1D1838u: goto label_1d1838;
            case 0x1D183Cu: goto label_1d183c;
            case 0x1D1840u: goto label_1d1840;
            case 0x1D1844u: goto label_1d1844;
            case 0x1D1848u: goto label_1d1848;
            case 0x1D184Cu: goto label_1d184c;
            case 0x1D1850u: goto label_1d1850;
            case 0x1D1854u: goto label_1d1854;
            case 0x1D1858u: goto label_1d1858;
            case 0x1D185Cu: goto label_1d185c;
            case 0x1D1860u: goto label_1d1860;
            case 0x1D1864u: goto label_1d1864;
            case 0x1D1868u: goto label_1d1868;
            case 0x1D186Cu: goto label_1d186c;
            case 0x1D1870u: goto label_1d1870;
            case 0x1D1874u: goto label_1d1874;
            case 0x1D1878u: goto label_1d1878;
            case 0x1D187Cu: goto label_1d187c;
            case 0x1D1880u: goto label_1d1880;
            case 0x1D1884u: goto label_1d1884;
            case 0x1D1888u: goto label_1d1888;
            case 0x1D188Cu: goto label_1d188c;
            case 0x1D1890u: goto label_1d1890;
            case 0x1D1894u: goto label_1d1894;
            case 0x1D1898u: goto label_1d1898;
            case 0x1D189Cu: goto label_1d189c;
            case 0x1D18A0u: goto label_1d18a0;
            case 0x1D18A4u: goto label_1d18a4;
            case 0x1D18A8u: goto label_1d18a8;
            case 0x1D18ACu: goto label_1d18ac;
            case 0x1D18B0u: goto label_1d18b0;
            case 0x1D18B4u: goto label_1d18b4;
            case 0x1D18B8u: goto label_1d18b8;
            case 0x1D18BCu: goto label_1d18bc;
            case 0x1D18C0u: goto label_1d18c0;
            case 0x1D18C4u: goto label_1d18c4;
            case 0x1D18C8u: goto label_1d18c8;
            case 0x1D18CCu: goto label_1d18cc;
            case 0x1D18D0u: goto label_1d18d0;
            case 0x1D18D4u: goto label_1d18d4;
            case 0x1D18D8u: goto label_1d18d8;
            case 0x1D18DCu: goto label_1d18dc;
            case 0x1D18E0u: goto label_1d18e0;
            case 0x1D18E4u: goto label_1d18e4;
            case 0x1D18E8u: goto label_1d18e8;
            case 0x1D18ECu: goto label_1d18ec;
            case 0x1D18F0u: goto label_1d18f0;
            case 0x1D18F4u: goto label_1d18f4;
            case 0x1D18F8u: goto label_1d18f8;
            case 0x1D18FCu: goto label_1d18fc;
            case 0x1D1900u: goto label_1d1900;
            case 0x1D1904u: goto label_1d1904;
            case 0x1D1908u: goto label_1d1908;
            case 0x1D190Cu: goto label_1d190c;
            case 0x1D1910u: goto label_1d1910;
            case 0x1D1914u: goto label_1d1914;
            case 0x1D1918u: goto label_1d1918;
            case 0x1D191Cu: goto label_1d191c;
            case 0x1D1920u: goto label_1d1920;
            case 0x1D1924u: goto label_1d1924;
            case 0x1D1928u: goto label_1d1928;
            case 0x1D192Cu: goto label_1d192c;
            case 0x1D1930u: goto label_1d1930;
            case 0x1D1934u: goto label_1d1934;
            case 0x1D1938u: goto label_1d1938;
            case 0x1D193Cu: goto label_1d193c;
            case 0x1D1940u: goto label_1d1940;
            case 0x1D1944u: goto label_1d1944;
            case 0x1D1948u: goto label_1d1948;
            case 0x1D194Cu: goto label_1d194c;
            case 0x1D1950u: goto label_1d1950;
            case 0x1D1954u: goto label_1d1954;
            case 0x1D1958u: goto label_1d1958;
            case 0x1D195Cu: goto label_1d195c;
            case 0x1D1960u: goto label_1d1960;
            case 0x1D1964u: goto label_1d1964;
            case 0x1D1968u: goto label_1d1968;
            case 0x1D196Cu: goto label_1d196c;
            case 0x1D1970u: goto label_1d1970;
            case 0x1D1974u: goto label_1d1974;
            case 0x1D1978u: goto label_1d1978;
            case 0x1D197Cu: goto label_1d197c;
            case 0x1D1980u: goto label_1d1980;
            case 0x1D1984u: goto label_1d1984;
            case 0x1D1988u: goto label_1d1988;
            case 0x1D198Cu: goto label_1d198c;
            case 0x1D1990u: goto label_1d1990;
            case 0x1D1994u: goto label_1d1994;
            case 0x1D1998u: goto label_1d1998;
            case 0x1D199Cu: goto label_1d199c;
            case 0x1D19A0u: goto label_1d19a0;
            case 0x1D19A4u: goto label_1d19a4;
            case 0x1D19A8u: goto label_1d19a8;
            case 0x1D19ACu: goto label_1d19ac;
            case 0x1D19B0u: goto label_1d19b0;
            case 0x1D19B4u: goto label_1d19b4;
            case 0x1D19B8u: goto label_1d19b8;
            case 0x1D19BCu: goto label_1d19bc;
            case 0x1D19C0u: goto label_1d19c0;
            case 0x1D19C4u: goto label_1d19c4;
            case 0x1D19C8u: goto label_1d19c8;
            case 0x1D19CCu: goto label_1d19cc;
            case 0x1D19D0u: goto label_1d19d0;
            case 0x1D19D4u: goto label_1d19d4;
            case 0x1D19D8u: goto label_1d19d8;
            case 0x1D19DCu: goto label_1d19dc;
            case 0x1D19E0u: goto label_1d19e0;
            case 0x1D19E4u: goto label_1d19e4;
            case 0x1D19E8u: goto label_1d19e8;
            case 0x1D19ECu: goto label_1d19ec;
            case 0x1D19F0u: goto label_1d19f0;
            case 0x1D19F4u: goto label_1d19f4;
            case 0x1D19F8u: goto label_1d19f8;
            case 0x1D19FCu: goto label_1d19fc;
            case 0x1D1A00u: goto label_1d1a00;
            case 0x1D1A04u: goto label_1d1a04;
            case 0x1D1A08u: goto label_1d1a08;
            case 0x1D1A0Cu: goto label_1d1a0c;
            case 0x1D1A10u: goto label_1d1a10;
            case 0x1D1A14u: goto label_1d1a14;
            case 0x1D1A18u: goto label_1d1a18;
            case 0x1D1A1Cu: goto label_1d1a1c;
            case 0x1D1A20u: goto label_1d1a20;
            case 0x1D1A24u: goto label_1d1a24;
            case 0x1D1A28u: goto label_1d1a28;
            case 0x1D1A2Cu: goto label_1d1a2c;
            case 0x1D1A30u: goto label_1d1a30;
            case 0x1D1A34u: goto label_1d1a34;
            case 0x1D1A38u: goto label_1d1a38;
            case 0x1D1A3Cu: goto label_1d1a3c;
            case 0x1D1A40u: goto label_1d1a40;
            case 0x1D1A44u: goto label_1d1a44;
            case 0x1D1A48u: goto label_1d1a48;
            case 0x1D1A4Cu: goto label_1d1a4c;
            case 0x1D1A50u: goto label_1d1a50;
            case 0x1D1A54u: goto label_1d1a54;
            case 0x1D1A58u: goto label_1d1a58;
            case 0x1D1A5Cu: goto label_1d1a5c;
            case 0x1D1A60u: goto label_1d1a60;
            case 0x1D1A64u: goto label_1d1a64;
            case 0x1D1A68u: goto label_1d1a68;
            case 0x1D1A6Cu: goto label_1d1a6c;
            case 0x1D1A70u: goto label_1d1a70;
            case 0x1D1A74u: goto label_1d1a74;
            case 0x1D1A78u: goto label_1d1a78;
            case 0x1D1A7Cu: goto label_1d1a7c;
            case 0x1D1A80u: goto label_1d1a80;
            case 0x1D1A84u: goto label_1d1a84;
            case 0x1D1A88u: goto label_1d1a88;
            case 0x1D1A8Cu: goto label_1d1a8c;
            case 0x1D1A90u: goto label_1d1a90;
            case 0x1D1A94u: goto label_1d1a94;
            case 0x1D1A98u: goto label_1d1a98;
            case 0x1D1A9Cu: goto label_1d1a9c;
            case 0x1D1AA0u: goto label_1d1aa0;
            case 0x1D1AA4u: goto label_1d1aa4;
            case 0x1D1AA8u: goto label_1d1aa8;
            case 0x1D1AACu: goto label_1d1aac;
            case 0x1D1AB0u: goto label_1d1ab0;
            case 0x1D1AB4u: goto label_1d1ab4;
            case 0x1D1AB8u: goto label_1d1ab8;
            case 0x1D1ABCu: goto label_1d1abc;
            case 0x1D1AC0u: goto label_1d1ac0;
            case 0x1D1AC4u: goto label_1d1ac4;
            case 0x1D1AC8u: goto label_1d1ac8;
            case 0x1D1ACCu: goto label_1d1acc;
            case 0x1D1AD0u: goto label_1d1ad0;
            case 0x1D1AD4u: goto label_1d1ad4;
            case 0x1D1AD8u: goto label_1d1ad8;
            case 0x1D1ADCu: goto label_1d1adc;
            case 0x1D1AE0u: goto label_1d1ae0;
            case 0x1D1AE4u: goto label_1d1ae4;
            case 0x1D1AE8u: goto label_1d1ae8;
            case 0x1D1AECu: goto label_1d1aec;
            case 0x1D1AF0u: goto label_1d1af0;
            case 0x1D1AF4u: goto label_1d1af4;
            case 0x1D1AF8u: goto label_1d1af8;
            case 0x1D1AFCu: goto label_1d1afc;
            case 0x1D1B00u: goto label_1d1b00;
            case 0x1D1B04u: goto label_1d1b04;
            case 0x1D1B08u: goto label_1d1b08;
            case 0x1D1B0Cu: goto label_1d1b0c;
            case 0x1D1B10u: goto label_1d1b10;
            case 0x1D1B14u: goto label_1d1b14;
            case 0x1D1B18u: goto label_1d1b18;
            case 0x1D1B1Cu: goto label_1d1b1c;
            case 0x1D1B20u: goto label_1d1b20;
            case 0x1D1B24u: goto label_1d1b24;
            case 0x1D1B28u: goto label_1d1b28;
            case 0x1D1B2Cu: goto label_1d1b2c;
            case 0x1D1B30u: goto label_1d1b30;
            case 0x1D1B34u: goto label_1d1b34;
            case 0x1D1B38u: goto label_1d1b38;
            case 0x1D1B3Cu: goto label_1d1b3c;
            case 0x1D1B40u: goto label_1d1b40;
            case 0x1D1B44u: goto label_1d1b44;
            case 0x1D1B48u: goto label_1d1b48;
            case 0x1D1B4Cu: goto label_1d1b4c;
            case 0x1D1B50u: goto label_1d1b50;
            case 0x1D1B54u: goto label_1d1b54;
            case 0x1D1B58u: goto label_1d1b58;
            case 0x1D1B5Cu: goto label_1d1b5c;
            case 0x1D1B60u: goto label_1d1b60;
            case 0x1D1B64u: goto label_1d1b64;
            case 0x1D1B68u: goto label_1d1b68;
            case 0x1D1B6Cu: goto label_1d1b6c;
            case 0x1D1B70u: goto label_1d1b70;
            case 0x1D1B74u: goto label_1d1b74;
            case 0x1D1B78u: goto label_1d1b78;
            case 0x1D1B7Cu: goto label_1d1b7c;
            case 0x1D1B80u: goto label_1d1b80;
            case 0x1D1B84u: goto label_1d1b84;
            case 0x1D1B88u: goto label_1d1b88;
            case 0x1D1B8Cu: goto label_1d1b8c;
            case 0x1D1B90u: goto label_1d1b90;
            case 0x1D1B94u: goto label_1d1b94;
            case 0x1D1B98u: goto label_1d1b98;
            case 0x1D1B9Cu: goto label_1d1b9c;
            case 0x1D1BA0u: goto label_1d1ba0;
            case 0x1D1BA4u: goto label_1d1ba4;
            case 0x1D1BA8u: goto label_1d1ba8;
            case 0x1D1BACu: goto label_1d1bac;
            case 0x1D1BB0u: goto label_1d1bb0;
            case 0x1D1BB4u: goto label_1d1bb4;
            case 0x1D1BB8u: goto label_1d1bb8;
            case 0x1D1BBCu: goto label_1d1bbc;
            case 0x1D1BC0u: goto label_1d1bc0;
            case 0x1D1BC4u: goto label_1d1bc4;
            case 0x1D1BC8u: goto label_1d1bc8;
            case 0x1D1BCCu: goto label_1d1bcc;
            case 0x1D1BD0u: goto label_1d1bd0;
            case 0x1D1BD4u: goto label_1d1bd4;
            case 0x1D1BD8u: goto label_1d1bd8;
            case 0x1D1BDCu: goto label_1d1bdc;
            case 0x1D1BE0u: goto label_1d1be0;
            case 0x1D1BE4u: goto label_1d1be4;
            case 0x1D1BE8u: goto label_1d1be8;
            case 0x1D1BECu: goto label_1d1bec;
            case 0x1D1BF0u: goto label_1d1bf0;
            case 0x1D1BF4u: goto label_1d1bf4;
            case 0x1D1BF8u: goto label_1d1bf8;
            case 0x1D1BFCu: goto label_1d1bfc;
            case 0x1D1C00u: goto label_1d1c00;
            case 0x1D1C04u: goto label_1d1c04;
            case 0x1D1C08u: goto label_1d1c08;
            case 0x1D1C0Cu: goto label_1d1c0c;
            case 0x1D1C10u: goto label_1d1c10;
            case 0x1D1C14u: goto label_1d1c14;
            case 0x1D1C18u: goto label_1d1c18;
            case 0x1D1C1Cu: goto label_1d1c1c;
            case 0x1D1C20u: goto label_1d1c20;
            case 0x1D1C24u: goto label_1d1c24;
            case 0x1D1C28u: goto label_1d1c28;
            case 0x1D1C2Cu: goto label_1d1c2c;
            case 0x1D1C30u: goto label_1d1c30;
            case 0x1D1C34u: goto label_1d1c34;
            case 0x1D1C38u: goto label_1d1c38;
            case 0x1D1C3Cu: goto label_1d1c3c;
            case 0x1D1C40u: goto label_1d1c40;
            case 0x1D1C44u: goto label_1d1c44;
            case 0x1D1C48u: goto label_1d1c48;
            case 0x1D1C4Cu: goto label_1d1c4c;
            case 0x1D1C50u: goto label_1d1c50;
            case 0x1D1C54u: goto label_1d1c54;
            case 0x1D1C58u: goto label_1d1c58;
            case 0x1D1C5Cu: goto label_1d1c5c;
            case 0x1D1C60u: goto label_1d1c60;
            case 0x1D1C64u: goto label_1d1c64;
            case 0x1D1C68u: goto label_1d1c68;
            case 0x1D1C6Cu: goto label_1d1c6c;
            case 0x1D1C70u: goto label_1d1c70;
            case 0x1D1C74u: goto label_1d1c74;
            case 0x1D1C78u: goto label_1d1c78;
            case 0x1D1C7Cu: goto label_1d1c7c;
            case 0x1D1C80u: goto label_1d1c80;
            case 0x1D1C84u: goto label_1d1c84;
            case 0x1D1C88u: goto label_1d1c88;
            case 0x1D1C8Cu: goto label_1d1c8c;
            case 0x1D1C90u: goto label_1d1c90;
            case 0x1D1C94u: goto label_1d1c94;
            case 0x1D1C98u: goto label_1d1c98;
            case 0x1D1C9Cu: goto label_1d1c9c;
            case 0x1D1CA0u: goto label_1d1ca0;
            case 0x1D1CA4u: goto label_1d1ca4;
            case 0x1D1CA8u: goto label_1d1ca8;
            case 0x1D1CACu: goto label_1d1cac;
            case 0x1D1CB0u: goto label_1d1cb0;
            case 0x1D1CB4u: goto label_1d1cb4;
            case 0x1D1CB8u: goto label_1d1cb8;
            case 0x1D1CBCu: goto label_1d1cbc;
            case 0x1D1CC0u: goto label_1d1cc0;
            case 0x1D1CC4u: goto label_1d1cc4;
            case 0x1D1CC8u: goto label_1d1cc8;
            case 0x1D1CCCu: goto label_1d1ccc;
            case 0x1D1CD0u: goto label_1d1cd0;
            case 0x1D1CD4u: goto label_1d1cd4;
            case 0x1D1CD8u: goto label_1d1cd8;
            case 0x1D1CDCu: goto label_1d1cdc;
            case 0x1D1CE0u: goto label_1d1ce0;
            case 0x1D1CE4u: goto label_1d1ce4;
            case 0x1D1CE8u: goto label_1d1ce8;
            case 0x1D1CECu: goto label_1d1cec;
            case 0x1D1CF0u: goto label_1d1cf0;
            case 0x1D1CF4u: goto label_1d1cf4;
            case 0x1D1CF8u: goto label_1d1cf8;
            case 0x1D1CFCu: goto label_1d1cfc;
            case 0x1D1D00u: goto label_1d1d00;
            case 0x1D1D04u: goto label_1d1d04;
            case 0x1D1D08u: goto label_1d1d08;
            case 0x1D1D0Cu: goto label_1d1d0c;
            case 0x1D1D10u: goto label_1d1d10;
            case 0x1D1D14u: goto label_1d1d14;
            case 0x1D1D18u: goto label_1d1d18;
            case 0x1D1D1Cu: goto label_1d1d1c;
            case 0x1D1D20u: goto label_1d1d20;
            case 0x1D1D24u: goto label_1d1d24;
            case 0x1D1D28u: goto label_1d1d28;
            case 0x1D1D2Cu: goto label_1d1d2c;
            case 0x1D1D30u: goto label_1d1d30;
            case 0x1D1D34u: goto label_1d1d34;
            case 0x1D1D38u: goto label_1d1d38;
            case 0x1D1D3Cu: goto label_1d1d3c;
            case 0x1D1D40u: goto label_1d1d40;
            case 0x1D1D44u: goto label_1d1d44;
            case 0x1D1D48u: goto label_1d1d48;
            case 0x1D1D4Cu: goto label_1d1d4c;
            case 0x1D1D50u: goto label_1d1d50;
            case 0x1D1D54u: goto label_1d1d54;
            case 0x1D1D58u: goto label_1d1d58;
            case 0x1D1D5Cu: goto label_1d1d5c;
            case 0x1D1D60u: goto label_1d1d60;
            case 0x1D1D64u: goto label_1d1d64;
            case 0x1D1D68u: goto label_1d1d68;
            case 0x1D1D6Cu: goto label_1d1d6c;
            case 0x1D1D70u: goto label_1d1d70;
            case 0x1D1D74u: goto label_1d1d74;
            case 0x1D1D78u: goto label_1d1d78;
            case 0x1D1D7Cu: goto label_1d1d7c;
            case 0x1D1D80u: goto label_1d1d80;
            case 0x1D1D84u: goto label_1d1d84;
            case 0x1D1D88u: goto label_1d1d88;
            case 0x1D1D8Cu: goto label_1d1d8c;
            case 0x1D1D90u: goto label_1d1d90;
            case 0x1D1D94u: goto label_1d1d94;
            case 0x1D1D98u: goto label_1d1d98;
            case 0x1D1D9Cu: goto label_1d1d9c;
            case 0x1D1DA0u: goto label_1d1da0;
            case 0x1D1DA4u: goto label_1d1da4;
            case 0x1D1DA8u: goto label_1d1da8;
            case 0x1D1DACu: goto label_1d1dac;
            case 0x1D1DB0u: goto label_1d1db0;
            case 0x1D1DB4u: goto label_1d1db4;
            case 0x1D1DB8u: goto label_1d1db8;
            case 0x1D1DBCu: goto label_1d1dbc;
            case 0x1D1DC0u: goto label_1d1dc0;
            case 0x1D1DC4u: goto label_1d1dc4;
            case 0x1D1DC8u: goto label_1d1dc8;
            case 0x1D1DCCu: goto label_1d1dcc;
            case 0x1D1DD0u: goto label_1d1dd0;
            case 0x1D1DD4u: goto label_1d1dd4;
            case 0x1D1DD8u: goto label_1d1dd8;
            case 0x1D1DDCu: goto label_1d1ddc;
            case 0x1D1DE0u: goto label_1d1de0;
            case 0x1D1DE4u: goto label_1d1de4;
            case 0x1D1DE8u: goto label_1d1de8;
            case 0x1D1DECu: goto label_1d1dec;
            case 0x1D1DF0u: goto label_1d1df0;
            case 0x1D1DF4u: goto label_1d1df4;
            case 0x1D1DF8u: goto label_1d1df8;
            case 0x1D1DFCu: goto label_1d1dfc;
            case 0x1D1E00u: goto label_1d1e00;
            case 0x1D1E04u: goto label_1d1e04;
            case 0x1D1E08u: goto label_1d1e08;
            case 0x1D1E0Cu: goto label_1d1e0c;
            case 0x1D1E10u: goto label_1d1e10;
            case 0x1D1E14u: goto label_1d1e14;
            case 0x1D1E18u: goto label_1d1e18;
            case 0x1D1E1Cu: goto label_1d1e1c;
            case 0x1D1E20u: goto label_1d1e20;
            case 0x1D1E24u: goto label_1d1e24;
            case 0x1D1E28u: goto label_1d1e28;
            case 0x1D1E2Cu: goto label_1d1e2c;
            case 0x1D1E30u: goto label_1d1e30;
            case 0x1D1E34u: goto label_1d1e34;
            case 0x1D1E38u: goto label_1d1e38;
            case 0x1D1E3Cu: goto label_1d1e3c;
            case 0x1D1E40u: goto label_1d1e40;
            case 0x1D1E44u: goto label_1d1e44;
            case 0x1D1E48u: goto label_1d1e48;
            case 0x1D1E4Cu: goto label_1d1e4c;
            case 0x1D1E50u: goto label_1d1e50;
            case 0x1D1E54u: goto label_1d1e54;
            case 0x1D1E58u: goto label_1d1e58;
            case 0x1D1E5Cu: goto label_1d1e5c;
            case 0x1D1E60u: goto label_1d1e60;
            case 0x1D1E64u: goto label_1d1e64;
            case 0x1D1E68u: goto label_1d1e68;
            case 0x1D1E6Cu: goto label_1d1e6c;
            case 0x1D1E70u: goto label_1d1e70;
            case 0x1D1E74u: goto label_1d1e74;
            case 0x1D1E78u: goto label_1d1e78;
            case 0x1D1E7Cu: goto label_1d1e7c;
            case 0x1D1E80u: goto label_1d1e80;
            case 0x1D1E84u: goto label_1d1e84;
            case 0x1D1E88u: goto label_1d1e88;
            case 0x1D1E8Cu: goto label_1d1e8c;
            case 0x1D1E90u: goto label_1d1e90;
            case 0x1D1E94u: goto label_1d1e94;
            case 0x1D1E98u: goto label_1d1e98;
            case 0x1D1E9Cu: goto label_1d1e9c;
            case 0x1D1EA0u: goto label_1d1ea0;
            case 0x1D1EA4u: goto label_1d1ea4;
            case 0x1D1EA8u: goto label_1d1ea8;
            case 0x1D1EACu: goto label_1d1eac;
            case 0x1D1EB0u: goto label_1d1eb0;
            case 0x1D1EB4u: goto label_1d1eb4;
            case 0x1D1EB8u: goto label_1d1eb8;
            case 0x1D1EBCu: goto label_1d1ebc;
            case 0x1D1EC0u: goto label_1d1ec0;
            case 0x1D1EC4u: goto label_1d1ec4;
            case 0x1D1EC8u: goto label_1d1ec8;
            case 0x1D1ECCu: goto label_1d1ecc;
            case 0x1D1ED0u: goto label_1d1ed0;
            case 0x1D1ED4u: goto label_1d1ed4;
            case 0x1D1ED8u: goto label_1d1ed8;
            case 0x1D1EDCu: goto label_1d1edc;
            case 0x1D1EE0u: goto label_1d1ee0;
            case 0x1D1EE4u: goto label_1d1ee4;
            case 0x1D1EE8u: goto label_1d1ee8;
            case 0x1D1EECu: goto label_1d1eec;
            case 0x1D1EF0u: goto label_1d1ef0;
            case 0x1D1EF4u: goto label_1d1ef4;
            case 0x1D1EF8u: goto label_1d1ef8;
            case 0x1D1EFCu: goto label_1d1efc;
            case 0x1D1F00u: goto label_1d1f00;
            case 0x1D1F04u: goto label_1d1f04;
            case 0x1D1F08u: goto label_1d1f08;
            case 0x1D1F0Cu: goto label_1d1f0c;
            case 0x1D1F10u: goto label_1d1f10;
            case 0x1D1F14u: goto label_1d1f14;
            case 0x1D1F18u: goto label_1d1f18;
            case 0x1D1F1Cu: goto label_1d1f1c;
            case 0x1D1F20u: goto label_1d1f20;
            case 0x1D1F24u: goto label_1d1f24;
            case 0x1D1F28u: goto label_1d1f28;
            case 0x1D1F2Cu: goto label_1d1f2c;
            case 0x1D1F30u: goto label_1d1f30;
            case 0x1D1F34u: goto label_1d1f34;
            case 0x1D1F38u: goto label_1d1f38;
            case 0x1D1F3Cu: goto label_1d1f3c;
            case 0x1D1F40u: goto label_1d1f40;
            case 0x1D1F44u: goto label_1d1f44;
            case 0x1D1F48u: goto label_1d1f48;
            case 0x1D1F4Cu: goto label_1d1f4c;
            case 0x1D1F50u: goto label_1d1f50;
            case 0x1D1F54u: goto label_1d1f54;
            case 0x1D1F58u: goto label_1d1f58;
            case 0x1D1F5Cu: goto label_1d1f5c;
            case 0x1D1F60u: goto label_1d1f60;
            case 0x1D1F64u: goto label_1d1f64;
            case 0x1D1F68u: goto label_1d1f68;
            default: break;
        }
        return;
    }
label_fallthrough_0x1d1f64:
    ctx->pc = 0x1D1F6Cu;
}

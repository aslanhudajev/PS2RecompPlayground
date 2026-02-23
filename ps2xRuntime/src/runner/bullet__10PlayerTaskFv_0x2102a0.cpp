#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: bullet__10PlayerTaskFv
// Address: 0x2102a0 - 0x210b24
void bullet__10PlayerTaskFv_0x2102a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("bullet__10PlayerTaskFv");


    ctx->pc = 0x2102a0u;

label_2102a0:
    // 0x2102a0: 0x27bdff90
    ctx->pc = 0x2102a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
label_2102a4:
    // 0x2102a4: 0x7fbf0060
    ctx->pc = 0x2102a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
label_2102a8:
    // 0x2102a8: 0x7fb40050
    ctx->pc = 0x2102a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2102ac:
    // 0x2102ac: 0x7fb30040
    ctx->pc = 0x2102acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2102b0:
    // 0x2102b0: 0x7fb20030
    ctx->pc = 0x2102b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2102b4:
    // 0x2102b4: 0x7fb10020
    ctx->pc = 0x2102b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2102b8:
    // 0x2102b8: 0x7fb00010
    ctx->pc = 0x2102b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2102bc:
    // 0x2102bc: 0xe7b40000
    ctx->pc = 0x2102bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2102c0:
    // 0x2102c0: 0x7080a628
    ctx->pc = 0x2102c0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_2102c4:
    // 0x2102c4: 0x70009628
    ctx->pc = 0x2102c4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2102c8:
    // 0x2102c8: 0x70009e28
    ctx->pc = 0x2102c8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2102cc:
    // 0x2102cc: 0x8e831cbc
    ctx->pc = 0x2102ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 7356)));
label_2102d0:
    // 0x2102d0: 0x731821
    ctx->pc = 0x2102d0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_2102d4:
    // 0x2102d4: 0x24700208
    ctx->pc = 0x2102d4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 520));
label_2102d8:
    // 0x2102d8: 0x8c630230
    ctx->pc = 0x2102d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 560)));
label_2102dc:
    // 0x2102dc: 0x2861000a
    ctx->pc = 0x2102dcu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 10));
label_2102e0:
    // 0x2102e0: 0x10200005
label_2102e4:
    if (ctx->pc == 0x2102E4u) {
        ctx->pc = 0x2102E8u;
        goto label_2102e8;
    }
    ctx->pc = 0x2102E0u;
    {
        const bool branch_taken_0x2102e0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x2102e0) {
            ctx->pc = 0x2102F8u;
            goto label_2102f8;
        }
    }
    ctx->pc = 0x2102E8u;
label_2102e8:
    // 0x2102e8: 0x97838bf4
    ctx->pc = 0x2102e8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937588)));
label_2102ec:
    // 0x2102ec: 0x10600004
label_2102f0:
    if (ctx->pc == 0x2102F0u) {
        ctx->pc = 0x2102F4u;
        goto label_2102f4;
    }
    ctx->pc = 0x2102ECu;
    {
        const bool branch_taken_0x2102ec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2102ec) {
            ctx->pc = 0x210300u;
            goto label_210300;
        }
    }
    ctx->pc = 0x2102F4u;
label_2102f4:
    // 0x2102f4: 0x0
    ctx->pc = 0x2102f4u;
    // NOP
label_2102f8:
    // 0x2102f8: 0xa6000000
    ctx->pc = 0x2102f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
label_2102fc:
    // 0x2102fc: 0x0
    ctx->pc = 0x2102fcu;
    // NOP
label_210300:
    // 0x210300: 0x86030000
    ctx->pc = 0x210300u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_210304:
    // 0x210304: 0x10600192
label_210308:
    if (ctx->pc == 0x210308u) {
        ctx->pc = 0x21030Cu;
        goto label_21030c;
    }
    ctx->pc = 0x210304u;
    {
        const bool branch_taken_0x210304 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x210304) {
            ctx->pc = 0x210950u;
            goto label_210950;
        }
    }
    ctx->pc = 0x21030Cu;
label_21030c:
    // 0x21030c: 0x4bede37d
    ctx->pc = 0x21030cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_210310:
    // 0x210310: 0x4bedeb7d
    ctx->pc = 0x210310u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_210314:
    // 0x210314: 0x4bedf37d
    ctx->pc = 0x210314u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_210318:
    // 0x210318: 0xc06c20d
label_21031c:
    if (ctx->pc == 0x21031Cu) {
        ctx->pc = 0x21031Cu;
        { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
        ctx->pc = 0x210320u;
        goto label_210320;
    }
    ctx->pc = 0x210318u;
    SET_GPR_U32(ctx, 31, 0x210320u);
    ctx->pc = 0x21031Cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210320u; }
        else if (ctx->pc != 0x210320u) { ctx->pc = 0x210320u; }
    }
    if (ctx->pc != 0x210320u) { return; }
    ctx->pc = 0x210320u;
label_210320:
    // 0x210320: 0xc60d0008
    ctx->pc = 0x210320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_210324:
    // 0x210324: 0xc60e000c
    ctx->pc = 0x210324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_210328:
    // 0x210328: 0xc06c202
label_21032c:
    if (ctx->pc == 0x21032Cu) {
        ctx->pc = 0x21032Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x210330u;
        goto label_210330;
    }
    ctx->pc = 0x210328u;
    SET_GPR_U32(ctx, 31, 0x210330u);
    ctx->pc = 0x21032Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210330u; }
        else if (ctx->pc != 0x210330u) { ctx->pc = 0x210330u; }
    }
    if (ctx->pc != 0x210330u) { return; }
    ctx->pc = 0x210330u;
label_210330:
    // 0x210330: 0x8e02002c
    ctx->pc = 0x210330u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_210334:
    // 0x210334: 0x2042fff8
    ctx->pc = 0x210334u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)4294967288, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
label_210338:
    // 0x210338: 0x2c410008
    ctx->pc = 0x210338u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), 8));
label_21033c:
    // 0x21033c: 0x50200009
label_210340:
    if (ctx->pc == 0x210340u) {
        ctx->pc = 0x210340u;
        SET_GPR_U32(ctx, 2, ((uint32_t)15660 << 16));
        ctx->pc = 0x210344u;
        goto label_210344;
    }
    ctx->pc = 0x21033Cu;
    {
        const bool branch_taken_0x21033c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x21033c) {
            ctx->pc = 0x210340u;
            SET_GPR_U32(ctx, 2, ((uint32_t)15660 << 16));
            ctx->pc = 0x210364u;
            goto label_210364;
        }
    }
    ctx->pc = 0x210344u;
label_210344:
    // 0x210344: 0x3c03002c
    ctx->pc = 0x210344u;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
label_210348:
    // 0x210348: 0x21080
    ctx->pc = 0x210348u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_21034c:
    // 0x21034c: 0x24630660
    ctx->pc = 0x21034cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1632));
label_210350:
    // 0x210350: 0x431021
    ctx->pc = 0x210350u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_210354:
    // 0x210354: 0x8c420000
    ctx->pc = 0x210354u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_210358:
    // 0x210358: 0x400008
label_21035c:
    if (ctx->pc == 0x21035Cu) {
        ctx->pc = 0x210360u;
        goto label_210360;
    }
    ctx->pc = 0x210358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2102A0u: goto label_2102a0;
            case 0x2102A4u: goto label_2102a4;
            case 0x2102A8u: goto label_2102a8;
            case 0x2102ACu: goto label_2102ac;
            case 0x2102B0u: goto label_2102b0;
            case 0x2102B4u: goto label_2102b4;
            case 0x2102B8u: goto label_2102b8;
            case 0x2102BCu: goto label_2102bc;
            case 0x2102C0u: goto label_2102c0;
            case 0x2102C4u: goto label_2102c4;
            case 0x2102C8u: goto label_2102c8;
            case 0x2102CCu: goto label_2102cc;
            case 0x2102D0u: goto label_2102d0;
            case 0x2102D4u: goto label_2102d4;
            case 0x2102D8u: goto label_2102d8;
            case 0x2102DCu: goto label_2102dc;
            case 0x2102E0u: goto label_2102e0;
            case 0x2102E4u: goto label_2102e4;
            case 0x2102E8u: goto label_2102e8;
            case 0x2102ECu: goto label_2102ec;
            case 0x2102F0u: goto label_2102f0;
            case 0x2102F4u: goto label_2102f4;
            case 0x2102F8u: goto label_2102f8;
            case 0x2102FCu: goto label_2102fc;
            case 0x210300u: goto label_210300;
            case 0x210304u: goto label_210304;
            case 0x210308u: goto label_210308;
            case 0x21030Cu: goto label_21030c;
            case 0x210310u: goto label_210310;
            case 0x210314u: goto label_210314;
            case 0x210318u: goto label_210318;
            case 0x21031Cu: goto label_21031c;
            case 0x210320u: goto label_210320;
            case 0x210324u: goto label_210324;
            case 0x210328u: goto label_210328;
            case 0x21032Cu: goto label_21032c;
            case 0x210330u: goto label_210330;
            case 0x210334u: goto label_210334;
            case 0x210338u: goto label_210338;
            case 0x21033Cu: goto label_21033c;
            case 0x210340u: goto label_210340;
            case 0x210344u: goto label_210344;
            case 0x210348u: goto label_210348;
            case 0x21034Cu: goto label_21034c;
            case 0x210350u: goto label_210350;
            case 0x210354u: goto label_210354;
            case 0x210358u: goto label_210358;
            case 0x21035Cu: goto label_21035c;
            case 0x210360u: goto label_210360;
            case 0x210364u: goto label_210364;
            case 0x210368u: goto label_210368;
            case 0x21036Cu: goto label_21036c;
            case 0x210370u: goto label_210370;
            case 0x210374u: goto label_210374;
            case 0x210378u: goto label_210378;
            case 0x21037Cu: goto label_21037c;
            case 0x210380u: goto label_210380;
            case 0x210384u: goto label_210384;
            case 0x210388u: goto label_210388;
            case 0x21038Cu: goto label_21038c;
            case 0x210390u: goto label_210390;
            case 0x210394u: goto label_210394;
            case 0x210398u: goto label_210398;
            case 0x21039Cu: goto label_21039c;
            case 0x2103A0u: goto label_2103a0;
            case 0x2103A4u: goto label_2103a4;
            case 0x2103A8u: goto label_2103a8;
            case 0x2103ACu: goto label_2103ac;
            case 0x2103B0u: goto label_2103b0;
            case 0x2103B4u: goto label_2103b4;
            case 0x2103B8u: goto label_2103b8;
            case 0x2103BCu: goto label_2103bc;
            case 0x2103C0u: goto label_2103c0;
            case 0x2103C4u: goto label_2103c4;
            case 0x2103C8u: goto label_2103c8;
            case 0x2103CCu: goto label_2103cc;
            case 0x2103D0u: goto label_2103d0;
            case 0x2103D4u: goto label_2103d4;
            case 0x2103D8u: goto label_2103d8;
            case 0x2103DCu: goto label_2103dc;
            case 0x2103E0u: goto label_2103e0;
            case 0x2103E4u: goto label_2103e4;
            case 0x2103E8u: goto label_2103e8;
            case 0x2103ECu: goto label_2103ec;
            case 0x2103F0u: goto label_2103f0;
            case 0x2103F4u: goto label_2103f4;
            case 0x2103F8u: goto label_2103f8;
            case 0x2103FCu: goto label_2103fc;
            case 0x210400u: goto label_210400;
            case 0x210404u: goto label_210404;
            case 0x210408u: goto label_210408;
            case 0x21040Cu: goto label_21040c;
            case 0x210410u: goto label_210410;
            case 0x210414u: goto label_210414;
            case 0x210418u: goto label_210418;
            case 0x21041Cu: goto label_21041c;
            case 0x210420u: goto label_210420;
            case 0x210424u: goto label_210424;
            case 0x210428u: goto label_210428;
            case 0x21042Cu: goto label_21042c;
            case 0x210430u: goto label_210430;
            case 0x210434u: goto label_210434;
            case 0x210438u: goto label_210438;
            case 0x21043Cu: goto label_21043c;
            case 0x210440u: goto label_210440;
            case 0x210444u: goto label_210444;
            case 0x210448u: goto label_210448;
            case 0x21044Cu: goto label_21044c;
            case 0x210450u: goto label_210450;
            case 0x210454u: goto label_210454;
            case 0x210458u: goto label_210458;
            case 0x21045Cu: goto label_21045c;
            case 0x210460u: goto label_210460;
            case 0x210464u: goto label_210464;
            case 0x210468u: goto label_210468;
            case 0x21046Cu: goto label_21046c;
            case 0x210470u: goto label_210470;
            case 0x210474u: goto label_210474;
            case 0x210478u: goto label_210478;
            case 0x21047Cu: goto label_21047c;
            case 0x210480u: goto label_210480;
            case 0x210484u: goto label_210484;
            case 0x210488u: goto label_210488;
            case 0x21048Cu: goto label_21048c;
            case 0x210490u: goto label_210490;
            case 0x210494u: goto label_210494;
            case 0x210498u: goto label_210498;
            case 0x21049Cu: goto label_21049c;
            case 0x2104A0u: goto label_2104a0;
            case 0x2104A4u: goto label_2104a4;
            case 0x2104A8u: goto label_2104a8;
            case 0x2104ACu: goto label_2104ac;
            case 0x2104B0u: goto label_2104b0;
            case 0x2104B4u: goto label_2104b4;
            case 0x2104B8u: goto label_2104b8;
            case 0x2104BCu: goto label_2104bc;
            case 0x2104C0u: goto label_2104c0;
            case 0x2104C4u: goto label_2104c4;
            case 0x2104C8u: goto label_2104c8;
            case 0x2104CCu: goto label_2104cc;
            case 0x2104D0u: goto label_2104d0;
            case 0x2104D4u: goto label_2104d4;
            case 0x2104D8u: goto label_2104d8;
            case 0x2104DCu: goto label_2104dc;
            case 0x2104E0u: goto label_2104e0;
            case 0x2104E4u: goto label_2104e4;
            case 0x2104E8u: goto label_2104e8;
            case 0x2104ECu: goto label_2104ec;
            case 0x2104F0u: goto label_2104f0;
            case 0x2104F4u: goto label_2104f4;
            case 0x2104F8u: goto label_2104f8;
            case 0x2104FCu: goto label_2104fc;
            case 0x210500u: goto label_210500;
            case 0x210504u: goto label_210504;
            case 0x210508u: goto label_210508;
            case 0x21050Cu: goto label_21050c;
            case 0x210510u: goto label_210510;
            case 0x210514u: goto label_210514;
            case 0x210518u: goto label_210518;
            case 0x21051Cu: goto label_21051c;
            case 0x210520u: goto label_210520;
            case 0x210524u: goto label_210524;
            case 0x210528u: goto label_210528;
            case 0x21052Cu: goto label_21052c;
            case 0x210530u: goto label_210530;
            case 0x210534u: goto label_210534;
            case 0x210538u: goto label_210538;
            case 0x21053Cu: goto label_21053c;
            case 0x210540u: goto label_210540;
            case 0x210544u: goto label_210544;
            case 0x210548u: goto label_210548;
            case 0x21054Cu: goto label_21054c;
            case 0x210550u: goto label_210550;
            case 0x210554u: goto label_210554;
            case 0x210558u: goto label_210558;
            case 0x21055Cu: goto label_21055c;
            case 0x210560u: goto label_210560;
            case 0x210564u: goto label_210564;
            case 0x210568u: goto label_210568;
            case 0x21056Cu: goto label_21056c;
            case 0x210570u: goto label_210570;
            case 0x210574u: goto label_210574;
            case 0x210578u: goto label_210578;
            case 0x21057Cu: goto label_21057c;
            case 0x210580u: goto label_210580;
            case 0x210584u: goto label_210584;
            case 0x210588u: goto label_210588;
            case 0x21058Cu: goto label_21058c;
            case 0x210590u: goto label_210590;
            case 0x210594u: goto label_210594;
            case 0x210598u: goto label_210598;
            case 0x21059Cu: goto label_21059c;
            case 0x2105A0u: goto label_2105a0;
            case 0x2105A4u: goto label_2105a4;
            case 0x2105A8u: goto label_2105a8;
            case 0x2105ACu: goto label_2105ac;
            case 0x2105B0u: goto label_2105b0;
            case 0x2105B4u: goto label_2105b4;
            case 0x2105B8u: goto label_2105b8;
            case 0x2105BCu: goto label_2105bc;
            case 0x2105C0u: goto label_2105c0;
            case 0x2105C4u: goto label_2105c4;
            case 0x2105C8u: goto label_2105c8;
            case 0x2105CCu: goto label_2105cc;
            case 0x2105D0u: goto label_2105d0;
            case 0x2105D4u: goto label_2105d4;
            case 0x2105D8u: goto label_2105d8;
            case 0x2105DCu: goto label_2105dc;
            case 0x2105E0u: goto label_2105e0;
            case 0x2105E4u: goto label_2105e4;
            case 0x2105E8u: goto label_2105e8;
            case 0x2105ECu: goto label_2105ec;
            case 0x2105F0u: goto label_2105f0;
            case 0x2105F4u: goto label_2105f4;
            case 0x2105F8u: goto label_2105f8;
            case 0x2105FCu: goto label_2105fc;
            case 0x210600u: goto label_210600;
            case 0x210604u: goto label_210604;
            case 0x210608u: goto label_210608;
            case 0x21060Cu: goto label_21060c;
            case 0x210610u: goto label_210610;
            case 0x210614u: goto label_210614;
            case 0x210618u: goto label_210618;
            case 0x21061Cu: goto label_21061c;
            case 0x210620u: goto label_210620;
            case 0x210624u: goto label_210624;
            case 0x210628u: goto label_210628;
            case 0x21062Cu: goto label_21062c;
            case 0x210630u: goto label_210630;
            case 0x210634u: goto label_210634;
            case 0x210638u: goto label_210638;
            case 0x21063Cu: goto label_21063c;
            case 0x210640u: goto label_210640;
            case 0x210644u: goto label_210644;
            case 0x210648u: goto label_210648;
            case 0x21064Cu: goto label_21064c;
            case 0x210650u: goto label_210650;
            case 0x210654u: goto label_210654;
            case 0x210658u: goto label_210658;
            case 0x21065Cu: goto label_21065c;
            case 0x210660u: goto label_210660;
            case 0x210664u: goto label_210664;
            case 0x210668u: goto label_210668;
            case 0x21066Cu: goto label_21066c;
            case 0x210670u: goto label_210670;
            case 0x210674u: goto label_210674;
            case 0x210678u: goto label_210678;
            case 0x21067Cu: goto label_21067c;
            case 0x210680u: goto label_210680;
            case 0x210684u: goto label_210684;
            case 0x210688u: goto label_210688;
            case 0x21068Cu: goto label_21068c;
            case 0x210690u: goto label_210690;
            case 0x210694u: goto label_210694;
            case 0x210698u: goto label_210698;
            case 0x21069Cu: goto label_21069c;
            case 0x2106A0u: goto label_2106a0;
            case 0x2106A4u: goto label_2106a4;
            case 0x2106A8u: goto label_2106a8;
            case 0x2106ACu: goto label_2106ac;
            case 0x2106B0u: goto label_2106b0;
            case 0x2106B4u: goto label_2106b4;
            case 0x2106B8u: goto label_2106b8;
            case 0x2106BCu: goto label_2106bc;
            case 0x2106C0u: goto label_2106c0;
            case 0x2106C4u: goto label_2106c4;
            case 0x2106C8u: goto label_2106c8;
            case 0x2106CCu: goto label_2106cc;
            case 0x2106D0u: goto label_2106d0;
            case 0x2106D4u: goto label_2106d4;
            case 0x2106D8u: goto label_2106d8;
            case 0x2106DCu: goto label_2106dc;
            case 0x2106E0u: goto label_2106e0;
            case 0x2106E4u: goto label_2106e4;
            case 0x2106E8u: goto label_2106e8;
            case 0x2106ECu: goto label_2106ec;
            case 0x2106F0u: goto label_2106f0;
            case 0x2106F4u: goto label_2106f4;
            case 0x2106F8u: goto label_2106f8;
            case 0x2106FCu: goto label_2106fc;
            case 0x210700u: goto label_210700;
            case 0x210704u: goto label_210704;
            case 0x210708u: goto label_210708;
            case 0x21070Cu: goto label_21070c;
            case 0x210710u: goto label_210710;
            case 0x210714u: goto label_210714;
            case 0x210718u: goto label_210718;
            case 0x21071Cu: goto label_21071c;
            case 0x210720u: goto label_210720;
            case 0x210724u: goto label_210724;
            case 0x210728u: goto label_210728;
            case 0x21072Cu: goto label_21072c;
            case 0x210730u: goto label_210730;
            case 0x210734u: goto label_210734;
            case 0x210738u: goto label_210738;
            case 0x21073Cu: goto label_21073c;
            case 0x210740u: goto label_210740;
            case 0x210744u: goto label_210744;
            case 0x210748u: goto label_210748;
            case 0x21074Cu: goto label_21074c;
            case 0x210750u: goto label_210750;
            case 0x210754u: goto label_210754;
            case 0x210758u: goto label_210758;
            case 0x21075Cu: goto label_21075c;
            case 0x210760u: goto label_210760;
            case 0x210764u: goto label_210764;
            case 0x210768u: goto label_210768;
            case 0x21076Cu: goto label_21076c;
            case 0x210770u: goto label_210770;
            case 0x210774u: goto label_210774;
            case 0x210778u: goto label_210778;
            case 0x21077Cu: goto label_21077c;
            case 0x210780u: goto label_210780;
            case 0x210784u: goto label_210784;
            case 0x210788u: goto label_210788;
            case 0x21078Cu: goto label_21078c;
            case 0x210790u: goto label_210790;
            case 0x210794u: goto label_210794;
            case 0x210798u: goto label_210798;
            case 0x21079Cu: goto label_21079c;
            case 0x2107A0u: goto label_2107a0;
            case 0x2107A4u: goto label_2107a4;
            case 0x2107A8u: goto label_2107a8;
            case 0x2107ACu: goto label_2107ac;
            case 0x2107B0u: goto label_2107b0;
            case 0x2107B4u: goto label_2107b4;
            case 0x2107B8u: goto label_2107b8;
            case 0x2107BCu: goto label_2107bc;
            case 0x2107C0u: goto label_2107c0;
            case 0x2107C4u: goto label_2107c4;
            case 0x2107C8u: goto label_2107c8;
            case 0x2107CCu: goto label_2107cc;
            case 0x2107D0u: goto label_2107d0;
            case 0x2107D4u: goto label_2107d4;
            case 0x2107D8u: goto label_2107d8;
            case 0x2107DCu: goto label_2107dc;
            case 0x2107E0u: goto label_2107e0;
            case 0x2107E4u: goto label_2107e4;
            case 0x2107E8u: goto label_2107e8;
            case 0x2107ECu: goto label_2107ec;
            case 0x2107F0u: goto label_2107f0;
            case 0x2107F4u: goto label_2107f4;
            case 0x2107F8u: goto label_2107f8;
            case 0x2107FCu: goto label_2107fc;
            case 0x210800u: goto label_210800;
            case 0x210804u: goto label_210804;
            case 0x210808u: goto label_210808;
            case 0x21080Cu: goto label_21080c;
            case 0x210810u: goto label_210810;
            case 0x210814u: goto label_210814;
            case 0x210818u: goto label_210818;
            case 0x21081Cu: goto label_21081c;
            case 0x210820u: goto label_210820;
            case 0x210824u: goto label_210824;
            case 0x210828u: goto label_210828;
            case 0x21082Cu: goto label_21082c;
            case 0x210830u: goto label_210830;
            case 0x210834u: goto label_210834;
            case 0x210838u: goto label_210838;
            case 0x21083Cu: goto label_21083c;
            case 0x210840u: goto label_210840;
            case 0x210844u: goto label_210844;
            case 0x210848u: goto label_210848;
            case 0x21084Cu: goto label_21084c;
            case 0x210850u: goto label_210850;
            case 0x210854u: goto label_210854;
            case 0x210858u: goto label_210858;
            case 0x21085Cu: goto label_21085c;
            case 0x210860u: goto label_210860;
            case 0x210864u: goto label_210864;
            case 0x210868u: goto label_210868;
            case 0x21086Cu: goto label_21086c;
            case 0x210870u: goto label_210870;
            case 0x210874u: goto label_210874;
            case 0x210878u: goto label_210878;
            case 0x21087Cu: goto label_21087c;
            case 0x210880u: goto label_210880;
            case 0x210884u: goto label_210884;
            case 0x210888u: goto label_210888;
            case 0x21088Cu: goto label_21088c;
            case 0x210890u: goto label_210890;
            case 0x210894u: goto label_210894;
            case 0x210898u: goto label_210898;
            case 0x21089Cu: goto label_21089c;
            case 0x2108A0u: goto label_2108a0;
            case 0x2108A4u: goto label_2108a4;
            case 0x2108A8u: goto label_2108a8;
            case 0x2108ACu: goto label_2108ac;
            case 0x2108B0u: goto label_2108b0;
            case 0x2108B4u: goto label_2108b4;
            case 0x2108B8u: goto label_2108b8;
            case 0x2108BCu: goto label_2108bc;
            case 0x2108C0u: goto label_2108c0;
            case 0x2108C4u: goto label_2108c4;
            case 0x2108C8u: goto label_2108c8;
            case 0x2108CCu: goto label_2108cc;
            case 0x2108D0u: goto label_2108d0;
            case 0x2108D4u: goto label_2108d4;
            case 0x2108D8u: goto label_2108d8;
            case 0x2108DCu: goto label_2108dc;
            case 0x2108E0u: goto label_2108e0;
            case 0x2108E4u: goto label_2108e4;
            case 0x2108E8u: goto label_2108e8;
            case 0x2108ECu: goto label_2108ec;
            case 0x2108F0u: goto label_2108f0;
            case 0x2108F4u: goto label_2108f4;
            case 0x2108F8u: goto label_2108f8;
            case 0x2108FCu: goto label_2108fc;
            case 0x210900u: goto label_210900;
            case 0x210904u: goto label_210904;
            case 0x210908u: goto label_210908;
            case 0x21090Cu: goto label_21090c;
            case 0x210910u: goto label_210910;
            case 0x210914u: goto label_210914;
            case 0x210918u: goto label_210918;
            case 0x21091Cu: goto label_21091c;
            case 0x210920u: goto label_210920;
            case 0x210924u: goto label_210924;
            case 0x210928u: goto label_210928;
            case 0x21092Cu: goto label_21092c;
            case 0x210930u: goto label_210930;
            case 0x210934u: goto label_210934;
            case 0x210938u: goto label_210938;
            case 0x21093Cu: goto label_21093c;
            case 0x210940u: goto label_210940;
            case 0x210944u: goto label_210944;
            case 0x210948u: goto label_210948;
            case 0x21094Cu: goto label_21094c;
            case 0x210950u: goto label_210950;
            case 0x210954u: goto label_210954;
            case 0x210958u: goto label_210958;
            case 0x21095Cu: goto label_21095c;
            case 0x210960u: goto label_210960;
            case 0x210964u: goto label_210964;
            case 0x210968u: goto label_210968;
            case 0x21096Cu: goto label_21096c;
            case 0x210970u: goto label_210970;
            case 0x210974u: goto label_210974;
            case 0x210978u: goto label_210978;
            case 0x21097Cu: goto label_21097c;
            case 0x210980u: goto label_210980;
            case 0x210984u: goto label_210984;
            case 0x210988u: goto label_210988;
            case 0x21098Cu: goto label_21098c;
            case 0x210990u: goto label_210990;
            case 0x210994u: goto label_210994;
            case 0x210998u: goto label_210998;
            case 0x21099Cu: goto label_21099c;
            case 0x2109A0u: goto label_2109a0;
            case 0x2109A4u: goto label_2109a4;
            case 0x2109A8u: goto label_2109a8;
            case 0x2109ACu: goto label_2109ac;
            case 0x2109B0u: goto label_2109b0;
            case 0x2109B4u: goto label_2109b4;
            case 0x2109B8u: goto label_2109b8;
            case 0x2109BCu: goto label_2109bc;
            case 0x2109C0u: goto label_2109c0;
            case 0x2109C4u: goto label_2109c4;
            case 0x2109C8u: goto label_2109c8;
            case 0x2109CCu: goto label_2109cc;
            case 0x2109D0u: goto label_2109d0;
            case 0x2109D4u: goto label_2109d4;
            case 0x2109D8u: goto label_2109d8;
            case 0x2109DCu: goto label_2109dc;
            case 0x2109E0u: goto label_2109e0;
            case 0x2109E4u: goto label_2109e4;
            case 0x2109E8u: goto label_2109e8;
            case 0x2109ECu: goto label_2109ec;
            case 0x2109F0u: goto label_2109f0;
            case 0x2109F4u: goto label_2109f4;
            case 0x2109F8u: goto label_2109f8;
            case 0x2109FCu: goto label_2109fc;
            case 0x210A00u: goto label_210a00;
            case 0x210A04u: goto label_210a04;
            case 0x210A08u: goto label_210a08;
            case 0x210A0Cu: goto label_210a0c;
            case 0x210A10u: goto label_210a10;
            case 0x210A14u: goto label_210a14;
            case 0x210A18u: goto label_210a18;
            case 0x210A1Cu: goto label_210a1c;
            case 0x210A20u: goto label_210a20;
            case 0x210A24u: goto label_210a24;
            case 0x210A28u: goto label_210a28;
            case 0x210A2Cu: goto label_210a2c;
            case 0x210A30u: goto label_210a30;
            case 0x210A34u: goto label_210a34;
            case 0x210A38u: goto label_210a38;
            case 0x210A3Cu: goto label_210a3c;
            case 0x210A40u: goto label_210a40;
            case 0x210A44u: goto label_210a44;
            case 0x210A48u: goto label_210a48;
            case 0x210A4Cu: goto label_210a4c;
            case 0x210A50u: goto label_210a50;
            case 0x210A54u: goto label_210a54;
            case 0x210A58u: goto label_210a58;
            case 0x210A5Cu: goto label_210a5c;
            case 0x210A60u: goto label_210a60;
            case 0x210A64u: goto label_210a64;
            case 0x210A68u: goto label_210a68;
            case 0x210A6Cu: goto label_210a6c;
            case 0x210A70u: goto label_210a70;
            case 0x210A74u: goto label_210a74;
            case 0x210A78u: goto label_210a78;
            case 0x210A7Cu: goto label_210a7c;
            case 0x210A80u: goto label_210a80;
            case 0x210A84u: goto label_210a84;
            case 0x210A88u: goto label_210a88;
            case 0x210A8Cu: goto label_210a8c;
            case 0x210A90u: goto label_210a90;
            case 0x210A94u: goto label_210a94;
            case 0x210A98u: goto label_210a98;
            case 0x210A9Cu: goto label_210a9c;
            case 0x210AA0u: goto label_210aa0;
            case 0x210AA4u: goto label_210aa4;
            case 0x210AA8u: goto label_210aa8;
            case 0x210AACu: goto label_210aac;
            case 0x210AB0u: goto label_210ab0;
            case 0x210AB4u: goto label_210ab4;
            case 0x210AB8u: goto label_210ab8;
            case 0x210ABCu: goto label_210abc;
            case 0x210AC0u: goto label_210ac0;
            case 0x210AC4u: goto label_210ac4;
            case 0x210AC8u: goto label_210ac8;
            case 0x210ACCu: goto label_210acc;
            case 0x210AD0u: goto label_210ad0;
            case 0x210AD4u: goto label_210ad4;
            case 0x210AD8u: goto label_210ad8;
            case 0x210ADCu: goto label_210adc;
            case 0x210AE0u: goto label_210ae0;
            case 0x210AE4u: goto label_210ae4;
            case 0x210AE8u: goto label_210ae8;
            case 0x210AECu: goto label_210aec;
            case 0x210AF0u: goto label_210af0;
            case 0x210AF4u: goto label_210af4;
            case 0x210AF8u: goto label_210af8;
            case 0x210AFCu: goto label_210afc;
            case 0x210B00u: goto label_210b00;
            case 0x210B04u: goto label_210b04;
            case 0x210B08u: goto label_210b08;
            case 0x210B0Cu: goto label_210b0c;
            case 0x210B10u: goto label_210b10;
            case 0x210B14u: goto label_210b14;
            case 0x210B18u: goto label_210b18;
            case 0x210B1Cu: goto label_210b1c;
            case 0x210B20u: goto label_210b20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x210360u;
label_210360:
    // 0x210360: 0x3c023d2c
    ctx->pc = 0x210360u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15660 << 16));
label_210364:
    // 0x210364: 0x34420831
    ctx->pc = 0x210364u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2097));
label_210368:
    // 0x210368: 0x44826000
    ctx->pc = 0x210368u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
label_21036c:
    // 0x21036c: 0x0
    ctx->pc = 0x21036cu;
    // NOP
label_210370:
    // 0x210370: 0x46006346
    ctx->pc = 0x210370u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_210374:
    // 0x210374: 0xc06c1b3
label_210378:
    if (ctx->pc == 0x210378u) {
        ctx->pc = 0x210378u;
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x21037Cu;
        goto label_21037c;
    }
    ctx->pc = 0x210374u;
    SET_GPR_U32(ctx, 31, 0x21037Cu);
    ctx->pc = 0x210378u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21037Cu; }
        else if (ctx->pc != 0x21037Cu) { ctx->pc = 0x21037Cu; }
    }
    if (ctx->pc != 0x21037Cu) { return; }
    ctx->pc = 0x21037Cu;
label_21037c:
    // 0x21037c: 0x3c023d2c
    ctx->pc = 0x21037cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)15660 << 16));
label_210380:
    // 0x210380: 0x34420831
    ctx->pc = 0x210380u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2097));
label_210384:
    // 0x210384: 0x44826000
    ctx->pc = 0x210384u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
label_210388:
    // 0x210388: 0xc06b218
label_21038c:
    if (ctx->pc == 0x21038Cu) {
        ctx->pc = 0x210390u;
        goto label_210390;
    }
    ctx->pc = 0x210388u;
    SET_GPR_U32(ctx, 31, 0x210390u);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210390u; }
        else if (ctx->pc != 0x210390u) { ctx->pc = 0x210390u; }
    }
    if (ctx->pc != 0x210390u) { return; }
    ctx->pc = 0x210390u;
label_210390:
    // 0x210390: 0x8e841cb8
    ctx->pc = 0x210390u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 7352)));
label_210394:
    // 0x210394: 0x27828480
    ctx->pc = 0x210394u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 28), 4294935680));
label_210398:
    // 0x210398: 0x8e030028
    ctx->pc = 0x210398u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_21039c:
    // 0x21039c: 0x24050001
    ctx->pc = 0x21039cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_2103a0:
    // 0x2103a0: 0x42080
    ctx->pc = 0x2103a0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
label_2103a4:
    // 0x2103a4: 0x441021
    ctx->pc = 0x2103a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2103a8:
    // 0x2103a8: 0x8c420000
    ctx->pc = 0x2103a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2103ac:
    // 0x2103ac: 0xc085400
label_2103b0:
    if (ctx->pc == 0x2103B0u) {
        ctx->pc = 0x2103B0u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x2103B4u;
        goto label_2103b4;
    }
    ctx->pc = 0x2103ACu;
    SET_GPR_U32(ctx, 31, 0x2103B4u);
    ctx->pc = 0x2103B0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x215000u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatCE__Fii_0x215000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2103B4u; }
        else if (ctx->pc != 0x2103B4u) { ctx->pc = 0x2103B4u; }
    }
    if (ctx->pc != 0x2103B4u) { return; }
    ctx->pc = 0x2103B4u;
label_2103b4:
    // 0x2103b4: 0x10000163
label_2103b8:
    if (ctx->pc == 0x2103B8u) {
        ctx->pc = 0x2103B8u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
        ctx->pc = 0x2103BCu;
        goto label_2103bc;
    }
    ctx->pc = 0x2103B4u;
    {
        const bool branch_taken_0x2103b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2103B8u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x2103b4) {
            ctx->pc = 0x210944u;
            goto label_210944;
        }
    }
    ctx->pc = 0x2103BCu;
label_2103bc:
    // 0x2103bc: 0x3c023cac
    ctx->pc = 0x2103bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)15532 << 16));
label_2103c0:
    // 0x2103c0: 0x34420831
    ctx->pc = 0x2103c0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2097));
label_2103c4:
    // 0x2103c4: 0x44826000
    ctx->pc = 0x2103c4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
label_2103c8:
    // 0x2103c8: 0x0
    ctx->pc = 0x2103c8u;
    // NOP
label_2103cc:
    // 0x2103cc: 0x46006346
    ctx->pc = 0x2103ccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2103d0:
    // 0x2103d0: 0xc06c1b3
label_2103d4:
    if (ctx->pc == 0x2103D4u) {
        ctx->pc = 0x2103D4u;
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2103D8u;
        goto label_2103d8;
    }
    ctx->pc = 0x2103D0u;
    SET_GPR_U32(ctx, 31, 0x2103D8u);
    ctx->pc = 0x2103D4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2103D8u; }
        else if (ctx->pc != 0x2103D8u) { ctx->pc = 0x2103D8u; }
    }
    if (ctx->pc != 0x2103D8u) { return; }
    ctx->pc = 0x2103D8u;
label_2103d8:
    // 0x2103d8: 0x3c023cac
    ctx->pc = 0x2103d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15532 << 16));
label_2103dc:
    // 0x2103dc: 0x34420831
    ctx->pc = 0x2103dcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2097));
label_2103e0:
    // 0x2103e0: 0x44826000
    ctx->pc = 0x2103e0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
label_2103e4:
    // 0x2103e4: 0xc06b218
label_2103e8:
    if (ctx->pc == 0x2103E8u) {
        ctx->pc = 0x2103ECu;
        goto label_2103ec;
    }
    ctx->pc = 0x2103E4u;
    SET_GPR_U32(ctx, 31, 0x2103ECu);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2103ECu; }
        else if (ctx->pc != 0x2103ECu) { ctx->pc = 0x2103ECu; }
    }
    if (ctx->pc != 0x2103ECu) { return; }
    ctx->pc = 0x2103ECu;
label_2103ec:
    // 0x2103ec: 0x8e841cb8
    ctx->pc = 0x2103ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 7352)));
label_2103f0:
    // 0x2103f0: 0x27828480
    ctx->pc = 0x2103f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 28), 4294935680));
label_2103f4:
    // 0x2103f4: 0x8e030028
    ctx->pc = 0x2103f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2103f8:
    // 0x2103f8: 0x24050001
    ctx->pc = 0x2103f8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_2103fc:
    // 0x2103fc: 0x42080
    ctx->pc = 0x2103fcu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
label_210400:
    // 0x210400: 0x441021
    ctx->pc = 0x210400u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_210404:
    // 0x210404: 0x8c420000
    ctx->pc = 0x210404u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_210408:
    // 0x210408: 0xc085400
label_21040c:
    if (ctx->pc == 0x21040Cu) {
        ctx->pc = 0x21040Cu;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x210410u;
        goto label_210410;
    }
    ctx->pc = 0x210408u;
    SET_GPR_U32(ctx, 31, 0x210410u);
    ctx->pc = 0x21040Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x215000u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatCE__Fii_0x215000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210410u; }
        else if (ctx->pc != 0x210410u) { ctx->pc = 0x210410u; }
    }
    if (ctx->pc != 0x210410u) { return; }
    ctx->pc = 0x210410u;
label_210410:
    // 0x210410: 0x1000014b
label_210414:
    if (ctx->pc == 0x210414u) {
        ctx->pc = 0x210418u;
        goto label_210418;
    }
    ctx->pc = 0x210410u;
    {
        const bool branch_taken_0x210410 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x210410) {
            ctx->pc = 0x210940u;
            goto label_210940;
        }
    }
    ctx->pc = 0x210418u;
label_210418:
    // 0x210418: 0x3c023d75
    ctx->pc = 0x210418u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15733 << 16));
label_21041c:
    // 0x21041c: 0x3442c28f
    ctx->pc = 0x21041cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 49807));
label_210420:
    // 0x210420: 0x44826000
    ctx->pc = 0x210420u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
label_210424:
    // 0x210424: 0x0
    ctx->pc = 0x210424u;
    // NOP
label_210428:
    // 0x210428: 0x46006346
    ctx->pc = 0x210428u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_21042c:
    // 0x21042c: 0xc06c1b3
label_210430:
    if (ctx->pc == 0x210430u) {
        ctx->pc = 0x210430u;
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x210434u;
        goto label_210434;
    }
    ctx->pc = 0x21042Cu;
    SET_GPR_U32(ctx, 31, 0x210434u);
    ctx->pc = 0x210430u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210434u; }
        else if (ctx->pc != 0x210434u) { ctx->pc = 0x210434u; }
    }
    if (ctx->pc != 0x210434u) { return; }
    ctx->pc = 0x210434u;
label_210434:
    // 0x210434: 0x3c023d75
    ctx->pc = 0x210434u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15733 << 16));
label_210438:
    // 0x210438: 0x3442c28f
    ctx->pc = 0x210438u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 49807));
label_21043c:
    // 0x21043c: 0x44826000
    ctx->pc = 0x21043cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
label_210440:
    // 0x210440: 0xc06b218
label_210444:
    if (ctx->pc == 0x210444u) {
        ctx->pc = 0x210448u;
        goto label_210448;
    }
    ctx->pc = 0x210440u;
    SET_GPR_U32(ctx, 31, 0x210448u);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210448u; }
        else if (ctx->pc != 0x210448u) { ctx->pc = 0x210448u; }
    }
    if (ctx->pc != 0x210448u) { return; }
    ctx->pc = 0x210448u;
label_210448:
    // 0x210448: 0x8e841cb8
    ctx->pc = 0x210448u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 7352)));
label_21044c:
    // 0x21044c: 0x27828480
    ctx->pc = 0x21044cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 28), 4294935680));
label_210450:
    // 0x210450: 0x8e030028
    ctx->pc = 0x210450u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_210454:
    // 0x210454: 0x24050001
    ctx->pc = 0x210454u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_210458:
    // 0x210458: 0x42080
    ctx->pc = 0x210458u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
label_21045c:
    // 0x21045c: 0x441021
    ctx->pc = 0x21045cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_210460:
    // 0x210460: 0x8c420000
    ctx->pc = 0x210460u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_210464:
    // 0x210464: 0xc085400
label_210468:
    if (ctx->pc == 0x210468u) {
        ctx->pc = 0x210468u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x21046Cu;
        goto label_21046c;
    }
    ctx->pc = 0x210464u;
    SET_GPR_U32(ctx, 31, 0x21046Cu);
    ctx->pc = 0x210468u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x215000u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatCE__Fii_0x215000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21046Cu; }
        else if (ctx->pc != 0x21046Cu) { ctx->pc = 0x21046Cu; }
    }
    if (ctx->pc != 0x21046Cu) { return; }
    ctx->pc = 0x21046Cu;
label_21046c:
    // 0x21046c: 0x3c023dcc
    ctx->pc = 0x21046cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)15820 << 16));
label_210470:
    // 0x210470: 0x3442cccd
    ctx->pc = 0x210470u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 52429));
label_210474:
    // 0x210474: 0x44826000
    ctx->pc = 0x210474u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
label_210478:
    // 0x210478: 0x0
    ctx->pc = 0x210478u;
    // NOP
label_21047c:
    // 0x21047c: 0x46006346
    ctx->pc = 0x21047cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_210480:
    // 0x210480: 0xc06c1b3
label_210484:
    if (ctx->pc == 0x210484u) {
        ctx->pc = 0x210484u;
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x210488u;
        goto label_210488;
    }
    ctx->pc = 0x210480u;
    SET_GPR_U32(ctx, 31, 0x210488u);
    ctx->pc = 0x210484u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210488u; }
        else if (ctx->pc != 0x210488u) { ctx->pc = 0x210488u; }
    }
    if (ctx->pc != 0x210488u) { return; }
    ctx->pc = 0x210488u;
label_210488:
    // 0x210488: 0xc06aafc
label_21048c:
    if (ctx->pc == 0x21048Cu) {
        ctx->pc = 0x210490u;
        goto label_210490;
    }
    ctx->pc = 0x210488u;
    SET_GPR_U32(ctx, 31, 0x210490u);
    ctx->pc = 0x1AABF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutPushFadeColor_0x1aabf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210490u; }
        else if (ctx->pc != 0x210490u) { ctx->pc = 0x210490u; }
    }
    if (ctx->pc != 0x210490u) { return; }
    ctx->pc = 0x210490u;
label_210490:
    // 0x210490: 0x8e020030
    ctx->pc = 0x210490u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_210494:
    // 0x210494: 0xc06c157
label_210498:
    if (ctx->pc == 0x210498u) {
        ctx->pc = 0x210498u;
        SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 12));
        ctx->pc = 0x21049Cu;
        goto label_21049c;
    }
    ctx->pc = 0x210494u;
    SET_GPR_U32(ctx, 31, 0x21049Cu);
    ctx->pc = 0x210498u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 12));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21049Cu; }
        else if (ctx->pc != 0x21049Cu) { ctx->pc = 0x21049Cu; }
    }
    if (ctx->pc != 0x21049Cu) { return; }
    ctx->pc = 0x21049Cu;
label_21049c:
    // 0x21049c: 0x8e821cb8
    ctx->pc = 0x21049cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 7352)));
label_2104a0:
    // 0x2104a0: 0x1440000e
label_2104a4:
    if (ctx->pc == 0x2104A4u) {
        ctx->pc = 0x2104A4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
        ctx->pc = 0x2104A8u;
        goto label_2104a8;
    }
    ctx->pc = 0x2104A0u;
    {
        const bool branch_taken_0x2104a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2104A4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
        if (branch_taken_0x2104a0) {
            ctx->pc = 0x2104DCu;
            goto label_2104dc;
        }
    }
    ctx->pc = 0x2104A8u;
label_2104a8:
    // 0x2104a8: 0x3c023f00
    ctx->pc = 0x2104a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
label_2104ac:
    // 0x2104ac: 0x44826800
    ctx->pc = 0x2104acu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
label_2104b0:
    // 0x2104b0: 0x3c023f80
    ctx->pc = 0x2104b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
label_2104b4:
    // 0x2104b4: 0x44826000
    ctx->pc = 0x2104b4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
label_2104b8:
    // 0x2104b8: 0x0
    ctx->pc = 0x2104b8u;
    // NOP
label_2104bc:
    // 0x2104bc: 0x46006b86
    ctx->pc = 0x2104bcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
label_2104c0:
    // 0x2104c0: 0x460063c6
    ctx->pc = 0x2104c0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
label_2104c4:
    // 0x2104c4: 0x46006c06
    ctx->pc = 0x2104c4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[13]);
label_2104c8:
    // 0x2104c8: 0xc06aac8
label_2104cc:
    if (ctx->pc == 0x2104CCu) {
        ctx->pc = 0x2104CCu;
        ctx->f[17] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x2104D0u;
        goto label_2104d0;
    }
    ctx->pc = 0x2104C8u;
    SET_GPR_U32(ctx, 31, 0x2104D0u);
    ctx->pc = 0x2104CCu;
    ctx->f[17] = FPU_MOV_S(ctx->f[13]);
    ctx->pc = 0x1AAB20u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutScaleFadeColor_0x1aab20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2104D0u; }
        else if (ctx->pc != 0x2104D0u) { ctx->pc = 0x2104D0u; }
    }
    if (ctx->pc != 0x2104D0u) { return; }
    ctx->pc = 0x2104D0u;
label_2104d0:
    // 0x2104d0: 0x1000000c
label_2104d4:
    if (ctx->pc == 0x2104D4u) {
        ctx->pc = 0x2104D4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)15300 << 16));
        ctx->pc = 0x2104D8u;
        goto label_2104d8;
    }
    ctx->pc = 0x2104D0u;
    {
        const bool branch_taken_0x2104d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2104D4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)15300 << 16));
        if (branch_taken_0x2104d0) {
            ctx->pc = 0x210504u;
            goto label_210504;
        }
    }
    ctx->pc = 0x2104D8u;
label_2104d8:
    // 0x2104d8: 0x3c023f00
    ctx->pc = 0x2104d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
label_2104dc:
    // 0x2104dc: 0x44826000
    ctx->pc = 0x2104dcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
label_2104e0:
    // 0x2104e0: 0x3c023f80
    ctx->pc = 0x2104e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
label_2104e4:
    // 0x2104e4: 0x44827000
    ctx->pc = 0x2104e4u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
label_2104e8:
    // 0x2104e8: 0x46006346
    ctx->pc = 0x2104e8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2104ec:
    // 0x2104ec: 0x46007446
    ctx->pc = 0x2104ecu;
    ctx->f[17] = FPU_MOV_S(ctx->f[14]);
label_2104f0:
    // 0x2104f0: 0x460063c6
    ctx->pc = 0x2104f0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
label_2104f4:
    // 0x2104f4: 0xc06aac8
label_2104f8:
    if (ctx->pc == 0x2104F8u) {
        ctx->pc = 0x2104F8u;
        ctx->f[16] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2104FCu;
        goto label_2104fc;
    }
    ctx->pc = 0x2104F4u;
    SET_GPR_U32(ctx, 31, 0x2104FCu);
    ctx->pc = 0x2104F8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1AAB20u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutScaleFadeColor_0x1aab20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2104FCu; }
        else if (ctx->pc != 0x2104FCu) { ctx->pc = 0x2104FCu; }
    }
    if (ctx->pc != 0x2104FCu) { return; }
    ctx->pc = 0x2104FCu;
label_2104fc:
    // 0x2104fc: 0x0
    ctx->pc = 0x2104fcu;
    // NOP
label_210500:
    // 0x210500: 0x3c023bc4
    ctx->pc = 0x210500u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15300 << 16));
label_210504:
    // 0x210504: 0x34429ba6
    ctx->pc = 0x210504u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39846));
label_210508:
    // 0x210508: 0x44826000
    ctx->pc = 0x210508u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
label_21050c:
    // 0x21050c: 0xc06b218
label_210510:
    if (ctx->pc == 0x210510u) {
        ctx->pc = 0x210514u;
        goto label_210514;
    }
    ctx->pc = 0x21050Cu;
    SET_GPR_U32(ctx, 31, 0x210514u);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210514u; }
        else if (ctx->pc != 0x210514u) { ctx->pc = 0x210514u; }
    }
    if (ctx->pc != 0x210514u) { return; }
    ctx->pc = 0x210514u;
label_210514:
    // 0x210514: 0x8e030028
    ctx->pc = 0x210514u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_210518:
    // 0x210518: 0x3c02002c
    ctx->pc = 0x210518u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
label_21051c:
    // 0x21051c: 0x24420610
    ctx->pc = 0x21051cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1552));
label_210520:
    // 0x210520: 0x31880
    ctx->pc = 0x210520u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_210524:
    // 0x210524: 0x431021
    ctx->pc = 0x210524u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_210528:
    // 0x210528: 0x8c440000
    ctx->pc = 0x210528u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21052c:
    // 0x21052c: 0xc085400
label_210530:
    if (ctx->pc == 0x210530u) {
        ctx->pc = 0x210530u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x210534u;
        goto label_210534;
    }
    ctx->pc = 0x21052Cu;
    SET_GPR_U32(ctx, 31, 0x210534u);
    ctx->pc = 0x210530u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x215000u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatCE__Fii_0x215000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210534u; }
        else if (ctx->pc != 0x210534u) { ctx->pc = 0x210534u; }
    }
    if (ctx->pc != 0x210534u) { return; }
    ctx->pc = 0x210534u;
label_210534:
    // 0x210534: 0xc06c157
label_210538:
    if (ctx->pc == 0x210538u) {
        ctx->pc = 0x210538u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16384));
        ctx->pc = 0x21053Cu;
        goto label_21053c;
    }
    ctx->pc = 0x210534u;
    SET_GPR_U32(ctx, 31, 0x21053Cu);
    ctx->pc = 0x210538u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16384));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21053Cu; }
        else if (ctx->pc != 0x21053Cu) { ctx->pc = 0x21053Cu; }
    }
    if (ctx->pc != 0x21053Cu) { return; }
    ctx->pc = 0x21053Cu;
label_21053c:
    // 0x21053c: 0x3c023bc4
    ctx->pc = 0x21053cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)15300 << 16));
label_210540:
    // 0x210540: 0x34429ba6
    ctx->pc = 0x210540u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39846));
label_210544:
    // 0x210544: 0x44826000
    ctx->pc = 0x210544u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
label_210548:
    // 0x210548: 0xc06b218
label_21054c:
    if (ctx->pc == 0x21054Cu) {
        ctx->pc = 0x210550u;
        goto label_210550;
    }
    ctx->pc = 0x210548u;
    SET_GPR_U32(ctx, 31, 0x210550u);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210550u; }
        else if (ctx->pc != 0x210550u) { ctx->pc = 0x210550u; }
    }
    if (ctx->pc != 0x210550u) { return; }
    ctx->pc = 0x210550u;
label_210550:
    // 0x210550: 0x8e030028
    ctx->pc = 0x210550u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_210554:
    // 0x210554: 0x3c02002c
    ctx->pc = 0x210554u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
label_210558:
    // 0x210558: 0x24420610
    ctx->pc = 0x210558u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1552));
label_21055c:
    // 0x21055c: 0x31880
    ctx->pc = 0x21055cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_210560:
    // 0x210560: 0x431021
    ctx->pc = 0x210560u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_210564:
    // 0x210564: 0x8c440000
    ctx->pc = 0x210564u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_210568:
    // 0x210568: 0xc085400
label_21056c:
    if (ctx->pc == 0x21056Cu) {
        ctx->pc = 0x21056Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x210570u;
        goto label_210570;
    }
    ctx->pc = 0x210568u;
    SET_GPR_U32(ctx, 31, 0x210570u);
    ctx->pc = 0x21056Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x215000u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatCE__Fii_0x215000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210570u; }
        else if (ctx->pc != 0x210570u) { ctx->pc = 0x210570u; }
    }
    if (ctx->pc != 0x210570u) { return; }
    ctx->pc = 0x210570u;
label_210570:
    // 0x210570: 0xc06c157
label_210574:
    if (ctx->pc == 0x210574u) {
        ctx->pc = 0x210574u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16384));
        ctx->pc = 0x210578u;
        goto label_210578;
    }
    ctx->pc = 0x210570u;
    SET_GPR_U32(ctx, 31, 0x210578u);
    ctx->pc = 0x210574u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16384));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210578u; }
        else if (ctx->pc != 0x210578u) { ctx->pc = 0x210578u; }
    }
    if (ctx->pc != 0x210578u) { return; }
    ctx->pc = 0x210578u;
label_210578:
    // 0x210578: 0x3c023bc4
    ctx->pc = 0x210578u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15300 << 16));
label_21057c:
    // 0x21057c: 0x34429ba6
    ctx->pc = 0x21057cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39846));
label_210580:
    // 0x210580: 0x44826000
    ctx->pc = 0x210580u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
label_210584:
    // 0x210584: 0xc06b218
label_210588:
    if (ctx->pc == 0x210588u) {
        ctx->pc = 0x21058Cu;
        goto label_21058c;
    }
    ctx->pc = 0x210584u;
    SET_GPR_U32(ctx, 31, 0x21058Cu);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21058Cu; }
        else if (ctx->pc != 0x21058Cu) { ctx->pc = 0x21058Cu; }
    }
    if (ctx->pc != 0x21058Cu) { return; }
    ctx->pc = 0x21058Cu;
label_21058c:
    // 0x21058c: 0x8e030028
    ctx->pc = 0x21058cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_210590:
    // 0x210590: 0x3c02002c
    ctx->pc = 0x210590u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
label_210594:
    // 0x210594: 0x24420610
    ctx->pc = 0x210594u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1552));
label_210598:
    // 0x210598: 0x31880
    ctx->pc = 0x210598u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_21059c:
    // 0x21059c: 0x431021
    ctx->pc = 0x21059cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2105a0:
    // 0x2105a0: 0x8c440000
    ctx->pc = 0x2105a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2105a4:
    // 0x2105a4: 0xc085400
label_2105a8:
    if (ctx->pc == 0x2105A8u) {
        ctx->pc = 0x2105A8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2105ACu;
        goto label_2105ac;
    }
    ctx->pc = 0x2105A4u;
    SET_GPR_U32(ctx, 31, 0x2105ACu);
    ctx->pc = 0x2105A8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x215000u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatCE__Fii_0x215000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2105ACu; }
        else if (ctx->pc != 0x2105ACu) { ctx->pc = 0x2105ACu; }
    }
    if (ctx->pc != 0x2105ACu) { return; }
    ctx->pc = 0x2105ACu;
label_2105ac:
    // 0x2105ac: 0xc06c157
label_2105b0:
    if (ctx->pc == 0x2105B0u) {
        ctx->pc = 0x2105B0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16384));
        ctx->pc = 0x2105B4u;
        goto label_2105b4;
    }
    ctx->pc = 0x2105ACu;
    SET_GPR_U32(ctx, 31, 0x2105B4u);
    ctx->pc = 0x2105B0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16384));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2105B4u; }
        else if (ctx->pc != 0x2105B4u) { ctx->pc = 0x2105B4u; }
    }
    if (ctx->pc != 0x2105B4u) { return; }
    ctx->pc = 0x2105B4u;
label_2105b4:
    // 0x2105b4: 0x3c023bc4
    ctx->pc = 0x2105b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15300 << 16));
label_2105b8:
    // 0x2105b8: 0x34429ba6
    ctx->pc = 0x2105b8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39846));
label_2105bc:
    // 0x2105bc: 0x44826000
    ctx->pc = 0x2105bcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
label_2105c0:
    // 0x2105c0: 0xc06b218
label_2105c4:
    if (ctx->pc == 0x2105C4u) {
        ctx->pc = 0x2105C8u;
        goto label_2105c8;
    }
    ctx->pc = 0x2105C0u;
    SET_GPR_U32(ctx, 31, 0x2105C8u);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2105C8u; }
        else if (ctx->pc != 0x2105C8u) { ctx->pc = 0x2105C8u; }
    }
    if (ctx->pc != 0x2105C8u) { return; }
    ctx->pc = 0x2105C8u;
label_2105c8:
    // 0x2105c8: 0x8e030028
    ctx->pc = 0x2105c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2105cc:
    // 0x2105cc: 0x3c02002c
    ctx->pc = 0x2105ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
label_2105d0:
    // 0x2105d0: 0x24420610
    ctx->pc = 0x2105d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1552));
label_2105d4:
    // 0x2105d4: 0x31880
    ctx->pc = 0x2105d4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2105d8:
    // 0x2105d8: 0x431021
    ctx->pc = 0x2105d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2105dc:
    // 0x2105dc: 0x8c440000
    ctx->pc = 0x2105dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2105e0:
    // 0x2105e0: 0xc085400
label_2105e4:
    if (ctx->pc == 0x2105E4u) {
        ctx->pc = 0x2105E4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2105E8u;
        goto label_2105e8;
    }
    ctx->pc = 0x2105E0u;
    SET_GPR_U32(ctx, 31, 0x2105E8u);
    ctx->pc = 0x2105E4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x215000u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatCE__Fii_0x215000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2105E8u; }
        else if (ctx->pc != 0x2105E8u) { ctx->pc = 0x2105E8u; }
    }
    if (ctx->pc != 0x2105E8u) { return; }
    ctx->pc = 0x2105E8u;
label_2105e8:
    // 0x2105e8: 0xc06ab18
label_2105ec:
    if (ctx->pc == 0x2105ECu) {
        ctx->pc = 0x2105F0u;
        goto label_2105f0;
    }
    ctx->pc = 0x2105E8u;
    SET_GPR_U32(ctx, 31, 0x2105F0u);
    ctx->pc = 0x1AAC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutPopFadeColor_0x1aac60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2105F0u; }
        else if (ctx->pc != 0x2105F0u) { ctx->pc = 0x2105F0u; }
    }
    if (ctx->pc != 0x2105F0u) { return; }
    ctx->pc = 0x2105F0u;
label_2105f0:
    // 0x2105f0: 0x100000d3
label_2105f4:
    if (ctx->pc == 0x2105F4u) {
        ctx->pc = 0x2105F8u;
        goto label_2105f8;
    }
    ctx->pc = 0x2105F0u;
    {
        const bool branch_taken_0x2105f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2105f0) {
            ctx->pc = 0x210940u;
            goto label_210940;
        }
    }
    ctx->pc = 0x2105F8u;
label_2105f8:
    // 0x2105f8: 0x8e030030
    ctx->pc = 0x2105f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2105fc:
    // 0x2105fc: 0x8e020028
    ctx->pc = 0x2105fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_210600:
    // 0x210600: 0x31b00
    ctx->pc = 0x210600u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 12));
label_210604:
    // 0x210604: 0x212c0
    ctx->pc = 0x210604u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 11));
label_210608:
    // 0x210608: 0xc06c157
label_21060c:
    if (ctx->pc == 0x21060Cu) {
        ctx->pc = 0x21060Cu;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x210610u;
        goto label_210610;
    }
    ctx->pc = 0x210608u;
    SET_GPR_U32(ctx, 31, 0x210610u);
    ctx->pc = 0x21060Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210610u; }
        else if (ctx->pc != 0x210610u) { ctx->pc = 0x210610u; }
    }
    if (ctx->pc != 0x210610u) { return; }
    ctx->pc = 0x210610u;
label_210610:
    // 0x210610: 0x3c023d2c
    ctx->pc = 0x210610u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15660 << 16));
label_210614:
    // 0x210614: 0x34420831
    ctx->pc = 0x210614u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2097));
label_210618:
    // 0x210618: 0x44826000
    ctx->pc = 0x210618u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
label_21061c:
    // 0x21061c: 0x0
    ctx->pc = 0x21061cu;
    // NOP
label_210620:
    // 0x210620: 0x46006346
    ctx->pc = 0x210620u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_210624:
    // 0x210624: 0xc06c1b3
label_210628:
    if (ctx->pc == 0x210628u) {
        ctx->pc = 0x210628u;
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x21062Cu;
        goto label_21062c;
    }
    ctx->pc = 0x210624u;
    SET_GPR_U32(ctx, 31, 0x21062Cu);
    ctx->pc = 0x210628u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21062Cu; }
        else if (ctx->pc != 0x21062Cu) { ctx->pc = 0x21062Cu; }
    }
    if (ctx->pc != 0x21062Cu) { return; }
    ctx->pc = 0x21062Cu;
label_21062c:
    // 0x21062c: 0x3c023d2c
    ctx->pc = 0x21062cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)15660 << 16));
label_210630:
    // 0x210630: 0x34420831
    ctx->pc = 0x210630u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2097));
label_210634:
    // 0x210634: 0x44826000
    ctx->pc = 0x210634u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
label_210638:
    // 0x210638: 0xc06b218
label_21063c:
    if (ctx->pc == 0x21063Cu) {
        ctx->pc = 0x210640u;
        goto label_210640;
    }
    ctx->pc = 0x210638u;
    SET_GPR_U32(ctx, 31, 0x210640u);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210640u; }
        else if (ctx->pc != 0x210640u) { ctx->pc = 0x210640u; }
    }
    if (ctx->pc != 0x210640u) { return; }
    ctx->pc = 0x210640u;
label_210640:
    // 0x210640: 0x8e841cb8
    ctx->pc = 0x210640u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 7352)));
label_210644:
    // 0x210644: 0x27828480
    ctx->pc = 0x210644u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 28), 4294935680));
label_210648:
    // 0x210648: 0x8e030028
    ctx->pc = 0x210648u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_21064c:
    // 0x21064c: 0x24050001
    ctx->pc = 0x21064cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_210650:
    // 0x210650: 0x42080
    ctx->pc = 0x210650u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
label_210654:
    // 0x210654: 0x441021
    ctx->pc = 0x210654u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_210658:
    // 0x210658: 0x8c420000
    ctx->pc = 0x210658u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21065c:
    // 0x21065c: 0xc085400
label_210660:
    if (ctx->pc == 0x210660u) {
        ctx->pc = 0x210660u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x210664u;
        goto label_210664;
    }
    ctx->pc = 0x21065Cu;
    SET_GPR_U32(ctx, 31, 0x210664u);
    ctx->pc = 0x210660u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x215000u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatCE__Fii_0x215000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210664u; }
        else if (ctx->pc != 0x210664u) { ctx->pc = 0x210664u; }
    }
    if (ctx->pc != 0x210664u) { return; }
    ctx->pc = 0x210664u;
label_210664:
    // 0x210664: 0x3c02bc23
    ctx->pc = 0x210664u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48163 << 16));
label_210668:
    // 0x210668: 0x44806000
    ctx->pc = 0x210668u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_21066c:
    // 0x21066c: 0x3442d70a
    ctx->pc = 0x21066cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 55050));
label_210670:
    // 0x210670: 0x44827000
    ctx->pc = 0x210670u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
label_210674:
    // 0x210674: 0xc06c202
label_210678:
    if (ctx->pc == 0x210678u) {
        ctx->pc = 0x210678u;
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x21067Cu;
        goto label_21067c;
    }
    ctx->pc = 0x210674u;
    SET_GPR_U32(ctx, 31, 0x21067Cu);
    ctx->pc = 0x210678u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21067Cu; }
        else if (ctx->pc != 0x21067Cu) { ctx->pc = 0x21067Cu; }
    }
    if (ctx->pc != 0x21067Cu) { return; }
    ctx->pc = 0x21067Cu;
label_21067c:
    // 0x21067c: 0xc06c157
label_210680:
    if (ctx->pc == 0x210680u) {
        ctx->pc = 0x210680u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8192));
        ctx->pc = 0x210684u;
        goto label_210684;
    }
    ctx->pc = 0x21067Cu;
    SET_GPR_U32(ctx, 31, 0x210684u);
    ctx->pc = 0x210680u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8192));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210684u; }
        else if (ctx->pc != 0x210684u) { ctx->pc = 0x210684u; }
    }
    if (ctx->pc != 0x210684u) { return; }
    ctx->pc = 0x210684u;
label_210684:
    // 0x210684: 0x3c023d2c
    ctx->pc = 0x210684u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15660 << 16));
label_210688:
    // 0x210688: 0x34420831
    ctx->pc = 0x210688u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2097));
label_21068c:
    // 0x21068c: 0x44826000
    ctx->pc = 0x21068cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
label_210690:
    // 0x210690: 0xc06b218
label_210694:
    if (ctx->pc == 0x210694u) {
        ctx->pc = 0x210698u;
        goto label_210698;
    }
    ctx->pc = 0x210690u;
    SET_GPR_U32(ctx, 31, 0x210698u);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210698u; }
        else if (ctx->pc != 0x210698u) { ctx->pc = 0x210698u; }
    }
    if (ctx->pc != 0x210698u) { return; }
    ctx->pc = 0x210698u;
label_210698:
    // 0x210698: 0x8e841cb8
    ctx->pc = 0x210698u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 7352)));
label_21069c:
    // 0x21069c: 0x27828480
    ctx->pc = 0x21069cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 28), 4294935680));
label_2106a0:
    // 0x2106a0: 0x8e030028
    ctx->pc = 0x2106a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2106a4:
    // 0x2106a4: 0x24050001
    ctx->pc = 0x2106a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_2106a8:
    // 0x2106a8: 0x42080
    ctx->pc = 0x2106a8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
label_2106ac:
    // 0x2106ac: 0x441021
    ctx->pc = 0x2106acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2106b0:
    // 0x2106b0: 0x8c420000
    ctx->pc = 0x2106b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2106b4:
    // 0x2106b4: 0xc085400
label_2106b8:
    if (ctx->pc == 0x2106B8u) {
        ctx->pc = 0x2106B8u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x2106BCu;
        goto label_2106bc;
    }
    ctx->pc = 0x2106B4u;
    SET_GPR_U32(ctx, 31, 0x2106BCu);
    ctx->pc = 0x2106B8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x215000u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatCE__Fii_0x215000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2106BCu; }
        else if (ctx->pc != 0x2106BCu) { ctx->pc = 0x2106BCu; }
    }
    if (ctx->pc != 0x2106BCu) { return; }
    ctx->pc = 0x2106BCu;
label_2106bc:
    // 0x2106bc: 0x100000a0
label_2106c0:
    if (ctx->pc == 0x2106C0u) {
        ctx->pc = 0x2106C4u;
        goto label_2106c4;
    }
    ctx->pc = 0x2106BCu;
    {
        const bool branch_taken_0x2106bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2106bc) {
            ctx->pc = 0x210940u;
            goto label_210940;
        }
    }
    ctx->pc = 0x2106C4u;
label_2106c4:
    // 0x2106c4: 0x3c023d2c
    ctx->pc = 0x2106c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15660 << 16));
label_2106c8:
    // 0x2106c8: 0x34420831
    ctx->pc = 0x2106c8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2097));
label_2106cc:
    // 0x2106cc: 0x44826000
    ctx->pc = 0x2106ccu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
label_2106d0:
    // 0x2106d0: 0x0
    ctx->pc = 0x2106d0u;
    // NOP
label_2106d4:
    // 0x2106d4: 0x46006346
    ctx->pc = 0x2106d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2106d8:
    // 0x2106d8: 0xc06c1b3
label_2106dc:
    if (ctx->pc == 0x2106DCu) {
        ctx->pc = 0x2106DCu;
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2106E0u;
        goto label_2106e0;
    }
    ctx->pc = 0x2106D8u;
    SET_GPR_U32(ctx, 31, 0x2106E0u);
    ctx->pc = 0x2106DCu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2106E0u; }
        else if (ctx->pc != 0x2106E0u) { ctx->pc = 0x2106E0u; }
    }
    if (ctx->pc != 0x2106E0u) { return; }
    ctx->pc = 0x2106E0u;
label_2106e0:
    // 0x2106e0: 0x3c023d2c
    ctx->pc = 0x2106e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15660 << 16));
label_2106e4:
    // 0x2106e4: 0x34420831
    ctx->pc = 0x2106e4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2097));
label_2106e8:
    // 0x2106e8: 0x44826000
    ctx->pc = 0x2106e8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
label_2106ec:
    // 0x2106ec: 0xc06b218
label_2106f0:
    if (ctx->pc == 0x2106F0u) {
        ctx->pc = 0x2106F4u;
        goto label_2106f4;
    }
    ctx->pc = 0x2106ECu;
    SET_GPR_U32(ctx, 31, 0x2106F4u);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2106F4u; }
        else if (ctx->pc != 0x2106F4u) { ctx->pc = 0x2106F4u; }
    }
    if (ctx->pc != 0x2106F4u) { return; }
    ctx->pc = 0x2106F4u;
label_2106f4:
    // 0x2106f4: 0x8e841cb8
    ctx->pc = 0x2106f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 7352)));
label_2106f8:
    // 0x2106f8: 0x27828480
    ctx->pc = 0x2106f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 28), 4294935680));
label_2106fc:
    // 0x2106fc: 0x8e030028
    ctx->pc = 0x2106fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_210700:
    // 0x210700: 0x24050001
    ctx->pc = 0x210700u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_210704:
    // 0x210704: 0x42080
    ctx->pc = 0x210704u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
label_210708:
    // 0x210708: 0x441021
    ctx->pc = 0x210708u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_21070c:
    // 0x21070c: 0x8c420000
    ctx->pc = 0x21070cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_210710:
    // 0x210710: 0xc085400
label_210714:
    if (ctx->pc == 0x210714u) {
        ctx->pc = 0x210714u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x210718u;
        goto label_210718;
    }
    ctx->pc = 0x210710u;
    SET_GPR_U32(ctx, 31, 0x210718u);
    ctx->pc = 0x210714u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x215000u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatCE__Fii_0x215000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210718u; }
        else if (ctx->pc != 0x210718u) { ctx->pc = 0x210718u; }
    }
    if (ctx->pc != 0x210718u) { return; }
    ctx->pc = 0x210718u;
label_210718:
    // 0x210718: 0xc06aafc
label_21071c:
    if (ctx->pc == 0x21071Cu) {
        ctx->pc = 0x210720u;
        goto label_210720;
    }
    ctx->pc = 0x210718u;
    SET_GPR_U32(ctx, 31, 0x210720u);
    ctx->pc = 0x1AABF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutPushFadeColor_0x1aabf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210720u; }
        else if (ctx->pc != 0x210720u) { ctx->pc = 0x210720u; }
    }
    if (ctx->pc != 0x210720u) { return; }
    ctx->pc = 0x210720u;
label_210720:
    // 0x210720: 0x3c023f00
    ctx->pc = 0x210720u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
label_210724:
    // 0x210724: 0x44821000
    ctx->pc = 0x210724u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
label_210728:
    // 0x210728: 0x8e030028
    ctx->pc = 0x210728u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_21072c:
    // 0x21072c: 0x3c023d4c
    ctx->pc = 0x21072cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)15692 << 16));
label_210730:
    // 0x210730: 0x3442cccd
    ctx->pc = 0x210730u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 52429));
label_210734:
    // 0x210734: 0x44820000
    ctx->pc = 0x210734u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_210738:
    // 0x210738: 0x24620001
    ctx->pc = 0x210738u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
label_21073c:
    // 0x21073c: 0x44820800
    ctx->pc = 0x21073cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_210740:
    // 0x210740: 0x0
    ctx->pc = 0x210740u;
    // NOP
label_210744:
    // 0x210744: 0x46800860
    ctx->pc = 0x210744u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_210748:
    // 0x210748: 0x46011043
    ctx->pc = 0x210748u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_21074c:
    // 0x21074c: 0x46011500
    ctx->pc = 0x21074cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_210750:
    // 0x210750: 0x46140302
    ctx->pc = 0x210750u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_210754:
    // 0x210754: 0x46006346
    ctx->pc = 0x210754u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_210758:
    // 0x210758: 0xc06c1b3
label_21075c:
    if (ctx->pc == 0x21075Cu) {
        ctx->pc = 0x21075Cu;
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x210760u;
        goto label_210760;
    }
    ctx->pc = 0x210758u;
    SET_GPR_U32(ctx, 31, 0x210760u);
    ctx->pc = 0x21075Cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210760u; }
        else if (ctx->pc != 0x210760u) { ctx->pc = 0x210760u; }
    }
    if (ctx->pc != 0x210760u) { return; }
    ctx->pc = 0x210760u;
label_210760:
    // 0x210760: 0x3c023b09
    ctx->pc = 0x210760u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15113 << 16));
label_210764:
    // 0x210764: 0x3442a027
    ctx->pc = 0x210764u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 40999));
label_210768:
    // 0x210768: 0x44820000
    ctx->pc = 0x210768u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_21076c:
    // 0x21076c: 0xc06b218
label_210770:
    if (ctx->pc == 0x210770u) {
        ctx->pc = 0x210770u;
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->pc = 0x210774u;
        goto label_210774;
    }
    ctx->pc = 0x21076Cu;
    SET_GPR_U32(ctx, 31, 0x210774u);
    ctx->pc = 0x210770u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210774u; }
        else if (ctx->pc != 0x210774u) { ctx->pc = 0x210774u; }
    }
    if (ctx->pc != 0x210774u) { return; }
    ctx->pc = 0x210774u;
label_210774:
    // 0x210774: 0x8e821cb8
    ctx->pc = 0x210774u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 7352)));
label_210778:
    // 0x210778: 0x1440000f
label_21077c:
    if (ctx->pc == 0x21077Cu) {
        ctx->pc = 0x21077Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)15948 << 16));
        ctx->pc = 0x210780u;
        goto label_210780;
    }
    ctx->pc = 0x210778u;
    {
        const bool branch_taken_0x210778 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21077Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)15948 << 16));
        if (branch_taken_0x210778) {
            ctx->pc = 0x2107B8u;
            goto label_2107b8;
        }
    }
    ctx->pc = 0x210780u;
label_210780:
    // 0x210780: 0x3c023e4c
    ctx->pc = 0x210780u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15948 << 16));
label_210784:
    // 0x210784: 0x3442cccd
    ctx->pc = 0x210784u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 52429));
label_210788:
    // 0x210788: 0x44826800
    ctx->pc = 0x210788u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
label_21078c:
    // 0x21078c: 0x3c023f80
    ctx->pc = 0x21078cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
label_210790:
    // 0x210790: 0x44826000
    ctx->pc = 0x210790u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
label_210794:
    // 0x210794: 0x0
    ctx->pc = 0x210794u;
    // NOP
label_210798:
    // 0x210798: 0x46006b86
    ctx->pc = 0x210798u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
label_21079c:
    // 0x21079c: 0x460063c6
    ctx->pc = 0x21079cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
label_2107a0:
    // 0x2107a0: 0x46006c06
    ctx->pc = 0x2107a0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[13]);
label_2107a4:
    // 0x2107a4: 0xc06aac8
label_2107a8:
    if (ctx->pc == 0x2107A8u) {
        ctx->pc = 0x2107A8u;
        ctx->f[17] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x2107ACu;
        goto label_2107ac;
    }
    ctx->pc = 0x2107A4u;
    SET_GPR_U32(ctx, 31, 0x2107ACu);
    ctx->pc = 0x2107A8u;
    ctx->f[17] = FPU_MOV_S(ctx->f[13]);
    ctx->pc = 0x1AAB20u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutScaleFadeColor_0x1aab20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2107ACu; }
        else if (ctx->pc != 0x2107ACu) { ctx->pc = 0x2107ACu; }
    }
    if (ctx->pc != 0x2107ACu) { return; }
    ctx->pc = 0x2107ACu;
label_2107ac:
    // 0x2107ac: 0x1000000d
label_2107b0:
    if (ctx->pc == 0x2107B0u) {
        ctx->pc = 0x2107B0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x2107B4u;
        goto label_2107b4;
    }
    ctx->pc = 0x2107ACu;
    {
        const bool branch_taken_0x2107ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2107B0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        if (branch_taken_0x2107ac) {
            ctx->pc = 0x2107E4u;
            goto label_2107e4;
        }
    }
    ctx->pc = 0x2107B4u;
label_2107b4:
    // 0x2107b4: 0x3c023e4c
    ctx->pc = 0x2107b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15948 << 16));
label_2107b8:
    // 0x2107b8: 0x3442cccd
    ctx->pc = 0x2107b8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 52429));
label_2107bc:
    // 0x2107bc: 0x44826000
    ctx->pc = 0x2107bcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
label_2107c0:
    // 0x2107c0: 0x3c023f80
    ctx->pc = 0x2107c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
label_2107c4:
    // 0x2107c4: 0x44827000
    ctx->pc = 0x2107c4u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
label_2107c8:
    // 0x2107c8: 0x46006346
    ctx->pc = 0x2107c8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2107cc:
    // 0x2107cc: 0x46007446
    ctx->pc = 0x2107ccu;
    ctx->f[17] = FPU_MOV_S(ctx->f[14]);
label_2107d0:
    // 0x2107d0: 0x460063c6
    ctx->pc = 0x2107d0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
label_2107d4:
    // 0x2107d4: 0xc06aac8
label_2107d8:
    if (ctx->pc == 0x2107D8u) {
        ctx->pc = 0x2107D8u;
        ctx->f[16] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2107DCu;
        goto label_2107dc;
    }
    ctx->pc = 0x2107D4u;
    SET_GPR_U32(ctx, 31, 0x2107DCu);
    ctx->pc = 0x2107D8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1AAB20u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutScaleFadeColor_0x1aab20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2107DCu; }
        else if (ctx->pc != 0x2107DCu) { ctx->pc = 0x2107DCu; }
    }
    if (ctx->pc != 0x2107DCu) { return; }
    ctx->pc = 0x2107DCu;
label_2107dc:
    // 0x2107dc: 0x0
    ctx->pc = 0x2107dcu;
    // NOP
label_2107e0:
    // 0x2107e0: 0x8e040028
    ctx->pc = 0x2107e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2107e4:
    // 0x2107e4: 0x24030006
    ctx->pc = 0x2107e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
label_2107e8:
    // 0x2107e8: 0x3c02002c
    ctx->pc = 0x2107e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
label_2107ec:
    // 0x2107ec: 0x24420640
    ctx->pc = 0x2107ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1600));
label_2107f0:
    // 0x2107f0: 0x83001a
    ctx->pc = 0x2107f0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_2107f4:
    // 0x2107f4: 0x0
    ctx->pc = 0x2107f4u;
    // NOP
label_2107f8:
    // 0x2107f8: 0x0
    ctx->pc = 0x2107f8u;
    // NOP
label_2107fc:
    // 0x2107fc: 0x1810
    ctx->pc = 0x2107fcu;
    SET_GPR_U32(ctx, 3, ctx->hi);
label_210800:
    // 0x210800: 0x31880
    ctx->pc = 0x210800u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_210804:
    // 0x210804: 0x431021
    ctx->pc = 0x210804u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_210808:
    // 0x210808: 0x8c440000
    ctx->pc = 0x210808u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21080c:
    // 0x21080c: 0xc085400
label_210810:
    if (ctx->pc == 0x210810u) {
        ctx->pc = 0x210810u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x210814u;
        goto label_210814;
    }
    ctx->pc = 0x21080Cu;
    SET_GPR_U32(ctx, 31, 0x210814u);
    ctx->pc = 0x210810u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x215000u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatCE__Fii_0x215000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210814u; }
        else if (ctx->pc != 0x210814u) { ctx->pc = 0x210814u; }
    }
    if (ctx->pc != 0x210814u) { return; }
    ctx->pc = 0x210814u;
label_210814:
    // 0x210814: 0xc06ab18
label_210818:
    if (ctx->pc == 0x210818u) {
        ctx->pc = 0x21081Cu;
        goto label_21081c;
    }
    ctx->pc = 0x210814u;
    SET_GPR_U32(ctx, 31, 0x21081Cu);
    ctx->pc = 0x1AAC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutPopFadeColor_0x1aac60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21081Cu; }
        else if (ctx->pc != 0x21081Cu) { ctx->pc = 0x21081Cu; }
    }
    if (ctx->pc != 0x21081Cu) { return; }
    ctx->pc = 0x21081Cu;
label_21081c:
    // 0x21081c: 0x10000048
label_210820:
    if (ctx->pc == 0x210820u) {
        ctx->pc = 0x210824u;
        goto label_210824;
    }
    ctx->pc = 0x21081Cu;
    {
        const bool branch_taken_0x21081c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x21081c) {
            ctx->pc = 0x210940u;
            goto label_210940;
        }
    }
    ctx->pc = 0x210824u;
label_210824:
    // 0x210824: 0xc06aafc
label_210828:
    if (ctx->pc == 0x210828u) {
        ctx->pc = 0x21082Cu;
        goto label_21082c;
    }
    ctx->pc = 0x210824u;
    SET_GPR_U32(ctx, 31, 0x21082Cu);
    ctx->pc = 0x1AABF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutPushFadeColor_0x1aabf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21082Cu; }
        else if (ctx->pc != 0x21082Cu) { ctx->pc = 0x21082Cu; }
    }
    if (ctx->pc != 0x21082Cu) { return; }
    ctx->pc = 0x21082Cu;
label_21082c:
    // 0x21082c: 0x8e030030
    ctx->pc = 0x21082cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_210830:
    // 0x210830: 0x24020003
    ctx->pc = 0x210830u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_210834:
    // 0x210834: 0x1062002b
label_210838:
    if (ctx->pc == 0x210838u) {
        ctx->pc = 0x210838u;
        SET_GPR_U32(ctx, 2, ((uint32_t)15660 << 16));
        ctx->pc = 0x21083Cu;
        goto label_21083c;
    }
    ctx->pc = 0x210834u;
    {
        const bool branch_taken_0x210834 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x210838u;
        SET_GPR_U32(ctx, 2, ((uint32_t)15660 << 16));
        if (branch_taken_0x210834) {
            ctx->pc = 0x2108E4u;
            goto label_2108e4;
        }
    }
    ctx->pc = 0x21083Cu;
label_21083c:
    // 0x21083c: 0x24020002
    ctx->pc = 0x21083cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_210840:
    // 0x210840: 0x1062001f
label_210844:
    if (ctx->pc == 0x210844u) {
        ctx->pc = 0x210844u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
        ctx->pc = 0x210848u;
        goto label_210848;
    }
    ctx->pc = 0x210840u;
    {
        const bool branch_taken_0x210840 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x210844u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
        if (branch_taken_0x210840) {
            ctx->pc = 0x2108C0u;
            goto label_2108c0;
        }
    }
    ctx->pc = 0x210848u;
label_210848:
    // 0x210848: 0x24020001
    ctx->pc = 0x210848u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_21084c:
    // 0x21084c: 0x10620011
label_210850:
    if (ctx->pc == 0x210850u) {
        ctx->pc = 0x210850u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
        ctx->pc = 0x210854u;
        goto label_210854;
    }
    ctx->pc = 0x21084Cu;
    {
        const bool branch_taken_0x21084c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x210850u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
        if (branch_taken_0x21084c) {
            ctx->pc = 0x210894u;
            goto label_210894;
        }
    }
    ctx->pc = 0x210854u;
label_210854:
    // 0x210854: 0x10600004
label_210858:
    if (ctx->pc == 0x210858u) {
        ctx->pc = 0x210858u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
        ctx->pc = 0x21085Cu;
        goto label_21085c;
    }
    ctx->pc = 0x210854u;
    {
        const bool branch_taken_0x210854 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x210858u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
        if (branch_taken_0x210854) {
            ctx->pc = 0x210868u;
            goto label_210868;
        }
    }
    ctx->pc = 0x21085Cu;
label_21085c:
    // 0x21085c: 0x10000020
label_210860:
    if (ctx->pc == 0x210860u) {
        ctx->pc = 0x210864u;
        goto label_210864;
    }
    ctx->pc = 0x21085Cu;
    {
        const bool branch_taken_0x21085c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x21085c) {
            ctx->pc = 0x2108E0u;
            goto label_2108e0;
        }
    }
    ctx->pc = 0x210864u;
label_210864:
    // 0x210864: 0x3c023f80
    ctx->pc = 0x210864u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
label_210868:
    // 0x210868: 0x44826800
    ctx->pc = 0x210868u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
label_21086c:
    // 0x21086c: 0x44806000
    ctx->pc = 0x21086cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_210870:
    // 0x210870: 0x0
    ctx->pc = 0x210870u;
    // NOP
label_210874:
    // 0x210874: 0x46006b86
    ctx->pc = 0x210874u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
label_210878:
    // 0x210878: 0x460063c6
    ctx->pc = 0x210878u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
label_21087c:
    // 0x21087c: 0x46006c06
    ctx->pc = 0x21087cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[13]);
label_210880:
    // 0x210880: 0xc06aac8
label_210884:
    if (ctx->pc == 0x210884u) {
        ctx->pc = 0x210884u;
        ctx->f[17] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x210888u;
        goto label_210888;
    }
    ctx->pc = 0x210880u;
    SET_GPR_U32(ctx, 31, 0x210888u);
    ctx->pc = 0x210884u;
    ctx->f[17] = FPU_MOV_S(ctx->f[13]);
    ctx->pc = 0x1AAB20u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutScaleFadeColor_0x1aab20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210888u; }
        else if (ctx->pc != 0x210888u) { ctx->pc = 0x210888u; }
    }
    if (ctx->pc != 0x210888u) { return; }
    ctx->pc = 0x210888u;
label_210888:
    // 0x210888: 0x10000015
label_21088c:
    if (ctx->pc == 0x21088Cu) {
        ctx->pc = 0x210890u;
        goto label_210890;
    }
    ctx->pc = 0x210888u;
    {
        const bool branch_taken_0x210888 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x210888) {
            ctx->pc = 0x2108E0u;
            goto label_2108e0;
        }
    }
    ctx->pc = 0x210890u;
label_210890:
    // 0x210890: 0x3c023f80
    ctx->pc = 0x210890u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
label_210894:
    // 0x210894: 0x44826000
    ctx->pc = 0x210894u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
label_210898:
    // 0x210898: 0x44806800
    ctx->pc = 0x210898u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
label_21089c:
    // 0x21089c: 0x0
    ctx->pc = 0x21089cu;
    // NOP
label_2108a0:
    // 0x2108a0: 0x46006386
    ctx->pc = 0x2108a0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_2108a4:
    // 0x2108a4: 0x460063c6
    ctx->pc = 0x2108a4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
label_2108a8:
    // 0x2108a8: 0x46006c06
    ctx->pc = 0x2108a8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[13]);
label_2108ac:
    // 0x2108ac: 0xc06aac8
label_2108b0:
    if (ctx->pc == 0x2108B0u) {
        ctx->pc = 0x2108B0u;
        ctx->f[17] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2108B4u;
        goto label_2108b4;
    }
    ctx->pc = 0x2108ACu;
    SET_GPR_U32(ctx, 31, 0x2108B4u);
    ctx->pc = 0x2108B0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1AAB20u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutScaleFadeColor_0x1aab20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2108B4u; }
        else if (ctx->pc != 0x2108B4u) { ctx->pc = 0x2108B4u; }
    }
    if (ctx->pc != 0x2108B4u) { return; }
    ctx->pc = 0x2108B4u;
label_2108b4:
    // 0x2108b4: 0x1000000a
label_2108b8:
    if (ctx->pc == 0x2108B8u) {
        ctx->pc = 0x2108BCu;
        goto label_2108bc;
    }
    ctx->pc = 0x2108B4u;
    {
        const bool branch_taken_0x2108b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2108b4) {
            ctx->pc = 0x2108E0u;
            goto label_2108e0;
        }
    }
    ctx->pc = 0x2108BCu;
label_2108bc:
    // 0x2108bc: 0x3c023f80
    ctx->pc = 0x2108bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
label_2108c0:
    // 0x2108c0: 0x44826000
    ctx->pc = 0x2108c0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
label_2108c4:
    // 0x2108c4: 0x44807000
    ctx->pc = 0x2108c4u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 0);
label_2108c8:
    // 0x2108c8: 0x46006346
    ctx->pc = 0x2108c8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2108cc:
    // 0x2108cc: 0x460063c6
    ctx->pc = 0x2108ccu;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
label_2108d0:
    // 0x2108d0: 0x46006406
    ctx->pc = 0x2108d0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[12]);
label_2108d4:
    // 0x2108d4: 0xc06aac8
label_2108d8:
    if (ctx->pc == 0x2108D8u) {
        ctx->pc = 0x2108D8u;
        ctx->f[17] = FPU_MOV_S(ctx->f[14]);
        ctx->pc = 0x2108DCu;
        goto label_2108dc;
    }
    ctx->pc = 0x2108D4u;
    SET_GPR_U32(ctx, 31, 0x2108DCu);
    ctx->pc = 0x2108D8u;
    ctx->f[17] = FPU_MOV_S(ctx->f[14]);
    ctx->pc = 0x1AAB20u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutScaleFadeColor_0x1aab20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2108DCu; }
        else if (ctx->pc != 0x2108DCu) { ctx->pc = 0x2108DCu; }
    }
    if (ctx->pc != 0x2108DCu) { return; }
    ctx->pc = 0x2108DCu;
label_2108dc:
    // 0x2108dc: 0x0
    ctx->pc = 0x2108dcu;
    // NOP
label_2108e0:
    // 0x2108e0: 0x3c023d2c
    ctx->pc = 0x2108e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15660 << 16));
label_2108e4:
    // 0x2108e4: 0x34420831
    ctx->pc = 0x2108e4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2097));
label_2108e8:
    // 0x2108e8: 0x44826000
    ctx->pc = 0x2108e8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
label_2108ec:
    // 0x2108ec: 0x0
    ctx->pc = 0x2108ecu;
    // NOP
label_2108f0:
    // 0x2108f0: 0x46006346
    ctx->pc = 0x2108f0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2108f4:
    // 0x2108f4: 0xc06c1b3
label_2108f8:
    if (ctx->pc == 0x2108F8u) {
        ctx->pc = 0x2108F8u;
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2108FCu;
        goto label_2108fc;
    }
    ctx->pc = 0x2108F4u;
    SET_GPR_U32(ctx, 31, 0x2108FCu);
    ctx->pc = 0x2108F8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2108FCu; }
        else if (ctx->pc != 0x2108FCu) { ctx->pc = 0x2108FCu; }
    }
    if (ctx->pc != 0x2108FCu) { return; }
    ctx->pc = 0x2108FCu;
label_2108fc:
    // 0x2108fc: 0x3c023d2c
    ctx->pc = 0x2108fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)15660 << 16));
label_210900:
    // 0x210900: 0x34420831
    ctx->pc = 0x210900u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2097));
label_210904:
    // 0x210904: 0x44826000
    ctx->pc = 0x210904u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
label_210908:
    // 0x210908: 0xc06b218
label_21090c:
    if (ctx->pc == 0x21090Cu) {
        ctx->pc = 0x210910u;
        goto label_210910;
    }
    ctx->pc = 0x210908u;
    SET_GPR_U32(ctx, 31, 0x210910u);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210910u; }
        else if (ctx->pc != 0x210910u) { ctx->pc = 0x210910u; }
    }
    if (ctx->pc != 0x210910u) { return; }
    ctx->pc = 0x210910u;
label_210910:
    // 0x210910: 0x8e841cb8
    ctx->pc = 0x210910u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 7352)));
label_210914:
    // 0x210914: 0x27828480
    ctx->pc = 0x210914u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 28), 4294935680));
label_210918:
    // 0x210918: 0x8e030028
    ctx->pc = 0x210918u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_21091c:
    // 0x21091c: 0x24050001
    ctx->pc = 0x21091cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_210920:
    // 0x210920: 0x42080
    ctx->pc = 0x210920u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
label_210924:
    // 0x210924: 0x441021
    ctx->pc = 0x210924u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_210928:
    // 0x210928: 0x8c420000
    ctx->pc = 0x210928u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21092c:
    // 0x21092c: 0xc085400
label_210930:
    if (ctx->pc == 0x210930u) {
        ctx->pc = 0x210930u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x210934u;
        goto label_210934;
    }
    ctx->pc = 0x21092Cu;
    SET_GPR_U32(ctx, 31, 0x210934u);
    ctx->pc = 0x210930u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x215000u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatCE__Fii_0x215000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210934u; }
        else if (ctx->pc != 0x210934u) { ctx->pc = 0x210934u; }
    }
    if (ctx->pc != 0x210934u) { return; }
    ctx->pc = 0x210934u;
label_210934:
    // 0x210934: 0xc06ab18
label_210938:
    if (ctx->pc == 0x210938u) {
        ctx->pc = 0x21093Cu;
        goto label_21093c;
    }
    ctx->pc = 0x210934u;
    SET_GPR_U32(ctx, 31, 0x21093Cu);
    ctx->pc = 0x1AAC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutPopFadeColor_0x1aac60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21093Cu; }
        else if (ctx->pc != 0x21093Cu) { ctx->pc = 0x21093Cu; }
    }
    if (ctx->pc != 0x21093Cu) { return; }
    ctx->pc = 0x21093Cu;
label_21093c:
    // 0x21093c: 0x0
    ctx->pc = 0x21093cu;
    // NOP
label_210940:
    // 0x210940: 0x4bff6b7e
    ctx->pc = 0x210940u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_210944:
    // 0x210944: 0x4bfe6b7e
    ctx->pc = 0x210944u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_210948:
    // 0x210948: 0x4bfd6b7e
    ctx->pc = 0x210948u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_21094c:
    // 0x21094c: 0x4bfc6b7e
    ctx->pc = 0x21094cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_210950:
    // 0x210950: 0x8e831cbc
    ctx->pc = 0x210950u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 7356)));
label_210954:
    // 0x210954: 0x731821
    ctx->pc = 0x210954u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_210958:
    // 0x210958: 0x8c6400f8
    ctx->pc = 0x210958u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 248)));
label_21095c:
    // 0x21095c: 0x28810032
    ctx->pc = 0x21095cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 50));
label_210960:
    // 0x210960: 0x1020000f
label_210964:
    if (ctx->pc == 0x210964u) {
        ctx->pc = 0x210964u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 208));
        ctx->pc = 0x210968u;
        goto label_210968;
    }
    ctx->pc = 0x210960u;
    {
        const bool branch_taken_0x210960 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x210964u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 208));
        if (branch_taken_0x210960) {
            ctx->pc = 0x2109A0u;
            goto label_2109a0;
        }
    }
    ctx->pc = 0x210968u;
label_210968:
    // 0x210968: 0x24030001
    ctx->pc = 0x210968u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_21096c:
    // 0x21096c: 0x14830008
label_210970:
    if (ctx->pc == 0x210970u) {
        ctx->pc = 0x210974u;
        goto label_210974;
    }
    ctx->pc = 0x21096Cu;
    {
        const bool branch_taken_0x21096c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x21096c) {
            ctx->pc = 0x210990u;
            goto label_210990;
        }
    }
    ctx->pc = 0x210974u;
label_210974:
    // 0x210974: 0x8e841cb8
    ctx->pc = 0x210974u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 7352)));
label_210978:
    // 0x210978: 0x27838c90
    ctx->pc = 0x210978u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 28), 4294937744));
label_21097c:
    // 0x21097c: 0x42080
    ctx->pc = 0x21097cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
label_210980:
    // 0x210980: 0x641821
    ctx->pc = 0x210980u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_210984:
    // 0x210984: 0x8c630000
    ctx->pc = 0x210984u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_210988:
    // 0x210988: 0x14600005
label_21098c:
    if (ctx->pc == 0x21098Cu) {
        ctx->pc = 0x210990u;
        goto label_210990;
    }
    ctx->pc = 0x210988u;
    {
        const bool branch_taken_0x210988 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x210988) {
            ctx->pc = 0x2109A0u;
            goto label_2109a0;
        }
    }
    ctx->pc = 0x210990u;
label_210990:
    // 0x210990: 0x97838bf4
    ctx->pc = 0x210990u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937588)));
label_210994:
    // 0x210994: 0x10600004
label_210998:
    if (ctx->pc == 0x210998u) {
        ctx->pc = 0x21099Cu;
        goto label_21099c;
    }
    ctx->pc = 0x210994u;
    {
        const bool branch_taken_0x210994 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x210994) {
            ctx->pc = 0x2109A8u;
            goto label_2109a8;
        }
    }
    ctx->pc = 0x21099Cu;
label_21099c:
    // 0x21099c: 0x0
    ctx->pc = 0x21099cu;
    // NOP
label_2109a0:
    // 0x2109a0: 0xa6200000
    ctx->pc = 0x2109a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
label_2109a4:
    // 0x2109a4: 0x0
    ctx->pc = 0x2109a4u;
    // NOP
label_2109a8:
    // 0x2109a8: 0x86230000
    ctx->pc = 0x2109a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_2109ac:
    // 0x2109ac: 0x1060004a
label_2109b0:
    if (ctx->pc == 0x2109B0u) {
        ctx->pc = 0x2109B4u;
        goto label_2109b4;
    }
    ctx->pc = 0x2109ACu;
    {
        const bool branch_taken_0x2109ac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2109ac) {
            ctx->pc = 0x210AD8u;
            goto label_210ad8;
        }
    }
    ctx->pc = 0x2109B4u;
label_2109b4:
    // 0x2109b4: 0x8e240028
    ctx->pc = 0x2109b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2109b8:
    // 0x2109b8: 0x24030001
    ctx->pc = 0x2109b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_2109bc:
    // 0x2109bc: 0x14830013
label_2109c0:
    if (ctx->pc == 0x2109C0u) {
        ctx->pc = 0x2109C4u;
        goto label_2109c4;
    }
    ctx->pc = 0x2109BCu;
    {
        const bool branch_taken_0x2109bc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x2109bc) {
            ctx->pc = 0x210A0Cu;
            goto label_210a0c;
        }
    }
    ctx->pc = 0x2109C4u;
label_2109c4:
    // 0x2109c4: 0xc621001c
    ctx->pc = 0x2109c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2109c8:
    // 0x2109c8: 0x3c0341f0
    ctx->pc = 0x2109c8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16880 << 16));
label_2109cc:
    // 0x2109cc: 0x44831000
    ctx->pc = 0x2109ccu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
label_2109d0:
    // 0x2109d0: 0xc6200004
    ctx->pc = 0x2109d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2109d4:
    // 0x2109d4: 0x46011042
    ctx->pc = 0x2109d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2109d8:
    // 0x2109d8: 0x46010000
    ctx->pc = 0x2109d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2109dc:
    // 0x2109dc: 0xe6200004
    ctx->pc = 0x2109dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2109e0:
    // 0x2109e0: 0xc6210020
    ctx->pc = 0x2109e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2109e4:
    // 0x2109e4: 0xc6200008
    ctx->pc = 0x2109e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2109e8:
    // 0x2109e8: 0x46011042
    ctx->pc = 0x2109e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2109ec:
    // 0x2109ec: 0x46010000
    ctx->pc = 0x2109ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2109f0:
    // 0x2109f0: 0xe6200008
    ctx->pc = 0x2109f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2109f4:
    // 0x2109f4: 0xc6210024
    ctx->pc = 0x2109f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2109f8:
    // 0x2109f8: 0xc620000c
    ctx->pc = 0x2109f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2109fc:
    // 0x2109fc: 0x46011042
    ctx->pc = 0x2109fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_210a00:
    // 0x210a00: 0x46010000
    ctx->pc = 0x210a00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_210a04:
    // 0x210a04: 0x1000000e
label_210a08:
    if (ctx->pc == 0x210A08u) {
        ctx->pc = 0x210A08u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->pc = 0x210A0Cu;
        goto label_210a0c;
    }
    ctx->pc = 0x210A04u;
    {
        const bool branch_taken_0x210a04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x210A08u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        if (branch_taken_0x210a04) {
            ctx->pc = 0x210A40u;
            goto label_210a40;
        }
    }
    ctx->pc = 0x210A0Cu;
label_210a0c:
    // 0x210a0c: 0xc621001c
    ctx->pc = 0x210a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_210a10:
    // 0x210a10: 0xc6200004
    ctx->pc = 0x210a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_210a14:
    // 0x210a14: 0x46010000
    ctx->pc = 0x210a14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_210a18:
    // 0x210a18: 0xe6200004
    ctx->pc = 0x210a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_210a1c:
    // 0x210a1c: 0xc6210020
    ctx->pc = 0x210a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_210a20:
    // 0x210a20: 0xc6200008
    ctx->pc = 0x210a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_210a24:
    // 0x210a24: 0x46010000
    ctx->pc = 0x210a24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_210a28:
    // 0x210a28: 0xe6200008
    ctx->pc = 0x210a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_210a2c:
    // 0x210a2c: 0xc6210024
    ctx->pc = 0x210a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_210a30:
    // 0x210a30: 0xc620000c
    ctx->pc = 0x210a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_210a34:
    // 0x210a34: 0x46010000
    ctx->pc = 0x210a34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_210a38:
    // 0x210a38: 0xe620000c
    ctx->pc = 0x210a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_210a3c:
    // 0x210a3c: 0x0
    ctx->pc = 0x210a3cu;
    // NOP
label_210a40:
    // 0x210a40: 0x8e230018
    ctx->pc = 0x210a40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_210a44:
    // 0x210a44: 0x24631000
    ctx->pc = 0x210a44u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4096));
label_210a48:
    // 0x210a48: 0xae230018
    ctx->pc = 0x210a48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_210a4c:
    // 0x210a4c: 0x8e230028
    ctx->pc = 0x210a4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_210a50:
    // 0x210a50: 0x18600021
label_210a54:
    if (ctx->pc == 0x210A54u) {
        ctx->pc = 0x210A58u;
        goto label_210a58;
    }
    ctx->pc = 0x210A50u;
    {
        const bool branch_taken_0x210a50 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x210a50) {
            ctx->pc = 0x210AD8u;
            goto label_210ad8;
        }
    }
    ctx->pc = 0x210A58u;
label_210a58:
    // 0x210a58: 0x4bede37d
    ctx->pc = 0x210a58u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_210a5c:
    // 0x210a5c: 0x4bedeb7d
    ctx->pc = 0x210a5cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_210a60:
    // 0x210a60: 0x4bedf37d
    ctx->pc = 0x210a60u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_210a64:
    // 0x210a64: 0x4bedfb7d
    ctx->pc = 0x210a64u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
label_210a68:
    // 0x210a68: 0xc62d0008
    ctx->pc = 0x210a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_210a6c:
    // 0x210a6c: 0xc62e000c
    ctx->pc = 0x210a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_210a70:
    // 0x210a70: 0xc06c202
label_210a74:
    if (ctx->pc == 0x210A74u) {
        ctx->pc = 0x210A74u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x210A78u;
        goto label_210a78;
    }
    ctx->pc = 0x210A70u;
    SET_GPR_U32(ctx, 31, 0x210A78u);
    ctx->pc = 0x210A74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210A78u; }
        else if (ctx->pc != 0x210A78u) { ctx->pc = 0x210A78u; }
    }
    if (ctx->pc != 0x210A78u) { return; }
    ctx->pc = 0x210A78u;
label_210a78:
    // 0x210a78: 0xc06c213
label_210a7c:
    if (ctx->pc == 0x210A7Cu) {
        ctx->pc = 0x210A80u;
        goto label_210a80;
    }
    ctx->pc = 0x210A78u;
    SET_GPR_U32(ctx, 31, 0x210A80u);
    ctx->pc = 0x1B084Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B084C_0x1b084c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210A80u; }
        else if (ctx->pc != 0x210A80u) { ctx->pc = 0x210A80u; }
    }
    if (ctx->pc != 0x210A80u) { return; }
    ctx->pc = 0x210A80u;
label_210a80:
    // 0x210a80: 0xc06c157
label_210a84:
    if (ctx->pc == 0x210A84u) {
        ctx->pc = 0x210A84u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->pc = 0x210A88u;
        goto label_210a88;
    }
    ctx->pc = 0x210A80u;
    SET_GPR_U32(ctx, 31, 0x210A88u);
    ctx->pc = 0x210A84u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210A88u; }
        else if (ctx->pc != 0x210A88u) { ctx->pc = 0x210A88u; }
    }
    if (ctx->pc != 0x210A88u) { return; }
    ctx->pc = 0x210A88u;
label_210a88:
    // 0x210a88: 0x3c0241a0
    ctx->pc = 0x210a88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16800 << 16));
label_210a8c:
    // 0x210a8c: 0x44826000
    ctx->pc = 0x210a8cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
label_210a90:
    // 0x210a90: 0x0
    ctx->pc = 0x210a90u;
    // NOP
label_210a94:
    // 0x210a94: 0x46006346
    ctx->pc = 0x210a94u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_210a98:
    // 0x210a98: 0xc06c1b3
label_210a9c:
    if (ctx->pc == 0x210A9Cu) {
        ctx->pc = 0x210A9Cu;
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x210AA0u;
        goto label_210aa0;
    }
    ctx->pc = 0x210A98u;
    SET_GPR_U32(ctx, 31, 0x210AA0u);
    ctx->pc = 0x210A9Cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210AA0u; }
        else if (ctx->pc != 0x210AA0u) { ctx->pc = 0x210AA0u; }
    }
    if (ctx->pc != 0x210AA0u) { return; }
    ctx->pc = 0x210AA0u;
label_210aa0:
    // 0x210aa0: 0x3c0241a0
    ctx->pc = 0x210aa0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16800 << 16));
label_210aa4:
    // 0x210aa4: 0x44826000
    ctx->pc = 0x210aa4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
label_210aa8:
    // 0x210aa8: 0xc06b218
label_210aac:
    if (ctx->pc == 0x210AACu) {
        ctx->pc = 0x210AB0u;
        goto label_210ab0;
    }
    ctx->pc = 0x210AA8u;
    SET_GPR_U32(ctx, 31, 0x210AB0u);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210AB0u; }
        else if (ctx->pc != 0x210AB0u) { ctx->pc = 0x210AB0u; }
    }
    if (ctx->pc != 0x210AB0u) { return; }
    ctx->pc = 0x210AB0u;
label_210ab0:
    // 0x210ab0: 0x8e831cb8
    ctx->pc = 0x210ab0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 7352)));
label_210ab4:
    // 0x210ab4: 0x27828488
    ctx->pc = 0x210ab4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 28), 4294935688));
label_210ab8:
    // 0x210ab8: 0x31880
    ctx->pc = 0x210ab8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_210abc:
    // 0x210abc: 0x431021
    ctx->pc = 0x210abcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_210ac0:
    // 0x210ac0: 0xc0853ac
label_210ac4:
    if (ctx->pc == 0x210AC4u) {
        ctx->pc = 0x210AC4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x210AC8u;
        goto label_210ac8;
    }
    ctx->pc = 0x210AC0u;
    SET_GPR_U32(ctx, 31, 0x210AC8u);
    ctx->pc = 0x210AC4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210AC8u; }
        else if (ctx->pc != 0x210AC8u) { ctx->pc = 0x210AC8u; }
    }
    if (ctx->pc != 0x210AC8u) { return; }
    ctx->pc = 0x210AC8u;
label_210ac8:
    // 0x210ac8: 0x4bff6b7e
    ctx->pc = 0x210ac8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_210acc:
    // 0x210acc: 0x4bfe6b7e
    ctx->pc = 0x210accu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_210ad0:
    // 0x210ad0: 0x4bfd6b7e
    ctx->pc = 0x210ad0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_210ad4:
    // 0x210ad4: 0x4bfc6b7e
    ctx->pc = 0x210ad4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_210ad8:
    // 0x210ad8: 0x8e040028
    ctx->pc = 0x210ad8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_210adc:
    // 0x210adc: 0x26520001
    ctx->pc = 0x210adcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_210ae0:
    // 0x210ae0: 0x2a430006
    ctx->pc = 0x210ae0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 18), 6));
label_210ae4:
    // 0x210ae4: 0x26730034
    ctx->pc = 0x210ae4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 52));
label_210ae8:
    // 0x210ae8: 0x24840001
    ctx->pc = 0x210ae8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_210aec:
    // 0x210aec: 0xae040028
    ctx->pc = 0x210aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
label_210af0:
    // 0x210af0: 0x8e240028
    ctx->pc = 0x210af0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_210af4:
    // 0x210af4: 0x24840001
    ctx->pc = 0x210af4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_210af8:
    // 0x210af8: 0x1460fdf4
label_210afc:
    if (ctx->pc == 0x210AFCu) {
        ctx->pc = 0x210AFCu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 4));
        ctx->pc = 0x210B00u;
        goto label_210b00;
    }
    ctx->pc = 0x210AF8u;
    {
        const bool branch_taken_0x210af8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x210AFCu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 4));
        if (branch_taken_0x210af8) {
            ctx->pc = 0x2102CCu;
            goto label_2102cc;
        }
    }
    ctx->pc = 0x210B00u;
label_210b00:
    // 0x210b00: 0x7bbf0060
    ctx->pc = 0x210b00u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_210b04:
    // 0x210b04: 0x7bb40050
    ctx->pc = 0x210b04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_210b08:
    // 0x210b08: 0x7bb30040
    ctx->pc = 0x210b08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_210b0c:
    // 0x210b0c: 0x7bb20030
    ctx->pc = 0x210b0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_210b10:
    // 0x210b10: 0x7bb10020
    ctx->pc = 0x210b10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_210b14:
    // 0x210b14: 0x7bb00010
    ctx->pc = 0x210b14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_210b18:
    // 0x210b18: 0xc7b40000
    ctx->pc = 0x210b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_210b1c:
    // 0x210b1c: 0x3e00008
label_210b20:
    if (ctx->pc == 0x210B20u) {
        ctx->pc = 0x210B20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x210B24u;
        goto label_fallthrough_0x210b1c;
    }
    ctx->pc = 0x210B1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210B20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2102A0u: goto label_2102a0;
            case 0x2102A4u: goto label_2102a4;
            case 0x2102A8u: goto label_2102a8;
            case 0x2102ACu: goto label_2102ac;
            case 0x2102B0u: goto label_2102b0;
            case 0x2102B4u: goto label_2102b4;
            case 0x2102B8u: goto label_2102b8;
            case 0x2102BCu: goto label_2102bc;
            case 0x2102C0u: goto label_2102c0;
            case 0x2102C4u: goto label_2102c4;
            case 0x2102C8u: goto label_2102c8;
            case 0x2102CCu: goto label_2102cc;
            case 0x2102D0u: goto label_2102d0;
            case 0x2102D4u: goto label_2102d4;
            case 0x2102D8u: goto label_2102d8;
            case 0x2102DCu: goto label_2102dc;
            case 0x2102E0u: goto label_2102e0;
            case 0x2102E4u: goto label_2102e4;
            case 0x2102E8u: goto label_2102e8;
            case 0x2102ECu: goto label_2102ec;
            case 0x2102F0u: goto label_2102f0;
            case 0x2102F4u: goto label_2102f4;
            case 0x2102F8u: goto label_2102f8;
            case 0x2102FCu: goto label_2102fc;
            case 0x210300u: goto label_210300;
            case 0x210304u: goto label_210304;
            case 0x210308u: goto label_210308;
            case 0x21030Cu: goto label_21030c;
            case 0x210310u: goto label_210310;
            case 0x210314u: goto label_210314;
            case 0x210318u: goto label_210318;
            case 0x21031Cu: goto label_21031c;
            case 0x210320u: goto label_210320;
            case 0x210324u: goto label_210324;
            case 0x210328u: goto label_210328;
            case 0x21032Cu: goto label_21032c;
            case 0x210330u: goto label_210330;
            case 0x210334u: goto label_210334;
            case 0x210338u: goto label_210338;
            case 0x21033Cu: goto label_21033c;
            case 0x210340u: goto label_210340;
            case 0x210344u: goto label_210344;
            case 0x210348u: goto label_210348;
            case 0x21034Cu: goto label_21034c;
            case 0x210350u: goto label_210350;
            case 0x210354u: goto label_210354;
            case 0x210358u: goto label_210358;
            case 0x21035Cu: goto label_21035c;
            case 0x210360u: goto label_210360;
            case 0x210364u: goto label_210364;
            case 0x210368u: goto label_210368;
            case 0x21036Cu: goto label_21036c;
            case 0x210370u: goto label_210370;
            case 0x210374u: goto label_210374;
            case 0x210378u: goto label_210378;
            case 0x21037Cu: goto label_21037c;
            case 0x210380u: goto label_210380;
            case 0x210384u: goto label_210384;
            case 0x210388u: goto label_210388;
            case 0x21038Cu: goto label_21038c;
            case 0x210390u: goto label_210390;
            case 0x210394u: goto label_210394;
            case 0x210398u: goto label_210398;
            case 0x21039Cu: goto label_21039c;
            case 0x2103A0u: goto label_2103a0;
            case 0x2103A4u: goto label_2103a4;
            case 0x2103A8u: goto label_2103a8;
            case 0x2103ACu: goto label_2103ac;
            case 0x2103B0u: goto label_2103b0;
            case 0x2103B4u: goto label_2103b4;
            case 0x2103B8u: goto label_2103b8;
            case 0x2103BCu: goto label_2103bc;
            case 0x2103C0u: goto label_2103c0;
            case 0x2103C4u: goto label_2103c4;
            case 0x2103C8u: goto label_2103c8;
            case 0x2103CCu: goto label_2103cc;
            case 0x2103D0u: goto label_2103d0;
            case 0x2103D4u: goto label_2103d4;
            case 0x2103D8u: goto label_2103d8;
            case 0x2103DCu: goto label_2103dc;
            case 0x2103E0u: goto label_2103e0;
            case 0x2103E4u: goto label_2103e4;
            case 0x2103E8u: goto label_2103e8;
            case 0x2103ECu: goto label_2103ec;
            case 0x2103F0u: goto label_2103f0;
            case 0x2103F4u: goto label_2103f4;
            case 0x2103F8u: goto label_2103f8;
            case 0x2103FCu: goto label_2103fc;
            case 0x210400u: goto label_210400;
            case 0x210404u: goto label_210404;
            case 0x210408u: goto label_210408;
            case 0x21040Cu: goto label_21040c;
            case 0x210410u: goto label_210410;
            case 0x210414u: goto label_210414;
            case 0x210418u: goto label_210418;
            case 0x21041Cu: goto label_21041c;
            case 0x210420u: goto label_210420;
            case 0x210424u: goto label_210424;
            case 0x210428u: goto label_210428;
            case 0x21042Cu: goto label_21042c;
            case 0x210430u: goto label_210430;
            case 0x210434u: goto label_210434;
            case 0x210438u: goto label_210438;
            case 0x21043Cu: goto label_21043c;
            case 0x210440u: goto label_210440;
            case 0x210444u: goto label_210444;
            case 0x210448u: goto label_210448;
            case 0x21044Cu: goto label_21044c;
            case 0x210450u: goto label_210450;
            case 0x210454u: goto label_210454;
            case 0x210458u: goto label_210458;
            case 0x21045Cu: goto label_21045c;
            case 0x210460u: goto label_210460;
            case 0x210464u: goto label_210464;
            case 0x210468u: goto label_210468;
            case 0x21046Cu: goto label_21046c;
            case 0x210470u: goto label_210470;
            case 0x210474u: goto label_210474;
            case 0x210478u: goto label_210478;
            case 0x21047Cu: goto label_21047c;
            case 0x210480u: goto label_210480;
            case 0x210484u: goto label_210484;
            case 0x210488u: goto label_210488;
            case 0x21048Cu: goto label_21048c;
            case 0x210490u: goto label_210490;
            case 0x210494u: goto label_210494;
            case 0x210498u: goto label_210498;
            case 0x21049Cu: goto label_21049c;
            case 0x2104A0u: goto label_2104a0;
            case 0x2104A4u: goto label_2104a4;
            case 0x2104A8u: goto label_2104a8;
            case 0x2104ACu: goto label_2104ac;
            case 0x2104B0u: goto label_2104b0;
            case 0x2104B4u: goto label_2104b4;
            case 0x2104B8u: goto label_2104b8;
            case 0x2104BCu: goto label_2104bc;
            case 0x2104C0u: goto label_2104c0;
            case 0x2104C4u: goto label_2104c4;
            case 0x2104C8u: goto label_2104c8;
            case 0x2104CCu: goto label_2104cc;
            case 0x2104D0u: goto label_2104d0;
            case 0x2104D4u: goto label_2104d4;
            case 0x2104D8u: goto label_2104d8;
            case 0x2104DCu: goto label_2104dc;
            case 0x2104E0u: goto label_2104e0;
            case 0x2104E4u: goto label_2104e4;
            case 0x2104E8u: goto label_2104e8;
            case 0x2104ECu: goto label_2104ec;
            case 0x2104F0u: goto label_2104f0;
            case 0x2104F4u: goto label_2104f4;
            case 0x2104F8u: goto label_2104f8;
            case 0x2104FCu: goto label_2104fc;
            case 0x210500u: goto label_210500;
            case 0x210504u: goto label_210504;
            case 0x210508u: goto label_210508;
            case 0x21050Cu: goto label_21050c;
            case 0x210510u: goto label_210510;
            case 0x210514u: goto label_210514;
            case 0x210518u: goto label_210518;
            case 0x21051Cu: goto label_21051c;
            case 0x210520u: goto label_210520;
            case 0x210524u: goto label_210524;
            case 0x210528u: goto label_210528;
            case 0x21052Cu: goto label_21052c;
            case 0x210530u: goto label_210530;
            case 0x210534u: goto label_210534;
            case 0x210538u: goto label_210538;
            case 0x21053Cu: goto label_21053c;
            case 0x210540u: goto label_210540;
            case 0x210544u: goto label_210544;
            case 0x210548u: goto label_210548;
            case 0x21054Cu: goto label_21054c;
            case 0x210550u: goto label_210550;
            case 0x210554u: goto label_210554;
            case 0x210558u: goto label_210558;
            case 0x21055Cu: goto label_21055c;
            case 0x210560u: goto label_210560;
            case 0x210564u: goto label_210564;
            case 0x210568u: goto label_210568;
            case 0x21056Cu: goto label_21056c;
            case 0x210570u: goto label_210570;
            case 0x210574u: goto label_210574;
            case 0x210578u: goto label_210578;
            case 0x21057Cu: goto label_21057c;
            case 0x210580u: goto label_210580;
            case 0x210584u: goto label_210584;
            case 0x210588u: goto label_210588;
            case 0x21058Cu: goto label_21058c;
            case 0x210590u: goto label_210590;
            case 0x210594u: goto label_210594;
            case 0x210598u: goto label_210598;
            case 0x21059Cu: goto label_21059c;
            case 0x2105A0u: goto label_2105a0;
            case 0x2105A4u: goto label_2105a4;
            case 0x2105A8u: goto label_2105a8;
            case 0x2105ACu: goto label_2105ac;
            case 0x2105B0u: goto label_2105b0;
            case 0x2105B4u: goto label_2105b4;
            case 0x2105B8u: goto label_2105b8;
            case 0x2105BCu: goto label_2105bc;
            case 0x2105C0u: goto label_2105c0;
            case 0x2105C4u: goto label_2105c4;
            case 0x2105C8u: goto label_2105c8;
            case 0x2105CCu: goto label_2105cc;
            case 0x2105D0u: goto label_2105d0;
            case 0x2105D4u: goto label_2105d4;
            case 0x2105D8u: goto label_2105d8;
            case 0x2105DCu: goto label_2105dc;
            case 0x2105E0u: goto label_2105e0;
            case 0x2105E4u: goto label_2105e4;
            case 0x2105E8u: goto label_2105e8;
            case 0x2105ECu: goto label_2105ec;
            case 0x2105F0u: goto label_2105f0;
            case 0x2105F4u: goto label_2105f4;
            case 0x2105F8u: goto label_2105f8;
            case 0x2105FCu: goto label_2105fc;
            case 0x210600u: goto label_210600;
            case 0x210604u: goto label_210604;
            case 0x210608u: goto label_210608;
            case 0x21060Cu: goto label_21060c;
            case 0x210610u: goto label_210610;
            case 0x210614u: goto label_210614;
            case 0x210618u: goto label_210618;
            case 0x21061Cu: goto label_21061c;
            case 0x210620u: goto label_210620;
            case 0x210624u: goto label_210624;
            case 0x210628u: goto label_210628;
            case 0x21062Cu: goto label_21062c;
            case 0x210630u: goto label_210630;
            case 0x210634u: goto label_210634;
            case 0x210638u: goto label_210638;
            case 0x21063Cu: goto label_21063c;
            case 0x210640u: goto label_210640;
            case 0x210644u: goto label_210644;
            case 0x210648u: goto label_210648;
            case 0x21064Cu: goto label_21064c;
            case 0x210650u: goto label_210650;
            case 0x210654u: goto label_210654;
            case 0x210658u: goto label_210658;
            case 0x21065Cu: goto label_21065c;
            case 0x210660u: goto label_210660;
            case 0x210664u: goto label_210664;
            case 0x210668u: goto label_210668;
            case 0x21066Cu: goto label_21066c;
            case 0x210670u: goto label_210670;
            case 0x210674u: goto label_210674;
            case 0x210678u: goto label_210678;
            case 0x21067Cu: goto label_21067c;
            case 0x210680u: goto label_210680;
            case 0x210684u: goto label_210684;
            case 0x210688u: goto label_210688;
            case 0x21068Cu: goto label_21068c;
            case 0x210690u: goto label_210690;
            case 0x210694u: goto label_210694;
            case 0x210698u: goto label_210698;
            case 0x21069Cu: goto label_21069c;
            case 0x2106A0u: goto label_2106a0;
            case 0x2106A4u: goto label_2106a4;
            case 0x2106A8u: goto label_2106a8;
            case 0x2106ACu: goto label_2106ac;
            case 0x2106B0u: goto label_2106b0;
            case 0x2106B4u: goto label_2106b4;
            case 0x2106B8u: goto label_2106b8;
            case 0x2106BCu: goto label_2106bc;
            case 0x2106C0u: goto label_2106c0;
            case 0x2106C4u: goto label_2106c4;
            case 0x2106C8u: goto label_2106c8;
            case 0x2106CCu: goto label_2106cc;
            case 0x2106D0u: goto label_2106d0;
            case 0x2106D4u: goto label_2106d4;
            case 0x2106D8u: goto label_2106d8;
            case 0x2106DCu: goto label_2106dc;
            case 0x2106E0u: goto label_2106e0;
            case 0x2106E4u: goto label_2106e4;
            case 0x2106E8u: goto label_2106e8;
            case 0x2106ECu: goto label_2106ec;
            case 0x2106F0u: goto label_2106f0;
            case 0x2106F4u: goto label_2106f4;
            case 0x2106F8u: goto label_2106f8;
            case 0x2106FCu: goto label_2106fc;
            case 0x210700u: goto label_210700;
            case 0x210704u: goto label_210704;
            case 0x210708u: goto label_210708;
            case 0x21070Cu: goto label_21070c;
            case 0x210710u: goto label_210710;
            case 0x210714u: goto label_210714;
            case 0x210718u: goto label_210718;
            case 0x21071Cu: goto label_21071c;
            case 0x210720u: goto label_210720;
            case 0x210724u: goto label_210724;
            case 0x210728u: goto label_210728;
            case 0x21072Cu: goto label_21072c;
            case 0x210730u: goto label_210730;
            case 0x210734u: goto label_210734;
            case 0x210738u: goto label_210738;
            case 0x21073Cu: goto label_21073c;
            case 0x210740u: goto label_210740;
            case 0x210744u: goto label_210744;
            case 0x210748u: goto label_210748;
            case 0x21074Cu: goto label_21074c;
            case 0x210750u: goto label_210750;
            case 0x210754u: goto label_210754;
            case 0x210758u: goto label_210758;
            case 0x21075Cu: goto label_21075c;
            case 0x210760u: goto label_210760;
            case 0x210764u: goto label_210764;
            case 0x210768u: goto label_210768;
            case 0x21076Cu: goto label_21076c;
            case 0x210770u: goto label_210770;
            case 0x210774u: goto label_210774;
            case 0x210778u: goto label_210778;
            case 0x21077Cu: goto label_21077c;
            case 0x210780u: goto label_210780;
            case 0x210784u: goto label_210784;
            case 0x210788u: goto label_210788;
            case 0x21078Cu: goto label_21078c;
            case 0x210790u: goto label_210790;
            case 0x210794u: goto label_210794;
            case 0x210798u: goto label_210798;
            case 0x21079Cu: goto label_21079c;
            case 0x2107A0u: goto label_2107a0;
            case 0x2107A4u: goto label_2107a4;
            case 0x2107A8u: goto label_2107a8;
            case 0x2107ACu: goto label_2107ac;
            case 0x2107B0u: goto label_2107b0;
            case 0x2107B4u: goto label_2107b4;
            case 0x2107B8u: goto label_2107b8;
            case 0x2107BCu: goto label_2107bc;
            case 0x2107C0u: goto label_2107c0;
            case 0x2107C4u: goto label_2107c4;
            case 0x2107C8u: goto label_2107c8;
            case 0x2107CCu: goto label_2107cc;
            case 0x2107D0u: goto label_2107d0;
            case 0x2107D4u: goto label_2107d4;
            case 0x2107D8u: goto label_2107d8;
            case 0x2107DCu: goto label_2107dc;
            case 0x2107E0u: goto label_2107e0;
            case 0x2107E4u: goto label_2107e4;
            case 0x2107E8u: goto label_2107e8;
            case 0x2107ECu: goto label_2107ec;
            case 0x2107F0u: goto label_2107f0;
            case 0x2107F4u: goto label_2107f4;
            case 0x2107F8u: goto label_2107f8;
            case 0x2107FCu: goto label_2107fc;
            case 0x210800u: goto label_210800;
            case 0x210804u: goto label_210804;
            case 0x210808u: goto label_210808;
            case 0x21080Cu: goto label_21080c;
            case 0x210810u: goto label_210810;
            case 0x210814u: goto label_210814;
            case 0x210818u: goto label_210818;
            case 0x21081Cu: goto label_21081c;
            case 0x210820u: goto label_210820;
            case 0x210824u: goto label_210824;
            case 0x210828u: goto label_210828;
            case 0x21082Cu: goto label_21082c;
            case 0x210830u: goto label_210830;
            case 0x210834u: goto label_210834;
            case 0x210838u: goto label_210838;
            case 0x21083Cu: goto label_21083c;
            case 0x210840u: goto label_210840;
            case 0x210844u: goto label_210844;
            case 0x210848u: goto label_210848;
            case 0x21084Cu: goto label_21084c;
            case 0x210850u: goto label_210850;
            case 0x210854u: goto label_210854;
            case 0x210858u: goto label_210858;
            case 0x21085Cu: goto label_21085c;
            case 0x210860u: goto label_210860;
            case 0x210864u: goto label_210864;
            case 0x210868u: goto label_210868;
            case 0x21086Cu: goto label_21086c;
            case 0x210870u: goto label_210870;
            case 0x210874u: goto label_210874;
            case 0x210878u: goto label_210878;
            case 0x21087Cu: goto label_21087c;
            case 0x210880u: goto label_210880;
            case 0x210884u: goto label_210884;
            case 0x210888u: goto label_210888;
            case 0x21088Cu: goto label_21088c;
            case 0x210890u: goto label_210890;
            case 0x210894u: goto label_210894;
            case 0x210898u: goto label_210898;
            case 0x21089Cu: goto label_21089c;
            case 0x2108A0u: goto label_2108a0;
            case 0x2108A4u: goto label_2108a4;
            case 0x2108A8u: goto label_2108a8;
            case 0x2108ACu: goto label_2108ac;
            case 0x2108B0u: goto label_2108b0;
            case 0x2108B4u: goto label_2108b4;
            case 0x2108B8u: goto label_2108b8;
            case 0x2108BCu: goto label_2108bc;
            case 0x2108C0u: goto label_2108c0;
            case 0x2108C4u: goto label_2108c4;
            case 0x2108C8u: goto label_2108c8;
            case 0x2108CCu: goto label_2108cc;
            case 0x2108D0u: goto label_2108d0;
            case 0x2108D4u: goto label_2108d4;
            case 0x2108D8u: goto label_2108d8;
            case 0x2108DCu: goto label_2108dc;
            case 0x2108E0u: goto label_2108e0;
            case 0x2108E4u: goto label_2108e4;
            case 0x2108E8u: goto label_2108e8;
            case 0x2108ECu: goto label_2108ec;
            case 0x2108F0u: goto label_2108f0;
            case 0x2108F4u: goto label_2108f4;
            case 0x2108F8u: goto label_2108f8;
            case 0x2108FCu: goto label_2108fc;
            case 0x210900u: goto label_210900;
            case 0x210904u: goto label_210904;
            case 0x210908u: goto label_210908;
            case 0x21090Cu: goto label_21090c;
            case 0x210910u: goto label_210910;
            case 0x210914u: goto label_210914;
            case 0x210918u: goto label_210918;
            case 0x21091Cu: goto label_21091c;
            case 0x210920u: goto label_210920;
            case 0x210924u: goto label_210924;
            case 0x210928u: goto label_210928;
            case 0x21092Cu: goto label_21092c;
            case 0x210930u: goto label_210930;
            case 0x210934u: goto label_210934;
            case 0x210938u: goto label_210938;
            case 0x21093Cu: goto label_21093c;
            case 0x210940u: goto label_210940;
            case 0x210944u: goto label_210944;
            case 0x210948u: goto label_210948;
            case 0x21094Cu: goto label_21094c;
            case 0x210950u: goto label_210950;
            case 0x210954u: goto label_210954;
            case 0x210958u: goto label_210958;
            case 0x21095Cu: goto label_21095c;
            case 0x210960u: goto label_210960;
            case 0x210964u: goto label_210964;
            case 0x210968u: goto label_210968;
            case 0x21096Cu: goto label_21096c;
            case 0x210970u: goto label_210970;
            case 0x210974u: goto label_210974;
            case 0x210978u: goto label_210978;
            case 0x21097Cu: goto label_21097c;
            case 0x210980u: goto label_210980;
            case 0x210984u: goto label_210984;
            case 0x210988u: goto label_210988;
            case 0x21098Cu: goto label_21098c;
            case 0x210990u: goto label_210990;
            case 0x210994u: goto label_210994;
            case 0x210998u: goto label_210998;
            case 0x21099Cu: goto label_21099c;
            case 0x2109A0u: goto label_2109a0;
            case 0x2109A4u: goto label_2109a4;
            case 0x2109A8u: goto label_2109a8;
            case 0x2109ACu: goto label_2109ac;
            case 0x2109B0u: goto label_2109b0;
            case 0x2109B4u: goto label_2109b4;
            case 0x2109B8u: goto label_2109b8;
            case 0x2109BCu: goto label_2109bc;
            case 0x2109C0u: goto label_2109c0;
            case 0x2109C4u: goto label_2109c4;
            case 0x2109C8u: goto label_2109c8;
            case 0x2109CCu: goto label_2109cc;
            case 0x2109D0u: goto label_2109d0;
            case 0x2109D4u: goto label_2109d4;
            case 0x2109D8u: goto label_2109d8;
            case 0x2109DCu: goto label_2109dc;
            case 0x2109E0u: goto label_2109e0;
            case 0x2109E4u: goto label_2109e4;
            case 0x2109E8u: goto label_2109e8;
            case 0x2109ECu: goto label_2109ec;
            case 0x2109F0u: goto label_2109f0;
            case 0x2109F4u: goto label_2109f4;
            case 0x2109F8u: goto label_2109f8;
            case 0x2109FCu: goto label_2109fc;
            case 0x210A00u: goto label_210a00;
            case 0x210A04u: goto label_210a04;
            case 0x210A08u: goto label_210a08;
            case 0x210A0Cu: goto label_210a0c;
            case 0x210A10u: goto label_210a10;
            case 0x210A14u: goto label_210a14;
            case 0x210A18u: goto label_210a18;
            case 0x210A1Cu: goto label_210a1c;
            case 0x210A20u: goto label_210a20;
            case 0x210A24u: goto label_210a24;
            case 0x210A28u: goto label_210a28;
            case 0x210A2Cu: goto label_210a2c;
            case 0x210A30u: goto label_210a30;
            case 0x210A34u: goto label_210a34;
            case 0x210A38u: goto label_210a38;
            case 0x210A3Cu: goto label_210a3c;
            case 0x210A40u: goto label_210a40;
            case 0x210A44u: goto label_210a44;
            case 0x210A48u: goto label_210a48;
            case 0x210A4Cu: goto label_210a4c;
            case 0x210A50u: goto label_210a50;
            case 0x210A54u: goto label_210a54;
            case 0x210A58u: goto label_210a58;
            case 0x210A5Cu: goto label_210a5c;
            case 0x210A60u: goto label_210a60;
            case 0x210A64u: goto label_210a64;
            case 0x210A68u: goto label_210a68;
            case 0x210A6Cu: goto label_210a6c;
            case 0x210A70u: goto label_210a70;
            case 0x210A74u: goto label_210a74;
            case 0x210A78u: goto label_210a78;
            case 0x210A7Cu: goto label_210a7c;
            case 0x210A80u: goto label_210a80;
            case 0x210A84u: goto label_210a84;
            case 0x210A88u: goto label_210a88;
            case 0x210A8Cu: goto label_210a8c;
            case 0x210A90u: goto label_210a90;
            case 0x210A94u: goto label_210a94;
            case 0x210A98u: goto label_210a98;
            case 0x210A9Cu: goto label_210a9c;
            case 0x210AA0u: goto label_210aa0;
            case 0x210AA4u: goto label_210aa4;
            case 0x210AA8u: goto label_210aa8;
            case 0x210AACu: goto label_210aac;
            case 0x210AB0u: goto label_210ab0;
            case 0x210AB4u: goto label_210ab4;
            case 0x210AB8u: goto label_210ab8;
            case 0x210ABCu: goto label_210abc;
            case 0x210AC0u: goto label_210ac0;
            case 0x210AC4u: goto label_210ac4;
            case 0x210AC8u: goto label_210ac8;
            case 0x210ACCu: goto label_210acc;
            case 0x210AD0u: goto label_210ad0;
            case 0x210AD4u: goto label_210ad4;
            case 0x210AD8u: goto label_210ad8;
            case 0x210ADCu: goto label_210adc;
            case 0x210AE0u: goto label_210ae0;
            case 0x210AE4u: goto label_210ae4;
            case 0x210AE8u: goto label_210ae8;
            case 0x210AECu: goto label_210aec;
            case 0x210AF0u: goto label_210af0;
            case 0x210AF4u: goto label_210af4;
            case 0x210AF8u: goto label_210af8;
            case 0x210AFCu: goto label_210afc;
            case 0x210B00u: goto label_210b00;
            case 0x210B04u: goto label_210b04;
            case 0x210B08u: goto label_210b08;
            case 0x210B0Cu: goto label_210b0c;
            case 0x210B10u: goto label_210b10;
            case 0x210B14u: goto label_210b14;
            case 0x210B18u: goto label_210b18;
            case 0x210B1Cu: goto label_210b1c;
            case 0x210B20u: goto label_210b20;
            default: break;
        }
        return;
    }
label_fallthrough_0x210b1c:
    ctx->pc = 0x210B24u;
}

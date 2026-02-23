#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: putMat_rcv_onlyput__12BodyMgrClassFP7_BODYPT
// Address: 0x1fb5d0 - 0x1fb6e8
void putMat_rcv_onlyput__12BodyMgrClassFP7_BODYPT_0x1fb5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("putMat_rcv_onlyput__12BodyMgrClassFP7_BODYPT");


    ctx->pc = 0x1fb5d0u;

label_1fb5d0:
    // 0x1fb5d0: 0x27bdffa0
    ctx->pc = 0x1fb5d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
label_1fb5d4:
    // 0x1fb5d4: 0x7fbf0050
    ctx->pc = 0x1fb5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
label_1fb5d8:
    // 0x1fb5d8: 0x7fb40040
    ctx->pc = 0x1fb5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1fb5dc:
    // 0x1fb5dc: 0x7fb30030
    ctx->pc = 0x1fb5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1fb5e0:
    // 0x1fb5e0: 0x7fb20020
    ctx->pc = 0x1fb5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1fb5e4:
    // 0x1fb5e4: 0x7fb10010
    ctx->pc = 0x1fb5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fb5e8:
    // 0x1fb5e8: 0x7fb00000
    ctx->pc = 0x1fb5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fb5ec:
    // 0x1fb5ec: 0x8c820000
    ctx->pc = 0x1fb5ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fb5f0:
    // 0x1fb5f0: 0x70808e28
    ctx->pc = 0x1fb5f0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_1fb5f4:
    // 0x1fb5f4: 0x70a08628
    ctx->pc = 0x1fb5f4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1fb5f8:
    // 0x1fb5f8: 0x84a40020
    ctx->pc = 0x1fb5f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
label_1fb5fc:
    // 0x1fb5fc: 0x41900
    ctx->pc = 0x1fb5fcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
label_1fb600:
    // 0x1fb600: 0x641823
    ctx->pc = 0x1fb600u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1fb604:
    // 0x1fb604: 0x31900
    ctx->pc = 0x1fb604u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
label_1fb608:
    // 0x1fb608: 0x439021
    ctx->pc = 0x1fb608u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fb60c:
    // 0x1fb60c: 0x4bede37d
    ctx->pc = 0x1fb60cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_1fb610:
    // 0x1fb610: 0x4bedeb7d
    ctx->pc = 0x1fb610u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_1fb614:
    // 0x1fb614: 0x4bedf37d
    ctx->pc = 0x1fb614u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_1fb618:
    // 0x1fb618: 0x4bedfb7d
    ctx->pc = 0x1fb618u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
label_1fb61c:
    // 0x1fb61c: 0xc4ad0008
    ctx->pc = 0x1fb61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1fb620:
    // 0x1fb620: 0xc4ae000c
    ctx->pc = 0x1fb620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1fb624:
    // 0x1fb624: 0xc06c202
label_1fb628:
    if (ctx->pc == 0x1FB628u) {
        ctx->pc = 0x1FB628u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1FB62Cu;
        goto label_1fb62c;
    }
    ctx->pc = 0x1FB624u;
    SET_GPR_U32(ctx, 31, 0x1FB62Cu);
    ctx->pc = 0x1FB628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB62Cu; }
        else if (ctx->pc != 0x1FB62Cu) { ctx->pc = 0x1FB62Cu; }
    }
    if (ctx->pc != 0x1FB62Cu) { return; }
    ctx->pc = 0x1FB62Cu;
label_1fb62c:
    // 0x1fb62c: 0x8e530004
    ctx->pc = 0x1fb62cu;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1fb630:
    // 0x1fb630: 0x8e540008
    ctx->pc = 0x1fb630u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1fb634:
    // 0x1fb634: 0xc06c157
label_1fb638:
    if (ctx->pc == 0x1FB638u) {
        ctx->pc = 0x1FB638u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->pc = 0x1FB63Cu;
        goto label_1fb63c;
    }
    ctx->pc = 0x1FB634u;
    SET_GPR_U32(ctx, 31, 0x1FB63Cu);
    ctx->pc = 0x1FB638u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB63Cu; }
        else if (ctx->pc != 0x1FB63Cu) { ctx->pc = 0x1FB63Cu; }
    }
    if (ctx->pc != 0x1FB63Cu) { return; }
    ctx->pc = 0x1FB63Cu;
label_1fb63c:
    // 0x1fb63c: 0xc06c0fb
label_1fb640:
    if (ctx->pc == 0x1FB640u) {
        ctx->pc = 0x1FB640u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1FB644u;
        goto label_1fb644;
    }
    ctx->pc = 0x1FB63Cu;
    SET_GPR_U32(ctx, 31, 0x1FB644u);
    ctx->pc = 0x1FB640u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB644u; }
        else if (ctx->pc != 0x1FB644u) { ctx->pc = 0x1FB644u; }
    }
    if (ctx->pc != 0x1FB644u) { return; }
    ctx->pc = 0x1FB644u;
label_1fb644:
    // 0x1fb644: 0xc06c09f
label_1fb648:
    if (ctx->pc == 0x1FB648u) {
        ctx->pc = 0x1FB648u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1FB64Cu;
        goto label_1fb64c;
    }
    ctx->pc = 0x1FB644u;
    SET_GPR_U32(ctx, 31, 0x1FB64Cu);
    ctx->pc = 0x1FB648u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB64Cu; }
        else if (ctx->pc != 0x1FB64Cu) { ctx->pc = 0x1FB64Cu; }
    }
    if (ctx->pc != 0x1FB64Cu) { return; }
    ctx->pc = 0x1FB64Cu;
label_1fb64c:
    // 0x1fb64c: 0xc06bf55
label_1fb650:
    if (ctx->pc == 0x1FB650u) {
        ctx->pc = 0x1FB650u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 48));
        ctx->pc = 0x1FB654u;
        goto label_1fb654;
    }
    ctx->pc = 0x1FB64Cu;
    SET_GPR_U32(ctx, 31, 0x1FB654u);
    ctx->pc = 0x1FB650u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 48));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB654u; }
        else if (ctx->pc != 0x1FB654u) { ctx->pc = 0x1FB654u; }
    }
    if (ctx->pc != 0x1FB654u) { return; }
    ctx->pc = 0x1FB654u;
label_1fb654:
    // 0x1fb654: 0x8e430000
    ctx->pc = 0x1fb654u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1fb658:
    // 0x1fb658: 0x1060000b
label_1fb65c:
    if (ctx->pc == 0x1FB65Cu) {
        ctx->pc = 0x1FB65Cu;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1FB660u;
        goto label_1fb660;
    }
    ctx->pc = 0x1FB658u;
    {
        const bool branch_taken_0x1fb658 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FB65Cu;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1fb658) {
            ctx->pc = 0x1FB688u;
            goto label_1fb688;
        }
    }
    ctx->pc = 0x1FB660u;
label_1fb660:
    // 0x1fb660: 0x8e240004
    ctx->pc = 0x1fb660u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1fb664:
    // 0x1fb664: 0x8c831c9c
    ctx->pc = 0x1fb664u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 7324)));
label_1fb668:
    // 0x1fb668: 0x30630001
    ctx->pc = 0x1fb668u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
label_1fb66c:
    // 0x1fb66c: 0x10600005
label_1fb670:
    if (ctx->pc == 0x1FB670u) {
        ctx->pc = 0x1FB674u;
        goto label_1fb674;
    }
    ctx->pc = 0x1FB66Cu;
    {
        const bool branch_taken_0x1fb66c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fb66c) {
            ctx->pc = 0x1FB684u;
            goto label_1fb684;
        }
    }
    ctx->pc = 0x1FB674u;
label_1fb674:
    // 0x1fb674: 0x8c991ca4
    ctx->pc = 0x1fb674u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 4), 7332)));
label_1fb678:
    // 0x1fb678: 0x8f390008
    ctx->pc = 0x1fb678u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1fb67c:
    // 0x1fb67c: 0x320f809
label_1fb680:
    if (ctx->pc == 0x1FB680u) {
        ctx->pc = 0x1FB680u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1FB684u;
        goto label_1fb684;
    }
    ctx->pc = 0x1FB67Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FB684u);
        ctx->pc = 0x1FB680u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FB5D0u: goto label_1fb5d0;
            case 0x1FB5D4u: goto label_1fb5d4;
            case 0x1FB5D8u: goto label_1fb5d8;
            case 0x1FB5DCu: goto label_1fb5dc;
            case 0x1FB5E0u: goto label_1fb5e0;
            case 0x1FB5E4u: goto label_1fb5e4;
            case 0x1FB5E8u: goto label_1fb5e8;
            case 0x1FB5ECu: goto label_1fb5ec;
            case 0x1FB5F0u: goto label_1fb5f0;
            case 0x1FB5F4u: goto label_1fb5f4;
            case 0x1FB5F8u: goto label_1fb5f8;
            case 0x1FB5FCu: goto label_1fb5fc;
            case 0x1FB600u: goto label_1fb600;
            case 0x1FB604u: goto label_1fb604;
            case 0x1FB608u: goto label_1fb608;
            case 0x1FB60Cu: goto label_1fb60c;
            case 0x1FB610u: goto label_1fb610;
            case 0x1FB614u: goto label_1fb614;
            case 0x1FB618u: goto label_1fb618;
            case 0x1FB61Cu: goto label_1fb61c;
            case 0x1FB620u: goto label_1fb620;
            case 0x1FB624u: goto label_1fb624;
            case 0x1FB628u: goto label_1fb628;
            case 0x1FB62Cu: goto label_1fb62c;
            case 0x1FB630u: goto label_1fb630;
            case 0x1FB634u: goto label_1fb634;
            case 0x1FB638u: goto label_1fb638;
            case 0x1FB63Cu: goto label_1fb63c;
            case 0x1FB640u: goto label_1fb640;
            case 0x1FB644u: goto label_1fb644;
            case 0x1FB648u: goto label_1fb648;
            case 0x1FB64Cu: goto label_1fb64c;
            case 0x1FB650u: goto label_1fb650;
            case 0x1FB654u: goto label_1fb654;
            case 0x1FB658u: goto label_1fb658;
            case 0x1FB65Cu: goto label_1fb65c;
            case 0x1FB660u: goto label_1fb660;
            case 0x1FB664u: goto label_1fb664;
            case 0x1FB668u: goto label_1fb668;
            case 0x1FB66Cu: goto label_1fb66c;
            case 0x1FB670u: goto label_1fb670;
            case 0x1FB674u: goto label_1fb674;
            case 0x1FB678u: goto label_1fb678;
            case 0x1FB67Cu: goto label_1fb67c;
            case 0x1FB680u: goto label_1fb680;
            case 0x1FB684u: goto label_1fb684;
            case 0x1FB688u: goto label_1fb688;
            case 0x1FB68Cu: goto label_1fb68c;
            case 0x1FB690u: goto label_1fb690;
            case 0x1FB694u: goto label_1fb694;
            case 0x1FB698u: goto label_1fb698;
            case 0x1FB69Cu: goto label_1fb69c;
            case 0x1FB6A0u: goto label_1fb6a0;
            case 0x1FB6A4u: goto label_1fb6a4;
            case 0x1FB6A8u: goto label_1fb6a8;
            case 0x1FB6ACu: goto label_1fb6ac;
            case 0x1FB6B0u: goto label_1fb6b0;
            case 0x1FB6B4u: goto label_1fb6b4;
            case 0x1FB6B8u: goto label_1fb6b8;
            case 0x1FB6BCu: goto label_1fb6bc;
            case 0x1FB6C0u: goto label_1fb6c0;
            case 0x1FB6C4u: goto label_1fb6c4;
            case 0x1FB6C8u: goto label_1fb6c8;
            case 0x1FB6CCu: goto label_1fb6cc;
            case 0x1FB6D0u: goto label_1fb6d0;
            case 0x1FB6D4u: goto label_1fb6d4;
            case 0x1FB6D8u: goto label_1fb6d8;
            case 0x1FB6DCu: goto label_1fb6dc;
            case 0x1FB6E0u: goto label_1fb6e0;
            case 0x1FB6E4u: goto label_1fb6e4;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FB684u; }
            if (ctx->pc != 0x1FB684u) { return; }
        }
    }
    ctx->pc = 0x1FB684u;
label_1fb684:
    // 0x1fb684: 0x70009628
    ctx->pc = 0x1fb684u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1fb688:
    // 0x1fb688: 0x10000007
label_1fb68c:
    if (ctx->pc == 0x1FB68Cu) {
        ctx->pc = 0x1FB68Cu;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1FB690u;
        goto label_1fb690;
    }
    ctx->pc = 0x1FB688u;
    {
        const bool branch_taken_0x1fb688 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FB68Cu;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1fb688) {
            ctx->pc = 0x1FB6A8u;
            goto label_1fb6a8;
        }
    }
    ctx->pc = 0x1FB690u;
label_1fb690:
    // 0x1fb690: 0x8e650024
    ctx->pc = 0x1fb690u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1fb694:
    // 0x1fb694: 0xc07ed74
label_1fb698:
    if (ctx->pc == 0x1FB698u) {
        ctx->pc = 0x1FB698u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1FB69Cu;
        goto label_1fb69c;
    }
    ctx->pc = 0x1FB694u;
    SET_GPR_U32(ctx, 31, 0x1FB69Cu);
    ctx->pc = 0x1FB698u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FB5D0u;
    goto label_1fb5d0;
    ctx->pc = 0x1FB69Cu;
label_1fb69c:
    // 0x1fb69c: 0x26730004
    ctx->pc = 0x1fb69cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4));
label_1fb6a0:
    // 0x1fb6a0: 0x26520001
    ctx->pc = 0x1fb6a0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_1fb6a4:
    // 0x1fb6a4: 0x0
    ctx->pc = 0x1fb6a4u;
    // NOP
label_1fb6a8:
    // 0x1fb6a8: 0x86030022
    ctx->pc = 0x1fb6a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
label_1fb6ac:
    // 0x1fb6ac: 0x243182a
    ctx->pc = 0x1fb6acu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 3)));
label_1fb6b0:
    // 0x1fb6b0: 0x1460fff7
label_1fb6b4:
    if (ctx->pc == 0x1FB6B4u) {
        ctx->pc = 0x1FB6B8u;
        goto label_1fb6b8;
    }
    ctx->pc = 0x1FB6B0u;
    {
        const bool branch_taken_0x1fb6b0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1fb6b0) {
            ctx->pc = 0x1FB690u;
            goto label_1fb690;
        }
    }
    ctx->pc = 0x1FB6B8u;
label_1fb6b8:
    // 0x1fb6b8: 0x4bff6b7e
    ctx->pc = 0x1fb6b8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_1fb6bc:
    // 0x1fb6bc: 0x4bfe6b7e
    ctx->pc = 0x1fb6bcu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_1fb6c0:
    // 0x1fb6c0: 0x4bfd6b7e
    ctx->pc = 0x1fb6c0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_1fb6c4:
    // 0x1fb6c4: 0x4bfc6b7e
    ctx->pc = 0x1fb6c4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_1fb6c8:
    // 0x1fb6c8: 0x7bbf0050
    ctx->pc = 0x1fb6c8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb6cc:
    // 0x1fb6cc: 0x7bb40040
    ctx->pc = 0x1fb6ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fb6d0:
    // 0x1fb6d0: 0x7bb30030
    ctx->pc = 0x1fb6d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fb6d4:
    // 0x1fb6d4: 0x7bb20020
    ctx->pc = 0x1fb6d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fb6d8:
    // 0x1fb6d8: 0x7bb10010
    ctx->pc = 0x1fb6d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fb6dc:
    // 0x1fb6dc: 0x7bb00000
    ctx->pc = 0x1fb6dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fb6e0:
    // 0x1fb6e0: 0x3e00008
label_1fb6e4:
    if (ctx->pc == 0x1FB6E4u) {
        ctx->pc = 0x1FB6E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1FB6E8u;
        goto label_fallthrough_0x1fb6e0;
    }
    ctx->pc = 0x1FB6E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB6E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FB5D0u: goto label_1fb5d0;
            case 0x1FB5D4u: goto label_1fb5d4;
            case 0x1FB5D8u: goto label_1fb5d8;
            case 0x1FB5DCu: goto label_1fb5dc;
            case 0x1FB5E0u: goto label_1fb5e0;
            case 0x1FB5E4u: goto label_1fb5e4;
            case 0x1FB5E8u: goto label_1fb5e8;
            case 0x1FB5ECu: goto label_1fb5ec;
            case 0x1FB5F0u: goto label_1fb5f0;
            case 0x1FB5F4u: goto label_1fb5f4;
            case 0x1FB5F8u: goto label_1fb5f8;
            case 0x1FB5FCu: goto label_1fb5fc;
            case 0x1FB600u: goto label_1fb600;
            case 0x1FB604u: goto label_1fb604;
            case 0x1FB608u: goto label_1fb608;
            case 0x1FB60Cu: goto label_1fb60c;
            case 0x1FB610u: goto label_1fb610;
            case 0x1FB614u: goto label_1fb614;
            case 0x1FB618u: goto label_1fb618;
            case 0x1FB61Cu: goto label_1fb61c;
            case 0x1FB620u: goto label_1fb620;
            case 0x1FB624u: goto label_1fb624;
            case 0x1FB628u: goto label_1fb628;
            case 0x1FB62Cu: goto label_1fb62c;
            case 0x1FB630u: goto label_1fb630;
            case 0x1FB634u: goto label_1fb634;
            case 0x1FB638u: goto label_1fb638;
            case 0x1FB63Cu: goto label_1fb63c;
            case 0x1FB640u: goto label_1fb640;
            case 0x1FB644u: goto label_1fb644;
            case 0x1FB648u: goto label_1fb648;
            case 0x1FB64Cu: goto label_1fb64c;
            case 0x1FB650u: goto label_1fb650;
            case 0x1FB654u: goto label_1fb654;
            case 0x1FB658u: goto label_1fb658;
            case 0x1FB65Cu: goto label_1fb65c;
            case 0x1FB660u: goto label_1fb660;
            case 0x1FB664u: goto label_1fb664;
            case 0x1FB668u: goto label_1fb668;
            case 0x1FB66Cu: goto label_1fb66c;
            case 0x1FB670u: goto label_1fb670;
            case 0x1FB674u: goto label_1fb674;
            case 0x1FB678u: goto label_1fb678;
            case 0x1FB67Cu: goto label_1fb67c;
            case 0x1FB680u: goto label_1fb680;
            case 0x1FB684u: goto label_1fb684;
            case 0x1FB688u: goto label_1fb688;
            case 0x1FB68Cu: goto label_1fb68c;
            case 0x1FB690u: goto label_1fb690;
            case 0x1FB694u: goto label_1fb694;
            case 0x1FB698u: goto label_1fb698;
            case 0x1FB69Cu: goto label_1fb69c;
            case 0x1FB6A0u: goto label_1fb6a0;
            case 0x1FB6A4u: goto label_1fb6a4;
            case 0x1FB6A8u: goto label_1fb6a8;
            case 0x1FB6ACu: goto label_1fb6ac;
            case 0x1FB6B0u: goto label_1fb6b0;
            case 0x1FB6B4u: goto label_1fb6b4;
            case 0x1FB6B8u: goto label_1fb6b8;
            case 0x1FB6BCu: goto label_1fb6bc;
            case 0x1FB6C0u: goto label_1fb6c0;
            case 0x1FB6C4u: goto label_1fb6c4;
            case 0x1FB6C8u: goto label_1fb6c8;
            case 0x1FB6CCu: goto label_1fb6cc;
            case 0x1FB6D0u: goto label_1fb6d0;
            case 0x1FB6D4u: goto label_1fb6d4;
            case 0x1FB6D8u: goto label_1fb6d8;
            case 0x1FB6DCu: goto label_1fb6dc;
            case 0x1FB6E0u: goto label_1fb6e0;
            case 0x1FB6E4u: goto label_1fb6e4;
            default: break;
        }
        return;
    }
label_fallthrough_0x1fb6e0:
    ctx->pc = 0x1FB6E8u;
}

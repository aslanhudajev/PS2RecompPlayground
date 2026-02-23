#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dispLifePtclPut__10PlayerTaskFv
// Address: 0x212570 - 0x212698
void dispLifePtclPut__10PlayerTaskFv_0x212570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dispLifePtclPut__10PlayerTaskFv");


    ctx->pc = 0x212570u;

    // 0x212570: 0x27bdffc0
    ctx->pc = 0x212570u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x212574: 0x7fbf0030
    ctx->pc = 0x212574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x212578: 0x7fb20020
    ctx->pc = 0x212578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21257c: 0x7fb10010
    ctx->pc = 0x21257cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x212580: 0x7fb00000
    ctx->pc = 0x212580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x212584: 0x83838ca0
    ctx->pc = 0x212584u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937760)));
    // 0x212588: 0x1460003d
    ctx->pc = 0x212588u;
    {
        const bool branch_taken_0x212588 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x21258Cu;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x212588) {
            ctx->pc = 0x212680u;
            goto label_212680;
        }
    }
    ctx->pc = 0x212590u;
    // 0x212590: 0x26511cc4
    ctx->pc = 0x212590u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 7364));
    // 0x212594: 0x4bede37d
    ctx->pc = 0x212594u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x212598: 0x4bedeb7d
    ctx->pc = 0x212598u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x21259c: 0x4bedf37d
    ctx->pc = 0x21259cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x2125a0: 0x4bedfb7d
    ctx->pc = 0x2125a0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x2125a4: 0x70008628
    ctx->pc = 0x2125a4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2125a8:
    // 0x2125a8: 0x8e230018
    ctx->pc = 0x2125a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2125ac: 0x5060002d
    ctx->pc = 0x2125ACu;
    {
        const bool branch_taken_0x2125ac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2125ac) {
            ctx->pc = 0x2125B0u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x212664u;
            goto label_212664;
        }
    }
    ctx->pc = 0x2125B4u;
    // 0x2125b4: 0xc06c20d
    ctx->pc = 0x2125B4u;
    SET_GPR_U32(ctx, 31, 0x2125BCu);
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2125BCu; }
        else if (ctx->pc != 0x2125BCu) { ctx->pc = 0x2125BCu; }
    }
    if (ctx->pc != 0x2125BCu) { return; }
    ctx->pc = 0x2125BCu;
    // 0x2125bc: 0xc62d0004
    ctx->pc = 0x2125bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2125c0: 0xc62e0008
    ctx->pc = 0x2125c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2125c4: 0xc06c202
    ctx->pc = 0x2125C4u;
    SET_GPR_U32(ctx, 31, 0x2125CCu);
    ctx->pc = 0x2125C8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2125CCu; }
        else if (ctx->pc != 0x2125CCu) { ctx->pc = 0x2125CCu; }
    }
    if (ctx->pc != 0x2125CCu) { return; }
    ctx->pc = 0x2125CCu;
    // 0x2125cc: 0xc06c157
    ctx->pc = 0x2125CCu;
    SET_GPR_U32(ctx, 31, 0x2125D4u);
    ctx->pc = 0x2125D0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 40)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2125D4u; }
        else if (ctx->pc != 0x2125D4u) { ctx->pc = 0x2125D4u; }
    }
    if (ctx->pc != 0x2125D4u) { return; }
    ctx->pc = 0x2125D4u;
    // 0x2125d4: 0xc06c09f
    ctx->pc = 0x2125D4u;
    SET_GPR_U32(ctx, 31, 0x2125DCu);
    ctx->pc = 0x2125D8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2125DCu; }
        else if (ctx->pc != 0x2125DCu) { ctx->pc = 0x2125DCu; }
    }
    if (ctx->pc != 0x2125DCu) { return; }
    ctx->pc = 0x2125DCu;
    // 0x2125dc: 0xc62c0038
    ctx->pc = 0x2125dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2125e0: 0x46006346
    ctx->pc = 0x2125e0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2125e4: 0xc06c1b3
    ctx->pc = 0x2125E4u;
    SET_GPR_U32(ctx, 31, 0x2125ECu);
    ctx->pc = 0x2125E8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2125ECu; }
        else if (ctx->pc != 0x2125ECu) { ctx->pc = 0x2125ECu; }
    }
    if (ctx->pc != 0x2125ECu) { return; }
    ctx->pc = 0x2125ECu;
    // 0x2125ec: 0xc06b218
    ctx->pc = 0x2125ECu;
    SET_GPR_U32(ctx, 31, 0x2125F4u);
    ctx->pc = 0x2125F0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2125F4u; }
        else if (ctx->pc != 0x2125F4u) { ctx->pc = 0x2125F4u; }
    }
    if (ctx->pc != 0x2125F4u) { return; }
    ctx->pc = 0x2125F4u;
    // 0x2125f4: 0x8e421cb8
    ctx->pc = 0x2125f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 7352)));
    // 0x2125f8: 0x1440000e
    ctx->pc = 0x2125F8u;
    {
        const bool branch_taken_0x2125f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2125f8) {
            ctx->pc = 0x212634u;
            goto label_212634;
        }
    }
    ctx->pc = 0x212600u;
    // 0x212600: 0x8e24001c
    ctx->pc = 0x212600u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x212604: 0x2403000a
    ctx->pc = 0x212604u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x212608: 0x3c020001
    ctx->pc = 0x212608u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x21260c: 0x34420102
    ctx->pc = 0x21260cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 258));
    // 0x212610: 0x24050001
    ctx->pc = 0x212610u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x212614: 0x83001a
    ctx->pc = 0x212614u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x212618: 0x0
    ctx->pc = 0x212618u;
    // NOP
    // 0x21261c: 0x0
    ctx->pc = 0x21261cu;
    // NOP
    // 0x212620: 0x1810
    ctx->pc = 0x212620u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x212624: 0xc085400
    ctx->pc = 0x212624u;
    SET_GPR_U32(ctx, 31, 0x21262Cu);
    ctx->pc = 0x212628u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x215000u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatCE__Fii_0x215000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21262Cu; }
        else if (ctx->pc != 0x21262Cu) { ctx->pc = 0x21262Cu; }
    }
    if (ctx->pc != 0x21262Cu) { return; }
    ctx->pc = 0x21262Cu;
    // 0x21262c: 0x1000000c
    ctx->pc = 0x21262Cu;
    {
        const bool branch_taken_0x21262c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x21262c) {
            ctx->pc = 0x212660u;
            goto label_212660;
        }
    }
    ctx->pc = 0x212634u;
label_212634:
    // 0x212634: 0x8e24001c
    ctx->pc = 0x212634u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x212638: 0x2403000a
    ctx->pc = 0x212638u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x21263c: 0x3c020001
    ctx->pc = 0x21263cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x212640: 0x34420136
    ctx->pc = 0x212640u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 310));
    // 0x212644: 0x24050001
    ctx->pc = 0x212644u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x212648: 0x83001a
    ctx->pc = 0x212648u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x21264c: 0x0
    ctx->pc = 0x21264cu;
    // NOP
    // 0x212650: 0x0
    ctx->pc = 0x212650u;
    // NOP
    // 0x212654: 0x1810
    ctx->pc = 0x212654u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x212658: 0xc085400
    ctx->pc = 0x212658u;
    SET_GPR_U32(ctx, 31, 0x212660u);
    ctx->pc = 0x21265Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x215000u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatCE__Fii_0x215000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212660u; }
        else if (ctx->pc != 0x212660u) { ctx->pc = 0x212660u; }
    }
    if (ctx->pc != 0x212660u) { return; }
    ctx->pc = 0x212660u;
label_212660:
    // 0x212660: 0x26100001
    ctx->pc = 0x212660u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_212664:
    // 0x212664: 0x2a030020
    ctx->pc = 0x212664u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 32));
    // 0x212668: 0x1460ffcf
    ctx->pc = 0x212668u;
    {
        const bool branch_taken_0x212668 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x21266Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 64));
        if (branch_taken_0x212668) {
            ctx->pc = 0x2125A8u;
            goto label_2125a8;
        }
    }
    ctx->pc = 0x212670u;
    // 0x212670: 0x4bff6b7e
    ctx->pc = 0x212670u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x212674: 0x4bfe6b7e
    ctx->pc = 0x212674u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x212678: 0x4bfd6b7e
    ctx->pc = 0x212678u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x21267c: 0x4bfc6b7e
    ctx->pc = 0x21267cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_212680:
    // 0x212680: 0x7bbf0030
    ctx->pc = 0x212680u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x212684: 0x7bb20020
    ctx->pc = 0x212684u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212688: 0x7bb10010
    ctx->pc = 0x212688u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21268c: 0x7bb00000
    ctx->pc = 0x21268cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212690: 0x3e00008
    ctx->pc = 0x212690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212694u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2125A8u: goto label_2125a8;
            case 0x212634u: goto label_212634;
            case 0x212660u: goto label_212660;
            case 0x212664u: goto label_212664;
            case 0x212680u: goto label_212680;
            default: break;
        }
        return;
    }
    ctx->pc = 0x212698u;
}

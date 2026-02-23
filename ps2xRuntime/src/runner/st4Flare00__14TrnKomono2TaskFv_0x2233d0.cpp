#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: st4Flare00__14TrnKomono2TaskFv
// Address: 0x2233d0 - 0x2237a8
void st4Flare00__14TrnKomono2TaskFv_0x2233d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("st4Flare00__14TrnKomono2TaskFv");


    ctx->pc = 0x2233d0u;

    // 0x2233d0: 0x27bdffa0
    ctx->pc = 0x2233d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2233d4: 0x7fbf0050
    ctx->pc = 0x2233d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x2233d8: 0x7fb40040
    ctx->pc = 0x2233d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2233dc: 0x7fb30030
    ctx->pc = 0x2233dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2233e0: 0x7fb20020
    ctx->pc = 0x2233e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2233e4: 0x7fb10010
    ctx->pc = 0x2233e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2233e8: 0x7fb00000
    ctx->pc = 0x2233e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2233ec: 0x8f858c48
    ctx->pc = 0x2233ecu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x2233f0: 0x70809e28
    ctx->pc = 0x2233f0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2233f4: 0x24020132
    ctx->pc = 0x2233f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 306));
    // 0x2233f8: 0x8ca40004
    ctx->pc = 0x2233f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2233fc: 0x41840
    ctx->pc = 0x2233fcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x223400: 0x641821
    ctx->pc = 0x223400u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x223404: 0x31880
    ctx->pc = 0x223404u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x223408: 0x641821
    ctx->pc = 0x223408u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22340c: 0x31900
    ctx->pc = 0x22340cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x223410: 0x651821
    ctx->pc = 0x223410u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x223414: 0x846300d0
    ctx->pc = 0x223414u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x223418: 0x1062000d
    ctx->pc = 0x223418u;
    {
        const bool branch_taken_0x223418 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x22341Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 307));
        if (branch_taken_0x223418) {
            ctx->pc = 0x223450u;
            goto label_223450;
        }
    }
    ctx->pc = 0x223420u;
    // 0x223420: 0x1062000b
    ctx->pc = 0x223420u;
    {
        const bool branch_taken_0x223420 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x223424u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 579));
        if (branch_taken_0x223420) {
            ctx->pc = 0x223450u;
            goto label_223450;
        }
    }
    ctx->pc = 0x223428u;
    // 0x223428: 0x10620009
    ctx->pc = 0x223428u;
    {
        const bool branch_taken_0x223428 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x223428) {
            ctx->pc = 0x223450u;
            goto label_223450;
        }
    }
    ctx->pc = 0x223430u;
    // 0x223430: 0x8f828cec
    ctx->pc = 0x223430u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937836)));
    // 0x223434: 0x14400004
    ctx->pc = 0x223434u;
    {
        const bool branch_taken_0x223434 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x223434) {
            ctx->pc = 0x223448u;
            goto label_223448;
        }
    }
    ctx->pc = 0x22343Cu;
    // 0x22343c: 0x8f828ce8
    ctx->pc = 0x22343cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937832)));
    // 0x223440: 0x10400003
    ctx->pc = 0x223440u;
    {
        const bool branch_taken_0x223440 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x223440) {
            ctx->pc = 0x223450u;
            goto label_223450;
        }
    }
    ctx->pc = 0x223448u;
label_223448:
    // 0x223448: 0xc06898c
    ctx->pc = 0x223448u;
    SET_GPR_U32(ctx, 31, 0x223450u);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223450u; }
        else if (ctx->pc != 0x223450u) { ctx->pc = 0x223450u; }
    }
    if (ctx->pc != 0x223450u) { return; }
    ctx->pc = 0x223450u;
label_223450:
    // 0x223450: 0xc6600064
    ctx->pc = 0x223450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223454: 0x8e650060
    ctx->pc = 0x223454u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x223458: 0x72602628
    ctx->pc = 0x223458u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x22345c: 0xc08822c
    ctx->pc = 0x22345Cu;
    SET_GPR_U32(ctx, 31, 0x223464u);
    ctx->pc = 0x223460u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    ctx->pc = 0x2208B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        checkCloseCamPath__14TrnKomono2TaskFif_0x2208b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223464u; }
        else if (ctx->pc != 0x223464u) { ctx->pc = 0x223464u; }
    }
    if (ctx->pc != 0x223464u) { return; }
    ctx->pc = 0x223464u;
    // 0x223464: 0x3c02002c
    ctx->pc = 0x223464u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x223468: 0x70008628
    ctx->pc = 0x223468u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22346c: 0x70008e28
    ctx->pc = 0x22346cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x223470: 0x10000097
    ctx->pc = 0x223470u;
    {
        const bool branch_taken_0x223470 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x223474u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 8336));
        if (branch_taken_0x223470) {
            ctx->pc = 0x2236D0u;
            goto label_2236d0;
        }
    }
    ctx->pc = 0x223478u;
label_223478:
    // 0x223478: 0x4bede37d
    ctx->pc = 0x223478u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x22347c: 0x4bedeb7d
    ctx->pc = 0x22347cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x223480: 0x4bedf37d
    ctx->pc = 0x223480u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x223484: 0x4bedfb7d
    ctx->pc = 0x223484u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x223488: 0x8e63005c
    ctx->pc = 0x223488u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x22348c: 0x1460000d
    ctx->pc = 0x22348Cu;
    {
        const bool branch_taken_0x22348c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x223490u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x22348c) {
            ctx->pc = 0x2234C4u;
            goto label_2234c4;
        }
    }
    ctx->pc = 0x223494u;
    // 0x223494: 0x3c01002c
    ctx->pc = 0x223494u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x223498: 0xc42c2078
    ctx->pc = 0x223498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 8312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22349c: 0x44910000
    ctx->pc = 0x22349cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 17);
    // 0x2234a0: 0x0
    ctx->pc = 0x2234a0u;
    // NOP
    // 0x2234a4: 0x46800020
    ctx->pc = 0x2234a4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2234a8: 0x3c01002c
    ctx->pc = 0x2234a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x2234ac: 0xc42d207c
    ctx->pc = 0x2234acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 8316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2234b0: 0x3c01002c
    ctx->pc = 0x2234b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x2234b4: 0xc4212080
    ctx->pc = 0x2234b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 8320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2234b8: 0x10000057
    ctx->pc = 0x2234B8u;
    {
        const bool branch_taken_0x2234b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2234BCu;
        ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x2234b8) {
            ctx->pc = 0x223618u;
            goto label_223618;
        }
    }
    ctx->pc = 0x2234C0u;
    // 0x2234c0: 0x24020002
    ctx->pc = 0x2234c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_2234c4:
    // 0x2234c4: 0x14620010
    ctx->pc = 0x2234C4u;
    {
        const bool branch_taken_0x2234c4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2234C8u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 6));
        if (branch_taken_0x2234c4) {
            ctx->pc = 0x223508u;
            goto label_223508;
        }
    }
    ctx->pc = 0x2234CCu;
    // 0x2234cc: 0x3c01002c
    ctx->pc = 0x2234ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x2234d0: 0xc42c20d8
    ctx->pc = 0x2234d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 8408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2234d4: 0x2603fff9
    ctx->pc = 0x2234d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 4294967289));
    // 0x2234d8: 0x31100
    ctx->pc = 0x2234d8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 4));
    // 0x2234dc: 0x431021
    ctx->pc = 0x2234dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2234e0: 0x210c0
    ctx->pc = 0x2234e0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x2234e4: 0x44820800
    ctx->pc = 0x2234e4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x2234e8: 0x3c01002c
    ctx->pc = 0x2234e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x2234ec: 0xc42d20dc
    ctx->pc = 0x2234ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 8412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2234f0: 0x46800860
    ctx->pc = 0x2234f0u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2234f4: 0x3c01002c
    ctx->pc = 0x2234f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x2234f8: 0xc42020e0
    ctx->pc = 0x2234f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 8416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2234fc: 0x10000046
    ctx->pc = 0x2234FCu;
    {
        const bool branch_taken_0x2234fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x223500u;
        ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x2234fc) {
            ctx->pc = 0x223618u;
            goto label_223618;
        }
    }
    ctx->pc = 0x223504u;
    // 0x223504: 0x2a010006
    ctx->pc = 0x223504u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 6));
label_223508:
    // 0x223508: 0x10200006
    ctx->pc = 0x223508u;
    {
        const bool branch_taken_0x223508 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x22350Cu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 36));
        if (branch_taken_0x223508) {
            ctx->pc = 0x223524u;
            goto label_223524;
        }
    }
    ctx->pc = 0x223510u;
    // 0x223510: 0xc64d0004
    ctx->pc = 0x223510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x223514: 0xc64e0008
    ctx->pc = 0x223514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x223518: 0x1000003f
    ctx->pc = 0x223518u;
    {
        const bool branch_taken_0x223518 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22351Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x223518) {
            ctx->pc = 0x223618u;
            goto label_223618;
        }
    }
    ctx->pc = 0x223520u;
    // 0x223520: 0x2a010024
    ctx->pc = 0x223520u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 36));
label_223524:
    // 0x223524: 0x10200020
    ctx->pc = 0x223524u;
    {
        const bool branch_taken_0x223524 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x223528u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 4294967260));
        if (branch_taken_0x223524) {
            ctx->pc = 0x2235A8u;
            goto label_2235a8;
        }
    }
    ctx->pc = 0x22352Cu;
    // 0x22352c: 0x2606fffa
    ctx->pc = 0x22352cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 4294967290));
    // 0x223530: 0x24020006
    ctx->pc = 0x223530u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x223534: 0xc2001a
    ctx->pc = 0x223534u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x223538: 0x61fc2
    ctx->pc = 0x223538u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 6), 31));
    // 0x22353c: 0x3c02002c
    ctx->pc = 0x22353cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x223540: 0x24442090
    ctx->pc = 0x223540u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 8336));
    // 0x223544: 0x3c022aaa
    ctx->pc = 0x223544u;
    SET_GPR_U32(ctx, 2, ((uint32_t)10922 << 16));
    // 0x223548: 0x2810
    ctx->pc = 0x223548u;
    SET_GPR_U32(ctx, 5, ctx->hi);
    // 0x22354c: 0x3442aaab
    ctx->pc = 0x22354cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 43691));
    // 0x223550: 0x460018
    ctx->pc = 0x223550u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
    // 0x223554: 0x51040
    ctx->pc = 0x223554u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
    // 0x223558: 0x451021
    ctx->pc = 0x223558u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x22355c: 0x21080
    ctx->pc = 0x22355cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x223560: 0x821021
    ctx->pc = 0x223560u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x223564: 0xc44c0000
    ctx->pc = 0x223564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x223568: 0xc44d0004
    ctx->pc = 0x223568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x22356c: 0xc4400008
    ctx->pc = 0x22356cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223570: 0x1010
    ctx->pc = 0x223570u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x223574: 0x431021
    ctx->pc = 0x223574u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x223578: 0x24430001
    ctx->pc = 0x223578u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x22357c: 0x310c0
    ctx->pc = 0x22357cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 3));
    // 0x223580: 0x431021
    ctx->pc = 0x223580u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x223584: 0x210c0
    ctx->pc = 0x223584u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x223588: 0x431023
    ctx->pc = 0x223588u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22358c: 0x21040
    ctx->pc = 0x22358cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x223590: 0x44820800
    ctx->pc = 0x223590u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x223594: 0x0
    ctx->pc = 0x223594u;
    // NOP
    // 0x223598: 0x46800860
    ctx->pc = 0x223598u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x22359c: 0x1000001e
    ctx->pc = 0x22359Cu;
    {
        const bool branch_taken_0x22359c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2235A0u;
        ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x22359c) {
            ctx->pc = 0x223618u;
            goto label_223618;
        }
    }
    ctx->pc = 0x2235A4u;
    // 0x2235a4: 0x2606ffdc
    ctx->pc = 0x2235a4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 4294967260));
label_2235a8:
    // 0x2235a8: 0x24020006
    ctx->pc = 0x2235a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x2235ac: 0xc2001a
    ctx->pc = 0x2235acu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x2235b0: 0x61fc2
    ctx->pc = 0x2235b0u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 6), 31));
    // 0x2235b4: 0x3c02002c
    ctx->pc = 0x2235b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x2235b8: 0x24442090
    ctx->pc = 0x2235b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 8336));
    // 0x2235bc: 0x3c022aaa
    ctx->pc = 0x2235bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)10922 << 16));
    // 0x2235c0: 0x2810
    ctx->pc = 0x2235c0u;
    SET_GPR_U32(ctx, 5, ctx->hi);
    // 0x2235c4: 0x3442aaab
    ctx->pc = 0x2235c4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 43691));
    // 0x2235c8: 0x460018
    ctx->pc = 0x2235c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
    // 0x2235cc: 0x51040
    ctx->pc = 0x2235ccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
    // 0x2235d0: 0x451021
    ctx->pc = 0x2235d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2235d4: 0x21080
    ctx->pc = 0x2235d4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2235d8: 0x821021
    ctx->pc = 0x2235d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2235dc: 0xc44c0000
    ctx->pc = 0x2235dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2235e0: 0xc44d0004
    ctx->pc = 0x2235e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2235e4: 0xc4400008
    ctx->pc = 0x2235e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2235e8: 0x1010
    ctx->pc = 0x2235e8u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x2235ec: 0x431021
    ctx->pc = 0x2235ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2235f0: 0x24430001
    ctx->pc = 0x2235f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2235f4: 0x310c0
    ctx->pc = 0x2235f4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 3));
    // 0x2235f8: 0x431021
    ctx->pc = 0x2235f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2235fc: 0x210c0
    ctx->pc = 0x2235fcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x223600: 0x431023
    ctx->pc = 0x223600u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x223604: 0x21040
    ctx->pc = 0x223604u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x223608: 0x44820800
    ctx->pc = 0x223608u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x22360c: 0x0
    ctx->pc = 0x22360cu;
    // NOP
    // 0x223610: 0x46800860
    ctx->pc = 0x223610u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x223614: 0x46010381
    ctx->pc = 0x223614u;
    ctx->f[14] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_223618:
    // 0x223618: 0xc06c202
    ctx->pc = 0x223618u;
    SET_GPR_U32(ctx, 31, 0x223620u);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223620u; }
        else if (ctx->pc != 0x223620u) { ctx->pc = 0x223620u; }
    }
    if (ctx->pc != 0x223620u) { return; }
    ctx->pc = 0x223620u;
    // 0x223620: 0xc06c213
    ctx->pc = 0x223620u;
    SET_GPR_U32(ctx, 31, 0x223628u);
    ctx->pc = 0x1B084Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B084C_0x1b084c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223628u; }
        else if (ctx->pc != 0x223628u) { ctx->pc = 0x223628u; }
    }
    if (ctx->pc != 0x223628u) { return; }
    ctx->pc = 0x223628u;
    // 0x223628: 0x6010004
    ctx->pc = 0x223628u;
    {
        const bool branch_taken_0x223628 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x22362Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 3));
        if (branch_taken_0x223628) {
            ctx->pc = 0x22363Cu;
            goto label_22363c;
        }
    }
    ctx->pc = 0x223630u;
    // 0x223630: 0x50400003
    ctx->pc = 0x223630u;
    {
        const bool branch_taken_0x223630 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x223630) {
            ctx->pc = 0x223634u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
            ctx->pc = 0x223640u;
            goto label_223640;
        }
    }
    ctx->pc = 0x223638u;
    // 0x223638: 0x2442fffc
    ctx->pc = 0x223638u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967292));
label_22363c:
    // 0x22363c: 0x21080
    ctx->pc = 0x22363cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_223640:
    // 0x223640: 0x2621021
    ctx->pc = 0x223640u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x223644: 0xc44c00e0
    ctx->pc = 0x223644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x223648: 0x245400e0
    ctx->pc = 0x223648u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 224));
    // 0x22364c: 0x46006346
    ctx->pc = 0x22364cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x223650: 0xc06c1b3
    ctx->pc = 0x223650u;
    SET_GPR_U32(ctx, 31, 0x223658u);
    ctx->pc = 0x223654u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223658u; }
        else if (ctx->pc != 0x223658u) { ctx->pc = 0x223658u; }
    }
    if (ctx->pc != 0x223658u) { return; }
    ctx->pc = 0x223658u;
    // 0x223658: 0xc06b218
    ctx->pc = 0x223658u;
    SET_GPR_U32(ctx, 31, 0x223660u);
    ctx->pc = 0x22365Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223660u; }
        else if (ctx->pc != 0x223660u) { ctx->pc = 0x223660u; }
    }
    if (ctx->pc != 0x223660u) { return; }
    ctx->pc = 0x223660u;
    // 0x223660: 0x8e63005c
    ctx->pc = 0x223660u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x223664: 0x14600007
    ctx->pc = 0x223664u;
    {
        const bool branch_taken_0x223664 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x223668u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x223664) {
            ctx->pc = 0x223684u;
            goto label_223684;
        }
    }
    ctx->pc = 0x22366Cu;
    // 0x22366c: 0x3c0200f4
    ctx->pc = 0x22366cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)244 << 16));
    // 0x223670: 0xc0853ac
    ctx->pc = 0x223670u;
    SET_GPR_U32(ctx, 31, 0x223678u);
    ctx->pc = 0x223674u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 22));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223678u; }
        else if (ctx->pc != 0x223678u) { ctx->pc = 0x223678u; }
    }
    if (ctx->pc != 0x223678u) { return; }
    ctx->pc = 0x223678u;
    // 0x223678: 0x1000000e
    ctx->pc = 0x223678u;
    {
        const bool branch_taken_0x223678 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22367Cu;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x223678) {
            ctx->pc = 0x2236B4u;
            goto label_2236b4;
        }
    }
    ctx->pc = 0x223680u;
    // 0x223680: 0x24020002
    ctx->pc = 0x223680u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_223684:
    // 0x223684: 0x14620007
    ctx->pc = 0x223684u;
    {
        const bool branch_taken_0x223684 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x223688u;
        SET_GPR_U32(ctx, 4, ((uint32_t)241 << 16));
        if (branch_taken_0x223684) {
            ctx->pc = 0x2236A4u;
            goto label_2236a4;
        }
    }
    ctx->pc = 0x22368Cu;
    // 0x22368c: 0x3c02000c
    ctx->pc = 0x22368cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)12 << 16));
    // 0x223690: 0xc0853ac
    ctx->pc = 0x223690u;
    SET_GPR_U32(ctx, 31, 0x223698u);
    ctx->pc = 0x223694u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 35));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223698u; }
        else if (ctx->pc != 0x223698u) { ctx->pc = 0x223698u; }
    }
    if (ctx->pc != 0x223698u) { return; }
    ctx->pc = 0x223698u;
    // 0x223698: 0x10000005
    ctx->pc = 0x223698u;
    {
        const bool branch_taken_0x223698 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x223698) {
            ctx->pc = 0x2236B0u;
            goto label_2236b0;
        }
    }
    ctx->pc = 0x2236A0u;
    // 0x2236a0: 0x3c0400f1
    ctx->pc = 0x2236a0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)241 << 16));
label_2236a4:
    // 0x2236a4: 0xc0853ac
    ctx->pc = 0x2236A4u;
    SET_GPR_U32(ctx, 31, 0x2236ACu);
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2236ACu; }
        else if (ctx->pc != 0x2236ACu) { ctx->pc = 0x2236ACu; }
    }
    if (ctx->pc != 0x2236ACu) { return; }
    ctx->pc = 0x2236ACu;
    // 0x2236ac: 0x0
    ctx->pc = 0x2236acu;
    // NOP
label_2236b0:
    // 0x2236b0: 0x4bff6b7e
    ctx->pc = 0x2236b0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_2236b4:
    // 0x2236b4: 0x4bfe6b7e
    ctx->pc = 0x2236b4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2236b8: 0x4bfd6b7e
    ctx->pc = 0x2236b8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2236bc: 0x4bfc6b7e
    ctx->pc = 0x2236bcu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2236c0: 0x26310088
    ctx->pc = 0x2236c0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 136));
    // 0x2236c4: 0x2652000c
    ctx->pc = 0x2236c4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 12));
    // 0x2236c8: 0x26100001
    ctx->pc = 0x2236c8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2236cc: 0x0
    ctx->pc = 0x2236ccu;
    // NOP
label_2236d0:
    // 0x2236d0: 0x8e6200cc
    ctx->pc = 0x2236d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 204)));
    // 0x2236d4: 0x202102a
    ctx->pc = 0x2236d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x2236d8: 0x1440ff67
    ctx->pc = 0x2236D8u;
    {
        const bool branch_taken_0x2236d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2236DCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
        if (branch_taken_0x2236d8) {
            ctx->pc = 0x223478u;
            goto label_223478;
        }
    }
    ctx->pc = 0x2236E0u;
    // 0x2236e0: 0xc07ce18
    ctx->pc = 0x2236E0u;
    SET_GPR_U32(ctx, 31, 0x2236E8u);
    ctx->pc = 0x2236E4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2236E8u; }
        else if (ctx->pc != 0x2236E8u) { ctx->pc = 0x2236E8u; }
    }
    if (ctx->pc != 0x2236E8u) { return; }
    ctx->pc = 0x2236E8u;
    // 0x2236e8: 0x1c400027
    ctx->pc = 0x2236E8u;
    {
        const bool branch_taken_0x2236e8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2236ECu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2236e8) {
            ctx->pc = 0x223788u;
            goto label_223788;
        }
    }
    ctx->pc = 0x2236F0u;
label_2236f0:
    // 0x2236f0: 0x8e630070
    ctx->pc = 0x2236f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x2236f4: 0x14600011
    ctx->pc = 0x2236F4u;
    {
        const bool branch_taken_0x2236f4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2236f4) {
            ctx->pc = 0x22373Cu;
            goto label_22373c;
        }
    }
    ctx->pc = 0x2236FCu;
    // 0x2236fc: 0xc66100e0
    ctx->pc = 0x2236fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x223700: 0x3c033d4c
    ctx->pc = 0x223700u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15692 << 16));
    // 0x223704: 0x3463cccd
    ctx->pc = 0x223704u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52429));
    // 0x223708: 0x44830000
    ctx->pc = 0x223708u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x22370c: 0x3c033f80
    ctx->pc = 0x22370cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x223710: 0x46000800
    ctx->pc = 0x223710u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x223714: 0x44831000
    ctx->pc = 0x223714u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
    // 0x223718: 0x0
    ctx->pc = 0x223718u;
    // NOP
    // 0x22371c: 0x46020036
    ctx->pc = 0x22371cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x223720: 0x0
    ctx->pc = 0x223720u;
    // NOP
    // 0x223724: 0x45010014
    ctx->pc = 0x223724u;
    {
        const bool branch_taken_0x223724 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x223728u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 224), bits); }
        if (branch_taken_0x223724) {
            ctx->pc = 0x223778u;
            goto label_223778;
        }
    }
    ctx->pc = 0x22372Cu;
    // 0x22372c: 0xe66200e0
    ctx->pc = 0x22372cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 224), bits); }
    // 0x223730: 0x24030001
    ctx->pc = 0x223730u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x223734: 0x10000010
    ctx->pc = 0x223734u;
    {
        const bool branch_taken_0x223734 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x223738u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 3));
        if (branch_taken_0x223734) {
            ctx->pc = 0x223778u;
            goto label_223778;
        }
    }
    ctx->pc = 0x22373Cu;
label_22373c:
    // 0x22373c: 0xc66100e0
    ctx->pc = 0x22373cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x223740: 0x3c033d4c
    ctx->pc = 0x223740u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15692 << 16));
    // 0x223744: 0x3463cccd
    ctx->pc = 0x223744u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52429));
    // 0x223748: 0x44830000
    ctx->pc = 0x223748u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x22374c: 0x3c033f4c
    ctx->pc = 0x22374cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16204 << 16));
    // 0x223750: 0x46000801
    ctx->pc = 0x223750u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x223754: 0x3463cccd
    ctx->pc = 0x223754u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52429));
    // 0x223758: 0x44830800
    ctx->pc = 0x223758u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x22375c: 0x0
    ctx->pc = 0x22375cu;
    // NOP
    // 0x223760: 0x46010034
    ctx->pc = 0x223760u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x223764: 0x0
    ctx->pc = 0x223764u;
    // NOP
    // 0x223768: 0x45000003
    ctx->pc = 0x223768u;
    {
        const bool branch_taken_0x223768 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22376Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 224), bits); }
        if (branch_taken_0x223768) {
            ctx->pc = 0x223778u;
            goto label_223778;
        }
    }
    ctx->pc = 0x223770u;
    // 0x223770: 0xe66100e0
    ctx->pc = 0x223770u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 224), bits); }
    // 0x223774: 0xae600070
    ctx->pc = 0x223774u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_223778:
    // 0x223778: 0x24840001
    ctx->pc = 0x223778u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x22377c: 0x28830004
    ctx->pc = 0x22377cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 4));
    // 0x223780: 0x1460ffdb
    ctx->pc = 0x223780u;
    {
        const bool branch_taken_0x223780 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x223784u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4));
        if (branch_taken_0x223780) {
            ctx->pc = 0x2236F0u;
            goto label_2236f0;
        }
    }
    ctx->pc = 0x223788u;
label_223788:
    // 0x223788: 0x7bbf0050
    ctx->pc = 0x223788u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22378c: 0x7bb40040
    ctx->pc = 0x22378cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x223790: 0x7bb30030
    ctx->pc = 0x223790u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x223794: 0x7bb20020
    ctx->pc = 0x223794u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223798: 0x7bb10010
    ctx->pc = 0x223798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22379c: 0x7bb00000
    ctx->pc = 0x22379cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2237a0: 0x3e00008
    ctx->pc = 0x2237A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2237A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x223448u: goto label_223448;
            case 0x223450u: goto label_223450;
            case 0x223478u: goto label_223478;
            case 0x2234C4u: goto label_2234c4;
            case 0x223508u: goto label_223508;
            case 0x223524u: goto label_223524;
            case 0x2235A8u: goto label_2235a8;
            case 0x223618u: goto label_223618;
            case 0x22363Cu: goto label_22363c;
            case 0x223640u: goto label_223640;
            case 0x223684u: goto label_223684;
            case 0x2236A4u: goto label_2236a4;
            case 0x2236B0u: goto label_2236b0;
            case 0x2236B4u: goto label_2236b4;
            case 0x2236D0u: goto label_2236d0;
            case 0x2236F0u: goto label_2236f0;
            case 0x22373Cu: goto label_22373c;
            case 0x223778u: goto label_223778;
            case 0x223788u: goto label_223788;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2237A8u;
}

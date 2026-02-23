#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: data_set__15OneSkinMgrClassFP10MotObjTask
// Address: 0x1fe4c0 - 0x1fe7a8
void data_set__15OneSkinMgrClassFP10MotObjTask_0x1fe4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("data_set__15OneSkinMgrClassFP10MotObjTask");


    ctx->pc = 0x1fe4c0u;

    // 0x1fe4c0: 0x27bdff90
    ctx->pc = 0x1fe4c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1fe4c4: 0x7fbf0060
    ctx->pc = 0x1fe4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x1fe4c8: 0x7fb50050
    ctx->pc = 0x1fe4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1fe4cc: 0x7fb40040
    ctx->pc = 0x1fe4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1fe4d0: 0x7fb30030
    ctx->pc = 0x1fe4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1fe4d4: 0x7fb20020
    ctx->pc = 0x1fe4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fe4d8: 0x7fb10010
    ctx->pc = 0x1fe4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fe4dc: 0x7fb00000
    ctx->pc = 0x1fe4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fe4e0: 0x84a6002c
    ctx->pc = 0x1fe4e0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1fe4e4: 0x70a08628
    ctx->pc = 0x1fe4e4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1fe4e8: 0x3c030027
    ctx->pc = 0x1fe4e8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1fe4ec: 0x3c0101f3
    ctx->pc = 0x1fe4ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)499 << 16));
    // 0x1fe4f0: 0x70808e28
    ctx->pc = 0x1fe4f0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1fe4f4: 0x246523f0
    ctx->pc = 0x1fe4f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 9200));
    // 0x1fe4f8: 0x63880
    ctx->pc = 0x1fe4f8u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1fe4fc: 0xa72821
    ctx->pc = 0x1fe4fcu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1fe500: 0x8cb20000
    ctx->pc = 0x1fe500u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fe504: 0xe10821
    ctx->pc = 0x1fe504u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
    // 0x1fe508: 0x3c030051
    ctx->pc = 0x1fe508u;
    SET_GPR_U32(ctx, 3, ((uint32_t)81 << 16));
    // 0x1fe50c: 0x8c339730
    ctx->pc = 0x1fe50cu;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 1), 4294940464)));
    // 0x1fe510: 0x24632270
    ctx->pc = 0x1fe510u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8816));
    // 0x1fe514: 0x62840
    ctx->pc = 0x1fe514u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 1));
    // 0x1fe518: 0xa62821
    ctx->pc = 0x1fe518u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1fe51c: 0x52880
    ctx->pc = 0x1fe51cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1fe520: 0x651821
    ctx->pc = 0x1fe520u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1fe524: 0xac83000c
    ctx->pc = 0x1fe524u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x1fe528: 0x8c84000c
    ctx->pc = 0x1fe528u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1fe52c: 0x8c830000
    ctx->pc = 0x1fe52cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fe530: 0x1460004b
    ctx->pc = 0x1FE530u;
    {
        const bool branch_taken_0x1fe530 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1fe530) {
            ctx->pc = 0x1FE660u;
            goto label_1fe660;
        }
    }
    ctx->pc = 0x1FE538u;
    // 0x1fe538: 0x8e430004
    ctx->pc = 0x1fe538u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1fe53c: 0x3c0201f2
    ctx->pc = 0x1fe53cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)498 << 16));
    // 0x1fe540: 0x34459860
    ctx->pc = 0x1fe540u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 39008));
    // 0x1fe544: 0xac830000
    ctx->pc = 0x1fe544u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1fe548: 0x8e430008
    ctx->pc = 0x1fe548u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1fe54c: 0x8e22000c
    ctx->pc = 0x1fe54cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1fe550: 0xac430004
    ctx->pc = 0x1fe550u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1fe554: 0x8602002c
    ctx->pc = 0x1fe554u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1fe558: 0x21040
    ctx->pc = 0x1fe558u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1fe55c: 0x451021
    ctx->pc = 0x1fe55cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1fe560: 0x84420000
    ctx->pc = 0x1fe560u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fe564: 0xc06878c
    ctx->pc = 0x1FE564u;
    SET_GPR_U32(ctx, 31, 0x1FE56Cu);
    ctx->pc = 0x1FE568u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 7));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE56Cu; }
        else if (ctx->pc != 0x1FE56Cu) { ctx->pc = 0x1FE56Cu; }
    }
    if (ctx->pc != 0x1FE56Cu) { return; }
    ctx->pc = 0x1FE56Cu;
    // 0x1fe56c: 0x8e23000c
    ctx->pc = 0x1fe56cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1fe570: 0x3c0101f3
    ctx->pc = 0x1fe570u;
    SET_GPR_U32(ctx, 1, ((uint32_t)499 << 16));
    // 0x1fe574: 0x27848d4c
    ctx->pc = 0x1fe574u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1fe578: 0xac620008
    ctx->pc = 0x1fe578u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1fe57c: 0x8e22000c
    ctx->pc = 0x1fe57cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1fe580: 0x8c420008
    ctx->pc = 0x1fe580u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1fe584: 0xae220004
    ctx->pc = 0x1fe584u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1fe588: 0x8603002c
    ctx->pc = 0x1fe588u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1fe58c: 0x8e22000c
    ctx->pc = 0x1fe58cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1fe590: 0x31840
    ctx->pc = 0x1fe590u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1fe594: 0x610821
    ctx->pc = 0x1fe594u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1fe598: 0x84239860
    ctx->pc = 0x1fe598u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294940768)));
    // 0x1fe59c: 0x8c420008
    ctx->pc = 0x1fe59cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1fe5a0: 0x31980
    ctx->pc = 0x1fe5a0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 6));
    // 0x1fe5a4: 0x431021
    ctx->pc = 0x1fe5a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fe5a8: 0xae220008
    ctx->pc = 0x1fe5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1fe5ac: 0x8605002c
    ctx->pc = 0x1fe5acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1fe5b0: 0x8e460000
    ctx->pc = 0x1fe5b0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1fe5b4: 0xc07f1d8
    ctx->pc = 0x1FE5B4u;
    SET_GPR_U32(ctx, 31, 0x1FE5BCu);
    ctx->pc = 0x1FE5B8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FC760u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdr__11MotMgrClassFiii_0x1fc760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE5BCu; }
        else if (ctx->pc != 0x1FE5BCu) { ctx->pc = 0x1FE5BCu; }
    }
    if (ctx->pc != 0x1FE5BCu) { return; }
    ctx->pc = 0x1FE5BCu;
    // 0x1fe5bc: 0x7040a628
    ctx->pc = 0x1fe5bcu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fe5c0: 0x2682000c
    ctx->pc = 0x1fe5c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 12));
    // 0x1fe5c4: 0xae220000
    ctx->pc = 0x1fe5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1fe5c8: 0x4bede37d
    ctx->pc = 0x1fe5c8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1fe5cc: 0x4bedeb7d
    ctx->pc = 0x1fe5ccu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1fe5d0: 0x4bedf37d
    ctx->pc = 0x1fe5d0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1fe5d4: 0xc06c20d
    ctx->pc = 0x1FE5D4u;
    SET_GPR_U32(ctx, 31, 0x1FE5DCu);
    ctx->pc = 0x1FE5D8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE5DCu; }
        else if (ctx->pc != 0x1FE5DCu) { ctx->pc = 0x1FE5DCu; }
    }
    if (ctx->pc != 0x1FE5DCu) { return; }
    ctx->pc = 0x1FE5DCu;
    // 0x1fe5dc: 0xc06bf55
    ctx->pc = 0x1FE5DCu;
    SET_GPR_U32(ctx, 31, 0x1FE5E4u);
    ctx->pc = 0x1FE5E0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE5E4u; }
        else if (ctx->pc != 0x1FE5E4u) { ctx->pc = 0x1FE5E4u; }
    }
    if (ctx->pc != 0x1FE5E4u) { return; }
    ctx->pc = 0x1FE5E4u;
    // 0x1fe5e4: 0xc06bf55
    ctx->pc = 0x1FE5E4u;
    SET_GPR_U32(ctx, 31, 0x1FE5ECu);
    ctx->pc = 0x1FE5E8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE5ECu; }
        else if (ctx->pc != 0x1FE5ECu) { ctx->pc = 0x1FE5ECu; }
    }
    if (ctx->pc != 0x1FE5ECu) { return; }
    ctx->pc = 0x1FE5ECu;
    // 0x1fe5ec: 0xc68d0004
    ctx->pc = 0x1fe5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1fe5f0: 0xc68e0008
    ctx->pc = 0x1fe5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1fe5f4: 0xc06c202
    ctx->pc = 0x1FE5F4u;
    SET_GPR_U32(ctx, 31, 0x1FE5FCu);
    ctx->pc = 0x1FE5F8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE5FCu; }
        else if (ctx->pc != 0x1FE5FCu) { ctx->pc = 0x1FE5FCu; }
    }
    if (ctx->pc != 0x1FE5FCu) { return; }
    ctx->pc = 0x1FE5FCu;
    // 0x1fe5fc: 0x8e220000
    ctx->pc = 0x1fe5fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fe600: 0xc06c157
    ctx->pc = 0x1FE600u;
    SET_GPR_U32(ctx, 31, 0x1FE608u);
    ctx->pc = 0x1FE604u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE608u; }
        else if (ctx->pc != 0x1FE608u) { ctx->pc = 0x1FE608u; }
    }
    if (ctx->pc != 0x1FE608u) { return; }
    ctx->pc = 0x1FE608u;
    // 0x1fe608: 0x8e220000
    ctx->pc = 0x1fe608u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fe60c: 0xc06c0fb
    ctx->pc = 0x1FE60Cu;
    SET_GPR_U32(ctx, 31, 0x1FE614u);
    ctx->pc = 0x1FE610u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE614u; }
        else if (ctx->pc != 0x1FE614u) { ctx->pc = 0x1FE614u; }
    }
    if (ctx->pc != 0x1FE614u) { return; }
    ctx->pc = 0x1FE614u;
    // 0x1fe614: 0x8e220000
    ctx->pc = 0x1fe614u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fe618: 0xc06c09f
    ctx->pc = 0x1FE618u;
    SET_GPR_U32(ctx, 31, 0x1FE620u);
    ctx->pc = 0x1FE61Cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE620u; }
        else if (ctx->pc != 0x1FE620u) { ctx->pc = 0x1FE620u; }
    }
    if (ctx->pc != 0x1FE620u) { return; }
    ctx->pc = 0x1FE620u;
    // 0x1fe620: 0x7000a628
    ctx->pc = 0x1fe620u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fe624: 0x10000006
    ctx->pc = 0x1FE624u;
    {
        const bool branch_taken_0x1fe624 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FE628u;
        SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1fe624) {
            ctx->pc = 0x1FE640u;
            goto label_1fe640;
        }
    }
    ctx->pc = 0x1FE62Cu;
label_1fe62c:
    // 0x1fe62c: 0x8ea50024
    ctx->pc = 0x1fe62cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x1fe630: 0xc07fa54
    ctx->pc = 0x1FE630u;
    SET_GPR_U32(ctx, 31, 0x1FE638u);
    ctx->pc = 0x1FE634u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FE950u;
    {
        const uint32_t __entryPc = ctx->pc;
        p_mat_set__15OneSkinMgrClassFP7_BODYPT_0x1fe950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE638u; }
        else if (ctx->pc != 0x1FE638u) { ctx->pc = 0x1FE638u; }
    }
    if (ctx->pc != 0x1FE638u) { return; }
    ctx->pc = 0x1FE638u;
    // 0x1fe638: 0x26b50004
    ctx->pc = 0x1fe638u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4));
    // 0x1fe63c: 0x26940001
    ctx->pc = 0x1fe63cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_1fe640:
    // 0x1fe640: 0x86630022
    ctx->pc = 0x1fe640u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 34)));
    // 0x1fe644: 0x283182a
    ctx->pc = 0x1fe644u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 3)));
    // 0x1fe648: 0x1460fff8
    ctx->pc = 0x1FE648u;
    {
        const bool branch_taken_0x1fe648 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1fe648) {
            ctx->pc = 0x1FE62Cu;
            goto label_1fe62c;
        }
    }
    ctx->pc = 0x1FE650u;
    // 0x1fe650: 0x4bff6b7e
    ctx->pc = 0x1fe650u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1fe654: 0x4bfe6b7e
    ctx->pc = 0x1fe654u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1fe658: 0x4bfd6b7e
    ctx->pc = 0x1fe658u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1fe65c: 0x4bfc6b7e
    ctx->pc = 0x1fe65cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_1fe660:
    // 0x1fe660: 0x8e520008
    ctx->pc = 0x1fe660u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1fe664: 0x10000042
    ctx->pc = 0x1FE664u;
    {
        const bool branch_taken_0x1fe664 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FE668u;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1fe664) {
            ctx->pc = 0x1FE770u;
            goto label_1fe770;
        }
    }
    ctx->pc = 0x1FE66Cu;
label_1fe66c:
    // 0x1fe66c: 0x8e530000
    ctx->pc = 0x1fe66cu;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1fe670: 0x3c030027
    ctx->pc = 0x1fe670u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1fe674: 0x2464cfb0
    ctx->pc = 0x1fe674u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294954928));
    // 0x1fe678: 0x3c030052
    ctx->pc = 0x1fe678u;
    SET_GPR_U32(ctx, 3, ((uint32_t)82 << 16));
    // 0x1fe67c: 0x246394d0
    ctx->pc = 0x1fe67cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294939856));
    // 0x1fe680: 0x731821
    ctx->pc = 0x1fe680u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1fe684: 0x132880
    ctx->pc = 0x1fe684u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 19), 2));
    // 0x1fe688: 0x852021
    ctx->pc = 0x1fe688u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1fe68c: 0x80630000
    ctx->pc = 0x1fe68cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fe690: 0x1460000f
    ctx->pc = 0x1FE690u;
    {
        const bool branch_taken_0x1fe690 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1FE694u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x1fe690) {
            ctx->pc = 0x1FE6D0u;
            goto label_1fe6d0;
        }
    }
    ctx->pc = 0x1FE698u;
    // 0x1fe698: 0x41c03
    ctx->pc = 0x1fe698u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 16));
    // 0x1fe69c: 0x3063ffff
    ctx->pc = 0x1fe69cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 65535));
    // 0x1fe6a0: 0x32100
    ctx->pc = 0x1fe6a0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fe6a4: 0x3c030050
    ctx->pc = 0x1fe6a4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1fe6a8: 0x2463ea20
    ctx->pc = 0x1fe6a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294961696));
    // 0x1fe6ac: 0x641821
    ctx->pc = 0x1fe6acu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe6b0: 0x8c640000
    ctx->pc = 0x1fe6b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fe6b4: 0x3c038000
    ctx->pc = 0x1fe6b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x1fe6b8: 0x831824
    ctx->pc = 0x1fe6b8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fe6bc: 0x10600004
    ctx->pc = 0x1FE6BCu;
    {
        const bool branch_taken_0x1fe6bc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FE6C0u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1fe6bc) {
            ctx->pc = 0x1FE6D0u;
            goto label_1fe6d0;
        }
    }
    ctx->pc = 0x1FE6C4u;
    // 0x1fe6c4: 0x72402e28
    ctx->pc = 0x1fe6c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1fe6c8: 0xc07fa9c
    ctx->pc = 0x1FE6C8u;
    SET_GPR_U32(ctx, 31, 0x1FE6D0u);
    ctx->pc = 0x1FE6CCu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FEA70u;
    {
        const uint32_t __entryPc = ctx->pc;
        vertex_set__15OneSkinMgrClassFP10ONESKIN_DBi_0x1fea70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE6D0u; }
        else if (ctx->pc != 0x1FE6D0u) { ctx->pc = 0x1FE6D0u; }
    }
    if (ctx->pc != 0x1FE6D0u) { return; }
    ctx->pc = 0x1FE6D0u;
label_1fe6d0:
    // 0x1fe6d0: 0x8e46000c
    ctx->pc = 0x1fe6d0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1fe6d4: 0x10c00016
    ctx->pc = 0x1FE6D4u;
    {
        const bool branch_taken_0x1fe6d4 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fe6d4) {
            ctx->pc = 0x1FE730u;
            goto label_1fe730;
        }
    }
    ctx->pc = 0x1FE6DCu;
    // 0x1fe6dc: 0x10000011
    ctx->pc = 0x1FE6DCu;
    {
        const bool branch_taken_0x1fe6dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FE6E0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 0)));
        if (branch_taken_0x1fe6dc) {
            ctx->pc = 0x1FE724u;
            goto label_1fe724;
        }
    }
    ctx->pc = 0x1FE6E4u;
    // 0x1fe6e4: 0x41900
    ctx->pc = 0x1fe6e4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
label_1fe6e8:
    // 0x1fe6e8: 0x641823
    ctx->pc = 0x1fe6e8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe6ec: 0x31900
    ctx->pc = 0x1fe6ecu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fe6f0: 0x2032021
    ctx->pc = 0x1fe6f0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1fe6f4: 0x8c830124
    ctx->pc = 0x1fe6f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x1fe6f8: 0x2405038e
    ctx->pc = 0x1fe6f8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 910));
    // 0x1fe6fc: 0x34634000
    ctx->pc = 0x1fe6fcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 16384));
    // 0x1fe700: 0xac830124
    ctx->pc = 0x1fe700u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 292), GPR_U32(ctx, 3));
    // 0x1fe704: 0x8cc40000
    ctx->pc = 0x1fe704u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1fe708: 0x41900
    ctx->pc = 0x1fe708u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x1fe70c: 0x641823
    ctx->pc = 0x1fe70cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe710: 0x31900
    ctx->pc = 0x1fe710u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fe714: 0x2031821
    ctx->pc = 0x1fe714u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1fe718: 0xac650070
    ctx->pc = 0x1fe718u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 5));
    // 0x1fe71c: 0x24c60004
    ctx->pc = 0x1fe71cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
    // 0x1fe720: 0x8cc40000
    ctx->pc = 0x1fe720u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1fe724:
    // 0x1fe724: 0x2403ffff
    ctx->pc = 0x1fe724u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fe728: 0x1483ffef
    ctx->pc = 0x1FE728u;
    {
        const bool branch_taken_0x1fe728 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1FE72Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
        if (branch_taken_0x1fe728) {
            ctx->pc = 0x1FE6E8u;
            goto label_1fe6e8;
        }
    }
    ctx->pc = 0x1FE730u;
label_1fe730:
    // 0x1fe730: 0x8e440008
    ctx->pc = 0x1fe730u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1fe734: 0x26940001
    ctx->pc = 0x1fe734u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
    // 0x1fe738: 0x41900
    ctx->pc = 0x1fe738u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x1fe73c: 0x641823
    ctx->pc = 0x1fe73cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe740: 0x31900
    ctx->pc = 0x1fe740u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fe744: 0x2032021
    ctx->pc = 0x1fe744u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1fe748: 0x8c830124
    ctx->pc = 0x1fe748u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x1fe74c: 0x34634000
    ctx->pc = 0x1fe74cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 16384));
    // 0x1fe750: 0xac830124
    ctx->pc = 0x1fe750u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 292), GPR_U32(ctx, 3));
    // 0x1fe754: 0x8e440008
    ctx->pc = 0x1fe754u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1fe758: 0x41900
    ctx->pc = 0x1fe758u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x1fe75c: 0x641823
    ctx->pc = 0x1fe75cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe760: 0x31900
    ctx->pc = 0x1fe760u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fe764: 0x2031821
    ctx->pc = 0x1fe764u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1fe768: 0xac730070
    ctx->pc = 0x1fe768u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 19));
    // 0x1fe76c: 0x26520010
    ctx->pc = 0x1fe76cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 16));
label_1fe770:
    // 0x1fe770: 0x8e23000c
    ctx->pc = 0x1fe770u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1fe774: 0x8c630000
    ctx->pc = 0x1fe774u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fe778: 0x283182a
    ctx->pc = 0x1fe778u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 3)));
    // 0x1fe77c: 0x1460ffbb
    ctx->pc = 0x1FE77Cu;
    {
        const bool branch_taken_0x1fe77c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1fe77c) {
            ctx->pc = 0x1FE66Cu;
            goto label_1fe66c;
        }
    }
    ctx->pc = 0x1FE784u;
    // 0x1fe784: 0x7bbf0060
    ctx->pc = 0x1fe784u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fe788: 0x7bb50050
    ctx->pc = 0x1fe788u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fe78c: 0x7bb40040
    ctx->pc = 0x1fe78cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fe790: 0x7bb30030
    ctx->pc = 0x1fe790u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fe794: 0x7bb20020
    ctx->pc = 0x1fe794u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe798: 0x7bb10010
    ctx->pc = 0x1fe798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe79c: 0x7bb00000
    ctx->pc = 0x1fe79cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe7a0: 0x3e00008
    ctx->pc = 0x1FE7A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE7A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FE62Cu: goto label_1fe62c;
            case 0x1FE640u: goto label_1fe640;
            case 0x1FE660u: goto label_1fe660;
            case 0x1FE66Cu: goto label_1fe66c;
            case 0x1FE6D0u: goto label_1fe6d0;
            case 0x1FE6E8u: goto label_1fe6e8;
            case 0x1FE724u: goto label_1fe724;
            case 0x1FE730u: goto label_1fe730;
            case 0x1FE770u: goto label_1fe770;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FE7A8u;
}

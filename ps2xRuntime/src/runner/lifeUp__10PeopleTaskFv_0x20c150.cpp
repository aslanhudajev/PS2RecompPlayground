#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: lifeUp__10PeopleTaskFv
// Address: 0x20c150 - 0x20c44c
void lifeUp__10PeopleTaskFv_0x20c150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("lifeUp__10PeopleTaskFv");


    ctx->pc = 0x20c150u;

    // 0x20c150: 0x27bdff90
    ctx->pc = 0x20c150u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x20c154: 0x7fbf0010
    ctx->pc = 0x20c154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x20c158: 0x7fb00000
    ctx->pc = 0x20c158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20c15c: 0x70808628
    ctx->pc = 0x20c15cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x20c160: 0x4bede37d
    ctx->pc = 0x20c160u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x20c164: 0x4bedeb7d
    ctx->pc = 0x20c164u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x20c168: 0x4bedf37d
    ctx->pc = 0x20c168u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x20c16c: 0x4bedfb7d
    ctx->pc = 0x20c16cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x20c170: 0x8c830034
    ctx->pc = 0x20c170u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x20c174: 0x24021871
    ctx->pc = 0x20c174u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6257));
    // 0x20c178: 0x10620032
    ctx->pc = 0x20C178u;
    {
        const bool branch_taken_0x20c178 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x20C17Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 448));
        if (branch_taken_0x20c178) {
            ctx->pc = 0x20C244u;
            goto label_20c244;
        }
    }
    ctx->pc = 0x20C180u;
    // 0x20c180: 0x24021870
    ctx->pc = 0x20c180u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6256));
    // 0x20c184: 0x10620003
    ctx->pc = 0x20C184u;
    {
        const bool branch_taken_0x20c184 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x20C188u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1648));
        if (branch_taken_0x20c184) {
            ctx->pc = 0x20C194u;
            goto label_20c194;
        }
    }
    ctx->pc = 0x20C18Cu;
    // 0x20c18c: 0x10000058
    ctx->pc = 0x20C18Cu;
    {
        const bool branch_taken_0x20c18c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C190u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 448));
        if (branch_taken_0x20c18c) {
            ctx->pc = 0x20C2F0u;
            goto label_20c2f0;
        }
    }
    ctx->pc = 0x20C194u;
label_20c194:
    // 0x20c194: 0xc06c038
    ctx->pc = 0x20C194u;
    SET_GPR_U32(ctx, 31, 0x20C19Cu);
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C19Cu; }
        else if (ctx->pc != 0x20C19Cu) { ctx->pc = 0x20C19Cu; }
    }
    if (ctx->pc != 0x20C19Cu) { return; }
    ctx->pc = 0x20C19Cu;
    // 0x20c19c: 0xc600070c
    ctx->pc = 0x20c19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20c1a0: 0x27a40040
    ctx->pc = 0x20c1a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x20c1a4: 0xe7a00040
    ctx->pc = 0x20c1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x20c1a8: 0xc6000710
    ctx->pc = 0x20c1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20c1ac: 0xe7a00044
    ctx->pc = 0x20c1acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x20c1b0: 0xc6000714
    ctx->pc = 0x20c1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20c1b4: 0xc06c1ca
    ctx->pc = 0x20C1B4u;
    SET_GPR_U32(ctx, 31, 0x20C1BCu);
    ctx->pc = 0x20C1B8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->pc = 0x1B0728u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0728_0x1b0728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C1BCu; }
        else if (ctx->pc != 0x20C1BCu) { ctx->pc = 0x20C1BCu; }
    }
    if (ctx->pc != 0x20C1BCu) { return; }
    ctx->pc = 0x20C1BCu;
    // 0x20c1bc: 0x3c02bf00
    ctx->pc = 0x20c1bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48896 << 16));
    // 0x20c1c0: 0x44827000
    ctx->pc = 0x20c1c0u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x20c1c4: 0x44806800
    ctx->pc = 0x20c1c4u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x20c1c8: 0x3c023f80
    ctx->pc = 0x20c1c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x20c1cc: 0x44826000
    ctx->pc = 0x20c1ccu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x20c1d0: 0xc06c202
    ctx->pc = 0x20C1D0u;
    SET_GPR_U32(ctx, 31, 0x20C1D8u);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C1D8u; }
        else if (ctx->pc != 0x20C1D8u) { ctx->pc = 0x20C1D8u; }
    }
    if (ctx->pc != 0x20C1D8u) { return; }
    ctx->pc = 0x20C1D8u;
    // 0x20c1d8: 0x8f848c48
    ctx->pc = 0x20c1d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x20c1dc: 0x8c830004
    ctx->pc = 0x20c1dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20c1e0: 0x31040
    ctx->pc = 0x20c1e0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x20c1e4: 0x431021
    ctx->pc = 0x20c1e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20c1e8: 0x21080
    ctx->pc = 0x20c1e8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20c1ec: 0x431021
    ctx->pc = 0x20c1ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20c1f0: 0x21100
    ctx->pc = 0x20c1f0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x20c1f4: 0x821021
    ctx->pc = 0x20c1f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20c1f8: 0xc06c06f
    ctx->pc = 0x20C1F8u;
    SET_GPR_U32(ctx, 31, 0x20C200u);
    ctx->pc = 0x20C1FCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1B01BCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B01BC_0x1b01bc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C200u; }
        else if (ctx->pc != 0x20C200u) { ctx->pc = 0x20C200u; }
    }
    if (ctx->pc != 0x20C200u) { return; }
    ctx->pc = 0x20C200u;
    // 0x20c200: 0xc06bfd2
    ctx->pc = 0x20C200u;
    SET_GPR_U32(ctx, 31, 0x20C208u);
    ctx->pc = 0x20C204u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1AFF48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFF48_0x1aff48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C208u; }
        else if (ctx->pc != 0x20C208u) { ctx->pc = 0x20C208u; }
    }
    if (ctx->pc != 0x20C208u) { return; }
    ctx->pc = 0x20C208u;
    // 0x20c208: 0x8f848c48
    ctx->pc = 0x20c208u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x20c20c: 0x8c830004
    ctx->pc = 0x20c20cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20c210: 0x31040
    ctx->pc = 0x20c210u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x20c214: 0x431021
    ctx->pc = 0x20c214u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20c218: 0x21080
    ctx->pc = 0x20c218u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20c21c: 0x431021
    ctx->pc = 0x20c21cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20c220: 0x21100
    ctx->pc = 0x20c220u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x20c224: 0x821821
    ctx->pc = 0x20c224u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20c228: 0x8c62009c
    ctx->pc = 0x20c228u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x20c22c: 0xafa2002c
    ctx->pc = 0x20c22cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x20c230: 0x8c6200a0
    ctx->pc = 0x20c230u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x20c234: 0xafa20030
    ctx->pc = 0x20c234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x20c238: 0x8c6200a4
    ctx->pc = 0x20c238u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x20c23c: 0x10000055
    ctx->pc = 0x20C23Cu;
    {
        const bool branch_taken_0x20c23c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C240u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        if (branch_taken_0x20c23c) {
            ctx->pc = 0x20C394u;
            goto label_20c394;
        }
    }
    ctx->pc = 0x20C244u;
label_20c244:
    // 0x20c244: 0xc06c038
    ctx->pc = 0x20C244u;
    SET_GPR_U32(ctx, 31, 0x20C24Cu);
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C24Cu; }
        else if (ctx->pc != 0x20C24Cu) { ctx->pc = 0x20C24Cu; }
    }
    if (ctx->pc != 0x20C24Cu) { return; }
    ctx->pc = 0x20C24Cu;
    // 0x20c24c: 0xc600025c
    ctx->pc = 0x20c24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20c250: 0x27a40050
    ctx->pc = 0x20c250u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x20c254: 0xe7a00050
    ctx->pc = 0x20c254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x20c258: 0xc6000260
    ctx->pc = 0x20c258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20c25c: 0xe7a00054
    ctx->pc = 0x20c25cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x20c260: 0xc6000264
    ctx->pc = 0x20c260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20c264: 0xc06c1ca
    ctx->pc = 0x20C264u;
    SET_GPR_U32(ctx, 31, 0x20C26Cu);
    ctx->pc = 0x20C268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->pc = 0x1B0728u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0728_0x1b0728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C26Cu; }
        else if (ctx->pc != 0x20C26Cu) { ctx->pc = 0x20C26Cu; }
    }
    if (ctx->pc != 0x20C26Cu) { return; }
    ctx->pc = 0x20C26Cu;
    // 0x20c26c: 0x3c023f80
    ctx->pc = 0x20c26cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x20c270: 0x44826000
    ctx->pc = 0x20c270u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x20c274: 0x3c024020
    ctx->pc = 0x20c274u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16416 << 16));
    // 0x20c278: 0x44827000
    ctx->pc = 0x20c278u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x20c27c: 0xc06c202
    ctx->pc = 0x20C27Cu;
    SET_GPR_U32(ctx, 31, 0x20C284u);
    ctx->pc = 0x20C280u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C284u; }
        else if (ctx->pc != 0x20C284u) { ctx->pc = 0x20C284u; }
    }
    if (ctx->pc != 0x20C284u) { return; }
    ctx->pc = 0x20C284u;
    // 0x20c284: 0x8f848c48
    ctx->pc = 0x20c284u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x20c288: 0x8c830004
    ctx->pc = 0x20c288u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20c28c: 0x31040
    ctx->pc = 0x20c28cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x20c290: 0x431021
    ctx->pc = 0x20c290u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20c294: 0x21080
    ctx->pc = 0x20c294u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20c298: 0x431021
    ctx->pc = 0x20c298u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20c29c: 0x21100
    ctx->pc = 0x20c29cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x20c2a0: 0x821021
    ctx->pc = 0x20c2a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20c2a4: 0xc06c06f
    ctx->pc = 0x20C2A4u;
    SET_GPR_U32(ctx, 31, 0x20C2ACu);
    ctx->pc = 0x20C2A8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1B01BCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B01BC_0x1b01bc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C2ACu; }
        else if (ctx->pc != 0x20C2ACu) { ctx->pc = 0x20C2ACu; }
    }
    if (ctx->pc != 0x20C2ACu) { return; }
    ctx->pc = 0x20C2ACu;
    // 0x20c2ac: 0xc06bfd2
    ctx->pc = 0x20C2ACu;
    SET_GPR_U32(ctx, 31, 0x20C2B4u);
    ctx->pc = 0x20C2B0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1AFF48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFF48_0x1aff48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C2B4u; }
        else if (ctx->pc != 0x20C2B4u) { ctx->pc = 0x20C2B4u; }
    }
    if (ctx->pc != 0x20C2B4u) { return; }
    ctx->pc = 0x20C2B4u;
    // 0x20c2b4: 0x8f848c48
    ctx->pc = 0x20c2b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x20c2b8: 0x8c830004
    ctx->pc = 0x20c2b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20c2bc: 0x31040
    ctx->pc = 0x20c2bcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x20c2c0: 0x431021
    ctx->pc = 0x20c2c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20c2c4: 0x21080
    ctx->pc = 0x20c2c4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20c2c8: 0x431021
    ctx->pc = 0x20c2c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20c2cc: 0x21100
    ctx->pc = 0x20c2ccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x20c2d0: 0x821821
    ctx->pc = 0x20c2d0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20c2d4: 0x8c62009c
    ctx->pc = 0x20c2d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x20c2d8: 0xafa2002c
    ctx->pc = 0x20c2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x20c2dc: 0x8c6200a0
    ctx->pc = 0x20c2dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x20c2e0: 0xafa20030
    ctx->pc = 0x20c2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x20c2e4: 0x8c6200a4
    ctx->pc = 0x20c2e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x20c2e8: 0x1000002a
    ctx->pc = 0x20C2E8u;
    {
        const bool branch_taken_0x20c2e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C2ECu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        if (branch_taken_0x20c2e8) {
            ctx->pc = 0x20C394u;
            goto label_20c394;
        }
    }
    ctx->pc = 0x20C2F0u;
label_20c2f0:
    // 0x20c2f0: 0xc06c038
    ctx->pc = 0x20C2F0u;
    SET_GPR_U32(ctx, 31, 0x20C2F8u);
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C2F8u; }
        else if (ctx->pc != 0x20C2F8u) { ctx->pc = 0x20C2F8u; }
    }
    if (ctx->pc != 0x20C2F8u) { return; }
    ctx->pc = 0x20C2F8u;
    // 0x20c2f8: 0xc600025c
    ctx->pc = 0x20c2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20c2fc: 0x27a40060
    ctx->pc = 0x20c2fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
    // 0x20c300: 0xe7a00060
    ctx->pc = 0x20c300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x20c304: 0xc6000260
    ctx->pc = 0x20c304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20c308: 0xe7a00064
    ctx->pc = 0x20c308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x20c30c: 0xc6000264
    ctx->pc = 0x20c30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20c310: 0xc06c1ca
    ctx->pc = 0x20C310u;
    SET_GPR_U32(ctx, 31, 0x20C318u);
    ctx->pc = 0x20C314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->pc = 0x1B0728u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0728_0x1b0728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C318u; }
        else if (ctx->pc != 0x20C318u) { ctx->pc = 0x20C318u; }
    }
    if (ctx->pc != 0x20C318u) { return; }
    ctx->pc = 0x20C318u;
    // 0x20c318: 0x44806000
    ctx->pc = 0x20c318u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x20c31c: 0x3c024020
    ctx->pc = 0x20c31cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16416 << 16));
    // 0x20c320: 0x44827000
    ctx->pc = 0x20c320u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x20c324: 0xc06c202
    ctx->pc = 0x20C324u;
    SET_GPR_U32(ctx, 31, 0x20C32Cu);
    ctx->pc = 0x20C328u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C32Cu; }
        else if (ctx->pc != 0x20C32Cu) { ctx->pc = 0x20C32Cu; }
    }
    if (ctx->pc != 0x20C32Cu) { return; }
    ctx->pc = 0x20C32Cu;
    // 0x20c32c: 0x8f848c48
    ctx->pc = 0x20c32cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x20c330: 0x8c830004
    ctx->pc = 0x20c330u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20c334: 0x31040
    ctx->pc = 0x20c334u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x20c338: 0x431021
    ctx->pc = 0x20c338u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20c33c: 0x21080
    ctx->pc = 0x20c33cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20c340: 0x431021
    ctx->pc = 0x20c340u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20c344: 0x21100
    ctx->pc = 0x20c344u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x20c348: 0x821021
    ctx->pc = 0x20c348u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20c34c: 0xc06c06f
    ctx->pc = 0x20C34Cu;
    SET_GPR_U32(ctx, 31, 0x20C354u);
    ctx->pc = 0x20C350u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1B01BCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B01BC_0x1b01bc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C354u; }
        else if (ctx->pc != 0x20C354u) { ctx->pc = 0x20C354u; }
    }
    if (ctx->pc != 0x20C354u) { return; }
    ctx->pc = 0x20C354u;
    // 0x20c354: 0xc06bfd2
    ctx->pc = 0x20C354u;
    SET_GPR_U32(ctx, 31, 0x20C35Cu);
    ctx->pc = 0x20C358u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1AFF48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFF48_0x1aff48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C35Cu; }
        else if (ctx->pc != 0x20C35Cu) { ctx->pc = 0x20C35Cu; }
    }
    if (ctx->pc != 0x20C35Cu) { return; }
    ctx->pc = 0x20C35Cu;
    // 0x20c35c: 0x8f848c48
    ctx->pc = 0x20c35cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x20c360: 0x8c830004
    ctx->pc = 0x20c360u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20c364: 0x31040
    ctx->pc = 0x20c364u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x20c368: 0x431021
    ctx->pc = 0x20c368u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20c36c: 0x21080
    ctx->pc = 0x20c36cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20c370: 0x431021
    ctx->pc = 0x20c370u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20c374: 0x21100
    ctx->pc = 0x20c374u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x20c378: 0x821821
    ctx->pc = 0x20c378u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20c37c: 0x8c62009c
    ctx->pc = 0x20c37cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x20c380: 0xafa2002c
    ctx->pc = 0x20c380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x20c384: 0x8c6200a0
    ctx->pc = 0x20c384u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x20c388: 0xafa20030
    ctx->pc = 0x20c388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x20c38c: 0x8c6200a4
    ctx->pc = 0x20c38cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x20c390: 0xafa20034
    ctx->pc = 0x20c390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_20c394:
    // 0x20c394: 0x4bff6b7e
    ctx->pc = 0x20c394u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x20c398: 0x4bfe6b7e
    ctx->pc = 0x20c398u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x20c39c: 0x4bfd6b7e
    ctx->pc = 0x20c39cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x20c3a0: 0x4bfc6b7e
    ctx->pc = 0x20c3a0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x20c3a4: 0x3c024000
    ctx->pc = 0x20c3a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x20c3a8: 0x44826000
    ctx->pc = 0x20c3a8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x20c3ac: 0x24040044
    ctx->pc = 0x20c3acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 68));
    // 0x20c3b0: 0xc0785e0
    ctx->pc = 0x20C3B0u;
    SET_GPR_U32(ctx, 31, 0x20C3B8u);
    ctx->pc = 0x20C3B4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1E1780u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_FcvEffectTask__Fi4ANPOf_0x1e1780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C3B8u; }
        else if (ctx->pc != 0x20C3B8u) { ctx->pc = 0x20C3B8u; }
    }
    if (ctx->pc != 0x20C3B8u) { return; }
    ctx->pc = 0x20C3B8u;
    // 0x20c3b8: 0x82030024
    ctx->pc = 0x20c3b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x20c3bc: 0x3c020051
    ctx->pc = 0x20c3bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x20c3c0: 0x244434f0
    ctx->pc = 0x20c3c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x20c3c4: 0x3c020002
    ctx->pc = 0x20c3c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x20c3c8: 0x3445002a
    ctx->pc = 0x20c3c8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 42));
    // 0x20c3cc: 0x70003e28
    ctx->pc = 0x20c3ccu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20c3d0: 0x33300
    ctx->pc = 0x20c3d0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 3), 12));
    // 0x20c3d4: 0xc086018
    ctx->pc = 0x20C3D4u;
    SET_GPR_U32(ctx, 31, 0x20C3DCu);
    ctx->pc = 0x20C3D8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C3DCu; }
        else if (ctx->pc != 0x20C3DCu) { ctx->pc = 0x20C3DCu; }
    }
    if (ctx->pc != 0x20C3DCu) { return; }
    ctx->pc = 0x20C3DCu;
    // 0x20c3dc: 0x82041e03
    ctx->pc = 0x20c3dcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7683)));
    // 0x20c3e0: 0x3c020050
    ctx->pc = 0x20c3e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x20c3e4: 0x2443dd30
    ctx->pc = 0x20c3e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294958384));
    // 0x20c3e8: 0x3c020050
    ctx->pc = 0x20c3e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x20c3ec: 0x2442dd60
    ctx->pc = 0x20c3ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958432));
    // 0x20c3f0: 0x42900
    ctx->pc = 0x20c3f0u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 4));
    // 0x20c3f4: 0xa43023
    ctx->pc = 0x20c3f4u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x20c3f8: 0x628c0
    ctx->pc = 0x20c3f8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 3));
    // 0x20c3fc: 0xa62823
    ctx->pc = 0x20c3fcu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x20c400: 0x528c0
    ctx->pc = 0x20c400u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 3));
    // 0x20c404: 0x651821
    ctx->pc = 0x20c404u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20c408: 0x451021
    ctx->pc = 0x20c408u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20c40c: 0x8c630000
    ctx->pc = 0x20c40cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20c410: 0x8c420000
    ctx->pc = 0x20c410u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20c414: 0x62102a
    ctx->pc = 0x20c414u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x20c418: 0x38420001
    ctx->pc = 0x20c418u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x20c41c: 0x10400005
    ctx->pc = 0x20C41Cu;
    {
        const bool branch_taken_0x20c41c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C420u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x20c41c) {
            ctx->pc = 0x20C434u;
            goto label_20c434;
        }
    }
    ctx->pc = 0x20C424u;
    // 0x20c424: 0xc084d14
    ctx->pc = 0x20C424u;
    SET_GPR_U32(ctx, 31, 0x20C42Cu);
    ctx->pc = 0x20C428u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1000));
    ctx->pc = 0x213450u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddPlayerScore__Fii_0x213450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C42Cu; }
        else if (ctx->pc != 0x20C42Cu) { ctx->pc = 0x20C42Cu; }
    }
    if (ctx->pc != 0x20C42Cu) { return; }
    ctx->pc = 0x20C42Cu;
    // 0x20c42c: 0x10000004
    ctx->pc = 0x20C42Cu;
    {
        const bool branch_taken_0x20c42c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C430u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x20c42c) {
            ctx->pc = 0x20C440u;
            goto label_20c440;
        }
    }
    ctx->pc = 0x20C434u;
label_20c434:
    // 0x20c434: 0xc24c344
    ctx->pc = 0x20C434u;
    SET_GPR_U32(ctx, 31, 0x20C43Cu);
    ctx->pc = 0x930D10u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_LifeUpEffectTask__Fi11tagNLpoint3_0x930d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C43Cu; }
        else if (ctx->pc != 0x20C43Cu) { ctx->pc = 0x20C43Cu; }
    }
    if (ctx->pc != 0x20C43Cu) { return; }
    ctx->pc = 0x20C43Cu;
    // 0x20c43c: 0x7bbf0010
    ctx->pc = 0x20c43cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20c440:
    // 0x20c440: 0x7bb00000
    ctx->pc = 0x20c440u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c444: 0x3e00008
    ctx->pc = 0x20C444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C448u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20C194u: goto label_20c194;
            case 0x20C244u: goto label_20c244;
            case 0x20C2F0u: goto label_20c2f0;
            case 0x20C394u: goto label_20c394;
            case 0x20C434u: goto label_20c434;
            case 0x20C440u: goto label_20c440;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20C44Cu;
}

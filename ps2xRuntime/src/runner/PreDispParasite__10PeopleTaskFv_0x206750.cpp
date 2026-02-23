#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PreDispParasite__10PeopleTaskFv
// Address: 0x206750 - 0x206e24
void PreDispParasite__10PeopleTaskFv_0x206750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PreDispParasite__10PeopleTaskFv");


    ctx->pc = 0x206750u;

label_206750:
    // 0x206750: 0x27bdffb0
    ctx->pc = 0x206750u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_206754:
    // 0x206754: 0x7fbf0020
    ctx->pc = 0x206754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_206758:
    // 0x206758: 0x7fb10010
    ctx->pc = 0x206758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20675c:
    // 0x20675c: 0x7fb00000
    ctx->pc = 0x20675cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_206760:
    // 0x206760: 0xc082a78
label_206764:
    if (ctx->pc == 0x206764u) {
        ctx->pc = 0x206764u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        ctx->pc = 0x206768u;
        goto label_206768;
    }
    ctx->pc = 0x206760u;
    SET_GPR_U32(ctx, 31, 0x206768u);
    ctx->pc = 0x206764u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20A9E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        checkParaDamage__10PeopleTaskFv_0x20a9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206768u; }
        else if (ctx->pc != 0x206768u) { ctx->pc = 0x206768u; }
    }
    if (ctx->pc != 0x206768u) { return; }
    ctx->pc = 0x206768u;
label_206768:
    // 0x206768: 0x8e031d74
    ctx->pc = 0x206768u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 7540)));
label_20676c:
    // 0x20676c: 0x30620001
    ctx->pc = 0x20676cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
label_206770:
    // 0x206770: 0x10400005
label_206774:
    if (ctx->pc == 0x206774u) {
        ctx->pc = 0x206774u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x206778u;
        goto label_206778;
    }
    ctx->pc = 0x206770u;
    {
        const bool branch_taken_0x206770 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x206774u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x206770) {
            ctx->pc = 0x206788u;
            goto label_206788;
        }
    }
    ctx->pc = 0x206778u;
label_206778:
    // 0x206778: 0xc082d2c
label_20677c:
    if (ctx->pc == 0x20677Cu) {
        ctx->pc = 0x20677Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x206780u;
        goto label_206780;
    }
    ctx->pc = 0x206778u;
    SET_GPR_U32(ctx, 31, 0x206780u);
    ctx->pc = 0x20677Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20B4B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        changeSurvive__10PeopleTaskFv_0x20b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206780u; }
        else if (ctx->pc != 0x206780u) { ctx->pc = 0x206780u; }
    }
    if (ctx->pc != 0x206780u) { return; }
    ctx->pc = 0x206780u;
label_206780:
    // 0x206780: 0x1000018b
label_206784:
    if (ctx->pc == 0x206784u) {
        ctx->pc = 0x206784u;
        { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
        ctx->pc = 0x206788u;
        goto label_206788;
    }
    ctx->pc = 0x206780u;
    {
        const bool branch_taken_0x206780 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x206784u;
        { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
        if (branch_taken_0x206780) {
            ctx->pc = 0x206DB0u;
            goto label_206db0;
        }
    }
    ctx->pc = 0x206788u;
label_206788:
    // 0x206788: 0x10400005
label_20678c:
    if (ctx->pc == 0x20678Cu) {
        ctx->pc = 0x20678Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x206790u;
        goto label_206790;
    }
    ctx->pc = 0x206788u;
    {
        const bool branch_taken_0x206788 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20678Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x206788) {
            ctx->pc = 0x2067A0u;
            goto label_2067a0;
        }
    }
    ctx->pc = 0x206790u;
label_206790:
    // 0x206790: 0xc082d80
label_206794:
    if (ctx->pc == 0x206794u) {
        ctx->pc = 0x206798u;
        goto label_206798;
    }
    ctx->pc = 0x206790u;
    SET_GPR_U32(ctx, 31, 0x206798u);
    ctx->pc = 0x20B600u;
    {
        const uint32_t __entryPc = ctx->pc;
        changeVampire__10PeopleTaskFv_0x20b600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206798u; }
        else if (ctx->pc != 0x206798u) { ctx->pc = 0x206798u; }
    }
    if (ctx->pc != 0x206798u) { return; }
    ctx->pc = 0x206798u;
label_206798:
    // 0x206798: 0x10000184
label_20679c:
    if (ctx->pc == 0x20679Cu) {
        ctx->pc = 0x2067A0u;
        goto label_2067a0;
    }
    ctx->pc = 0x206798u;
    {
        const bool branch_taken_0x206798 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x206798) {
            ctx->pc = 0x206DACu;
            goto label_206dac;
        }
    }
    ctx->pc = 0x2067A0u;
label_2067a0:
    // 0x2067a0: 0x8e031da4
    ctx->pc = 0x2067a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 7588)));
label_2067a4:
    // 0x2067a4: 0x24020013
    ctx->pc = 0x2067a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 19));
label_2067a8:
    // 0x2067a8: 0x14620180
label_2067ac:
    if (ctx->pc == 0x2067ACu) {
        ctx->pc = 0x2067B0u;
        goto label_2067b0;
    }
    ctx->pc = 0x2067A8u;
    {
        const bool branch_taken_0x2067a8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2067a8) {
            ctx->pc = 0x206DACu;
            goto label_206dac;
        }
    }
    ctx->pc = 0x2067B0u;
label_2067b0:
    // 0x2067b0: 0x8e021db8
    ctx->pc = 0x2067b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 7608)));
label_2067b4:
    // 0x2067b4: 0x14400034
label_2067b8:
    if (ctx->pc == 0x2067B8u) {
        ctx->pc = 0x2067BCu;
        goto label_2067bc;
    }
    ctx->pc = 0x2067B4u;
    {
        const bool branch_taken_0x2067b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2067b4) {
            ctx->pc = 0x206888u;
            goto label_206888;
        }
    }
    ctx->pc = 0x2067BCu;
label_2067bc:
    // 0x2067bc: 0xc6011df8
    ctx->pc = 0x2067bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2067c0:
    // 0x2067c0: 0xc6001df0
    ctx->pc = 0x2067c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2067c4:
    // 0x2067c4: 0x46000834
    ctx->pc = 0x2067c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2067c8:
    // 0x2067c8: 0x0
    ctx->pc = 0x2067c8u;
    // NOP
label_2067cc:
    // 0x2067cc: 0x4500002e
label_2067d0:
    if (ctx->pc == 0x2067D0u) {
        ctx->pc = 0x2067D4u;
        goto label_2067d4;
    }
    ctx->pc = 0x2067CCu;
    {
        const bool branch_taken_0x2067cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2067cc) {
            ctx->pc = 0x206888u;
            goto label_206888;
        }
    }
    ctx->pc = 0x2067D4u;
label_2067d4:
    // 0x2067d4: 0x8e031db0
    ctx->pc = 0x2067d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 7600)));
label_2067d8:
    // 0x2067d8: 0x3c020027
    ctx->pc = 0x2067d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
label_2067dc:
    // 0x2067dc: 0x24422a30
    ctx->pc = 0x2067dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10800));
label_2067e0:
    // 0x2067e0: 0x72002628
    ctx->pc = 0x2067e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_2067e4:
    // 0x2067e4: 0x318c0
    ctx->pc = 0x2067e4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
label_2067e8:
    // 0x2067e8: 0xc082938
label_2067ec:
    if (ctx->pc == 0x2067ECu) {
        ctx->pc = 0x2067ECu;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2067F0u;
        goto label_2067f0;
    }
    ctx->pc = 0x2067E8u;
    SET_GPR_U32(ctx, 31, 0x2067F0u);
    ctx->pc = 0x2067ECu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x20A4E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setAtcPlID__10PeopleTaskFPi_0x20a4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2067F0u; }
        else if (ctx->pc != 0x2067F0u) { ctx->pc = 0x2067F0u; }
    }
    if (ctx->pc != 0x2067F0u) { return; }
    ctx->pc = 0x2067F0u;
label_2067f0:
    // 0x2067f0: 0x82031e00
    ctx->pc = 0x2067f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7680)));
label_2067f4:
    // 0x2067f4: 0x2402ffff
    ctx->pc = 0x2067f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2067f8:
    // 0x2067f8: 0x1062000a
label_2067fc:
    if (ctx->pc == 0x2067FCu) {
        ctx->pc = 0x2067FCu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x206800u;
        goto label_206800;
    }
    ctx->pc = 0x2067F8u;
    {
        const bool branch_taken_0x2067f8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2067FCu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2067f8) {
            ctx->pc = 0x206824u;
            goto label_206824;
        }
    }
    ctx->pc = 0x206800u;
label_206800:
    // 0x206800: 0x8e03000c
    ctx->pc = 0x206800u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_206804:
    // 0x206804: 0x3c021000
    ctx->pc = 0x206804u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
label_206808:
    // 0x206808: 0x72002628
    ctx->pc = 0x206808u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_20680c:
    // 0x20680c: 0x621025
    ctx->pc = 0x20680cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_206810:
    // 0x206810: 0xc083114
label_206814:
    if (ctx->pc == 0x206814u) {
        ctx->pc = 0x206814u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x206818u;
        goto label_206818;
    }
    ctx->pc = 0x206810u;
    SET_GPR_U32(ctx, 31, 0x206818u);
    ctx->pc = 0x206814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x20C450u;
    {
        const uint32_t __entryPc = ctx->pc;
        groan__10PeopleTaskFv_0x20c450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206818u; }
        else if (ctx->pc != 0x206818u) { ctx->pc = 0x206818u; }
    }
    if (ctx->pc != 0x206818u) { return; }
    ctx->pc = 0x206818u;
label_206818:
    // 0x206818: 0x24020002
    ctx->pc = 0x206818u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_20681c:
    // 0x20681c: 0x1000001a
label_206820:
    if (ctx->pc == 0x206820u) {
        ctx->pc = 0x206820u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 7608), GPR_U32(ctx, 2));
        ctx->pc = 0x206824u;
        goto label_206824;
    }
    ctx->pc = 0x20681Cu;
    {
        const bool branch_taken_0x20681c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x206820u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 7608), GPR_U32(ctx, 2));
        if (branch_taken_0x20681c) {
            ctx->pc = 0x206888u;
            goto label_206888;
        }
    }
    ctx->pc = 0x206824u;
label_206824:
    // 0x206824: 0x12000002
label_206828:
    if (ctx->pc == 0x206828u) {
        ctx->pc = 0x20682Cu;
        goto label_20682c;
    }
    ctx->pc = 0x206824u;
    {
        const bool branch_taken_0x206824 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x206824) {
            ctx->pc = 0x206830u;
            goto label_206830;
        }
    }
    ctx->pc = 0x20682Cu;
label_20682c:
    // 0x20682c: 0x26110030
    ctx->pc = 0x20682cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 48));
label_206830:
    // 0x206830: 0x8e031db0
    ctx->pc = 0x206830u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 7600)));
label_206834:
    // 0x206834: 0x3c020027
    ctx->pc = 0x206834u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
label_206838:
    // 0x206838: 0x24422978
    ctx->pc = 0x206838u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10616));
label_20683c:
    // 0x20683c: 0x31880
    ctx->pc = 0x20683cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_206840:
    // 0x206840: 0x431021
    ctx->pc = 0x206840u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_206844:
    // 0x206844: 0x8c450000
    ctx->pc = 0x206844u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_206848:
    // 0x206848: 0xc0829ac
label_20684c:
    if (ctx->pc == 0x20684Cu) {
        ctx->pc = 0x20684Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x206850u;
        goto label_206850;
    }
    ctx->pc = 0x206848u;
    SET_GPR_U32(ctx, 31, 0x206850u);
    ctx->pc = 0x20684Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20A6B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motionSelect__10PeopleTaskFPi_0x20a6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206850u; }
        else if (ctx->pc != 0x206850u) { ctx->pc = 0x206850u; }
    }
    if (ctx->pc != 0x206850u) { return; }
    ctx->pc = 0x206850u;
label_206850:
    // 0x206850: 0x2343c
    ctx->pc = 0x206850u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
label_206854:
    // 0x206854: 0x3c02004a
    ctx->pc = 0x206854u;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
label_206858:
    // 0x206858: 0x6343f
    ctx->pc = 0x206858u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_20685c:
    // 0x20685c: 0x72202e28
    ctx->pc = 0x20685cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_206860:
    // 0x206860: 0x2444e8e0
    ctx->pc = 0x206860u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961376));
label_206864:
    // 0x206864: 0x70003e28
    ctx->pc = 0x206864u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_206868:
    // 0x206868: 0xc07eabc
label_20686c:
    if (ctx->pc == 0x20686Cu) {
        ctx->pc = 0x20686Cu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x206870u;
        goto label_206870;
    }
    ctx->pc = 0x206868u;
    SET_GPR_U32(ctx, 31, 0x206870u);
    ctx->pc = 0x20686Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x1FAAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motSupplement__12BodyMgrClassFP10MotObjTaskiii_0x1faaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206870u; }
        else if (ctx->pc != 0x206870u) { ctx->pc = 0x206870u; }
    }
    if (ctx->pc != 0x206870u) { return; }
    ctx->pc = 0x206870u;
label_206870:
    // 0x206870: 0x3c024000
    ctx->pc = 0x206870u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
label_206874:
    // 0x206874: 0xae021d78
    ctx->pc = 0x206874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7544), GPR_U32(ctx, 2));
label_206878:
    // 0x206878: 0xc08318c
label_20687c:
    if (ctx->pc == 0x20687Cu) {
        ctx->pc = 0x20687Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x206880u;
        goto label_206880;
    }
    ctx->pc = 0x206878u;
    SET_GPR_U32(ctx, 31, 0x206880u);
    ctx->pc = 0x20687Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20C630u;
    {
        const uint32_t __entryPc = ctx->pc;
        helpMe__10PeopleTaskFv_0x20c630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206880u; }
        else if (ctx->pc != 0x206880u) { ctx->pc = 0x206880u; }
    }
    if (ctx->pc != 0x206880u) { return; }
    ctx->pc = 0x206880u;
label_206880:
    // 0x206880: 0x24020001
    ctx->pc = 0x206880u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_206884:
    // 0x206884: 0xae021db8
    ctx->pc = 0x206884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7608), GPR_U32(ctx, 2));
label_206888:
    // 0x206888: 0x8e021db8
    ctx->pc = 0x206888u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 7608)));
label_20688c:
    // 0x20688c: 0x2c410007
    ctx->pc = 0x20688cu;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), 7));
label_206890:
    // 0x206890: 0x10200146
label_206894:
    if (ctx->pc == 0x206894u) {
        ctx->pc = 0x206894u;
        SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
        ctx->pc = 0x206898u;
        goto label_206898;
    }
    ctx->pc = 0x206890u;
    {
        const bool branch_taken_0x206890 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x206894u;
        SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
        if (branch_taken_0x206890) {
            ctx->pc = 0x206DACu;
            goto label_206dac;
        }
    }
    ctx->pc = 0x206898u;
label_206898:
    // 0x206898: 0x21080
    ctx->pc = 0x206898u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_20689c:
    // 0x20689c: 0x24630380
    ctx->pc = 0x20689cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 896));
label_2068a0:
    // 0x2068a0: 0x431021
    ctx->pc = 0x2068a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2068a4:
    // 0x2068a4: 0x8c420000
    ctx->pc = 0x2068a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2068a8:
    // 0x2068a8: 0x400008
label_2068ac:
    if (ctx->pc == 0x2068ACu) {
        ctx->pc = 0x2068B0u;
        goto label_2068b0;
    }
    ctx->pc = 0x2068A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x206750u: goto label_206750;
            case 0x206754u: goto label_206754;
            case 0x206758u: goto label_206758;
            case 0x20675Cu: goto label_20675c;
            case 0x206760u: goto label_206760;
            case 0x206764u: goto label_206764;
            case 0x206768u: goto label_206768;
            case 0x20676Cu: goto label_20676c;
            case 0x206770u: goto label_206770;
            case 0x206774u: goto label_206774;
            case 0x206778u: goto label_206778;
            case 0x20677Cu: goto label_20677c;
            case 0x206780u: goto label_206780;
            case 0x206784u: goto label_206784;
            case 0x206788u: goto label_206788;
            case 0x20678Cu: goto label_20678c;
            case 0x206790u: goto label_206790;
            case 0x206794u: goto label_206794;
            case 0x206798u: goto label_206798;
            case 0x20679Cu: goto label_20679c;
            case 0x2067A0u: goto label_2067a0;
            case 0x2067A4u: goto label_2067a4;
            case 0x2067A8u: goto label_2067a8;
            case 0x2067ACu: goto label_2067ac;
            case 0x2067B0u: goto label_2067b0;
            case 0x2067B4u: goto label_2067b4;
            case 0x2067B8u: goto label_2067b8;
            case 0x2067BCu: goto label_2067bc;
            case 0x2067C0u: goto label_2067c0;
            case 0x2067C4u: goto label_2067c4;
            case 0x2067C8u: goto label_2067c8;
            case 0x2067CCu: goto label_2067cc;
            case 0x2067D0u: goto label_2067d0;
            case 0x2067D4u: goto label_2067d4;
            case 0x2067D8u: goto label_2067d8;
            case 0x2067DCu: goto label_2067dc;
            case 0x2067E0u: goto label_2067e0;
            case 0x2067E4u: goto label_2067e4;
            case 0x2067E8u: goto label_2067e8;
            case 0x2067ECu: goto label_2067ec;
            case 0x2067F0u: goto label_2067f0;
            case 0x2067F4u: goto label_2067f4;
            case 0x2067F8u: goto label_2067f8;
            case 0x2067FCu: goto label_2067fc;
            case 0x206800u: goto label_206800;
            case 0x206804u: goto label_206804;
            case 0x206808u: goto label_206808;
            case 0x20680Cu: goto label_20680c;
            case 0x206810u: goto label_206810;
            case 0x206814u: goto label_206814;
            case 0x206818u: goto label_206818;
            case 0x20681Cu: goto label_20681c;
            case 0x206820u: goto label_206820;
            case 0x206824u: goto label_206824;
            case 0x206828u: goto label_206828;
            case 0x20682Cu: goto label_20682c;
            case 0x206830u: goto label_206830;
            case 0x206834u: goto label_206834;
            case 0x206838u: goto label_206838;
            case 0x20683Cu: goto label_20683c;
            case 0x206840u: goto label_206840;
            case 0x206844u: goto label_206844;
            case 0x206848u: goto label_206848;
            case 0x20684Cu: goto label_20684c;
            case 0x206850u: goto label_206850;
            case 0x206854u: goto label_206854;
            case 0x206858u: goto label_206858;
            case 0x20685Cu: goto label_20685c;
            case 0x206860u: goto label_206860;
            case 0x206864u: goto label_206864;
            case 0x206868u: goto label_206868;
            case 0x20686Cu: goto label_20686c;
            case 0x206870u: goto label_206870;
            case 0x206874u: goto label_206874;
            case 0x206878u: goto label_206878;
            case 0x20687Cu: goto label_20687c;
            case 0x206880u: goto label_206880;
            case 0x206884u: goto label_206884;
            case 0x206888u: goto label_206888;
            case 0x20688Cu: goto label_20688c;
            case 0x206890u: goto label_206890;
            case 0x206894u: goto label_206894;
            case 0x206898u: goto label_206898;
            case 0x20689Cu: goto label_20689c;
            case 0x2068A0u: goto label_2068a0;
            case 0x2068A4u: goto label_2068a4;
            case 0x2068A8u: goto label_2068a8;
            case 0x2068ACu: goto label_2068ac;
            case 0x2068B0u: goto label_2068b0;
            case 0x2068B4u: goto label_2068b4;
            case 0x2068B8u: goto label_2068b8;
            case 0x2068BCu: goto label_2068bc;
            case 0x2068C0u: goto label_2068c0;
            case 0x2068C4u: goto label_2068c4;
            case 0x2068C8u: goto label_2068c8;
            case 0x2068CCu: goto label_2068cc;
            case 0x2068D0u: goto label_2068d0;
            case 0x2068D4u: goto label_2068d4;
            case 0x2068D8u: goto label_2068d8;
            case 0x2068DCu: goto label_2068dc;
            case 0x2068E0u: goto label_2068e0;
            case 0x2068E4u: goto label_2068e4;
            case 0x2068E8u: goto label_2068e8;
            case 0x2068ECu: goto label_2068ec;
            case 0x2068F0u: goto label_2068f0;
            case 0x2068F4u: goto label_2068f4;
            case 0x2068F8u: goto label_2068f8;
            case 0x2068FCu: goto label_2068fc;
            case 0x206900u: goto label_206900;
            case 0x206904u: goto label_206904;
            case 0x206908u: goto label_206908;
            case 0x20690Cu: goto label_20690c;
            case 0x206910u: goto label_206910;
            case 0x206914u: goto label_206914;
            case 0x206918u: goto label_206918;
            case 0x20691Cu: goto label_20691c;
            case 0x206920u: goto label_206920;
            case 0x206924u: goto label_206924;
            case 0x206928u: goto label_206928;
            case 0x20692Cu: goto label_20692c;
            case 0x206930u: goto label_206930;
            case 0x206934u: goto label_206934;
            case 0x206938u: goto label_206938;
            case 0x20693Cu: goto label_20693c;
            case 0x206940u: goto label_206940;
            case 0x206944u: goto label_206944;
            case 0x206948u: goto label_206948;
            case 0x20694Cu: goto label_20694c;
            case 0x206950u: goto label_206950;
            case 0x206954u: goto label_206954;
            case 0x206958u: goto label_206958;
            case 0x20695Cu: goto label_20695c;
            case 0x206960u: goto label_206960;
            case 0x206964u: goto label_206964;
            case 0x206968u: goto label_206968;
            case 0x20696Cu: goto label_20696c;
            case 0x206970u: goto label_206970;
            case 0x206974u: goto label_206974;
            case 0x206978u: goto label_206978;
            case 0x20697Cu: goto label_20697c;
            case 0x206980u: goto label_206980;
            case 0x206984u: goto label_206984;
            case 0x206988u: goto label_206988;
            case 0x20698Cu: goto label_20698c;
            case 0x206990u: goto label_206990;
            case 0x206994u: goto label_206994;
            case 0x206998u: goto label_206998;
            case 0x20699Cu: goto label_20699c;
            case 0x2069A0u: goto label_2069a0;
            case 0x2069A4u: goto label_2069a4;
            case 0x2069A8u: goto label_2069a8;
            case 0x2069ACu: goto label_2069ac;
            case 0x2069B0u: goto label_2069b0;
            case 0x2069B4u: goto label_2069b4;
            case 0x2069B8u: goto label_2069b8;
            case 0x2069BCu: goto label_2069bc;
            case 0x2069C0u: goto label_2069c0;
            case 0x2069C4u: goto label_2069c4;
            case 0x2069C8u: goto label_2069c8;
            case 0x2069CCu: goto label_2069cc;
            case 0x2069D0u: goto label_2069d0;
            case 0x2069D4u: goto label_2069d4;
            case 0x2069D8u: goto label_2069d8;
            case 0x2069DCu: goto label_2069dc;
            case 0x2069E0u: goto label_2069e0;
            case 0x2069E4u: goto label_2069e4;
            case 0x2069E8u: goto label_2069e8;
            case 0x2069ECu: goto label_2069ec;
            case 0x2069F0u: goto label_2069f0;
            case 0x2069F4u: goto label_2069f4;
            case 0x2069F8u: goto label_2069f8;
            case 0x2069FCu: goto label_2069fc;
            case 0x206A00u: goto label_206a00;
            case 0x206A04u: goto label_206a04;
            case 0x206A08u: goto label_206a08;
            case 0x206A0Cu: goto label_206a0c;
            case 0x206A10u: goto label_206a10;
            case 0x206A14u: goto label_206a14;
            case 0x206A18u: goto label_206a18;
            case 0x206A1Cu: goto label_206a1c;
            case 0x206A20u: goto label_206a20;
            case 0x206A24u: goto label_206a24;
            case 0x206A28u: goto label_206a28;
            case 0x206A2Cu: goto label_206a2c;
            case 0x206A30u: goto label_206a30;
            case 0x206A34u: goto label_206a34;
            case 0x206A38u: goto label_206a38;
            case 0x206A3Cu: goto label_206a3c;
            case 0x206A40u: goto label_206a40;
            case 0x206A44u: goto label_206a44;
            case 0x206A48u: goto label_206a48;
            case 0x206A4Cu: goto label_206a4c;
            case 0x206A50u: goto label_206a50;
            case 0x206A54u: goto label_206a54;
            case 0x206A58u: goto label_206a58;
            case 0x206A5Cu: goto label_206a5c;
            case 0x206A60u: goto label_206a60;
            case 0x206A64u: goto label_206a64;
            case 0x206A68u: goto label_206a68;
            case 0x206A6Cu: goto label_206a6c;
            case 0x206A70u: goto label_206a70;
            case 0x206A74u: goto label_206a74;
            case 0x206A78u: goto label_206a78;
            case 0x206A7Cu: goto label_206a7c;
            case 0x206A80u: goto label_206a80;
            case 0x206A84u: goto label_206a84;
            case 0x206A88u: goto label_206a88;
            case 0x206A8Cu: goto label_206a8c;
            case 0x206A90u: goto label_206a90;
            case 0x206A94u: goto label_206a94;
            case 0x206A98u: goto label_206a98;
            case 0x206A9Cu: goto label_206a9c;
            case 0x206AA0u: goto label_206aa0;
            case 0x206AA4u: goto label_206aa4;
            case 0x206AA8u: goto label_206aa8;
            case 0x206AACu: goto label_206aac;
            case 0x206AB0u: goto label_206ab0;
            case 0x206AB4u: goto label_206ab4;
            case 0x206AB8u: goto label_206ab8;
            case 0x206ABCu: goto label_206abc;
            case 0x206AC0u: goto label_206ac0;
            case 0x206AC4u: goto label_206ac4;
            case 0x206AC8u: goto label_206ac8;
            case 0x206ACCu: goto label_206acc;
            case 0x206AD0u: goto label_206ad0;
            case 0x206AD4u: goto label_206ad4;
            case 0x206AD8u: goto label_206ad8;
            case 0x206ADCu: goto label_206adc;
            case 0x206AE0u: goto label_206ae0;
            case 0x206AE4u: goto label_206ae4;
            case 0x206AE8u: goto label_206ae8;
            case 0x206AECu: goto label_206aec;
            case 0x206AF0u: goto label_206af0;
            case 0x206AF4u: goto label_206af4;
            case 0x206AF8u: goto label_206af8;
            case 0x206AFCu: goto label_206afc;
            case 0x206B00u: goto label_206b00;
            case 0x206B04u: goto label_206b04;
            case 0x206B08u: goto label_206b08;
            case 0x206B0Cu: goto label_206b0c;
            case 0x206B10u: goto label_206b10;
            case 0x206B14u: goto label_206b14;
            case 0x206B18u: goto label_206b18;
            case 0x206B1Cu: goto label_206b1c;
            case 0x206B20u: goto label_206b20;
            case 0x206B24u: goto label_206b24;
            case 0x206B28u: goto label_206b28;
            case 0x206B2Cu: goto label_206b2c;
            case 0x206B30u: goto label_206b30;
            case 0x206B34u: goto label_206b34;
            case 0x206B38u: goto label_206b38;
            case 0x206B3Cu: goto label_206b3c;
            case 0x206B40u: goto label_206b40;
            case 0x206B44u: goto label_206b44;
            case 0x206B48u: goto label_206b48;
            case 0x206B4Cu: goto label_206b4c;
            case 0x206B50u: goto label_206b50;
            case 0x206B54u: goto label_206b54;
            case 0x206B58u: goto label_206b58;
            case 0x206B5Cu: goto label_206b5c;
            case 0x206B60u: goto label_206b60;
            case 0x206B64u: goto label_206b64;
            case 0x206B68u: goto label_206b68;
            case 0x206B6Cu: goto label_206b6c;
            case 0x206B70u: goto label_206b70;
            case 0x206B74u: goto label_206b74;
            case 0x206B78u: goto label_206b78;
            case 0x206B7Cu: goto label_206b7c;
            case 0x206B80u: goto label_206b80;
            case 0x206B84u: goto label_206b84;
            case 0x206B88u: goto label_206b88;
            case 0x206B8Cu: goto label_206b8c;
            case 0x206B90u: goto label_206b90;
            case 0x206B94u: goto label_206b94;
            case 0x206B98u: goto label_206b98;
            case 0x206B9Cu: goto label_206b9c;
            case 0x206BA0u: goto label_206ba0;
            case 0x206BA4u: goto label_206ba4;
            case 0x206BA8u: goto label_206ba8;
            case 0x206BACu: goto label_206bac;
            case 0x206BB0u: goto label_206bb0;
            case 0x206BB4u: goto label_206bb4;
            case 0x206BB8u: goto label_206bb8;
            case 0x206BBCu: goto label_206bbc;
            case 0x206BC0u: goto label_206bc0;
            case 0x206BC4u: goto label_206bc4;
            case 0x206BC8u: goto label_206bc8;
            case 0x206BCCu: goto label_206bcc;
            case 0x206BD0u: goto label_206bd0;
            case 0x206BD4u: goto label_206bd4;
            case 0x206BD8u: goto label_206bd8;
            case 0x206BDCu: goto label_206bdc;
            case 0x206BE0u: goto label_206be0;
            case 0x206BE4u: goto label_206be4;
            case 0x206BE8u: goto label_206be8;
            case 0x206BECu: goto label_206bec;
            case 0x206BF0u: goto label_206bf0;
            case 0x206BF4u: goto label_206bf4;
            case 0x206BF8u: goto label_206bf8;
            case 0x206BFCu: goto label_206bfc;
            case 0x206C00u: goto label_206c00;
            case 0x206C04u: goto label_206c04;
            case 0x206C08u: goto label_206c08;
            case 0x206C0Cu: goto label_206c0c;
            case 0x206C10u: goto label_206c10;
            case 0x206C14u: goto label_206c14;
            case 0x206C18u: goto label_206c18;
            case 0x206C1Cu: goto label_206c1c;
            case 0x206C20u: goto label_206c20;
            case 0x206C24u: goto label_206c24;
            case 0x206C28u: goto label_206c28;
            case 0x206C2Cu: goto label_206c2c;
            case 0x206C30u: goto label_206c30;
            case 0x206C34u: goto label_206c34;
            case 0x206C38u: goto label_206c38;
            case 0x206C3Cu: goto label_206c3c;
            case 0x206C40u: goto label_206c40;
            case 0x206C44u: goto label_206c44;
            case 0x206C48u: goto label_206c48;
            case 0x206C4Cu: goto label_206c4c;
            case 0x206C50u: goto label_206c50;
            case 0x206C54u: goto label_206c54;
            case 0x206C58u: goto label_206c58;
            case 0x206C5Cu: goto label_206c5c;
            case 0x206C60u: goto label_206c60;
            case 0x206C64u: goto label_206c64;
            case 0x206C68u: goto label_206c68;
            case 0x206C6Cu: goto label_206c6c;
            case 0x206C70u: goto label_206c70;
            case 0x206C74u: goto label_206c74;
            case 0x206C78u: goto label_206c78;
            case 0x206C7Cu: goto label_206c7c;
            case 0x206C80u: goto label_206c80;
            case 0x206C84u: goto label_206c84;
            case 0x206C88u: goto label_206c88;
            case 0x206C8Cu: goto label_206c8c;
            case 0x206C90u: goto label_206c90;
            case 0x206C94u: goto label_206c94;
            case 0x206C98u: goto label_206c98;
            case 0x206C9Cu: goto label_206c9c;
            case 0x206CA0u: goto label_206ca0;
            case 0x206CA4u: goto label_206ca4;
            case 0x206CA8u: goto label_206ca8;
            case 0x206CACu: goto label_206cac;
            case 0x206CB0u: goto label_206cb0;
            case 0x206CB4u: goto label_206cb4;
            case 0x206CB8u: goto label_206cb8;
            case 0x206CBCu: goto label_206cbc;
            case 0x206CC0u: goto label_206cc0;
            case 0x206CC4u: goto label_206cc4;
            case 0x206CC8u: goto label_206cc8;
            case 0x206CCCu: goto label_206ccc;
            case 0x206CD0u: goto label_206cd0;
            case 0x206CD4u: goto label_206cd4;
            case 0x206CD8u: goto label_206cd8;
            case 0x206CDCu: goto label_206cdc;
            case 0x206CE0u: goto label_206ce0;
            case 0x206CE4u: goto label_206ce4;
            case 0x206CE8u: goto label_206ce8;
            case 0x206CECu: goto label_206cec;
            case 0x206CF0u: goto label_206cf0;
            case 0x206CF4u: goto label_206cf4;
            case 0x206CF8u: goto label_206cf8;
            case 0x206CFCu: goto label_206cfc;
            case 0x206D00u: goto label_206d00;
            case 0x206D04u: goto label_206d04;
            case 0x206D08u: goto label_206d08;
            case 0x206D0Cu: goto label_206d0c;
            case 0x206D10u: goto label_206d10;
            case 0x206D14u: goto label_206d14;
            case 0x206D18u: goto label_206d18;
            case 0x206D1Cu: goto label_206d1c;
            case 0x206D20u: goto label_206d20;
            case 0x206D24u: goto label_206d24;
            case 0x206D28u: goto label_206d28;
            case 0x206D2Cu: goto label_206d2c;
            case 0x206D30u: goto label_206d30;
            case 0x206D34u: goto label_206d34;
            case 0x206D38u: goto label_206d38;
            case 0x206D3Cu: goto label_206d3c;
            case 0x206D40u: goto label_206d40;
            case 0x206D44u: goto label_206d44;
            case 0x206D48u: goto label_206d48;
            case 0x206D4Cu: goto label_206d4c;
            case 0x206D50u: goto label_206d50;
            case 0x206D54u: goto label_206d54;
            case 0x206D58u: goto label_206d58;
            case 0x206D5Cu: goto label_206d5c;
            case 0x206D60u: goto label_206d60;
            case 0x206D64u: goto label_206d64;
            case 0x206D68u: goto label_206d68;
            case 0x206D6Cu: goto label_206d6c;
            case 0x206D70u: goto label_206d70;
            case 0x206D74u: goto label_206d74;
            case 0x206D78u: goto label_206d78;
            case 0x206D7Cu: goto label_206d7c;
            case 0x206D80u: goto label_206d80;
            case 0x206D84u: goto label_206d84;
            case 0x206D88u: goto label_206d88;
            case 0x206D8Cu: goto label_206d8c;
            case 0x206D90u: goto label_206d90;
            case 0x206D94u: goto label_206d94;
            case 0x206D98u: goto label_206d98;
            case 0x206D9Cu: goto label_206d9c;
            case 0x206DA0u: goto label_206da0;
            case 0x206DA4u: goto label_206da4;
            case 0x206DA8u: goto label_206da8;
            case 0x206DACu: goto label_206dac;
            case 0x206DB0u: goto label_206db0;
            case 0x206DB4u: goto label_206db4;
            case 0x206DB8u: goto label_206db8;
            case 0x206DBCu: goto label_206dbc;
            case 0x206DC0u: goto label_206dc0;
            case 0x206DC4u: goto label_206dc4;
            case 0x206DC8u: goto label_206dc8;
            case 0x206DCCu: goto label_206dcc;
            case 0x206DD0u: goto label_206dd0;
            case 0x206DD4u: goto label_206dd4;
            case 0x206DD8u: goto label_206dd8;
            case 0x206DDCu: goto label_206ddc;
            case 0x206DE0u: goto label_206de0;
            case 0x206DE4u: goto label_206de4;
            case 0x206DE8u: goto label_206de8;
            case 0x206DECu: goto label_206dec;
            case 0x206DF0u: goto label_206df0;
            case 0x206DF4u: goto label_206df4;
            case 0x206DF8u: goto label_206df8;
            case 0x206DFCu: goto label_206dfc;
            case 0x206E00u: goto label_206e00;
            case 0x206E04u: goto label_206e04;
            case 0x206E08u: goto label_206e08;
            case 0x206E0Cu: goto label_206e0c;
            case 0x206E10u: goto label_206e10;
            case 0x206E14u: goto label_206e14;
            case 0x206E18u: goto label_206e18;
            case 0x206E1Cu: goto label_206e1c;
            case 0x206E20u: goto label_206e20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2068B0u;
label_2068b0:
    // 0x2068b0: 0xc6021d78
    ctx->pc = 0x2068b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2068b4:
    // 0x2068b4: 0x3c023f80
    ctx->pc = 0x2068b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
label_2068b8:
    // 0x2068b8: 0x44820800
    ctx->pc = 0x2068b8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_2068bc:
    // 0x2068bc: 0x44800000
    ctx->pc = 0x2068bcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_2068c0:
    // 0x2068c0: 0x0
    ctx->pc = 0x2068c0u;
    // NOP
label_2068c4:
    // 0x2068c4: 0x46011041
    ctx->pc = 0x2068c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_2068c8:
    // 0x2068c8: 0x46000836
    ctx->pc = 0x2068c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2068cc:
    // 0x2068cc: 0x0
    ctx->pc = 0x2068ccu;
    // NOP
label_2068d0:
    // 0x2068d0: 0x45000136
label_2068d4:
    if (ctx->pc == 0x2068D4u) {
        ctx->pc = 0x2068D4u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7544), bits); }
        ctx->pc = 0x2068D8u;
        goto label_2068d8;
    }
    ctx->pc = 0x2068D0u;
    {
        const bool branch_taken_0x2068d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2068D4u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7544), bits); }
        if (branch_taken_0x2068d0) {
            ctx->pc = 0x206DACu;
            goto label_206dac;
        }
    }
    ctx->pc = 0x2068D8u;
label_2068d8:
    // 0x2068d8: 0x8e031db0
    ctx->pc = 0x2068d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 7600)));
label_2068dc:
    // 0x2068dc: 0x3c020027
    ctx->pc = 0x2068dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
label_2068e0:
    // 0x2068e0: 0x24422a30
    ctx->pc = 0x2068e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10800));
label_2068e4:
    // 0x2068e4: 0x72002628
    ctx->pc = 0x2068e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_2068e8:
    // 0x2068e8: 0x318c0
    ctx->pc = 0x2068e8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
label_2068ec:
    // 0x2068ec: 0xc082938
label_2068f0:
    if (ctx->pc == 0x2068F0u) {
        ctx->pc = 0x2068F0u;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2068F4u;
        goto label_2068f4;
    }
    ctx->pc = 0x2068ECu;
    SET_GPR_U32(ctx, 31, 0x2068F4u);
    ctx->pc = 0x2068F0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x20A4E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setAtcPlID__10PeopleTaskFPi_0x20a4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2068F4u; }
        else if (ctx->pc != 0x2068F4u) { ctx->pc = 0x2068F4u; }
    }
    if (ctx->pc != 0x2068F4u) { return; }
    ctx->pc = 0x2068F4u;
label_2068f4:
    // 0x2068f4: 0x82031e00
    ctx->pc = 0x2068f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7680)));
label_2068f8:
    // 0x2068f8: 0x2402ffff
    ctx->pc = 0x2068f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2068fc:
    // 0x2068fc: 0x1062001e
label_206900:
    if (ctx->pc == 0x206900u) {
        ctx->pc = 0x206900u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
        ctx->pc = 0x206904u;
        goto label_206904;
    }
    ctx->pc = 0x2068FCu;
    {
        const bool branch_taken_0x2068fc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x206900u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
        if (branch_taken_0x2068fc) {
            ctx->pc = 0x206978u;
            goto label_206978;
        }
    }
    ctx->pc = 0x206904u;
label_206904:
    // 0x206904: 0x12000002
label_206908:
    if (ctx->pc == 0x206908u) {
        ctx->pc = 0x206908u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x20690Cu;
        goto label_20690c;
    }
    ctx->pc = 0x206904u;
    {
        const bool branch_taken_0x206904 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x206908u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x206904) {
            ctx->pc = 0x206910u;
            goto label_206910;
        }
    }
    ctx->pc = 0x20690Cu;
label_20690c:
    // 0x20690c: 0x26110030
    ctx->pc = 0x20690cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 48));
label_206910:
    // 0x206910: 0x8e031db0
    ctx->pc = 0x206910u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 7600)));
label_206914:
    // 0x206914: 0x3c020027
    ctx->pc = 0x206914u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
label_206918:
    // 0x206918: 0x24422978
    ctx->pc = 0x206918u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10616));
label_20691c:
    // 0x20691c: 0x72002628
    ctx->pc = 0x20691cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_206920:
    // 0x206920: 0x31880
    ctx->pc = 0x206920u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_206924:
    // 0x206924: 0x431021
    ctx->pc = 0x206924u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_206928:
    // 0x206928: 0x8c420000
    ctx->pc = 0x206928u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20692c:
    // 0x20692c: 0xc0829ac
label_206930:
    if (ctx->pc == 0x206930u) {
        ctx->pc = 0x206930u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 8));
        ctx->pc = 0x206934u;
        goto label_206934;
    }
    ctx->pc = 0x20692Cu;
    SET_GPR_U32(ctx, 31, 0x206934u);
    ctx->pc = 0x206930u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 8));
    ctx->pc = 0x20A6B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motionSelect__10PeopleTaskFPi_0x20a6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206934u; }
        else if (ctx->pc != 0x206934u) { ctx->pc = 0x206934u; }
    }
    if (ctx->pc != 0x206934u) { return; }
    ctx->pc = 0x206934u;
label_206934:
    // 0x206934: 0x2343c
    ctx->pc = 0x206934u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
label_206938:
    // 0x206938: 0x3c02004a
    ctx->pc = 0x206938u;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
label_20693c:
    // 0x20693c: 0x6343f
    ctx->pc = 0x20693cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_206940:
    // 0x206940: 0x72202e28
    ctx->pc = 0x206940u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_206944:
    // 0x206944: 0x2444e8e0
    ctx->pc = 0x206944u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961376));
label_206948:
    // 0x206948: 0x70003e28
    ctx->pc = 0x206948u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20694c:
    // 0x20694c: 0xc07eabc
label_206950:
    if (ctx->pc == 0x206950u) {
        ctx->pc = 0x206950u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x206954u;
        goto label_206954;
    }
    ctx->pc = 0x20694Cu;
    SET_GPR_U32(ctx, 31, 0x206954u);
    ctx->pc = 0x206950u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 20));
    ctx->pc = 0x1FAAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motSupplement__12BodyMgrClassFP10MotObjTaskiii_0x1faaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206954u; }
        else if (ctx->pc != 0x206954u) { ctx->pc = 0x206954u; }
    }
    if (ctx->pc != 0x206954u) { return; }
    ctx->pc = 0x206954u;
label_206954:
    // 0x206954: 0x8e03000c
    ctx->pc = 0x206954u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_206958:
    // 0x206958: 0x3c021000
    ctx->pc = 0x206958u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
label_20695c:
    // 0x20695c: 0x72002628
    ctx->pc = 0x20695cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_206960:
    // 0x206960: 0x621025
    ctx->pc = 0x206960u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_206964:
    // 0x206964: 0xc083114
label_206968:
    if (ctx->pc == 0x206968u) {
        ctx->pc = 0x206968u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x20696Cu;
        goto label_20696c;
    }
    ctx->pc = 0x206964u;
    SET_GPR_U32(ctx, 31, 0x20696Cu);
    ctx->pc = 0x206968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x20C450u;
    {
        const uint32_t __entryPc = ctx->pc;
        groan__10PeopleTaskFv_0x20c450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20696Cu; }
        else if (ctx->pc != 0x20696Cu) { ctx->pc = 0x20696Cu; }
    }
    if (ctx->pc != 0x20696Cu) { return; }
    ctx->pc = 0x20696Cu;
label_20696c:
    // 0x20696c: 0x24020002
    ctx->pc = 0x20696cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_206970:
    // 0x206970: 0x1000010e
label_206974:
    if (ctx->pc == 0x206974u) {
        ctx->pc = 0x206974u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 7608), GPR_U32(ctx, 2));
        ctx->pc = 0x206978u;
        goto label_206978;
    }
    ctx->pc = 0x206970u;
    {
        const bool branch_taken_0x206970 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x206974u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 7608), GPR_U32(ctx, 2));
        if (branch_taken_0x206970) {
            ctx->pc = 0x206DACu;
            goto label_206dac;
        }
    }
    ctx->pc = 0x206978u;
label_206978:
    // 0x206978: 0x1000010c
label_20697c:
    if (ctx->pc == 0x20697Cu) {
        ctx->pc = 0x20697Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 7544), GPR_U32(ctx, 2));
        ctx->pc = 0x206980u;
        goto label_206980;
    }
    ctx->pc = 0x206978u;
    {
        const bool branch_taken_0x206978 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20697Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 7544), GPR_U32(ctx, 2));
        if (branch_taken_0x206978) {
            ctx->pc = 0x206DACu;
            goto label_206dac;
        }
    }
    ctx->pc = 0x206980u;
label_206980:
    // 0x206980: 0x8e031dec
    ctx->pc = 0x206980u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 7660)));
label_206984:
    // 0x206984: 0x3c024040
    ctx->pc = 0x206984u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16448 << 16));
label_206988:
    // 0x206988: 0x44820000
    ctx->pc = 0x206988u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_20698c:
    // 0x20698c: 0xc6021df8
    ctx->pc = 0x20698cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_206990:
    // 0x206990: 0xc4610004
    ctx->pc = 0x206990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_206994:
    // 0x206994: 0x46000801
    ctx->pc = 0x206994u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_206998:
    // 0x206998: 0x46001034
    ctx->pc = 0x206998u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20699c:
    // 0x20699c: 0x0
    ctx->pc = 0x20699cu;
    // NOP
label_2069a0:
    // 0x2069a0: 0x45000021
label_2069a4:
    if (ctx->pc == 0x2069A4u) {
        ctx->pc = 0x2069A8u;
        goto label_2069a8;
    }
    ctx->pc = 0x2069A0u;
    {
        const bool branch_taken_0x2069a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2069a0) {
            ctx->pc = 0x206A28u;
            goto label_206a28;
        }
    }
    ctx->pc = 0x2069A8u;
label_2069a8:
    // 0x2069a8: 0x82021e00
    ctx->pc = 0x2069a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7680)));
label_2069ac:
    // 0x2069ac: 0x2404ffff
    ctx->pc = 0x2069acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2069b0:
    // 0x2069b0: 0x10440006
label_2069b4:
    if (ctx->pc == 0x2069B4u) {
        ctx->pc = 0x2069B4u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x2069B8u;
        goto label_2069b8;
    }
    ctx->pc = 0x2069B0u;
    {
        const bool branch_taken_0x2069b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x2069B4u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2069b0) {
            ctx->pc = 0x2069CCu;
            goto label_2069cc;
        }
    }
    ctx->pc = 0x2069B8u;
label_2069b8:
    // 0x2069b8: 0x21880
    ctx->pc = 0x2069b8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
label_2069bc:
    // 0x2069bc: 0x27828b60
    ctx->pc = 0x2069bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 28), 4294937440));
label_2069c0:
    // 0x2069c0: 0x431021
    ctx->pc = 0x2069c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2069c4:
    // 0x2069c4: 0xac400000
    ctx->pc = 0x2069c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2069c8:
    // 0x2069c8: 0xa2041e00
    ctx->pc = 0x2069c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7680), (uint8_t)GPR_U32(ctx, 4));
label_2069cc:
    // 0x2069cc: 0x12000002
label_2069d0:
    if (ctx->pc == 0x2069D0u) {
        ctx->pc = 0x2069D4u;
        goto label_2069d4;
    }
    ctx->pc = 0x2069CCu;
    {
        const bool branch_taken_0x2069cc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x2069cc) {
            ctx->pc = 0x2069D8u;
            goto label_2069d8;
        }
    }
    ctx->pc = 0x2069D4u;
label_2069d4:
    // 0x2069d4: 0x26110030
    ctx->pc = 0x2069d4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 48));
label_2069d8:
    // 0x2069d8: 0x8e031db0
    ctx->pc = 0x2069d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 7600)));
label_2069dc:
    // 0x2069dc: 0x3c020027
    ctx->pc = 0x2069dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
label_2069e0:
    // 0x2069e0: 0x24422978
    ctx->pc = 0x2069e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10616));
label_2069e4:
    // 0x2069e4: 0x72002628
    ctx->pc = 0x2069e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_2069e8:
    // 0x2069e8: 0x31880
    ctx->pc = 0x2069e8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2069ec:
    // 0x2069ec: 0x431021
    ctx->pc = 0x2069ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2069f0:
    // 0x2069f0: 0x8c420000
    ctx->pc = 0x2069f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2069f4:
    // 0x2069f4: 0xc0829ac
label_2069f8:
    if (ctx->pc == 0x2069F8u) {
        ctx->pc = 0x2069F8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x2069FCu;
        goto label_2069fc;
    }
    ctx->pc = 0x2069F4u;
    SET_GPR_U32(ctx, 31, 0x2069FCu);
    ctx->pc = 0x2069F8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 16));
    ctx->pc = 0x20A6B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motionSelect__10PeopleTaskFPi_0x20a6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2069FCu; }
        else if (ctx->pc != 0x2069FCu) { ctx->pc = 0x2069FCu; }
    }
    if (ctx->pc != 0x2069FCu) { return; }
    ctx->pc = 0x2069FCu;
label_2069fc:
    // 0x2069fc: 0x2343c
    ctx->pc = 0x2069fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
label_206a00:
    // 0x206a00: 0x3c02004a
    ctx->pc = 0x206a00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
label_206a04:
    // 0x206a04: 0x6343f
    ctx->pc = 0x206a04u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_206a08:
    // 0x206a08: 0x72202e28
    ctx->pc = 0x206a08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_206a0c:
    // 0x206a0c: 0x2444e8e0
    ctx->pc = 0x206a0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961376));
label_206a10:
    // 0x206a10: 0x70003e28
    ctx->pc = 0x206a10u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_206a14:
    // 0x206a14: 0xc07eabc
label_206a18:
    if (ctx->pc == 0x206A18u) {
        ctx->pc = 0x206A18u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x206A1Cu;
        goto label_206a1c;
    }
    ctx->pc = 0x206A14u;
    SET_GPR_U32(ctx, 31, 0x206A1Cu);
    ctx->pc = 0x206A18u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x1FAAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motSupplement__12BodyMgrClassFP10MotObjTaskiii_0x1faaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206A1Cu; }
        else if (ctx->pc != 0x206A1Cu) { ctx->pc = 0x206A1Cu; }
    }
    if (ctx->pc != 0x206A1Cu) { return; }
    ctx->pc = 0x206A1Cu;
label_206a1c:
    // 0x206a1c: 0x24020006
    ctx->pc = 0x206a1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
label_206a20:
    // 0x206a20: 0x100000e2
label_206a24:
    if (ctx->pc == 0x206A24u) {
        ctx->pc = 0x206A24u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 7608), GPR_U32(ctx, 2));
        ctx->pc = 0x206A28u;
        goto label_206a28;
    }
    ctx->pc = 0x206A20u;
    {
        const bool branch_taken_0x206a20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x206A24u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 7608), GPR_U32(ctx, 2));
        if (branch_taken_0x206a20) {
            ctx->pc = 0x206DACu;
            goto label_206dac;
        }
    }
    ctx->pc = 0x206A28u;
label_206a28:
    // 0x206a28: 0x46011034
    ctx->pc = 0x206a28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_206a2c:
    // 0x206a2c: 0x0
    ctx->pc = 0x206a2cu;
    // NOP
label_206a30:
    // 0x206a30: 0x450000de
label_206a34:
    if (ctx->pc == 0x206A34u) {
        ctx->pc = 0x206A38u;
        goto label_206a38;
    }
    ctx->pc = 0x206A30u;
    {
        const bool branch_taken_0x206a30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x206a30) {
            ctx->pc = 0x206DACu;
            goto label_206dac;
        }
    }
    ctx->pc = 0x206A38u;
label_206a38:
    // 0x206a38: 0x8e03000c
    ctx->pc = 0x206a38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_206a3c:
    // 0x206a3c: 0x3c02fff7
    ctx->pc = 0x206a3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65527 << 16));
label_206a40:
    // 0x206a40: 0x3442ffff
    ctx->pc = 0x206a40u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_206a44:
    // 0x206a44: 0x72002e28
    ctx->pc = 0x206a44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_206a48:
    // 0x206a48: 0x621024
    ctx->pc = 0x206a48u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_206a4c:
    // 0x206a4c: 0x12000002
label_206a50:
    if (ctx->pc == 0x206A50u) {
        ctx->pc = 0x206A50u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x206A54u;
        goto label_206a54;
    }
    ctx->pc = 0x206A4Cu;
    {
        const bool branch_taken_0x206a4c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x206A50u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x206a4c) {
            ctx->pc = 0x206A58u;
            goto label_206a58;
        }
    }
    ctx->pc = 0x206A54u;
label_206a54:
    // 0x206a54: 0x24a50030
    ctx->pc = 0x206a54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
label_206a58:
    // 0x206a58: 0x8e031dec
    ctx->pc = 0x206a58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 7660)));
label_206a5c:
    // 0x206a5c: 0x3c02004a
    ctx->pc = 0x206a5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
label_206a60:
    // 0x206a60: 0x2444e8e0
    ctx->pc = 0x206a60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961376));
label_206a64:
    // 0x206a64: 0x70003e28
    ctx->pc = 0x206a64u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_206a68:
    // 0x206a68: 0x84660000
    ctx->pc = 0x206a68u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_206a6c:
    // 0x206a6c: 0xc07eabc
label_206a70:
    if (ctx->pc == 0x206A70u) {
        ctx->pc = 0x206A70u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x206A74u;
        goto label_206a74;
    }
    ctx->pc = 0x206A6Cu;
    SET_GPR_U32(ctx, 31, 0x206A74u);
    ctx->pc = 0x206A70u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x1FAAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motSupplement__12BodyMgrClassFP10MotObjTaskiii_0x1faaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206A74u; }
        else if (ctx->pc != 0x206A74u) { ctx->pc = 0x206A74u; }
    }
    if (ctx->pc != 0x206A74u) { return; }
    ctx->pc = 0x206A74u;
label_206a74:
    // 0x206a74: 0x8f848c48
    ctx->pc = 0x206a74u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
label_206a78:
    // 0x206a78: 0x70002e28
    ctx->pc = 0x206a78u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_206a7c:
    // 0x206a7c: 0xc072658
label_206a80:
    if (ctx->pc == 0x206A80u) {
        ctx->pc = 0x206A80u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x206A84u;
        goto label_206a84;
    }
    ctx->pc = 0x206A7Cu;
    SET_GPR_U32(ctx, 31, 0x206A84u);
    ctx->pc = 0x206A80u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x1C9960u;
    {
        const uint32_t __entryPc = ctx->pc;
        chgCafsIdx__10CameraTaskFii_0x1c9960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206A84u; }
        else if (ctx->pc != 0x206A84u) { ctx->pc = 0x206A84u; }
    }
    if (ctx->pc != 0x206A84u) { return; }
    ctx->pc = 0x206A84u;
label_206a84:
    // 0x206a84: 0x3c023cc4
    ctx->pc = 0x206a84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15556 << 16));
label_206a88:
    // 0x206a88: 0x34429ba6
    ctx->pc = 0x206a88u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39846));
label_206a8c:
    // 0x206a8c: 0xae021e30
    ctx->pc = 0x206a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7728), GPR_U32(ctx, 2));
label_206a90:
    // 0x206a90: 0x24020001
    ctx->pc = 0x206a90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_206a94:
    // 0x206a94: 0xa6021e34
    ctx->pc = 0x206a94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 7732), (uint16_t)GPR_U32(ctx, 2));
label_206a98:
    // 0x206a98: 0x2402ffff
    ctx->pc = 0x206a98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_206a9c:
    // 0x206a9c: 0xa6021e36
    ctx->pc = 0x206a9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 7734), (uint16_t)GPR_U32(ctx, 2));
label_206aa0:
    // 0x206aa0: 0x24020003
    ctx->pc = 0x206aa0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_206aa4:
    // 0x206aa4: 0x100000c1
label_206aa8:
    if (ctx->pc == 0x206AA8u) {
        ctx->pc = 0x206AA8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 7608), GPR_U32(ctx, 2));
        ctx->pc = 0x206AACu;
        goto label_206aac;
    }
    ctx->pc = 0x206AA4u;
    {
        const bool branch_taken_0x206aa4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x206AA8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 7608), GPR_U32(ctx, 2));
        if (branch_taken_0x206aa4) {
            ctx->pc = 0x206DACu;
            goto label_206dac;
        }
    }
    ctx->pc = 0x206AACu;
label_206aac:
    // 0x206aac: 0x8e021dec
    ctx->pc = 0x206aacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 7660)));
label_206ab0:
    // 0x206ab0: 0xc6000044
    ctx->pc = 0x206ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_206ab4:
    // 0x206ab4: 0x84420002
    ctx->pc = 0x206ab4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_206ab8:
    // 0x206ab8: 0x2442fffb
    ctx->pc = 0x206ab8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967291));
label_206abc:
    // 0x206abc: 0x44820800
    ctx->pc = 0x206abcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_206ac0:
    // 0x206ac0: 0x0
    ctx->pc = 0x206ac0u;
    // NOP
label_206ac4:
    // 0x206ac4: 0x46800860
    ctx->pc = 0x206ac4u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_206ac8:
    // 0x206ac8: 0x46010036
    ctx->pc = 0x206ac8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_206acc:
    // 0x206acc: 0x0
    ctx->pc = 0x206accu;
    // NOP
label_206ad0:
    // 0x206ad0: 0x450100b6
label_206ad4:
    if (ctx->pc == 0x206AD4u) {
        ctx->pc = 0x206AD4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)48629 << 16));
        ctx->pc = 0x206AD8u;
        goto label_206ad8;
    }
    ctx->pc = 0x206AD0u;
    {
        const bool branch_taken_0x206ad0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x206AD4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)48629 << 16));
        if (branch_taken_0x206ad0) {
            ctx->pc = 0x206DACu;
            goto label_206dac;
        }
    }
    ctx->pc = 0x206AD8u;
label_206ad8:
    // 0x206ad8: 0x3442c290
    ctx->pc = 0x206ad8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 49808));
label_206adc:
    // 0x206adc: 0xae021e30
    ctx->pc = 0x206adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7728), GPR_U32(ctx, 2));
label_206ae0:
    // 0x206ae0: 0x24020001
    ctx->pc = 0x206ae0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_206ae4:
    // 0x206ae4: 0xa6021e34
    ctx->pc = 0x206ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 7732), (uint16_t)GPR_U32(ctx, 2));
label_206ae8:
    // 0x206ae8: 0x2402ffff
    ctx->pc = 0x206ae8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_206aec:
    // 0x206aec: 0xa6021e36
    ctx->pc = 0x206aecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 7734), (uint16_t)GPR_U32(ctx, 2));
label_206af0:
    // 0x206af0: 0x24020004
    ctx->pc = 0x206af0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_206af4:
    // 0x206af4: 0x100000ad
label_206af8:
    if (ctx->pc == 0x206AF8u) {
        ctx->pc = 0x206AF8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 7608), GPR_U32(ctx, 2));
        ctx->pc = 0x206AFCu;
        goto label_206afc;
    }
    ctx->pc = 0x206AF4u;
    {
        const bool branch_taken_0x206af4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x206AF8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 7608), GPR_U32(ctx, 2));
        if (branch_taken_0x206af4) {
            ctx->pc = 0x206DACu;
            goto label_206dac;
        }
    }
    ctx->pc = 0x206AFCu;
label_206afc:
    // 0x206afc: 0x8e021dec
    ctx->pc = 0x206afcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 7660)));
label_206b00:
    // 0x206b00: 0xc6000044
    ctx->pc = 0x206b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_206b04:
    // 0x206b04: 0x84420002
    ctx->pc = 0x206b04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_206b08:
    // 0x206b08: 0x2442ffff
    ctx->pc = 0x206b08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_206b0c:
    // 0x206b0c: 0x44820800
    ctx->pc = 0x206b0cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_206b10:
    // 0x206b10: 0x0
    ctx->pc = 0x206b10u;
    // NOP
label_206b14:
    // 0x206b14: 0x46800860
    ctx->pc = 0x206b14u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_206b18:
    // 0x206b18: 0x46010034
    ctx->pc = 0x206b18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_206b1c:
    // 0x206b1c: 0x0
    ctx->pc = 0x206b1cu;
    // NOP
label_206b20:
    // 0x206b20: 0x450100a2
label_206b24:
    if (ctx->pc == 0x206B24u) {
        ctx->pc = 0x206B28u;
        goto label_206b28;
    }
    ctx->pc = 0x206B20u;
    {
        const bool branch_taken_0x206b20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x206b20) {
            ctx->pc = 0x206DACu;
            goto label_206dac;
        }
    }
    ctx->pc = 0x206B28u;
label_206b28:
    // 0x206b28: 0x8e03000c
    ctx->pc = 0x206b28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_206b2c:
    // 0x206b2c: 0x3c02efff
    ctx->pc = 0x206b2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)61439 << 16));
label_206b30:
    // 0x206b30: 0x3442ffff
    ctx->pc = 0x206b30u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_206b34:
    // 0x206b34: 0x72002628
    ctx->pc = 0x206b34u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_206b38:
    // 0x206b38: 0x621024
    ctx->pc = 0x206b38u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_206b3c:
    // 0x206b3c: 0xc0829c0
label_206b40:
    if (ctx->pc == 0x206B40u) {
        ctx->pc = 0x206B40u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x206B44u;
        goto label_206b44;
    }
    ctx->pc = 0x206B3Cu;
    SET_GPR_U32(ctx, 31, 0x206B44u);
    ctx->pc = 0x206B40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x20A700u;
    {
        const uint32_t __entryPc = ctx->pc;
        damagePlayer__10PeopleTaskFv_0x20a700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206B44u; }
        else if (ctx->pc != 0x206B44u) { ctx->pc = 0x206B44u; }
    }
    if (ctx->pc != 0x206B44u) { return; }
    ctx->pc = 0x206B44u;
label_206b44:
    // 0x206b44: 0x3c024140
    ctx->pc = 0x206b44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16704 << 16));
label_206b48:
    // 0x206b48: 0xae021d78
    ctx->pc = 0x206b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7544), GPR_U32(ctx, 2));
label_206b4c:
    // 0x206b4c: 0x8f848c48
    ctx->pc = 0x206b4cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
label_206b50:
    // 0x206b50: 0x70002e28
    ctx->pc = 0x206b50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_206b54:
    // 0x206b54: 0xc072658
label_206b58:
    if (ctx->pc == 0x206B58u) {
        ctx->pc = 0x206B58u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x206B5Cu;
        goto label_206b5c;
    }
    ctx->pc = 0x206B54u;
    SET_GPR_U32(ctx, 31, 0x206B5Cu);
    ctx->pc = 0x206B58u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1C9960u;
    {
        const uint32_t __entryPc = ctx->pc;
        chgCafsIdx__10CameraTaskFii_0x1c9960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206B5Cu; }
        else if (ctx->pc != 0x206B5Cu) { ctx->pc = 0x206B5Cu; }
    }
    if (ctx->pc != 0x206B5Cu) { return; }
    ctx->pc = 0x206B5Cu;
label_206b5c:
    // 0x206b5c: 0x24020005
    ctx->pc = 0x206b5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_206b60:
    // 0x206b60: 0xae021db8
    ctx->pc = 0x206b60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7608), GPR_U32(ctx, 2));
label_206b64:
    // 0x206b64: 0x8202006d
    ctx->pc = 0x206b64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
label_206b68:
    // 0x206b68: 0x1440000e
label_206b6c:
    if (ctx->pc == 0x206B6Cu) {
        ctx->pc = 0x206B70u;
        goto label_206b70;
    }
    ctx->pc = 0x206B68u;
    {
        const bool branch_taken_0x206b68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x206b68) {
            ctx->pc = 0x206BA4u;
            goto label_206ba4;
        }
    }
    ctx->pc = 0x206B70u;
label_206b70:
    // 0x206b70: 0x8e020034
    ctx->pc = 0x206b70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_206b74:
    // 0x206b74: 0x3c0101fb
    ctx->pc = 0x206b74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)507 << 16));
label_206b78:
    // 0x206b78: 0xc600003c
    ctx->pc = 0x206b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_206b7c:
    // 0x206b7c: 0x21040
    ctx->pc = 0x206b7cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_206b80:
    // 0x206b80: 0x410821
    ctx->pc = 0x206b80u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_206b84:
    // 0x206b84: 0x842273e4
    ctx->pc = 0x206b84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 29668)));
label_206b88:
    // 0x206b88: 0x44820800
    ctx->pc = 0x206b88u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_206b8c:
    // 0x206b8c: 0x0
    ctx->pc = 0x206b8cu;
    // NOP
label_206b90:
    // 0x206b90: 0x46800860
    ctx->pc = 0x206b90u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_206b94:
    // 0x206b94: 0x46010036
    ctx->pc = 0x206b94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_206b98:
    // 0x206b98: 0x0
    ctx->pc = 0x206b98u;
    // NOP
label_206b9c:
    // 0x206b9c: 0x45010083
label_206ba0:
    if (ctx->pc == 0x206BA0u) {
        ctx->pc = 0x206BA4u;
        goto label_206ba4;
    }
    ctx->pc = 0x206B9Cu;
    {
        const bool branch_taken_0x206b9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x206b9c) {
            ctx->pc = 0x206DACu;
            goto label_206dac;
        }
    }
    ctx->pc = 0x206BA4u;
label_206ba4:
    // 0x206ba4: 0x82021e00
    ctx->pc = 0x206ba4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7680)));
label_206ba8:
    // 0x206ba8: 0x2404ffff
    ctx->pc = 0x206ba8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_206bac:
    // 0x206bac: 0x10440005
label_206bb0:
    if (ctx->pc == 0x206BB0u) {
        ctx->pc = 0x206BB0u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x206BB4u;
        goto label_206bb4;
    }
    ctx->pc = 0x206BACu;
    {
        const bool branch_taken_0x206bac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x206BB0u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
        if (branch_taken_0x206bac) {
            ctx->pc = 0x206BC4u;
            goto label_206bc4;
        }
    }
    ctx->pc = 0x206BB4u;
label_206bb4:
    // 0x206bb4: 0x27828b60
    ctx->pc = 0x206bb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 28), 4294937440));
label_206bb8:
    // 0x206bb8: 0x431021
    ctx->pc = 0x206bb8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_206bbc:
    // 0x206bbc: 0xac400000
    ctx->pc = 0x206bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_206bc0:
    // 0x206bc0: 0xa2041e00
    ctx->pc = 0x206bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7680), (uint8_t)GPR_U32(ctx, 4));
label_206bc4:
    // 0x206bc4: 0x8e031dec
    ctx->pc = 0x206bc4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 7660)));
label_206bc8:
    // 0x206bc8: 0x2402ffff
    ctx->pc = 0x206bc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_206bcc:
    // 0x206bcc: 0x84660008
    ctx->pc = 0x206bccu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_206bd0:
    // 0x206bd0: 0x10c2000c
label_206bd4:
    if (ctx->pc == 0x206BD4u) {
        ctx->pc = 0x206BD4u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x206BD8u;
        goto label_206bd8;
    }
    ctx->pc = 0x206BD0u;
    {
        const bool branch_taken_0x206bd0 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x206BD4u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x206bd0) {
            ctx->pc = 0x206C04u;
            goto label_206c04;
        }
    }
    ctx->pc = 0x206BD8u;
label_206bd8:
    // 0x206bd8: 0x12000002
label_206bdc:
    if (ctx->pc == 0x206BDCu) {
        ctx->pc = 0x206BDCu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x206BE0u;
        goto label_206be0;
    }
    ctx->pc = 0x206BD8u;
    {
        const bool branch_taken_0x206bd8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x206BDCu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x206bd8) {
            ctx->pc = 0x206BE4u;
            goto label_206be4;
        }
    }
    ctx->pc = 0x206BE0u;
label_206be0:
    // 0x206be0: 0x24a50030
    ctx->pc = 0x206be0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
label_206be4:
    // 0x206be4: 0x3c02004a
    ctx->pc = 0x206be4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
label_206be8:
    // 0x206be8: 0x2444e8e0
    ctx->pc = 0x206be8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961376));
label_206bec:
    // 0x206bec: 0x70003e28
    ctx->pc = 0x206becu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_206bf0:
    // 0x206bf0: 0xc07eabc
label_206bf4:
    if (ctx->pc == 0x206BF4u) {
        ctx->pc = 0x206BF4u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x206BF8u;
        goto label_206bf8;
    }
    ctx->pc = 0x206BF0u;
    SET_GPR_U32(ctx, 31, 0x206BF8u);
    ctx->pc = 0x206BF4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x1FAAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motSupplement__12BodyMgrClassFP10MotObjTaskiii_0x1faaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206BF8u; }
        else if (ctx->pc != 0x206BF8u) { ctx->pc = 0x206BF8u; }
    }
    if (ctx->pc != 0x206BF8u) { return; }
    ctx->pc = 0x206BF8u;
label_206bf8:
    // 0x206bf8: 0x24020001
    ctx->pc = 0x206bf8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_206bfc:
    // 0x206bfc: 0x10000015
label_206c00:
    if (ctx->pc == 0x206C00u) {
        ctx->pc = 0x206C00u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 7596), GPR_U32(ctx, 2));
        ctx->pc = 0x206C04u;
        goto label_206c04;
    }
    ctx->pc = 0x206BFCu;
    {
        const bool branch_taken_0x206bfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x206C00u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 7596), GPR_U32(ctx, 2));
        if (branch_taken_0x206bfc) {
            ctx->pc = 0x206C54u;
            goto label_206c54;
        }
    }
    ctx->pc = 0x206C04u;
label_206c04:
    // 0x206c04: 0x12000002
label_206c08:
    if (ctx->pc == 0x206C08u) {
        ctx->pc = 0x206C0Cu;
        goto label_206c0c;
    }
    ctx->pc = 0x206C04u;
    {
        const bool branch_taken_0x206c04 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x206c04) {
            ctx->pc = 0x206C10u;
            goto label_206c10;
        }
    }
    ctx->pc = 0x206C0Cu;
label_206c0c:
    // 0x206c0c: 0x26110030
    ctx->pc = 0x206c0cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 48));
label_206c10:
    // 0x206c10: 0x8e031db0
    ctx->pc = 0x206c10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 7600)));
label_206c14:
    // 0x206c14: 0x3c020027
    ctx->pc = 0x206c14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
label_206c18:
    // 0x206c18: 0x24422978
    ctx->pc = 0x206c18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10616));
label_206c1c:
    // 0x206c1c: 0x72002628
    ctx->pc = 0x206c1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_206c20:
    // 0x206c20: 0x31880
    ctx->pc = 0x206c20u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_206c24:
    // 0x206c24: 0x431021
    ctx->pc = 0x206c24u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_206c28:
    // 0x206c28: 0x8c420000
    ctx->pc = 0x206c28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_206c2c:
    // 0x206c2c: 0xc0829ac
label_206c30:
    if (ctx->pc == 0x206C30u) {
        ctx->pc = 0x206C30u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x206C34u;
        goto label_206c34;
    }
    ctx->pc = 0x206C2Cu;
    SET_GPR_U32(ctx, 31, 0x206C34u);
    ctx->pc = 0x206C30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 16));
    ctx->pc = 0x20A6B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motionSelect__10PeopleTaskFPi_0x20a6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206C34u; }
        else if (ctx->pc != 0x206C34u) { ctx->pc = 0x206C34u; }
    }
    if (ctx->pc != 0x206C34u) { return; }
    ctx->pc = 0x206C34u;
label_206c34:
    // 0x206c34: 0x2343c
    ctx->pc = 0x206c34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
label_206c38:
    // 0x206c38: 0x3c02004a
    ctx->pc = 0x206c38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
label_206c3c:
    // 0x206c3c: 0x6343f
    ctx->pc = 0x206c3cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_206c40:
    // 0x206c40: 0x72202e28
    ctx->pc = 0x206c40u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_206c44:
    // 0x206c44: 0x2444e8e0
    ctx->pc = 0x206c44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961376));
label_206c48:
    // 0x206c48: 0x70003e28
    ctx->pc = 0x206c48u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_206c4c:
    // 0x206c4c: 0xc07eabc
label_206c50:
    if (ctx->pc == 0x206C50u) {
        ctx->pc = 0x206C50u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x206C54u;
        goto label_206c54;
    }
    ctx->pc = 0x206C4Cu;
    SET_GPR_U32(ctx, 31, 0x206C54u);
    ctx->pc = 0x206C50u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x1FAAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motSupplement__12BodyMgrClassFP10MotObjTaskiii_0x1faaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206C54u; }
        else if (ctx->pc != 0x206C54u) { ctx->pc = 0x206C54u; }
    }
    if (ctx->pc != 0x206C54u) { return; }
    ctx->pc = 0x206C54u;
label_206c54:
    // 0x206c54: 0xae001dd0
    ctx->pc = 0x206c54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7632), GPR_U32(ctx, 0));
label_206c58:
    // 0x206c58: 0x24020006
    ctx->pc = 0x206c58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
label_206c5c:
    // 0x206c5c: 0x10000053
label_206c60:
    if (ctx->pc == 0x206C60u) {
        ctx->pc = 0x206C60u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 7608), GPR_U32(ctx, 2));
        ctx->pc = 0x206C64u;
        goto label_206c64;
    }
    ctx->pc = 0x206C5Cu;
    {
        const bool branch_taken_0x206c5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x206C60u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 7608), GPR_U32(ctx, 2));
        if (branch_taken_0x206c5c) {
            ctx->pc = 0x206DACu;
            goto label_206dac;
        }
    }
    ctx->pc = 0x206C64u;
label_206c64:
    // 0x206c64: 0xc6011d78
    ctx->pc = 0x206c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_206c68:
    // 0x206c68: 0x44801000
    ctx->pc = 0x206c68u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
label_206c6c:
    // 0x206c6c: 0x0
    ctx->pc = 0x206c6cu;
    // NOP
label_206c70:
    // 0x206c70: 0x46011032
    ctx->pc = 0x206c70u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_206c74:
    // 0x206c74: 0x0
    ctx->pc = 0x206c74u;
    // NOP
label_206c78:
    // 0x206c78: 0x4501000e
label_206c7c:
    if (ctx->pc == 0x206C7Cu) {
        ctx->pc = 0x206C7Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x206C80u;
        goto label_206c80;
    }
    ctx->pc = 0x206C78u;
    {
        const bool branch_taken_0x206c78 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x206C7Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x206c78) {
            ctx->pc = 0x206CB4u;
            goto label_206cb4;
        }
    }
    ctx->pc = 0x206C80u;
label_206c80:
    // 0x206c80: 0x3c023f80
    ctx->pc = 0x206c80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
label_206c84:
    // 0x206c84: 0x44820000
    ctx->pc = 0x206c84u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_206c88:
    // 0x206c88: 0x0
    ctx->pc = 0x206c88u;
    // NOP
label_206c8c:
    // 0x206c8c: 0x46000801
    ctx->pc = 0x206c8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_206c90:
    // 0x206c90: 0x46001032
    ctx->pc = 0x206c90u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_206c94:
    // 0x206c94: 0x0
    ctx->pc = 0x206c94u;
    // NOP
label_206c98:
    // 0x206c98: 0x45000005
label_206c9c:
    if (ctx->pc == 0x206C9Cu) {
        ctx->pc = 0x206C9Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7544), bits); }
        ctx->pc = 0x206CA0u;
        goto label_206ca0;
    }
    ctx->pc = 0x206C98u;
    {
        const bool branch_taken_0x206c98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x206C9Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7544), bits); }
        if (branch_taken_0x206c98) {
            ctx->pc = 0x206CB0u;
            goto label_206cb0;
        }
    }
    ctx->pc = 0x206CA0u;
label_206ca0:
    // 0x206ca0: 0x8e03000c
    ctx->pc = 0x206ca0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_206ca4:
    // 0x206ca4: 0x3c020008
    ctx->pc = 0x206ca4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)8 << 16));
label_206ca8:
    // 0x206ca8: 0x621025
    ctx->pc = 0x206ca8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_206cac:
    // 0x206cac: 0xae02000c
    ctx->pc = 0x206cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_206cb0:
    // 0x206cb0: 0x72002628
    ctx->pc = 0x206cb0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_206cb4:
    // 0x206cb4: 0xc082a08
label_206cb8:
    if (ctx->pc == 0x206CB8u) {
        ctx->pc = 0x206CBCu;
        goto label_206cbc;
    }
    ctx->pc = 0x206CB4u;
    SET_GPR_U32(ctx, 31, 0x206CBCu);
    ctx->pc = 0x20A820u;
    {
        const uint32_t __entryPc = ctx->pc;
        backWaitPos__10PeopleTaskFv_0x20a820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206CBCu; }
        else if (ctx->pc != 0x206CBCu) { ctx->pc = 0x206CBCu; }
    }
    if (ctx->pc != 0x206CBCu) { return; }
    ctx->pc = 0x206CBCu;
label_206cbc:
    // 0x206cbc: 0x1040001e
label_206cc0:
    if (ctx->pc == 0x206CC0u) {
        ctx->pc = 0x206CC0u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x206CC4u;
        goto label_206cc4;
    }
    ctx->pc = 0x206CBCu;
    {
        const bool branch_taken_0x206cbc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x206CC0u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x206cbc) {
            ctx->pc = 0x206D38u;
            goto label_206d38;
        }
    }
    ctx->pc = 0x206CC4u;
label_206cc4:
    // 0x206cc4: 0x12000002
label_206cc8:
    if (ctx->pc == 0x206CC8u) {
        ctx->pc = 0x206CCCu;
        goto label_206ccc;
    }
    ctx->pc = 0x206CC4u;
    {
        const bool branch_taken_0x206cc4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x206cc4) {
            ctx->pc = 0x206CD0u;
            goto label_206cd0;
        }
    }
    ctx->pc = 0x206CCCu;
label_206ccc:
    // 0x206ccc: 0x26110030
    ctx->pc = 0x206cccu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 48));
label_206cd0:
    // 0x206cd0: 0x8e031db0
    ctx->pc = 0x206cd0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 7600)));
label_206cd4:
    // 0x206cd4: 0x3c020027
    ctx->pc = 0x206cd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
label_206cd8:
    // 0x206cd8: 0x24422978
    ctx->pc = 0x206cd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10616));
label_206cdc:
    // 0x206cdc: 0x31880
    ctx->pc = 0x206cdcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_206ce0:
    // 0x206ce0: 0x431021
    ctx->pc = 0x206ce0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_206ce4:
    // 0x206ce4: 0x8c450000
    ctx->pc = 0x206ce4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_206ce8:
    // 0x206ce8: 0xc0829ac
label_206cec:
    if (ctx->pc == 0x206CECu) {
        ctx->pc = 0x206CECu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x206CF0u;
        goto label_206cf0;
    }
    ctx->pc = 0x206CE8u;
    SET_GPR_U32(ctx, 31, 0x206CF0u);
    ctx->pc = 0x206CECu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20A6B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motionSelect__10PeopleTaskFPi_0x20a6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206CF0u; }
        else if (ctx->pc != 0x206CF0u) { ctx->pc = 0x206CF0u; }
    }
    if (ctx->pc != 0x206CF0u) { return; }
    ctx->pc = 0x206CF0u;
label_206cf0:
    // 0x206cf0: 0x2343c
    ctx->pc = 0x206cf0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
label_206cf4:
    // 0x206cf4: 0x3c02004a
    ctx->pc = 0x206cf4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
label_206cf8:
    // 0x206cf8: 0x6343f
    ctx->pc = 0x206cf8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_206cfc:
    // 0x206cfc: 0x72202e28
    ctx->pc = 0x206cfcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_206d00:
    // 0x206d00: 0x2444e8e0
    ctx->pc = 0x206d00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961376));
label_206d04:
    // 0x206d04: 0x70003e28
    ctx->pc = 0x206d04u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_206d08:
    // 0x206d08: 0xc07eabc
label_206d0c:
    if (ctx->pc == 0x206D0Cu) {
        ctx->pc = 0x206D0Cu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x206D10u;
        goto label_206d10;
    }
    ctx->pc = 0x206D08u;
    SET_GPR_U32(ctx, 31, 0x206D10u);
    ctx->pc = 0x206D0Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x1FAAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motSupplement__12BodyMgrClassFP10MotObjTaskiii_0x1faaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206D10u; }
        else if (ctx->pc != 0x206D10u) { ctx->pc = 0x206D10u; }
    }
    if (ctx->pc != 0x206D10u) { return; }
    ctx->pc = 0x206D10u;
label_206d10:
    // 0x206d10: 0x2402ffff
    ctx->pc = 0x206d10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_206d14:
    // 0x206d14: 0xae021dac
    ctx->pc = 0x206d14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7596), GPR_U32(ctx, 2));
label_206d18:
    // 0x206d18: 0xae021dd0
    ctx->pc = 0x206d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7632), GPR_U32(ctx, 2));
label_206d1c:
    // 0x206d1c: 0x3c0242c8
    ctx->pc = 0x206d1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)17096 << 16));
label_206d20:
    // 0x206d20: 0xae021d78
    ctx->pc = 0x206d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7544), GPR_U32(ctx, 2));
label_206d24:
    // 0x206d24: 0xc08318c
label_206d28:
    if (ctx->pc == 0x206D28u) {
        ctx->pc = 0x206D28u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x206D2Cu;
        goto label_206d2c;
    }
    ctx->pc = 0x206D24u;
    SET_GPR_U32(ctx, 31, 0x206D2Cu);
    ctx->pc = 0x206D28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20C630u;
    {
        const uint32_t __entryPc = ctx->pc;
        helpMe__10PeopleTaskFv_0x20c630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206D2Cu; }
        else if (ctx->pc != 0x206D2Cu) { ctx->pc = 0x206D2Cu; }
    }
    if (ctx->pc != 0x206D2Cu) { return; }
    ctx->pc = 0x206D2Cu;
label_206d2c:
    // 0x206d2c: 0x24020001
    ctx->pc = 0x206d2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_206d30:
    // 0x206d30: 0x1000001e
label_206d34:
    if (ctx->pc == 0x206D34u) {
        ctx->pc = 0x206D34u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 7608), GPR_U32(ctx, 2));
        ctx->pc = 0x206D38u;
        goto label_206d38;
    }
    ctx->pc = 0x206D30u;
    {
        const bool branch_taken_0x206d30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x206D34u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 7608), GPR_U32(ctx, 2));
        if (branch_taken_0x206d30) {
            ctx->pc = 0x206DACu;
            goto label_206dac;
        }
    }
    ctx->pc = 0x206D38u;
label_206d38:
    // 0x206d38: 0x8e021dac
    ctx->pc = 0x206d38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 7596)));
label_206d3c:
    // 0x206d3c: 0x1440001b
label_206d40:
    if (ctx->pc == 0x206D40u) {
        ctx->pc = 0x206D40u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x206D44u;
        goto label_206d44;
    }
    ctx->pc = 0x206D3Cu;
    {
        const bool branch_taken_0x206d3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x206D40u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x206d3c) {
            ctx->pc = 0x206DACu;
            goto label_206dac;
        }
    }
    ctx->pc = 0x206D44u;
label_206d44:
    // 0x206d44: 0x12000002
label_206d48:
    if (ctx->pc == 0x206D48u) {
        ctx->pc = 0x206D4Cu;
        goto label_206d4c;
    }
    ctx->pc = 0x206D44u;
    {
        const bool branch_taken_0x206d44 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x206d44) {
            ctx->pc = 0x206D50u;
            goto label_206d50;
        }
    }
    ctx->pc = 0x206D4Cu;
label_206d4c:
    // 0x206d4c: 0x26110030
    ctx->pc = 0x206d4cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 48));
label_206d50:
    // 0x206d50: 0x8e031db0
    ctx->pc = 0x206d50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 7600)));
label_206d54:
    // 0x206d54: 0x3c020027
    ctx->pc = 0x206d54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
label_206d58:
    // 0x206d58: 0x24422978
    ctx->pc = 0x206d58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10616));
label_206d5c:
    // 0x206d5c: 0x72002628
    ctx->pc = 0x206d5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_206d60:
    // 0x206d60: 0x31880
    ctx->pc = 0x206d60u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_206d64:
    // 0x206d64: 0x431021
    ctx->pc = 0x206d64u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_206d68:
    // 0x206d68: 0x8c420000
    ctx->pc = 0x206d68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_206d6c:
    // 0x206d6c: 0xc0829ac
label_206d70:
    if (ctx->pc == 0x206D70u) {
        ctx->pc = 0x206D70u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x206D74u;
        goto label_206d74;
    }
    ctx->pc = 0x206D6Cu;
    SET_GPR_U32(ctx, 31, 0x206D74u);
    ctx->pc = 0x206D70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 16));
    ctx->pc = 0x20A6B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motionSelect__10PeopleTaskFPi_0x20a6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206D74u; }
        else if (ctx->pc != 0x206D74u) { ctx->pc = 0x206D74u; }
    }
    if (ctx->pc != 0x206D74u) { return; }
    ctx->pc = 0x206D74u;
label_206d74:
    // 0x206d74: 0x2343c
    ctx->pc = 0x206d74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
label_206d78:
    // 0x206d78: 0x3c02004a
    ctx->pc = 0x206d78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
label_206d7c:
    // 0x206d7c: 0x6343f
    ctx->pc = 0x206d7cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_206d80:
    // 0x206d80: 0x72202e28
    ctx->pc = 0x206d80u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_206d84:
    // 0x206d84: 0x2444e8e0
    ctx->pc = 0x206d84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961376));
label_206d88:
    // 0x206d88: 0x70003e28
    ctx->pc = 0x206d88u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_206d8c:
    // 0x206d8c: 0xc07eb68
label_206d90:
    if (ctx->pc == 0x206D90u) {
        ctx->pc = 0x206D90u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x206D94u;
        goto label_206d94;
    }
    ctx->pc = 0x206D8Cu;
    SET_GPR_U32(ctx, 31, 0x206D94u);
    ctx->pc = 0x206D90u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x1FADA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motSupplementMove__12BodyMgrClassFP10MotObjTaskiii_0x1fada0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206D94u; }
        else if (ctx->pc != 0x206D94u) { ctx->pc = 0x206D94u; }
    }
    if (ctx->pc != 0x206D94u) { return; }
    ctx->pc = 0x206D94u;
label_206d94:
    // 0x206d94: 0x2402ffff
    ctx->pc = 0x206d94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_206d98:
    // 0x206d98: 0xae021dac
    ctx->pc = 0x206d98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7596), GPR_U32(ctx, 2));
label_206d9c:
    // 0x206d9c: 0x3c02be4c
    ctx->pc = 0x206d9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48716 << 16));
label_206da0:
    // 0x206da0: 0xae000088
    ctx->pc = 0x206da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_206da4:
    // 0x206da4: 0x3442cccd
    ctx->pc = 0x206da4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 52429));
label_206da8:
    // 0x206da8: 0xae020090
    ctx->pc = 0x206da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
label_206dac:
    // 0x206dac: 0x4bede37d
    ctx->pc = 0x206dacu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_206db0:
    // 0x206db0: 0x4bedeb7d
    ctx->pc = 0x206db0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_206db4:
    // 0x206db4: 0x4bedf37d
    ctx->pc = 0x206db4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_206db8:
    // 0x206db8: 0x4bedfb7d
    ctx->pc = 0x206db8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
label_206dbc:
    // 0x206dbc: 0x8f828c48
    ctx->pc = 0x206dbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
label_206dc0:
    // 0x206dc0: 0xc06c038
label_206dc4:
    if (ctx->pc == 0x206DC4u) {
        ctx->pc = 0x206DC4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
        ctx->pc = 0x206DC8u;
        goto label_206dc8;
    }
    ctx->pc = 0x206DC0u;
    SET_GPR_U32(ctx, 31, 0x206DC8u);
    ctx->pc = 0x206DC4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206DC8u; }
        else if (ctx->pc != 0x206DC8u) { ctx->pc = 0x206DC8u; }
    }
    if (ctx->pc != 0x206DC8u) { return; }
    ctx->pc = 0x206DC8u;
label_206dc8:
    // 0x206dc8: 0x3c02bf80
    ctx->pc = 0x206dc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
label_206dcc:
    // 0x206dcc: 0xafa20030
    ctx->pc = 0x206dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_206dd0:
    // 0x206dd0: 0xafa20034
    ctx->pc = 0x206dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_206dd4:
    // 0x206dd4: 0x3c023f80
    ctx->pc = 0x206dd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
label_206dd8:
    // 0x206dd8: 0xafa20038
    ctx->pc = 0x206dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_206ddc:
    // 0x206ddc: 0x27a40030
    ctx->pc = 0x206ddcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
label_206de0:
    // 0x206de0: 0xc06bf2b
label_206de4:
    if (ctx->pc == 0x206DE4u) {
        ctx->pc = 0x206DE4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x206DE8u;
        goto label_206de8;
    }
    ctx->pc = 0x206DE0u;
    SET_GPR_U32(ctx, 31, 0x206DE8u);
    ctx->pc = 0x206DE4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x1AFCACu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFCAC_0x1afcac(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206DE8u; }
        else if (ctx->pc != 0x206DE8u) { ctx->pc = 0x206DE8u; }
    }
    if (ctx->pc != 0x206DE8u) { return; }
    ctx->pc = 0x206DE8u;
label_206de8:
    // 0x206de8: 0xc7ac0040
    ctx->pc = 0x206de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_206dec:
    // 0x206dec: 0xc7ad0044
    ctx->pc = 0x206decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_206df0:
    // 0x206df0: 0xc7ae0048
    ctx->pc = 0x206df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_206df4:
    // 0x206df4: 0x26041d94
    ctx->pc = 0x206df4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 7572));
label_206df8:
    // 0x206df8: 0xc072348
label_206dfc:
    if (ctx->pc == 0x206DFCu) {
        ctx->pc = 0x206DFCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 7576));
        ctx->pc = 0x206E00u;
        goto label_206e00;
    }
    ctx->pc = 0x206DF8u;
    SET_GPR_U32(ctx, 31, 0x206E00u);
    ctx->pc = 0x206DFCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 7576));
    ctx->pc = 0x1C8D20u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetAngleYX__FfffPiPi_0x1c8d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206E00u; }
        else if (ctx->pc != 0x206E00u) { ctx->pc = 0x206E00u; }
    }
    if (ctx->pc != 0x206E00u) { return; }
    ctx->pc = 0x206E00u;
label_206e00:
    // 0x206e00: 0x4bff6b7e
    ctx->pc = 0x206e00u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_206e04:
    // 0x206e04: 0x4bfe6b7e
    ctx->pc = 0x206e04u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_206e08:
    // 0x206e08: 0x4bfd6b7e
    ctx->pc = 0x206e08u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_206e0c:
    // 0x206e0c: 0x4bfc6b7e
    ctx->pc = 0x206e0cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_206e10:
    // 0x206e10: 0x7bbf0020
    ctx->pc = 0x206e10u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_206e14:
    // 0x206e14: 0x7bb10010
    ctx->pc = 0x206e14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_206e18:
    // 0x206e18: 0x7bb00000
    ctx->pc = 0x206e18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_206e1c:
    // 0x206e1c: 0x3e00008
label_206e20:
    if (ctx->pc == 0x206E20u) {
        ctx->pc = 0x206E20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x206E24u;
        goto label_fallthrough_0x206e1c;
    }
    ctx->pc = 0x206E1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206E20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x206750u: goto label_206750;
            case 0x206754u: goto label_206754;
            case 0x206758u: goto label_206758;
            case 0x20675Cu: goto label_20675c;
            case 0x206760u: goto label_206760;
            case 0x206764u: goto label_206764;
            case 0x206768u: goto label_206768;
            case 0x20676Cu: goto label_20676c;
            case 0x206770u: goto label_206770;
            case 0x206774u: goto label_206774;
            case 0x206778u: goto label_206778;
            case 0x20677Cu: goto label_20677c;
            case 0x206780u: goto label_206780;
            case 0x206784u: goto label_206784;
            case 0x206788u: goto label_206788;
            case 0x20678Cu: goto label_20678c;
            case 0x206790u: goto label_206790;
            case 0x206794u: goto label_206794;
            case 0x206798u: goto label_206798;
            case 0x20679Cu: goto label_20679c;
            case 0x2067A0u: goto label_2067a0;
            case 0x2067A4u: goto label_2067a4;
            case 0x2067A8u: goto label_2067a8;
            case 0x2067ACu: goto label_2067ac;
            case 0x2067B0u: goto label_2067b0;
            case 0x2067B4u: goto label_2067b4;
            case 0x2067B8u: goto label_2067b8;
            case 0x2067BCu: goto label_2067bc;
            case 0x2067C0u: goto label_2067c0;
            case 0x2067C4u: goto label_2067c4;
            case 0x2067C8u: goto label_2067c8;
            case 0x2067CCu: goto label_2067cc;
            case 0x2067D0u: goto label_2067d0;
            case 0x2067D4u: goto label_2067d4;
            case 0x2067D8u: goto label_2067d8;
            case 0x2067DCu: goto label_2067dc;
            case 0x2067E0u: goto label_2067e0;
            case 0x2067E4u: goto label_2067e4;
            case 0x2067E8u: goto label_2067e8;
            case 0x2067ECu: goto label_2067ec;
            case 0x2067F0u: goto label_2067f0;
            case 0x2067F4u: goto label_2067f4;
            case 0x2067F8u: goto label_2067f8;
            case 0x2067FCu: goto label_2067fc;
            case 0x206800u: goto label_206800;
            case 0x206804u: goto label_206804;
            case 0x206808u: goto label_206808;
            case 0x20680Cu: goto label_20680c;
            case 0x206810u: goto label_206810;
            case 0x206814u: goto label_206814;
            case 0x206818u: goto label_206818;
            case 0x20681Cu: goto label_20681c;
            case 0x206820u: goto label_206820;
            case 0x206824u: goto label_206824;
            case 0x206828u: goto label_206828;
            case 0x20682Cu: goto label_20682c;
            case 0x206830u: goto label_206830;
            case 0x206834u: goto label_206834;
            case 0x206838u: goto label_206838;
            case 0x20683Cu: goto label_20683c;
            case 0x206840u: goto label_206840;
            case 0x206844u: goto label_206844;
            case 0x206848u: goto label_206848;
            case 0x20684Cu: goto label_20684c;
            case 0x206850u: goto label_206850;
            case 0x206854u: goto label_206854;
            case 0x206858u: goto label_206858;
            case 0x20685Cu: goto label_20685c;
            case 0x206860u: goto label_206860;
            case 0x206864u: goto label_206864;
            case 0x206868u: goto label_206868;
            case 0x20686Cu: goto label_20686c;
            case 0x206870u: goto label_206870;
            case 0x206874u: goto label_206874;
            case 0x206878u: goto label_206878;
            case 0x20687Cu: goto label_20687c;
            case 0x206880u: goto label_206880;
            case 0x206884u: goto label_206884;
            case 0x206888u: goto label_206888;
            case 0x20688Cu: goto label_20688c;
            case 0x206890u: goto label_206890;
            case 0x206894u: goto label_206894;
            case 0x206898u: goto label_206898;
            case 0x20689Cu: goto label_20689c;
            case 0x2068A0u: goto label_2068a0;
            case 0x2068A4u: goto label_2068a4;
            case 0x2068A8u: goto label_2068a8;
            case 0x2068ACu: goto label_2068ac;
            case 0x2068B0u: goto label_2068b0;
            case 0x2068B4u: goto label_2068b4;
            case 0x2068B8u: goto label_2068b8;
            case 0x2068BCu: goto label_2068bc;
            case 0x2068C0u: goto label_2068c0;
            case 0x2068C4u: goto label_2068c4;
            case 0x2068C8u: goto label_2068c8;
            case 0x2068CCu: goto label_2068cc;
            case 0x2068D0u: goto label_2068d0;
            case 0x2068D4u: goto label_2068d4;
            case 0x2068D8u: goto label_2068d8;
            case 0x2068DCu: goto label_2068dc;
            case 0x2068E0u: goto label_2068e0;
            case 0x2068E4u: goto label_2068e4;
            case 0x2068E8u: goto label_2068e8;
            case 0x2068ECu: goto label_2068ec;
            case 0x2068F0u: goto label_2068f0;
            case 0x2068F4u: goto label_2068f4;
            case 0x2068F8u: goto label_2068f8;
            case 0x2068FCu: goto label_2068fc;
            case 0x206900u: goto label_206900;
            case 0x206904u: goto label_206904;
            case 0x206908u: goto label_206908;
            case 0x20690Cu: goto label_20690c;
            case 0x206910u: goto label_206910;
            case 0x206914u: goto label_206914;
            case 0x206918u: goto label_206918;
            case 0x20691Cu: goto label_20691c;
            case 0x206920u: goto label_206920;
            case 0x206924u: goto label_206924;
            case 0x206928u: goto label_206928;
            case 0x20692Cu: goto label_20692c;
            case 0x206930u: goto label_206930;
            case 0x206934u: goto label_206934;
            case 0x206938u: goto label_206938;
            case 0x20693Cu: goto label_20693c;
            case 0x206940u: goto label_206940;
            case 0x206944u: goto label_206944;
            case 0x206948u: goto label_206948;
            case 0x20694Cu: goto label_20694c;
            case 0x206950u: goto label_206950;
            case 0x206954u: goto label_206954;
            case 0x206958u: goto label_206958;
            case 0x20695Cu: goto label_20695c;
            case 0x206960u: goto label_206960;
            case 0x206964u: goto label_206964;
            case 0x206968u: goto label_206968;
            case 0x20696Cu: goto label_20696c;
            case 0x206970u: goto label_206970;
            case 0x206974u: goto label_206974;
            case 0x206978u: goto label_206978;
            case 0x20697Cu: goto label_20697c;
            case 0x206980u: goto label_206980;
            case 0x206984u: goto label_206984;
            case 0x206988u: goto label_206988;
            case 0x20698Cu: goto label_20698c;
            case 0x206990u: goto label_206990;
            case 0x206994u: goto label_206994;
            case 0x206998u: goto label_206998;
            case 0x20699Cu: goto label_20699c;
            case 0x2069A0u: goto label_2069a0;
            case 0x2069A4u: goto label_2069a4;
            case 0x2069A8u: goto label_2069a8;
            case 0x2069ACu: goto label_2069ac;
            case 0x2069B0u: goto label_2069b0;
            case 0x2069B4u: goto label_2069b4;
            case 0x2069B8u: goto label_2069b8;
            case 0x2069BCu: goto label_2069bc;
            case 0x2069C0u: goto label_2069c0;
            case 0x2069C4u: goto label_2069c4;
            case 0x2069C8u: goto label_2069c8;
            case 0x2069CCu: goto label_2069cc;
            case 0x2069D0u: goto label_2069d0;
            case 0x2069D4u: goto label_2069d4;
            case 0x2069D8u: goto label_2069d8;
            case 0x2069DCu: goto label_2069dc;
            case 0x2069E0u: goto label_2069e0;
            case 0x2069E4u: goto label_2069e4;
            case 0x2069E8u: goto label_2069e8;
            case 0x2069ECu: goto label_2069ec;
            case 0x2069F0u: goto label_2069f0;
            case 0x2069F4u: goto label_2069f4;
            case 0x2069F8u: goto label_2069f8;
            case 0x2069FCu: goto label_2069fc;
            case 0x206A00u: goto label_206a00;
            case 0x206A04u: goto label_206a04;
            case 0x206A08u: goto label_206a08;
            case 0x206A0Cu: goto label_206a0c;
            case 0x206A10u: goto label_206a10;
            case 0x206A14u: goto label_206a14;
            case 0x206A18u: goto label_206a18;
            case 0x206A1Cu: goto label_206a1c;
            case 0x206A20u: goto label_206a20;
            case 0x206A24u: goto label_206a24;
            case 0x206A28u: goto label_206a28;
            case 0x206A2Cu: goto label_206a2c;
            case 0x206A30u: goto label_206a30;
            case 0x206A34u: goto label_206a34;
            case 0x206A38u: goto label_206a38;
            case 0x206A3Cu: goto label_206a3c;
            case 0x206A40u: goto label_206a40;
            case 0x206A44u: goto label_206a44;
            case 0x206A48u: goto label_206a48;
            case 0x206A4Cu: goto label_206a4c;
            case 0x206A50u: goto label_206a50;
            case 0x206A54u: goto label_206a54;
            case 0x206A58u: goto label_206a58;
            case 0x206A5Cu: goto label_206a5c;
            case 0x206A60u: goto label_206a60;
            case 0x206A64u: goto label_206a64;
            case 0x206A68u: goto label_206a68;
            case 0x206A6Cu: goto label_206a6c;
            case 0x206A70u: goto label_206a70;
            case 0x206A74u: goto label_206a74;
            case 0x206A78u: goto label_206a78;
            case 0x206A7Cu: goto label_206a7c;
            case 0x206A80u: goto label_206a80;
            case 0x206A84u: goto label_206a84;
            case 0x206A88u: goto label_206a88;
            case 0x206A8Cu: goto label_206a8c;
            case 0x206A90u: goto label_206a90;
            case 0x206A94u: goto label_206a94;
            case 0x206A98u: goto label_206a98;
            case 0x206A9Cu: goto label_206a9c;
            case 0x206AA0u: goto label_206aa0;
            case 0x206AA4u: goto label_206aa4;
            case 0x206AA8u: goto label_206aa8;
            case 0x206AACu: goto label_206aac;
            case 0x206AB0u: goto label_206ab0;
            case 0x206AB4u: goto label_206ab4;
            case 0x206AB8u: goto label_206ab8;
            case 0x206ABCu: goto label_206abc;
            case 0x206AC0u: goto label_206ac0;
            case 0x206AC4u: goto label_206ac4;
            case 0x206AC8u: goto label_206ac8;
            case 0x206ACCu: goto label_206acc;
            case 0x206AD0u: goto label_206ad0;
            case 0x206AD4u: goto label_206ad4;
            case 0x206AD8u: goto label_206ad8;
            case 0x206ADCu: goto label_206adc;
            case 0x206AE0u: goto label_206ae0;
            case 0x206AE4u: goto label_206ae4;
            case 0x206AE8u: goto label_206ae8;
            case 0x206AECu: goto label_206aec;
            case 0x206AF0u: goto label_206af0;
            case 0x206AF4u: goto label_206af4;
            case 0x206AF8u: goto label_206af8;
            case 0x206AFCu: goto label_206afc;
            case 0x206B00u: goto label_206b00;
            case 0x206B04u: goto label_206b04;
            case 0x206B08u: goto label_206b08;
            case 0x206B0Cu: goto label_206b0c;
            case 0x206B10u: goto label_206b10;
            case 0x206B14u: goto label_206b14;
            case 0x206B18u: goto label_206b18;
            case 0x206B1Cu: goto label_206b1c;
            case 0x206B20u: goto label_206b20;
            case 0x206B24u: goto label_206b24;
            case 0x206B28u: goto label_206b28;
            case 0x206B2Cu: goto label_206b2c;
            case 0x206B30u: goto label_206b30;
            case 0x206B34u: goto label_206b34;
            case 0x206B38u: goto label_206b38;
            case 0x206B3Cu: goto label_206b3c;
            case 0x206B40u: goto label_206b40;
            case 0x206B44u: goto label_206b44;
            case 0x206B48u: goto label_206b48;
            case 0x206B4Cu: goto label_206b4c;
            case 0x206B50u: goto label_206b50;
            case 0x206B54u: goto label_206b54;
            case 0x206B58u: goto label_206b58;
            case 0x206B5Cu: goto label_206b5c;
            case 0x206B60u: goto label_206b60;
            case 0x206B64u: goto label_206b64;
            case 0x206B68u: goto label_206b68;
            case 0x206B6Cu: goto label_206b6c;
            case 0x206B70u: goto label_206b70;
            case 0x206B74u: goto label_206b74;
            case 0x206B78u: goto label_206b78;
            case 0x206B7Cu: goto label_206b7c;
            case 0x206B80u: goto label_206b80;
            case 0x206B84u: goto label_206b84;
            case 0x206B88u: goto label_206b88;
            case 0x206B8Cu: goto label_206b8c;
            case 0x206B90u: goto label_206b90;
            case 0x206B94u: goto label_206b94;
            case 0x206B98u: goto label_206b98;
            case 0x206B9Cu: goto label_206b9c;
            case 0x206BA0u: goto label_206ba0;
            case 0x206BA4u: goto label_206ba4;
            case 0x206BA8u: goto label_206ba8;
            case 0x206BACu: goto label_206bac;
            case 0x206BB0u: goto label_206bb0;
            case 0x206BB4u: goto label_206bb4;
            case 0x206BB8u: goto label_206bb8;
            case 0x206BBCu: goto label_206bbc;
            case 0x206BC0u: goto label_206bc0;
            case 0x206BC4u: goto label_206bc4;
            case 0x206BC8u: goto label_206bc8;
            case 0x206BCCu: goto label_206bcc;
            case 0x206BD0u: goto label_206bd0;
            case 0x206BD4u: goto label_206bd4;
            case 0x206BD8u: goto label_206bd8;
            case 0x206BDCu: goto label_206bdc;
            case 0x206BE0u: goto label_206be0;
            case 0x206BE4u: goto label_206be4;
            case 0x206BE8u: goto label_206be8;
            case 0x206BECu: goto label_206bec;
            case 0x206BF0u: goto label_206bf0;
            case 0x206BF4u: goto label_206bf4;
            case 0x206BF8u: goto label_206bf8;
            case 0x206BFCu: goto label_206bfc;
            case 0x206C00u: goto label_206c00;
            case 0x206C04u: goto label_206c04;
            case 0x206C08u: goto label_206c08;
            case 0x206C0Cu: goto label_206c0c;
            case 0x206C10u: goto label_206c10;
            case 0x206C14u: goto label_206c14;
            case 0x206C18u: goto label_206c18;
            case 0x206C1Cu: goto label_206c1c;
            case 0x206C20u: goto label_206c20;
            case 0x206C24u: goto label_206c24;
            case 0x206C28u: goto label_206c28;
            case 0x206C2Cu: goto label_206c2c;
            case 0x206C30u: goto label_206c30;
            case 0x206C34u: goto label_206c34;
            case 0x206C38u: goto label_206c38;
            case 0x206C3Cu: goto label_206c3c;
            case 0x206C40u: goto label_206c40;
            case 0x206C44u: goto label_206c44;
            case 0x206C48u: goto label_206c48;
            case 0x206C4Cu: goto label_206c4c;
            case 0x206C50u: goto label_206c50;
            case 0x206C54u: goto label_206c54;
            case 0x206C58u: goto label_206c58;
            case 0x206C5Cu: goto label_206c5c;
            case 0x206C60u: goto label_206c60;
            case 0x206C64u: goto label_206c64;
            case 0x206C68u: goto label_206c68;
            case 0x206C6Cu: goto label_206c6c;
            case 0x206C70u: goto label_206c70;
            case 0x206C74u: goto label_206c74;
            case 0x206C78u: goto label_206c78;
            case 0x206C7Cu: goto label_206c7c;
            case 0x206C80u: goto label_206c80;
            case 0x206C84u: goto label_206c84;
            case 0x206C88u: goto label_206c88;
            case 0x206C8Cu: goto label_206c8c;
            case 0x206C90u: goto label_206c90;
            case 0x206C94u: goto label_206c94;
            case 0x206C98u: goto label_206c98;
            case 0x206C9Cu: goto label_206c9c;
            case 0x206CA0u: goto label_206ca0;
            case 0x206CA4u: goto label_206ca4;
            case 0x206CA8u: goto label_206ca8;
            case 0x206CACu: goto label_206cac;
            case 0x206CB0u: goto label_206cb0;
            case 0x206CB4u: goto label_206cb4;
            case 0x206CB8u: goto label_206cb8;
            case 0x206CBCu: goto label_206cbc;
            case 0x206CC0u: goto label_206cc0;
            case 0x206CC4u: goto label_206cc4;
            case 0x206CC8u: goto label_206cc8;
            case 0x206CCCu: goto label_206ccc;
            case 0x206CD0u: goto label_206cd0;
            case 0x206CD4u: goto label_206cd4;
            case 0x206CD8u: goto label_206cd8;
            case 0x206CDCu: goto label_206cdc;
            case 0x206CE0u: goto label_206ce0;
            case 0x206CE4u: goto label_206ce4;
            case 0x206CE8u: goto label_206ce8;
            case 0x206CECu: goto label_206cec;
            case 0x206CF0u: goto label_206cf0;
            case 0x206CF4u: goto label_206cf4;
            case 0x206CF8u: goto label_206cf8;
            case 0x206CFCu: goto label_206cfc;
            case 0x206D00u: goto label_206d00;
            case 0x206D04u: goto label_206d04;
            case 0x206D08u: goto label_206d08;
            case 0x206D0Cu: goto label_206d0c;
            case 0x206D10u: goto label_206d10;
            case 0x206D14u: goto label_206d14;
            case 0x206D18u: goto label_206d18;
            case 0x206D1Cu: goto label_206d1c;
            case 0x206D20u: goto label_206d20;
            case 0x206D24u: goto label_206d24;
            case 0x206D28u: goto label_206d28;
            case 0x206D2Cu: goto label_206d2c;
            case 0x206D30u: goto label_206d30;
            case 0x206D34u: goto label_206d34;
            case 0x206D38u: goto label_206d38;
            case 0x206D3Cu: goto label_206d3c;
            case 0x206D40u: goto label_206d40;
            case 0x206D44u: goto label_206d44;
            case 0x206D48u: goto label_206d48;
            case 0x206D4Cu: goto label_206d4c;
            case 0x206D50u: goto label_206d50;
            case 0x206D54u: goto label_206d54;
            case 0x206D58u: goto label_206d58;
            case 0x206D5Cu: goto label_206d5c;
            case 0x206D60u: goto label_206d60;
            case 0x206D64u: goto label_206d64;
            case 0x206D68u: goto label_206d68;
            case 0x206D6Cu: goto label_206d6c;
            case 0x206D70u: goto label_206d70;
            case 0x206D74u: goto label_206d74;
            case 0x206D78u: goto label_206d78;
            case 0x206D7Cu: goto label_206d7c;
            case 0x206D80u: goto label_206d80;
            case 0x206D84u: goto label_206d84;
            case 0x206D88u: goto label_206d88;
            case 0x206D8Cu: goto label_206d8c;
            case 0x206D90u: goto label_206d90;
            case 0x206D94u: goto label_206d94;
            case 0x206D98u: goto label_206d98;
            case 0x206D9Cu: goto label_206d9c;
            case 0x206DA0u: goto label_206da0;
            case 0x206DA4u: goto label_206da4;
            case 0x206DA8u: goto label_206da8;
            case 0x206DACu: goto label_206dac;
            case 0x206DB0u: goto label_206db0;
            case 0x206DB4u: goto label_206db4;
            case 0x206DB8u: goto label_206db8;
            case 0x206DBCu: goto label_206dbc;
            case 0x206DC0u: goto label_206dc0;
            case 0x206DC4u: goto label_206dc4;
            case 0x206DC8u: goto label_206dc8;
            case 0x206DCCu: goto label_206dcc;
            case 0x206DD0u: goto label_206dd0;
            case 0x206DD4u: goto label_206dd4;
            case 0x206DD8u: goto label_206dd8;
            case 0x206DDCu: goto label_206ddc;
            case 0x206DE0u: goto label_206de0;
            case 0x206DE4u: goto label_206de4;
            case 0x206DE8u: goto label_206de8;
            case 0x206DECu: goto label_206dec;
            case 0x206DF0u: goto label_206df0;
            case 0x206DF4u: goto label_206df4;
            case 0x206DF8u: goto label_206df8;
            case 0x206DFCu: goto label_206dfc;
            case 0x206E00u: goto label_206e00;
            case 0x206E04u: goto label_206e04;
            case 0x206E08u: goto label_206e08;
            case 0x206E0Cu: goto label_206e0c;
            case 0x206E10u: goto label_206e10;
            case 0x206E14u: goto label_206e14;
            case 0x206E18u: goto label_206e18;
            case 0x206E1Cu: goto label_206e1c;
            case 0x206E20u: goto label_206e20;
            default: break;
        }
        return;
    }
label_fallthrough_0x206e1c:
    ctx->pc = 0x206E24u;
}

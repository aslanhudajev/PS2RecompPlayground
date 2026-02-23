#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: st3Bs03Smoke__14TrnKomono2TaskFv
// Address: 0x222300 - 0x222730
void st3Bs03Smoke__14TrnKomono2TaskFv_0x222300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("st3Bs03Smoke__14TrnKomono2TaskFv");


    ctx->pc = 0x222300u;

    // 0x222300: 0x27bdffb0
    ctx->pc = 0x222300u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x222304: 0x7fbf0040
    ctx->pc = 0x222304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x222308: 0x7fb20030
    ctx->pc = 0x222308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x22230c: 0x7fb10020
    ctx->pc = 0x22230cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x222310: 0x7fb00010
    ctx->pc = 0x222310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x222314: 0xe7b40000
    ctx->pc = 0x222314u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x222318: 0x8f858c48
    ctx->pc = 0x222318u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x22231c: 0x70809628
    ctx->pc = 0x22231cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x222320: 0x2402023a
    ctx->pc = 0x222320u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 570));
    // 0x222324: 0x8ca40004
    ctx->pc = 0x222324u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x222328: 0x41840
    ctx->pc = 0x222328u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x22232c: 0x641821
    ctx->pc = 0x22232cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x222330: 0x31880
    ctx->pc = 0x222330u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x222334: 0x641821
    ctx->pc = 0x222334u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x222338: 0x31900
    ctx->pc = 0x222338u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x22233c: 0x652021
    ctx->pc = 0x22233cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x222340: 0x848300d0
    ctx->pc = 0x222340u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x222344: 0x1462000c
    ctx->pc = 0x222344u;
    {
        const bool branch_taken_0x222344 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x222344) {
            ctx->pc = 0x222378u;
            goto label_222378;
        }
    }
    ctx->pc = 0x22234Cu;
    // 0x22234c: 0xc48100c0
    ctx->pc = 0x22234cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222350: 0x3c02446d
    ctx->pc = 0x222350u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17517 << 16));
    // 0x222354: 0x34428000
    ctx->pc = 0x222354u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32768));
    // 0x222358: 0x44820000
    ctx->pc = 0x222358u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x22235c: 0x0
    ctx->pc = 0x22235cu;
    // NOP
    // 0x222360: 0x46000834
    ctx->pc = 0x222360u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222364: 0x0
    ctx->pc = 0x222364u;
    // NOP
    // 0x222368: 0x45010003
    ctx->pc = 0x222368u;
    {
        const bool branch_taken_0x222368 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x222368) {
            ctx->pc = 0x222378u;
            goto label_222378;
        }
    }
    ctx->pc = 0x222370u;
    // 0x222370: 0xc06898c
    ctx->pc = 0x222370u;
    SET_GPR_U32(ctx, 31, 0x222378u);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222378u; }
        else if (ctx->pc != 0x222378u) { ctx->pc = 0x222378u; }
    }
    if (ctx->pc != 0x222378u) { return; }
    ctx->pc = 0x222378u;
label_222378:
    // 0x222378: 0x3c020050
    ctx->pc = 0x222378u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x22237c: 0xc07ce18
    ctx->pc = 0x22237Cu;
    SET_GPR_U32(ctx, 31, 0x222384u);
    ctx->pc = 0x222380u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222384u; }
        else if (ctx->pc != 0x222384u) { ctx->pc = 0x222384u; }
    }
    if (ctx->pc != 0x222384u) { return; }
    ctx->pc = 0x222384u;
    // 0x222384: 0x1c40000a
    ctx->pc = 0x222384u;
    {
        const bool branch_taken_0x222384 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x222384) {
            ctx->pc = 0x2223B0u;
            goto label_2223b0;
        }
    }
    ctx->pc = 0x22238Cu;
    // 0x22238c: 0x3c023a83
    ctx->pc = 0x22238cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)14979 << 16));
    // 0x222390: 0x3442126f
    ctx->pc = 0x222390u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4719));
    // 0x222394: 0x44826800
    ctx->pc = 0x222394u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x222398: 0x3c023b03
    ctx->pc = 0x222398u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15107 << 16));
    // 0x22239c: 0x3442126f
    ctx->pc = 0x22239cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4719));
    // 0x2223a0: 0x44826000
    ctx->pc = 0x2223a0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x2223a4: 0x3c02001e
    ctx->pc = 0x2223a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)30 << 16));
    // 0x2223a8: 0xc24af3c
    ctx->pc = 0x2223A8u;
    SET_GPR_U32(ctx, 31, 0x2223B0u);
    ctx->pc = 0x2223ACu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 97));
    ctx->pc = 0x92BCF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MorphUV__Fiff_0x92bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2223B0u; }
        else if (ctx->pc != 0x2223B0u) { ctx->pc = 0x2223B0u; }
    }
    if (ctx->pc != 0x2223B0u) { return; }
    ctx->pc = 0x2223B0u;
label_2223b0:
    // 0x2223b0: 0x3c02002c
    ctx->pc = 0x2223b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x2223b4: 0x70008628
    ctx->pc = 0x2223b4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2223b8: 0x10000033
    ctx->pc = 0x2223B8u;
    {
        const bool branch_taken_0x2223b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2223BCu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 6000));
        if (branch_taken_0x2223b8) {
            ctx->pc = 0x222488u;
            goto label_222488;
        }
    }
    ctx->pc = 0x2223C0u;
label_2223c0:
    // 0x2223c0: 0x4bede37d
    ctx->pc = 0x2223c0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x2223c4: 0x4bedeb7d
    ctx->pc = 0x2223c4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x2223c8: 0x4bedf37d
    ctx->pc = 0x2223c8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x2223cc: 0x4bedfb7d
    ctx->pc = 0x2223ccu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x2223d0: 0xc62d0004
    ctx->pc = 0x2223d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2223d4: 0xc62e0008
    ctx->pc = 0x2223d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2223d8: 0xc06c202
    ctx->pc = 0x2223D8u;
    SET_GPR_U32(ctx, 31, 0x2223E0u);
    ctx->pc = 0x2223DCu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2223E0u; }
        else if (ctx->pc != 0x2223E0u) { ctx->pc = 0x2223E0u; }
    }
    if (ctx->pc != 0x2223E0u) { return; }
    ctx->pc = 0x2223E0u;
    // 0x2223e0: 0xc06c157
    ctx->pc = 0x2223E0u;
    SET_GPR_U32(ctx, 31, 0x2223E8u);
    ctx->pc = 0x2223E4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2223E8u; }
        else if (ctx->pc != 0x2223E8u) { ctx->pc = 0x2223E8u; }
    }
    if (ctx->pc != 0x2223E8u) { return; }
    ctx->pc = 0x2223E8u;
    // 0x2223e8: 0xc06c0fb
    ctx->pc = 0x2223E8u;
    SET_GPR_U32(ctx, 31, 0x2223F0u);
    ctx->pc = 0x2223ECu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2223F0u; }
        else if (ctx->pc != 0x2223F0u) { ctx->pc = 0x2223F0u; }
    }
    if (ctx->pc != 0x2223F0u) { return; }
    ctx->pc = 0x2223F0u;
    // 0x2223f0: 0xc06c09f
    ctx->pc = 0x2223F0u;
    SET_GPR_U32(ctx, 31, 0x2223F8u);
    ctx->pc = 0x2223F4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2223F8u; }
        else if (ctx->pc != 0x2223F8u) { ctx->pc = 0x2223F8u; }
    }
    if (ctx->pc != 0x2223F8u) { return; }
    ctx->pc = 0x2223F8u;
    // 0x2223f8: 0xc62c0018
    ctx->pc = 0x2223f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2223fc: 0xc62d001c
    ctx->pc = 0x2223fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x222400: 0x46006506
    ctx->pc = 0x222400u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x222404: 0x460da034
    ctx->pc = 0x222404u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222408: 0x0
    ctx->pc = 0x222408u;
    // NOP
    // 0x22240c: 0x45000002
    ctx->pc = 0x22240Cu;
    {
        const bool branch_taken_0x22240c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22240c) {
            ctx->pc = 0x222418u;
            goto label_222418;
        }
    }
    ctx->pc = 0x222414u;
    // 0x222414: 0x46006d06
    ctx->pc = 0x222414u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
label_222418:
    // 0x222418: 0xc62e0020
    ctx->pc = 0x222418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x22241c: 0x460ea034
    ctx->pc = 0x22241cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222420: 0x0
    ctx->pc = 0x222420u;
    // NOP
    // 0x222424: 0x45000002
    ctx->pc = 0x222424u;
    {
        const bool branch_taken_0x222424 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x222424) {
            ctx->pc = 0x222430u;
            goto label_222430;
        }
    }
    ctx->pc = 0x22242Cu;
    // 0x22242c: 0x46007506
    ctx->pc = 0x22242cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
label_222430:
    // 0x222430: 0xc06c1b3
    ctx->pc = 0x222430u;
    SET_GPR_U32(ctx, 31, 0x222438u);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222438u; }
        else if (ctx->pc != 0x222438u) { ctx->pc = 0x222438u; }
    }
    if (ctx->pc != 0x222438u) { return; }
    ctx->pc = 0x222438u;
    // 0x222438: 0xc06b218
    ctx->pc = 0x222438u;
    SET_GPR_U32(ctx, 31, 0x222440u);
    ctx->pc = 0x22243Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222440u; }
        else if (ctx->pc != 0x222440u) { ctx->pc = 0x222440u; }
    }
    if (ctx->pc != 0x222440u) { return; }
    ctx->pc = 0x222440u;
    // 0x222440: 0x2a010002
    ctx->pc = 0x222440u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 2));
    // 0x222444: 0x10200007
    ctx->pc = 0x222444u;
    {
        const bool branch_taken_0x222444 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x222448u;
        SET_GPR_U32(ctx, 2, ((uint32_t)30 << 16));
        if (branch_taken_0x222444) {
            ctx->pc = 0x222464u;
            goto label_222464;
        }
    }
    ctx->pc = 0x22244Cu;
    // 0x22244c: 0x3c02001e
    ctx->pc = 0x22244cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)30 << 16));
    // 0x222450: 0xc0853ac
    ctx->pc = 0x222450u;
    SET_GPR_U32(ctx, 31, 0x222458u);
    ctx->pc = 0x222454u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 96));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222458u; }
        else if (ctx->pc != 0x222458u) { ctx->pc = 0x222458u; }
    }
    if (ctx->pc != 0x222458u) { return; }
    ctx->pc = 0x222458u;
    // 0x222458: 0x10000006
    ctx->pc = 0x222458u;
    {
        const bool branch_taken_0x222458 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22245Cu;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x222458) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x222460u;
    // 0x222460: 0x3c02001e
    ctx->pc = 0x222460u;
    SET_GPR_U32(ctx, 2, ((uint32_t)30 << 16));
label_222464:
    // 0x222464: 0xc0853ac
    ctx->pc = 0x222464u;
    SET_GPR_U32(ctx, 31, 0x22246Cu);
    ctx->pc = 0x222468u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 97));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22246Cu; }
        else if (ctx->pc != 0x22246Cu) { ctx->pc = 0x22246Cu; }
    }
    if (ctx->pc != 0x22246Cu) { return; }
    ctx->pc = 0x22246Cu;
    // 0x22246c: 0x0
    ctx->pc = 0x22246cu;
    // NOP
    // 0x222470: 0x4bff6b7e
    ctx->pc = 0x222470u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_222474:
    // 0x222474: 0x4bfe6b7e
    ctx->pc = 0x222474u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x222478: 0x4bfd6b7e
    ctx->pc = 0x222478u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x22247c: 0x4bfc6b7e
    ctx->pc = 0x22247cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x222480: 0x26100001
    ctx->pc = 0x222480u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x222484: 0x26310024
    ctx->pc = 0x222484u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 36));
label_222488:
    // 0x222488: 0x2e020009
    ctx->pc = 0x222488u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 9));
    // 0x22248c: 0x1440ffcc
    ctx->pc = 0x22248Cu;
    {
        const bool branch_taken_0x22248c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x222490u;
        SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
        if (branch_taken_0x22248c) {
            ctx->pc = 0x2223C0u;
            goto label_2223c0;
        }
    }
    ctx->pc = 0x222494u;
    // 0x222494: 0x70008628
    ctx->pc = 0x222494u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x222498: 0x1000002f
    ctx->pc = 0x222498u;
    {
        const bool branch_taken_0x222498 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22249Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 6336));
        if (branch_taken_0x222498) {
            ctx->pc = 0x222558u;
            goto label_222558;
        }
    }
    ctx->pc = 0x2224A0u;
label_2224a0:
    // 0x2224a0: 0x4bede37d
    ctx->pc = 0x2224a0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x2224a4: 0x4bedeb7d
    ctx->pc = 0x2224a4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x2224a8: 0x4bedf37d
    ctx->pc = 0x2224a8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x2224ac: 0x4bedfb7d
    ctx->pc = 0x2224acu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x2224b0: 0xc62d0004
    ctx->pc = 0x2224b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2224b4: 0xc62e0008
    ctx->pc = 0x2224b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2224b8: 0xc06c202
    ctx->pc = 0x2224B8u;
    SET_GPR_U32(ctx, 31, 0x2224C0u);
    ctx->pc = 0x2224BCu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2224C0u; }
        else if (ctx->pc != 0x2224C0u) { ctx->pc = 0x2224C0u; }
    }
    if (ctx->pc != 0x2224C0u) { return; }
    ctx->pc = 0x2224C0u;
    // 0x2224c0: 0xc06c213
    ctx->pc = 0x2224C0u;
    SET_GPR_U32(ctx, 31, 0x2224C8u);
    ctx->pc = 0x1B084Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B084C_0x1b084c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2224C8u; }
        else if (ctx->pc != 0x2224C8u) { ctx->pc = 0x2224C8u; }
    }
    if (ctx->pc != 0x2224C8u) { return; }
    ctx->pc = 0x2224C8u;
    // 0x2224c8: 0xc62c0018
    ctx->pc = 0x2224c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2224cc: 0xc62d001c
    ctx->pc = 0x2224ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2224d0: 0x46006506
    ctx->pc = 0x2224d0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2224d4: 0x460da034
    ctx->pc = 0x2224d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2224d8: 0x0
    ctx->pc = 0x2224d8u;
    // NOP
    // 0x2224dc: 0x45000002
    ctx->pc = 0x2224DCu;
    {
        const bool branch_taken_0x2224dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2224dc) {
            ctx->pc = 0x2224E8u;
            goto label_2224e8;
        }
    }
    ctx->pc = 0x2224E4u;
    // 0x2224e4: 0x46006d06
    ctx->pc = 0x2224e4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
label_2224e8:
    // 0x2224e8: 0xc62e0020
    ctx->pc = 0x2224e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2224ec: 0x460ea034
    ctx->pc = 0x2224ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2224f0: 0x0
    ctx->pc = 0x2224f0u;
    // NOP
    // 0x2224f4: 0x45000002
    ctx->pc = 0x2224F4u;
    {
        const bool branch_taken_0x2224f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2224f4) {
            ctx->pc = 0x222500u;
            goto label_222500;
        }
    }
    ctx->pc = 0x2224FCu;
    // 0x2224fc: 0x46007506
    ctx->pc = 0x2224fcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
label_222500:
    // 0x222500: 0xc06c1b3
    ctx->pc = 0x222500u;
    SET_GPR_U32(ctx, 31, 0x222508u);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222508u; }
        else if (ctx->pc != 0x222508u) { ctx->pc = 0x222508u; }
    }
    if (ctx->pc != 0x222508u) { return; }
    ctx->pc = 0x222508u;
    // 0x222508: 0xc06b218
    ctx->pc = 0x222508u;
    SET_GPR_U32(ctx, 31, 0x222510u);
    ctx->pc = 0x22250Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222510u; }
        else if (ctx->pc != 0x222510u) { ctx->pc = 0x222510u; }
    }
    if (ctx->pc != 0x222510u) { return; }
    ctx->pc = 0x222510u;
    // 0x222510: 0x2a010004
    ctx->pc = 0x222510u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 4));
    // 0x222514: 0x10200007
    ctx->pc = 0x222514u;
    {
        const bool branch_taken_0x222514 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x222518u;
        SET_GPR_U32(ctx, 2, ((uint32_t)30 << 16));
        if (branch_taken_0x222514) {
            ctx->pc = 0x222534u;
            goto label_222534;
        }
    }
    ctx->pc = 0x22251Cu;
    // 0x22251c: 0x3c02001e
    ctx->pc = 0x22251cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)30 << 16));
    // 0x222520: 0xc0853ac
    ctx->pc = 0x222520u;
    SET_GPR_U32(ctx, 31, 0x222528u);
    ctx->pc = 0x222524u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 96));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222528u; }
        else if (ctx->pc != 0x222528u) { ctx->pc = 0x222528u; }
    }
    if (ctx->pc != 0x222528u) { return; }
    ctx->pc = 0x222528u;
    // 0x222528: 0x10000006
    ctx->pc = 0x222528u;
    {
        const bool branch_taken_0x222528 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22252Cu;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x222528) {
            ctx->pc = 0x222544u;
            goto label_222544;
        }
    }
    ctx->pc = 0x222530u;
    // 0x222530: 0x3c02001e
    ctx->pc = 0x222530u;
    SET_GPR_U32(ctx, 2, ((uint32_t)30 << 16));
label_222534:
    // 0x222534: 0xc0853ac
    ctx->pc = 0x222534u;
    SET_GPR_U32(ctx, 31, 0x22253Cu);
    ctx->pc = 0x222538u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 97));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22253Cu; }
        else if (ctx->pc != 0x22253Cu) { ctx->pc = 0x22253Cu; }
    }
    if (ctx->pc != 0x22253Cu) { return; }
    ctx->pc = 0x22253Cu;
    // 0x22253c: 0x0
    ctx->pc = 0x22253cu;
    // NOP
    // 0x222540: 0x4bff6b7e
    ctx->pc = 0x222540u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_222544:
    // 0x222544: 0x4bfe6b7e
    ctx->pc = 0x222544u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x222548: 0x4bfd6b7e
    ctx->pc = 0x222548u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x22254c: 0x4bfc6b7e
    ctx->pc = 0x22254cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x222550: 0x26100001
    ctx->pc = 0x222550u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x222554: 0x26310024
    ctx->pc = 0x222554u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 36));
label_222558:
    // 0x222558: 0x2e02000a
    ctx->pc = 0x222558u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 10));
    // 0x22255c: 0x1440ffd0
    ctx->pc = 0x22255Cu;
    {
        const bool branch_taken_0x22255c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x222560u;
        SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
        if (branch_taken_0x22255c) {
            ctx->pc = 0x2224A0u;
            goto label_2224a0;
        }
    }
    ctx->pc = 0x222564u;
    // 0x222564: 0xc07ce18
    ctx->pc = 0x222564u;
    SET_GPR_U32(ctx, 31, 0x22256Cu);
    ctx->pc = 0x222568u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22256Cu; }
        else if (ctx->pc != 0x22256Cu) { ctx->pc = 0x22256Cu; }
    }
    if (ctx->pc != 0x22256Cu) { return; }
    ctx->pc = 0x22256Cu;
    // 0x22256c: 0x1c40001a
    ctx->pc = 0x22256Cu;
    {
        const bool branch_taken_0x22256c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x22256c) {
            ctx->pc = 0x2225D8u;
            goto label_2225d8;
        }
    }
    ctx->pc = 0x222574u;
    // 0x222574: 0x70008e28
    ctx->pc = 0x222574u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x222578: 0x10000013
    ctx->pc = 0x222578u;
    {
        const bool branch_taken_0x222578 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22257Cu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x222578) {
            ctx->pc = 0x2225C8u;
            goto label_2225c8;
        }
    }
    ctx->pc = 0x222580u;
label_222580:
    // 0x222580: 0x8e030070
    ctx->pc = 0x222580u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x222584: 0x5460000f
    ctx->pc = 0x222584u;
    {
        const bool branch_taken_0x222584 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x222584) {
            ctx->pc = 0x222588u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
            ctx->pc = 0x2225C4u;
            goto label_2225c4;
        }
    }
    ctx->pc = 0x22258Cu;
    // 0x22258c: 0xc069fb8
    ctx->pc = 0x22258Cu;
    SET_GPR_U32(ctx, 31, 0x222594u);
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222594u; }
        else if (ctx->pc != 0x222594u) { ctx->pc = 0x222594u; }
    }
    if (ctx->pc != 0x222594u) { return; }
    ctx->pc = 0x222594u;
    // 0x222594: 0x24030064
    ctx->pc = 0x222594u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 100));
    // 0x222598: 0x43001a
    ctx->pc = 0x222598u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x22259c: 0x0
    ctx->pc = 0x22259cu;
    // NOP
    // 0x2225a0: 0x0
    ctx->pc = 0x2225a0u;
    // NOP
    // 0x2225a4: 0x1810
    ctx->pc = 0x2225a4u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x2225a8: 0x1c600005
    ctx->pc = 0x2225A8u;
    {
        const bool branch_taken_0x2225a8 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2225ACu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2225a8) {
            ctx->pc = 0x2225C0u;
            goto label_2225c0;
        }
    }
    ctx->pc = 0x2225B0u;
    // 0x2225b0: 0xae030070
    ctx->pc = 0x2225b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    // 0x2225b4: 0x3c033f80
    ctx->pc = 0x2225b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x2225b8: 0xae0300e0
    ctx->pc = 0x2225b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
    // 0x2225bc: 0x0
    ctx->pc = 0x2225bcu;
    // NOP
label_2225c0:
    // 0x2225c0: 0x26100004
    ctx->pc = 0x2225c0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
label_2225c4:
    // 0x2225c4: 0x26310001
    ctx->pc = 0x2225c4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_2225c8:
    // 0x2225c8: 0x2e230004
    ctx->pc = 0x2225c8u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 17), 4));
    // 0x2225cc: 0x1460ffec
    ctx->pc = 0x2225CCu;
    {
        const bool branch_taken_0x2225cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2225cc) {
            ctx->pc = 0x222580u;
            goto label_222580;
        }
    }
    ctx->pc = 0x2225D4u;
    // 0x2225d4: 0x0
    ctx->pc = 0x2225d4u;
    // NOP
label_2225d8:
    // 0x2225d8: 0x3c03002c
    ctx->pc = 0x2225d8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x2225dc: 0x70008628
    ctx->pc = 0x2225dcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2225e0: 0x10000049
    ctx->pc = 0x2225E0u;
    {
        const bool branch_taken_0x2225e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2225E4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 6704));
        if (branch_taken_0x2225e0) {
            ctx->pc = 0x222708u;
            goto label_222708;
        }
    }
    ctx->pc = 0x2225E8u;
label_2225e8:
    // 0x2225e8: 0x8e430070
    ctx->pc = 0x2225e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x2225ec: 0x50600043
    ctx->pc = 0x2225ECu;
    {
        const bool branch_taken_0x2225ec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2225ec) {
            ctx->pc = 0x2225F0u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
            ctx->pc = 0x2226FCu;
            goto label_2226fc;
        }
    }
    ctx->pc = 0x2225F4u;
    // 0x2225f4: 0xc64100e0
    ctx->pc = 0x2225f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2225f8: 0x44800000
    ctx->pc = 0x2225f8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2225fc: 0x0
    ctx->pc = 0x2225fcu;
    // NOP
    // 0x222600: 0x46000836
    ctx->pc = 0x222600u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222604: 0x0
    ctx->pc = 0x222604u;
    // NOP
    // 0x222608: 0x45010029
    ctx->pc = 0x222608u;
    {
        const bool branch_taken_0x222608 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x222608) {
            ctx->pc = 0x2226B0u;
            goto label_2226b0;
        }
    }
    ctx->pc = 0x222610u;
    // 0x222610: 0x4bede37d
    ctx->pc = 0x222610u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x222614: 0x4bedeb7d
    ctx->pc = 0x222614u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x222618: 0x4bedf37d
    ctx->pc = 0x222618u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x22261c: 0x4bedfb7d
    ctx->pc = 0x22261cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x222620: 0xc62d0004
    ctx->pc = 0x222620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x222624: 0xc62e0008
    ctx->pc = 0x222624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x222628: 0xc06c202
    ctx->pc = 0x222628u;
    SET_GPR_U32(ctx, 31, 0x222630u);
    ctx->pc = 0x22262Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222630u; }
        else if (ctx->pc != 0x222630u) { ctx->pc = 0x222630u; }
    }
    if (ctx->pc != 0x222630u) { return; }
    ctx->pc = 0x222630u;
    // 0x222630: 0xc06c157
    ctx->pc = 0x222630u;
    SET_GPR_U32(ctx, 31, 0x222638u);
    ctx->pc = 0x222634u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222638u; }
        else if (ctx->pc != 0x222638u) { ctx->pc = 0x222638u; }
    }
    if (ctx->pc != 0x222638u) { return; }
    ctx->pc = 0x222638u;
    // 0x222638: 0xc06c0fb
    ctx->pc = 0x222638u;
    SET_GPR_U32(ctx, 31, 0x222640u);
    ctx->pc = 0x22263Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222640u; }
        else if (ctx->pc != 0x222640u) { ctx->pc = 0x222640u; }
    }
    if (ctx->pc != 0x222640u) { return; }
    ctx->pc = 0x222640u;
    // 0x222640: 0xc06c09f
    ctx->pc = 0x222640u;
    SET_GPR_U32(ctx, 31, 0x222648u);
    ctx->pc = 0x222644u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222648u; }
        else if (ctx->pc != 0x222648u) { ctx->pc = 0x222648u; }
    }
    if (ctx->pc != 0x222648u) { return; }
    ctx->pc = 0x222648u;
    // 0x222648: 0xc62c0018
    ctx->pc = 0x222648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22264c: 0xc62d001c
    ctx->pc = 0x22264cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x222650: 0x46006506
    ctx->pc = 0x222650u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x222654: 0x460da034
    ctx->pc = 0x222654u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222658: 0x0
    ctx->pc = 0x222658u;
    // NOP
    // 0x22265c: 0x45000002
    ctx->pc = 0x22265Cu;
    {
        const bool branch_taken_0x22265c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22265c) {
            ctx->pc = 0x222668u;
            goto label_222668;
        }
    }
    ctx->pc = 0x222664u;
    // 0x222664: 0x46006d06
    ctx->pc = 0x222664u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
label_222668:
    // 0x222668: 0xc62e0020
    ctx->pc = 0x222668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x22266c: 0x460ea034
    ctx->pc = 0x22266cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222670: 0x0
    ctx->pc = 0x222670u;
    // NOP
    // 0x222674: 0x45000002
    ctx->pc = 0x222674u;
    {
        const bool branch_taken_0x222674 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x222674) {
            ctx->pc = 0x222680u;
            goto label_222680;
        }
    }
    ctx->pc = 0x22267Cu;
    // 0x22267c: 0x46007506
    ctx->pc = 0x22267cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
label_222680:
    // 0x222680: 0xc06c1b3
    ctx->pc = 0x222680u;
    SET_GPR_U32(ctx, 31, 0x222688u);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222688u; }
        else if (ctx->pc != 0x222688u) { ctx->pc = 0x222688u; }
    }
    if (ctx->pc != 0x222688u) { return; }
    ctx->pc = 0x222688u;
    // 0x222688: 0xc06b218
    ctx->pc = 0x222688u;
    SET_GPR_U32(ctx, 31, 0x222690u);
    ctx->pc = 0x22268Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222690u; }
        else if (ctx->pc != 0x222690u) { ctx->pc = 0x222690u; }
    }
    if (ctx->pc != 0x222690u) { return; }
    ctx->pc = 0x222690u;
    // 0x222690: 0xc64c00e0
    ctx->pc = 0x222690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x222694: 0x3c02001f
    ctx->pc = 0x222694u;
    SET_GPR_U32(ctx, 2, ((uint32_t)31 << 16));
    // 0x222698: 0xc0853e4
    ctx->pc = 0x222698u;
    SET_GPR_U32(ctx, 31, 0x2226A0u);
    ctx->pc = 0x22269Cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 99));
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2226A0u; }
        else if (ctx->pc != 0x2226A0u) { ctx->pc = 0x2226A0u; }
    }
    if (ctx->pc != 0x2226A0u) { return; }
    ctx->pc = 0x2226A0u;
    // 0x2226a0: 0x4bff6b7e
    ctx->pc = 0x2226a0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2226a4: 0x4bfe6b7e
    ctx->pc = 0x2226a4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2226a8: 0x4bfd6b7e
    ctx->pc = 0x2226a8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2226ac: 0x4bfc6b7e
    ctx->pc = 0x2226acu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2226b0:
    // 0x2226b0: 0x3c020050
    ctx->pc = 0x2226b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x2226b4: 0xc07ce18
    ctx->pc = 0x2226B4u;
    SET_GPR_U32(ctx, 31, 0x2226BCu);
    ctx->pc = 0x2226B8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2226BCu; }
        else if (ctx->pc != 0x2226BCu) { ctx->pc = 0x2226BCu; }
    }
    if (ctx->pc != 0x2226BCu) { return; }
    ctx->pc = 0x2226BCu;
    // 0x2226bc: 0x1c40000e
    ctx->pc = 0x2226BCu;
    {
        const bool branch_taken_0x2226bc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2226bc) {
            ctx->pc = 0x2226F8u;
            goto label_2226f8;
        }
    }
    ctx->pc = 0x2226C4u;
    // 0x2226c4: 0xc64200e0
    ctx->pc = 0x2226c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2226c8: 0x3c033ca3
    ctx->pc = 0x2226c8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15523 << 16));
    // 0x2226cc: 0x3463d70a
    ctx->pc = 0x2226ccu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 55050));
    // 0x2226d0: 0x44830800
    ctx->pc = 0x2226d0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x2226d4: 0x3c03c0a0
    ctx->pc = 0x2226d4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49312 << 16));
    // 0x2226d8: 0x46011041
    ctx->pc = 0x2226d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2226dc: 0x44830000
    ctx->pc = 0x2226dcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x2226e0: 0x0
    ctx->pc = 0x2226e0u;
    // NOP
    // 0x2226e4: 0x46000836
    ctx->pc = 0x2226e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2226e8: 0x0
    ctx->pc = 0x2226e8u;
    // NOP
    // 0x2226ec: 0x45000002
    ctx->pc = 0x2226ECu;
    {
        const bool branch_taken_0x2226ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2226F0u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
        if (branch_taken_0x2226ec) {
            ctx->pc = 0x2226F8u;
            goto label_2226f8;
        }
    }
    ctx->pc = 0x2226F4u;
    // 0x2226f4: 0xae400070
    ctx->pc = 0x2226f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 0));
label_2226f8:
    // 0x2226f8: 0x26520004
    ctx->pc = 0x2226f8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
label_2226fc:
    // 0x2226fc: 0x26100001
    ctx->pc = 0x2226fcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x222700: 0x26310024
    ctx->pc = 0x222700u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 36));
    // 0x222704: 0x0
    ctx->pc = 0x222704u;
    // NOP
label_222708:
    // 0x222708: 0x2e030004
    ctx->pc = 0x222708u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 16), 4));
    // 0x22270c: 0x1460ffb6
    ctx->pc = 0x22270Cu;
    {
        const bool branch_taken_0x22270c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x22270c) {
            ctx->pc = 0x2225E8u;
            goto label_2225e8;
        }
    }
    ctx->pc = 0x222714u;
    // 0x222714: 0x7bbf0040
    ctx->pc = 0x222714u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x222718: 0x7bb20030
    ctx->pc = 0x222718u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22271c: 0x7bb10020
    ctx->pc = 0x22271cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222720: 0x7bb00010
    ctx->pc = 0x222720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222724: 0xc7b40000
    ctx->pc = 0x222724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x222728: 0x3e00008
    ctx->pc = 0x222728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22272Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x222378u: goto label_222378;
            case 0x2223B0u: goto label_2223b0;
            case 0x2223C0u: goto label_2223c0;
            case 0x222418u: goto label_222418;
            case 0x222430u: goto label_222430;
            case 0x222464u: goto label_222464;
            case 0x222474u: goto label_222474;
            case 0x222488u: goto label_222488;
            case 0x2224A0u: goto label_2224a0;
            case 0x2224E8u: goto label_2224e8;
            case 0x222500u: goto label_222500;
            case 0x222534u: goto label_222534;
            case 0x222544u: goto label_222544;
            case 0x222558u: goto label_222558;
            case 0x222580u: goto label_222580;
            case 0x2225C0u: goto label_2225c0;
            case 0x2225C4u: goto label_2225c4;
            case 0x2225C8u: goto label_2225c8;
            case 0x2225D8u: goto label_2225d8;
            case 0x2225E8u: goto label_2225e8;
            case 0x222668u: goto label_222668;
            case 0x222680u: goto label_222680;
            case 0x2226B0u: goto label_2226b0;
            case 0x2226F8u: goto label_2226f8;
            case 0x2226FCu: goto label_2226fc;
            case 0x222708u: goto label_222708;
            default: break;
        }
        return;
    }
    ctx->pc = 0x222730u;
}

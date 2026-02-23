#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: st5Takitubo__14TrnKomono2TaskFv
// Address: 0x222e40 - 0x223050
void st5Takitubo__14TrnKomono2TaskFv_0x222e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("st5Takitubo__14TrnKomono2TaskFv");


    ctx->pc = 0x222e40u;

    // 0x222e40: 0x27bdffa0
    ctx->pc = 0x222e40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x222e44: 0x7fbf0050
    ctx->pc = 0x222e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x222e48: 0x7fb40040
    ctx->pc = 0x222e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x222e4c: 0x3c024391
    ctx->pc = 0x222e4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)17297 << 16));
    // 0x222e50: 0x7fb30030
    ctx->pc = 0x222e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x222e54: 0x34428000
    ctx->pc = 0x222e54u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32768));
    // 0x222e58: 0x7fb20020
    ctx->pc = 0x222e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x222e5c: 0x7fb10010
    ctx->pc = 0x222e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x222e60: 0x44826000
    ctx->pc = 0x222e60u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x222e64: 0x7080a628
    ctx->pc = 0x222e64u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x222e68: 0x2405013a
    ctx->pc = 0x222e68u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 314));
    // 0x222e6c: 0xc08822c
    ctx->pc = 0x222E6Cu;
    SET_GPR_U32(ctx, 31, 0x222E74u);
    ctx->pc = 0x222E70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x2208B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        checkCloseCamPath__14TrnKomono2TaskFif_0x2208b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222E74u; }
        else if (ctx->pc != 0x222E74u) { ctx->pc = 0x222E74u; }
    }
    if (ctx->pc != 0x222E74u) { return; }
    ctx->pc = 0x222E74u;
    // 0x222e74: 0x3c024402
    ctx->pc = 0x222e74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17410 << 16));
    // 0x222e78: 0x44826000
    ctx->pc = 0x222e78u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x222e7c: 0x72802628
    ctx->pc = 0x222e7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x222e80: 0xc08822c
    ctx->pc = 0x222E80u;
    SET_GPR_U32(ctx, 31, 0x222E88u);
    ctx->pc = 0x222E84u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 654));
    ctx->pc = 0x2208B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        checkCloseCamPath__14TrnKomono2TaskFif_0x2208b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222E88u; }
        else if (ctx->pc != 0x222E88u) { ctx->pc = 0x222E88u; }
    }
    if (ctx->pc != 0x222E88u) { return; }
    ctx->pc = 0x222E88u;
    // 0x222e88: 0x8f828cb0
    ctx->pc = 0x222e88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x222e8c: 0x30420008
    ctx->pc = 0x222e8cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
    // 0x222e90: 0x10400003
    ctx->pc = 0x222E90u;
    {
        const bool branch_taken_0x222e90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x222e90) {
            ctx->pc = 0x222EA0u;
            goto label_222ea0;
        }
    }
    ctx->pc = 0x222E98u;
    // 0x222e98: 0xc06898c
    ctx->pc = 0x222E98u;
    SET_GPR_U32(ctx, 31, 0x222EA0u);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222EA0u; }
        else if (ctx->pc != 0x222EA0u) { ctx->pc = 0x222EA0u; }
    }
    if (ctx->pc != 0x222EA0u) { return; }
    ctx->pc = 0x222EA0u;
label_222ea0:
    // 0x222ea0: 0x3c020050
    ctx->pc = 0x222ea0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x222ea4: 0xc07ce18
    ctx->pc = 0x222EA4u;
    SET_GPR_U32(ctx, 31, 0x222EACu);
    ctx->pc = 0x222EA8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222EACu; }
        else if (ctx->pc != 0x222EACu) { ctx->pc = 0x222EACu; }
    }
    if (ctx->pc != 0x222EACu) { return; }
    ctx->pc = 0x222EACu;
    // 0x222eac: 0x1c40000a
    ctx->pc = 0x222EACu;
    {
        const bool branch_taken_0x222eac = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x222eac) {
            ctx->pc = 0x222ED8u;
            goto label_222ed8;
        }
    }
    ctx->pc = 0x222EB4u;
    // 0x222eb4: 0x3c023ca3
    ctx->pc = 0x222eb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15523 << 16));
    // 0x222eb8: 0x3442d70a
    ctx->pc = 0x222eb8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 55050));
    // 0x222ebc: 0x44826800
    ctx->pc = 0x222ebcu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x222ec0: 0x44806000
    ctx->pc = 0x222ec0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x222ec4: 0x3c020021
    ctx->pc = 0x222ec4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x222ec8: 0xc24af3c
    ctx->pc = 0x222EC8u;
    SET_GPR_U32(ctx, 31, 0x222ED0u);
    ctx->pc = 0x222ECCu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 61));
    ctx->pc = 0x92BCF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MorphUV__Fiff_0x92bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222ED0u; }
        else if (ctx->pc != 0x222ED0u) { ctx->pc = 0x222ED0u; }
    }
    if (ctx->pc != 0x222ED0u) { return; }
    ctx->pc = 0x222ED0u;
    // 0x222ed0: 0xc0552d8
    ctx->pc = 0x222ED0u;
    SET_GPR_U32(ctx, 31, 0x222ED8u);
    ctx->pc = 0x222ED4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x154B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x154b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222ED8u; }
        else if (ctx->pc != 0x222ED8u) { ctx->pc = 0x222ED8u; }
    }
    if (ctx->pc != 0x222ED8u) { return; }
    ctx->pc = 0x222ED8u;
label_222ed8:
    // 0x222ed8: 0x3c02002c
    ctx->pc = 0x222ed8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x222edc: 0x70008e28
    ctx->pc = 0x222edcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x222ee0: 0x1000003d
    ctx->pc = 0x222EE0u;
    {
        const bool branch_taken_0x222ee0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x222EE4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 7168));
        if (branch_taken_0x222ee0) {
            ctx->pc = 0x222FD8u;
            goto label_222fd8;
        }
    }
    ctx->pc = 0x222EE8u;
label_222ee8:
    // 0x222ee8: 0x4bede37d
    ctx->pc = 0x222ee8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x222eec: 0x4bedeb7d
    ctx->pc = 0x222eecu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x222ef0: 0x4bedf37d
    ctx->pc = 0x222ef0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x222ef4: 0x4bedfb7d
    ctx->pc = 0x222ef4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x222ef8: 0xc60d0004
    ctx->pc = 0x222ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x222efc: 0xc60e0008
    ctx->pc = 0x222efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x222f00: 0xc06c202
    ctx->pc = 0x222F00u;
    SET_GPR_U32(ctx, 31, 0x222F08u);
    ctx->pc = 0x222F04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222F08u; }
        else if (ctx->pc != 0x222F08u) { ctx->pc = 0x222F08u; }
    }
    if (ctx->pc != 0x222F08u) { return; }
    ctx->pc = 0x222F08u;
    // 0x222f08: 0xc06c0fb
    ctx->pc = 0x222F08u;
    SET_GPR_U32(ctx, 31, 0x222F10u);
    ctx->pc = 0x222F0Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222F10u; }
        else if (ctx->pc != 0x222F10u) { ctx->pc = 0x222F10u; }
    }
    if (ctx->pc != 0x222F10u) { return; }
    ctx->pc = 0x222F10u;
    // 0x222f10: 0x8f858c48
    ctx->pc = 0x222f10u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x222f14: 0x2402013b
    ctx->pc = 0x222f14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 315));
    // 0x222f18: 0x8ca40004
    ctx->pc = 0x222f18u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x222f1c: 0x41840
    ctx->pc = 0x222f1cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x222f20: 0x641821
    ctx->pc = 0x222f20u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x222f24: 0x31880
    ctx->pc = 0x222f24u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x222f28: 0x641821
    ctx->pc = 0x222f28u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x222f2c: 0x31900
    ctx->pc = 0x222f2cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x222f30: 0xa31821
    ctx->pc = 0x222f30u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x222f34: 0x846300d0
    ctx->pc = 0x222f34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x222f38: 0x14620014
    ctx->pc = 0x222F38u;
    {
        const bool branch_taken_0x222f38 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x222F3Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49494 << 16));
        if (branch_taken_0x222f38) {
            ctx->pc = 0x222F8Cu;
            goto label_222f8c;
        }
    }
    ctx->pc = 0x222F40u;
    // 0x222f40: 0x2a220004
    ctx->pc = 0x222f40u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 4));
    // 0x222f44: 0x14400010
    ctx->pc = 0x222F44u;
    {
        const bool branch_taken_0x222f44 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x222F48u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 17), 6));
        if (branch_taken_0x222f44) {
            ctx->pc = 0x222F88u;
            goto label_222f88;
        }
    }
    ctx->pc = 0x222F4Cu;
    // 0x222f4c: 0x1020000e
    ctx->pc = 0x222F4Cu;
    {
        const bool branch_taken_0x222f4c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x222F50u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x222f4c) {
            ctx->pc = 0x222F88u;
            goto label_222f88;
        }
    }
    ctx->pc = 0x222F54u;
    // 0x222f54: 0x10000008
    ctx->pc = 0x222F54u;
    {
        const bool branch_taken_0x222f54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x222F58u;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x222f54) {
            ctx->pc = 0x222F78u;
            goto label_222f78;
        }
    }
    ctx->pc = 0x222F5Cu;
label_222f5c:
    // 0x222f5c: 0x8e8200c4
    ctx->pc = 0x222f5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 196)));
    // 0x222f60: 0xc68c004c
    ctx->pc = 0x222f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x222f64: 0xc07a42c
    ctx->pc = 0x222F64u;
    SET_GPR_U32(ctx, 31, 0x222F6Cu);
    ctx->pc = 0x222F68u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->pc = 0x1E90B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        putMate__7CFcvTRSFf_0x1e90b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222F6Cu; }
        else if (ctx->pc != 0x222F6Cu) { ctx->pc = 0x222F6Cu; }
    }
    if (ctx->pc != 0x222F6Cu) { return; }
    ctx->pc = 0x222F6Cu;
    // 0x222f6c: 0x267300f0
    ctx->pc = 0x222f6cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 240));
    // 0x222f70: 0x26520001
    ctx->pc = 0x222f70u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x222f74: 0x0
    ctx->pc = 0x222f74u;
    // NOP
label_222f78:
    // 0x222f78: 0x8e8200cc
    ctx->pc = 0x222f78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 204)));
    // 0x222f7c: 0x242102a
    ctx->pc = 0x222f7cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x222f80: 0x1440fff6
    ctx->pc = 0x222F80u;
    {
        const bool branch_taken_0x222f80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x222f80) {
            ctx->pc = 0x222F5Cu;
            goto label_222f5c;
        }
    }
    ctx->pc = 0x222F88u;
label_222f88:
    // 0x222f88: 0x3c02c156
    ctx->pc = 0x222f88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49494 << 16));
label_222f8c:
    // 0x222f8c: 0x34423055
    ctx->pc = 0x222f8cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 12373));
    // 0x222f90: 0x44827000
    ctx->pc = 0x222f90u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x222f94: 0x3c02bd9a
    ctx->pc = 0x222f94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48538 << 16));
    // 0x222f98: 0x3442d42c
    ctx->pc = 0x222f98u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 54316));
    // 0x222f9c: 0x44826000
    ctx->pc = 0x222f9cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x222fa0: 0x3c0241d5
    ctx->pc = 0x222fa0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16853 << 16));
    // 0x222fa4: 0x3442b886
    ctx->pc = 0x222fa4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 47238));
    // 0x222fa8: 0x44826800
    ctx->pc = 0x222fa8u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x222fac: 0xc06c202
    ctx->pc = 0x222FACu;
    SET_GPR_U32(ctx, 31, 0x222FB4u);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222FB4u; }
        else if (ctx->pc != 0x222FB4u) { ctx->pc = 0x222FB4u; }
    }
    if (ctx->pc != 0x222FB4u) { return; }
    ctx->pc = 0x222FB4u;
    // 0x222fb4: 0x3c020021
    ctx->pc = 0x222fb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x222fb8: 0xc0853ac
    ctx->pc = 0x222FB8u;
    SET_GPR_U32(ctx, 31, 0x222FC0u);
    ctx->pc = 0x222FBCu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 61));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222FC0u; }
        else if (ctx->pc != 0x222FC0u) { ctx->pc = 0x222FC0u; }
    }
    if (ctx->pc != 0x222FC0u) { return; }
    ctx->pc = 0x222FC0u;
    // 0x222fc0: 0x4bff6b7e
    ctx->pc = 0x222fc0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x222fc4: 0x4bfe6b7e
    ctx->pc = 0x222fc4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x222fc8: 0x4bfd6b7e
    ctx->pc = 0x222fc8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x222fcc: 0x4bfc6b7e
    ctx->pc = 0x222fccu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x222fd0: 0x26310001
    ctx->pc = 0x222fd0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x222fd4: 0x26100024
    ctx->pc = 0x222fd4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 36));
label_222fd8:
    // 0x222fd8: 0x2e220008
    ctx->pc = 0x222fd8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), 8));
    // 0x222fdc: 0x1440ffc2
    ctx->pc = 0x222FDCu;
    {
        const bool branch_taken_0x222fdc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x222FE0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
        if (branch_taken_0x222fdc) {
            ctx->pc = 0x222EE8u;
            goto label_222ee8;
        }
    }
    ctx->pc = 0x222FE4u;
    // 0x222fe4: 0xc07ce18
    ctx->pc = 0x222FE4u;
    SET_GPR_U32(ctx, 31, 0x222FECu);
    ctx->pc = 0x222FE8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222FECu; }
        else if (ctx->pc != 0x222FECu) { ctx->pc = 0x222FECu; }
    }
    if (ctx->pc != 0x222FECu) { return; }
    ctx->pc = 0x222FECu;
    // 0x222fec: 0x1c400010
    ctx->pc = 0x222FECu;
    {
        const bool branch_taken_0x222fec = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x222fec) {
            ctx->pc = 0x223030u;
            goto label_223030;
        }
    }
    ctx->pc = 0x222FF4u;
    // 0x222ff4: 0xc681004c
    ctx->pc = 0x222ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222ff8: 0x3c033f99
    ctx->pc = 0x222ff8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16281 << 16));
    // 0x222ffc: 0x3463999a
    ctx->pc = 0x222ffcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 39322));
    // 0x223000: 0x44830000
    ctx->pc = 0x223000u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x223004: 0x0
    ctx->pc = 0x223004u;
    // NOP
    // 0x223008: 0x46000840
    ctx->pc = 0x223008u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22300c: 0xe681004c
    ctx->pc = 0x22300cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 76), bits); }
    // 0x223010: 0xc680002c
    ctx->pc = 0x223010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223014: 0x46800020
    ctx->pc = 0x223014u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x223018: 0x46000836
    ctx->pc = 0x223018u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22301c: 0x0
    ctx->pc = 0x22301cu;
    // NOP
    // 0x223020: 0x45010003
    ctx->pc = 0x223020u;
    {
        const bool branch_taken_0x223020 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x223020) {
            ctx->pc = 0x223030u;
            goto label_223030;
        }
    }
    ctx->pc = 0x223028u;
    // 0x223028: 0x46000801
    ctx->pc = 0x223028u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22302c: 0xe680004c
    ctx->pc = 0x22302cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 76), bits); }
label_223030:
    // 0x223030: 0x7bbf0050
    ctx->pc = 0x223030u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x223034: 0x7bb40040
    ctx->pc = 0x223034u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x223038: 0x7bb30030
    ctx->pc = 0x223038u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22303c: 0x7bb20020
    ctx->pc = 0x22303cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223040: 0x7bb10010
    ctx->pc = 0x223040u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223044: 0x7bb00000
    ctx->pc = 0x223044u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223048: 0x3e00008
    ctx->pc = 0x223048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22304Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x222EA0u: goto label_222ea0;
            case 0x222ED8u: goto label_222ed8;
            case 0x222EE8u: goto label_222ee8;
            case 0x222F5Cu: goto label_222f5c;
            case 0x222F78u: goto label_222f78;
            case 0x222F88u: goto label_222f88;
            case 0x222F8Cu: goto label_222f8c;
            case 0x222FD8u: goto label_222fd8;
            case 0x223030u: goto label_223030;
            default: break;
        }
        return;
    }
    ctx->pc = 0x223050u;
}

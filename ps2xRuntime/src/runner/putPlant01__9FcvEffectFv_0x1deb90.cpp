#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: putPlant01__9FcvEffectFv
// Address: 0x1deb90 - 0x1dec68
void putPlant01__9FcvEffectFv_0x1deb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("putPlant01__9FcvEffectFv");


    ctx->pc = 0x1deb90u;

    // 0x1deb90: 0x27bdffc0
    ctx->pc = 0x1deb90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1deb94: 0x7fbf0030
    ctx->pc = 0x1deb94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1deb98: 0x7fb20020
    ctx->pc = 0x1deb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1deb9c: 0x7fb10010
    ctx->pc = 0x1deb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1deba0: 0x7fb00000
    ctx->pc = 0x1deba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1deba4: 0x70808628
    ctx->pc = 0x1deba4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1deba8: 0x4bede37d
    ctx->pc = 0x1deba8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1debac: 0x4bedeb7d
    ctx->pc = 0x1debacu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1debb0: 0x4bedf37d
    ctx->pc = 0x1debb0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1debb4: 0x4bedfb7d
    ctx->pc = 0x1debb4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1debb8: 0xc48d0040
    ctx->pc = 0x1debb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1debbc: 0xc48e0044
    ctx->pc = 0x1debbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1debc0: 0xc06c202
    ctx->pc = 0x1DEBC0u;
    SET_GPR_U32(ctx, 31, 0x1DEBC8u);
    ctx->pc = 0x1DEBC4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEBC8u; }
        else if (ctx->pc != 0x1DEBC8u) { ctx->pc = 0x1DEBC8u; }
    }
    if (ctx->pc != 0x1DEBC8u) { return; }
    ctx->pc = 0x1DEBC8u;
    // 0x1debc8: 0xc60c002c
    ctx->pc = 0x1debc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1debcc: 0x3c033f80
    ctx->pc = 0x1debccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1debd0: 0x44830000
    ctx->pc = 0x1debd0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1debd4: 0x0
    ctx->pc = 0x1debd4u;
    // NOP
    // 0x1debd8: 0x460c0032
    ctx->pc = 0x1debd8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1debdc: 0x0
    ctx->pc = 0x1debdcu;
    // NOP
    // 0x1debe0: 0x45010007
    ctx->pc = 0x1DEBE0u;
    {
        const bool branch_taken_0x1debe0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DEBE4u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1debe0) {
            ctx->pc = 0x1DEC00u;
            goto label_1dec00;
        }
    }
    ctx->pc = 0x1DEBE8u;
    // 0x1debe8: 0x46006346
    ctx->pc = 0x1debe8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1debec: 0xc06c1b3
    ctx->pc = 0x1DEBECu;
    SET_GPR_U32(ctx, 31, 0x1DEBF4u);
    ctx->pc = 0x1DEBF0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEBF4u; }
        else if (ctx->pc != 0x1DEBF4u) { ctx->pc = 0x1DEBF4u; }
    }
    if (ctx->pc != 0x1DEBF4u) { return; }
    ctx->pc = 0x1DEBF4u;
    // 0x1debf4: 0xc06b218
    ctx->pc = 0x1DEBF4u;
    SET_GPR_U32(ctx, 31, 0x1DEBFCu);
    ctx->pc = 0x1DEBF8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEBFCu; }
        else if (ctx->pc != 0x1DEBFCu) { ctx->pc = 0x1DEBFCu; }
    }
    if (ctx->pc != 0x1DEBFCu) { return; }
    ctx->pc = 0x1DEBFCu;
    // 0x1debfc: 0x70008e28
    ctx->pc = 0x1debfcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1dec00:
    // 0x1dec00: 0x1000000b
    ctx->pc = 0x1DEC00u;
    {
        const bool branch_taken_0x1dec00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DEC04u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1dec00) {
            ctx->pc = 0x1DEC30u;
            goto label_1dec30;
        }
    }
    ctx->pc = 0x1DEC08u;
label_1dec08:
    // 0x1dec08: 0x14600003
    ctx->pc = 0x1DEC08u;
    {
        const bool branch_taken_0x1dec08 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DEC0Cu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 17), 28));
        if (branch_taken_0x1dec08) {
            ctx->pc = 0x1DEC18u;
            goto label_1dec18;
        }
    }
    ctx->pc = 0x1DEC10u;
    // 0x1dec10: 0x54200006
    ctx->pc = 0x1DEC10u;
    {
        const bool branch_taken_0x1dec10 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1dec10) {
            ctx->pc = 0x1DEC14u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
            ctx->pc = 0x1DEC2Cu;
            goto label_1dec2c;
        }
    }
    ctx->pc = 0x1DEC18u;
label_1dec18:
    // 0x1dec18: 0x8e020054
    ctx->pc = 0x1dec18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1dec1c: 0xc60c0024
    ctx->pc = 0x1dec1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dec20: 0xc079f10
    ctx->pc = 0x1DEC20u;
    SET_GPR_U32(ctx, 31, 0x1DEC28u);
    ctx->pc = 0x1DEC24u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7C40u;
    {
        const uint32_t __entryPc = ctx->pc;
        put2__7CFcvTRSFf_0x1e7c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEC28u; }
        else if (ctx->pc != 0x1DEC28u) { ctx->pc = 0x1DEC28u; }
    }
    if (ctx->pc != 0x1DEC28u) { return; }
    ctx->pc = 0x1DEC28u;
    // 0x1dec28: 0x265200f0
    ctx->pc = 0x1dec28u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
label_1dec2c:
    // 0x1dec2c: 0x26310001
    ctx->pc = 0x1dec2cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1dec30:
    // 0x1dec30: 0x8e030000
    ctx->pc = 0x1dec30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dec34: 0x223182a
    ctx->pc = 0x1dec34u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x1dec38: 0x1460fff3
    ctx->pc = 0x1DEC38u;
    {
        const bool branch_taken_0x1dec38 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DEC3Cu;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), 25));
        if (branch_taken_0x1dec38) {
            ctx->pc = 0x1DEC08u;
            goto label_1dec08;
        }
    }
    ctx->pc = 0x1DEC40u;
    // 0x1dec40: 0x4bff6b7e
    ctx->pc = 0x1dec40u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1dec44: 0x4bfe6b7e
    ctx->pc = 0x1dec44u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1dec48: 0x4bfd6b7e
    ctx->pc = 0x1dec48u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1dec4c: 0x4bfc6b7e
    ctx->pc = 0x1dec4cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1dec50: 0x7bbf0030
    ctx->pc = 0x1dec50u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dec54: 0x7bb20020
    ctx->pc = 0x1dec54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dec58: 0x7bb10010
    ctx->pc = 0x1dec58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dec5c: 0x7bb00000
    ctx->pc = 0x1dec5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dec60: 0x3e00008
    ctx->pc = 0x1DEC60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEC64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DEC00u: goto label_1dec00;
            case 0x1DEC08u: goto label_1dec08;
            case 0x1DEC18u: goto label_1dec18;
            case 0x1DEC2Cu: goto label_1dec2c;
            case 0x1DEC30u: goto label_1dec30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DEC68u;
}

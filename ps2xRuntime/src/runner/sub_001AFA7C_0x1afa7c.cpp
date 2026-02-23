#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sub_001AFA7C
// Address: 0x1afa7c - 0x1afb38
void sub_001AFA7C_0x1afa7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sub_001AFA7C");


    ctx->pc = 0x1afa7cu;

    // 0x1afa7c: 0x27bdfff0
    ctx->pc = 0x1afa7cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1afa80: 0xffbf0000
    ctx->pc = 0x1afa80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1afa84: 0x804025
    ctx->pc = 0x1afa84u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
    // 0x1afa88: 0xc06be70
    ctx->pc = 0x1AFA88u;
    SET_GPR_U32(ctx, 31, 0x1AFA90u);
    ctx->pc = 0x1AFA8Cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 0)));
    ctx->pc = 0x1AF9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF9C0_0x1af9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA90u; }
        else if (ctx->pc != 0x1AFA90u) { ctx->pc = 0x1AFA90u; }
    }
    if (ctx->pc != 0x1AFA90u) { return; }
    ctx->pc = 0x1AFA90u;
    // 0x1afa90: 0x46006103
    ctx->pc = 0x1afa90u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[4] = ctx->f[12] / ctx->f[0];
    // 0x1afa94: 0x46040842
    ctx->pc = 0x1afa94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1afa98: 0xe5010000
    ctx->pc = 0x1afa98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x1afa9c: 0x46041082
    ctx->pc = 0x1afa9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1afaa0: 0xe5020004
    ctx->pc = 0x1afaa0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x1afaa4: 0x460418c2
    ctx->pc = 0x1afaa4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1afaa8: 0xe5030008
    ctx->pc = 0x1afaa8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x1afaac: 0xdfbf0000
    ctx->pc = 0x1afaacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afab0: 0x3e00008
    ctx->pc = 0x1AFAB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFAB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AFAB8u;
    // 0x1afab8: 0xc4a10000
    ctx->pc = 0x1afab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1afabc: 0xc4a20004
    ctx->pc = 0x1afabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1afac0: 0xc4a30008
    ctx->pc = 0x1afac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1afac4: 0x460c0842
    ctx->pc = 0x1afac4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x1afac8: 0x460c1082
    ctx->pc = 0x1afac8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x1afacc: 0x460c18c2
    ctx->pc = 0x1afaccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x1afad0: 0xe4810000
    ctx->pc = 0x1afad0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1afad4: 0xe4820004
    ctx->pc = 0x1afad4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1afad8: 0x3e00008
    ctx->pc = 0x1AFAD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFADCu;
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AFAE0u;
    // 0x1afae0: 0x70a03628
    ctx->pc = 0x1afae0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1afae4: 0x27bdffe0
    ctx->pc = 0x1afae4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1afae8: 0x70802e28
    ctx->pc = 0x1afae8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1afaec: 0x7fbf0000
    ctx->pc = 0x1afaecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1afaf0: 0xc06be33
    ctx->pc = 0x1AFAF0u;
    SET_GPR_U32(ctx, 31, 0x1AFAF8u);
    ctx->pc = 0x1AFAF4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1AF8CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF8CC_0x1af8cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFAF8u; }
        else if (ctx->pc != 0x1AFAF8u) { ctx->pc = 0x1AFAF8u; }
    }
    if (ctx->pc != 0x1AFAF8u) { return; }
    ctx->pc = 0x1AFAF8u;
    // 0x1afaf8: 0xc06be70
    ctx->pc = 0x1AFAF8u;
    SET_GPR_U32(ctx, 31, 0x1AFB00u);
    ctx->pc = 0x1AFAFCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1AF9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF9C0_0x1af9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFB00u; }
        else if (ctx->pc != 0x1AFB00u) { ctx->pc = 0x1AFB00u; }
    }
    if (ctx->pc != 0x1AFB00u) { return; }
    ctx->pc = 0x1AFB00u;
    // 0x1afb00: 0x7bbf0000
    ctx->pc = 0x1afb00u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afb04: 0x3e00008
    ctx->pc = 0x1AFB04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFB08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AFB0Cu;
    // 0x1afb0c: 0x0
    ctx->pc = 0x1afb0cu;
    // NOP
    // 0x1afb10: 0xd8830000
    ctx->pc = 0x1afb10u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1afb14: 0xd8840010
    ctx->pc = 0x1afb14u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1afb18: 0xd8850020
    ctx->pc = 0x1afb18u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1afb1c: 0xd8860030
    ctx->pc = 0x1afb1cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1afb20: 0x4be3e728
    ctx->pc = 0x1afb20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1afb24: 0x4be4ef68
    ctx->pc = 0x1afb24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[29], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1afb28: 0x4be5f7a8
    ctx->pc = 0x1afb28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1afb2c: 0x4be6ffe8
    ctx->pc = 0x1afb2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1afb30: 0x3e00008
    ctx->pc = 0x1AFB30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AFB38u;
}

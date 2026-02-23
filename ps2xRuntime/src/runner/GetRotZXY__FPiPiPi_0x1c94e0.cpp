#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: GetRotZXY__FPiPiPi
// Address: 0x1c94e0 - 0x1c95d4
void GetRotZXY__FPiPiPi_0x1c94e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GetRotZXY__FPiPiPi");


    ctx->pc = 0x1c94e0u;

    // 0x1c94e0: 0x27bdffc0
    ctx->pc = 0x1c94e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c94e4: 0x7fbf0030
    ctx->pc = 0x1c94e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1c94e8: 0x7fb20020
    ctx->pc = 0x1c94e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c94ec: 0x7fb10010
    ctx->pc = 0x1c94ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c94f0: 0x7fb00000
    ctx->pc = 0x1c94f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c94f4: 0x70c09628
    ctx->pc = 0x1c94f4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1c94f8: 0x27bdfff0
    ctx->pc = 0x1c94f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c94fc: 0x70808628
    ctx->pc = 0x1c94fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1c9500: 0x70a08e28
    ctx->pc = 0x1c9500u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1c9504: 0x4bede37d
    ctx->pc = 0x1c9504u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1c9508: 0x4bedeb7d
    ctx->pc = 0x1c9508u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1c950c: 0x4bedf37d
    ctx->pc = 0x1c950cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1c9510: 0x4bedfb7d
    ctx->pc = 0x1c9510u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1c9514: 0x3c010026
    ctx->pc = 0x1c9514u;
    SET_GPR_U32(ctx, 1, ((uint32_t)38 << 16));
    // 0x1c9518: 0xd8214e40
    ctx->pc = 0x1c9518u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 1), 20032)));
    // 0x1c951c: 0x4bc1e1bc
    ctx->pc = 0x1c951cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1c9520: 0x4bc1e8bd
    ctx->pc = 0x1c9520u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1c9524: 0x4bc1f08a
    ctx->pc = 0x1c9524u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = ps2_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1c9528: 0xfba20000
    ctx->pc = 0x1c9528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c952c: 0xc7ac0000
    ctx->pc = 0x1c952cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c9530: 0xc7ad0004
    ctx->pc = 0x1c9530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c9534: 0xc7ae0008
    ctx->pc = 0x1c9534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1c9538: 0xc07244c
    ctx->pc = 0x1C9538u;
    SET_GPR_U32(ctx, 31, 0x1C9540u);
    ctx->pc = 0x1C953Cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1C9130u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetAngleZX__FfffPiPi_0x1c9130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9540u; }
        else if (ctx->pc != 0x1C9540u) { ctx->pc = 0x1C9540u; }
    }
    if (ctx->pc != 0x1C9540u) { return; }
    ctx->pc = 0x1C9540u;
    // 0x1c9540: 0x3c010026
    ctx->pc = 0x1c9540u;
    SET_GPR_U32(ctx, 1, ((uint32_t)38 << 16));
    // 0x1c9544: 0xd8214e30
    ctx->pc = 0x1c9544u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 1), 20016)));
    // 0x1c9548: 0x4bc1e1bc
    ctx->pc = 0x1c9548u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1c954c: 0x4bc1e8bd
    ctx->pc = 0x1c954cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1c9550: 0x4bc1f18a
    ctx->pc = 0x1c9550u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[6] = ps2_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1c9554: 0x4bff033c
    ctx->pc = 0x1c9554u;
    ctx->vu0_vf[31] = ctx->vu0_vf[0];
    // 0x1c9558: 0x4bfefb3d
    ctx->pc = 0x1c9558u;
    ctx->vu0_vf[30] = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,1));
    // 0x1c955c: 0x4bfdf33d
    ctx->pc = 0x1c955cu;
    ctx->vu0_vf[29] = _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(0,0,0,1));
    // 0x1c9560: 0x4bfceb3d
    ctx->pc = 0x1c9560u;
    ctx->vu0_vf[28] = _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1));
    // 0x1c9564: 0x8e050000
    ctx->pc = 0x1c9564u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c9568: 0xc06c09f
    ctx->pc = 0x1C9568u;
    SET_GPR_U32(ctx, 31, 0x1C9570u);
    ctx->pc = 0x1C956Cu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 5), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9570u; }
        else if (ctx->pc != 0x1C9570u) { ctx->pc = 0x1C9570u; }
    }
    if (ctx->pc != 0x1C9570u) { return; }
    ctx->pc = 0x1C9570u;
    // 0x1c9570: 0x8e450000
    ctx->pc = 0x1c9570u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c9574: 0xc06c157
    ctx->pc = 0x1C9574u;
    SET_GPR_U32(ctx, 31, 0x1C957Cu);
    ctx->pc = 0x1C9578u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 5), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C957Cu; }
        else if (ctx->pc != 0x1C957Cu) { ctx->pc = 0x1C957Cu; }
    }
    if (ctx->pc != 0x1C957Cu) { return; }
    ctx->pc = 0x1C957Cu;
    // 0x1c957c: 0x4bc6e1bc
    ctx->pc = 0x1c957cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1c9580: 0x4bc6e8bd
    ctx->pc = 0x1c9580u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1c9584: 0x4bc6f04a
    ctx->pc = 0x1c9584u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = ps2_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1c9588: 0xfba10000
    ctx->pc = 0x1c9588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c958c: 0xc7ae0008
    ctx->pc = 0x1c958cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1c9590: 0xc7ad0000
    ctx->pc = 0x1c9590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c9594: 0xc069e68
    ctx->pc = 0x1C9594u;
    SET_GPR_U32(ctx, 31, 0x1C959Cu);
    ctx->pc = 0x1C9598u;
    ctx->f[12] = FPU_NEG_S(ctx->f[14]);
    ctx->pc = 0x1A79A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcTan2_0x1a79a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C959Cu; }
        else if (ctx->pc != 0x1C959Cu) { ctx->pc = 0x1C959Cu; }
    }
    if (ctx->pc != 0x1C959Cu) { return; }
    ctx->pc = 0x1C959Cu;
    // 0x1c959c: 0x21c3c
    ctx->pc = 0x1c959cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1c95a0: 0x31c3f
    ctx->pc = 0x1c95a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1c95a4: 0xae230000
    ctx->pc = 0x1c95a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1c95a8: 0x4bff6b7e
    ctx->pc = 0x1c95a8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1c95ac: 0x4bfe6b7e
    ctx->pc = 0x1c95acu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1c95b0: 0x4bfd6b7e
    ctx->pc = 0x1c95b0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1c95b4: 0x4bfc6b7e
    ctx->pc = 0x1c95b4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1c95b8: 0x27bd0010
    ctx->pc = 0x1c95b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c95bc: 0x7bbf0030
    ctx->pc = 0x1c95bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c95c0: 0x7bb20020
    ctx->pc = 0x1c95c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c95c4: 0x7bb10010
    ctx->pc = 0x1c95c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c95c8: 0x7bb00000
    ctx->pc = 0x1c95c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c95cc: 0x3e00008
    ctx->pc = 0x1C95CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C95D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C95D4u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: calcPhysics__6CClothFP11tagNLmatrixP11tagNLmatrix
// Address: 0x1cefb0 - 0x1cfb50
void calcPhysics__6CClothFP11tagNLmatrixP11tagNLmatrix_0x1cefb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("calcPhysics__6CClothFP11tagNLmatrixP11tagNLmatrix");


    ctx->pc = 0x1cefb0u;

    // 0x1cefb0: 0x27bdfe90
    ctx->pc = 0x1cefb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x1cefb4: 0x7fbf00a0
    ctx->pc = 0x1cefb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 31));
    // 0x1cefb8: 0x7fbe0090
    ctx->pc = 0x1cefb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1cefbc: 0x7fb70080
    ctx->pc = 0x1cefbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1cefc0: 0x7fb60070
    ctx->pc = 0x1cefc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1cefc4: 0x7fb50060
    ctx->pc = 0x1cefc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1cefc8: 0x7fb40050
    ctx->pc = 0x1cefc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1cefcc: 0x7fb30040
    ctx->pc = 0x1cefccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1cefd0: 0x7fb20030
    ctx->pc = 0x1cefd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1cefd4: 0x7fb10020
    ctx->pc = 0x1cefd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1cefd8: 0x7fb00010
    ctx->pc = 0x1cefd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1cefdc: 0xe7b7000c
    ctx->pc = 0x1cefdcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1cefe0: 0xe7b60008
    ctx->pc = 0x1cefe0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1cefe4: 0xe7b50004
    ctx->pc = 0x1cefe4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1cefe8: 0xe7b40000
    ctx->pc = 0x1cefe8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1cefec: 0xafa600c0
    ctx->pc = 0x1cefecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
    // 0x1ceff0: 0x84820020
    ctx->pc = 0x1ceff0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1ceff4: 0x70808628
    ctx->pc = 0x1ceff4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1ceff8: 0x10400007
    ctx->pc = 0x1CEFF8u;
    {
        const bool branch_taken_0x1ceff8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CEFFCu;
        SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ceff8) {
            ctx->pc = 0x1CF018u;
            goto label_1cf018;
        }
    }
    ctx->pc = 0x1CF000u;
    // 0x1cf000: 0xc0747dc
    ctx->pc = 0x1CF000u;
    SET_GPR_U32(ctx, 31, 0x1CF008u);
    ctx->pc = 0x1D1F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcPhysics2__6CClothFP11tagNLmatrixP11tagNLmatrix_0x1d1f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF008u; }
        else if (ctx->pc != 0x1CF008u) { ctx->pc = 0x1CF008u; }
    }
    if (ctx->pc != 0x1CF008u) { return; }
    ctx->pc = 0x1CF008u;
    // 0x1cf008: 0x86030020
    ctx->pc = 0x1cf008u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1cf00c: 0x2463ffff
    ctx->pc = 0x1cf00cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1cf010: 0x100002bf
    ctx->pc = 0x1CF010u;
    {
        const bool branch_taken_0x1cf010 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CF014u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1cf010) {
            ctx->pc = 0x1CFB10u;
            goto label_1cfb10;
        }
    }
    ctx->pc = 0x1CF018u;
label_1cf018:
    // 0x1cf018: 0x86030018
    ctx->pc = 0x1cf018u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cf01c: 0x8602001a
    ctx->pc = 0x1cf01cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x1cf020: 0x8e150000
    ctx->pc = 0x1cf020u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cf024: 0x628818
    ctx->pc = 0x1cf024u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)(uint32_t)result); }
    // 0x1cf028: 0x4bede37d
    ctx->pc = 0x1cf028u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1cf02c: 0x4bedeb7d
    ctx->pc = 0x1cf02cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1cf030: 0x4bedf37d
    ctx->pc = 0x1cf030u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1cf034: 0x4bedfb7d
    ctx->pc = 0x1cf034u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1cf038: 0x8602001e
    ctx->pc = 0x1cf038u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x1cf03c: 0x21180
    ctx->pc = 0x1cf03cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x1cf040: 0xc06c038
    ctx->pc = 0x1CF040u;
    SET_GPR_U32(ctx, 31, 0x1CF048u);
    ctx->pc = 0x1CF044u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF048u; }
        else if (ctx->pc != 0x1CF048u) { ctx->pc = 0x1CF048u; }
    }
    if (ctx->pc != 0x1CF048u) { return; }
    ctx->pc = 0x1CF048u;
    // 0x1cf048: 0xc06c06f
    ctx->pc = 0x1CF048u;
    SET_GPR_U32(ctx, 31, 0x1CF050u);
    ctx->pc = 0x1CF04Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 192)));
    ctx->pc = 0x1B01BCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B01BC_0x1b01bc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF050u; }
        else if (ctx->pc != 0x1CF050u) { ctx->pc = 0x1CF050u; }
    }
    if (ctx->pc != 0x1CF050u) { return; }
    ctx->pc = 0x1CF050u;
    // 0x1cf050: 0xc06bf55
    ctx->pc = 0x1CF050u;
    SET_GPR_U32(ctx, 31, 0x1CF058u);
    ctx->pc = 0x1CF054u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 208));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF058u; }
        else if (ctx->pc != 0x1CF058u) { ctx->pc = 0x1CF058u; }
    }
    if (ctx->pc != 0x1CF058u) { return; }
    ctx->pc = 0x1CF058u;
    // 0x1cf058: 0xc0691c4
    ctx->pc = 0x1CF058u;
    SET_GPR_U32(ctx, 31, 0x1CF060u);
    ctx->pc = 0x1CF05Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4710u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlInvertMatrix_0x1a4710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF060u; }
        else if (ctx->pc != 0x1CF060u) { ctx->pc = 0x1CF060u; }
    }
    if (ctx->pc != 0x1CF060u) { return; }
    ctx->pc = 0x1CF060u;
    // 0x1cf060: 0xc06bf55
    ctx->pc = 0x1CF060u;
    SET_GPR_U32(ctx, 31, 0x1CF068u);
    ctx->pc = 0x1CF064u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 272));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF068u; }
        else if (ctx->pc != 0x1CF068u) { ctx->pc = 0x1CF068u; }
    }
    if (ctx->pc != 0x1CF068u) { return; }
    ctx->pc = 0x1CF068u;
    // 0x1cf068: 0x4bff6b7e
    ctx->pc = 0x1cf068u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1cf06c: 0x4bfe6b7e
    ctx->pc = 0x1cf06cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1cf070: 0x4bfd6b7e
    ctx->pc = 0x1cf070u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1cf074: 0x4bfc6b7e
    ctx->pc = 0x1cf074u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1cf078: 0x11082a
    ctx->pc = 0x1cf078u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 17)));
    // 0x1cf07c: 0x72a02628
    ctx->pc = 0x1cf07cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1cf080: 0x102000a1
    ctx->pc = 0x1CF080u;
    {
        const bool branch_taken_0x1cf080 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CF084u;
        SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1cf080) {
            ctx->pc = 0x1CF308u;
            goto label_1cf308;
        }
    }
    ctx->pc = 0x1CF088u;
    // 0x1cf088: 0x2a210009
    ctx->pc = 0x1cf088u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 17), 9));
    // 0x1cf08c: 0x14200086
    ctx->pc = 0x1CF08Cu;
    {
        const bool branch_taken_0x1cf08c = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CF090u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 4294967288));
        if (branch_taken_0x1cf08c) {
            ctx->pc = 0x1CF2A8u;
            goto label_1cf2a8;
        }
    }
    ctx->pc = 0x1CF094u;
label_1cf094:
    // 0x1cf094: 0xc481003c
    ctx->pc = 0x1cf094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf098: 0xc4800000
    ctx->pc = 0x1cf098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf09c: 0x24630008
    ctx->pc = 0x1cf09cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1cf0a0: 0x65102a
    ctx->pc = 0x1cf0a0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 5)));
    // 0x1cf0a4: 0x46010000
    ctx->pc = 0x1cf0a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cf0a8: 0xe4800000
    ctx->pc = 0x1cf0a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1cf0ac: 0xc4810040
    ctx->pc = 0x1cf0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf0b0: 0xc4800004
    ctx->pc = 0x1cf0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf0b4: 0x46010000
    ctx->pc = 0x1cf0b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cf0b8: 0xe4800004
    ctx->pc = 0x1cf0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1cf0bc: 0xc4810044
    ctx->pc = 0x1cf0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf0c0: 0xc4800008
    ctx->pc = 0x1cf0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf0c4: 0x46010000
    ctx->pc = 0x1cf0c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cf0c8: 0xe4800008
    ctx->pc = 0x1cf0c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1cf0cc: 0xc6010050
    ctx->pc = 0x1cf0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf0d0: 0xc4800004
    ctx->pc = 0x1cf0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf0d4: 0x46010001
    ctx->pc = 0x1cf0d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1cf0d8: 0xe4800004
    ctx->pc = 0x1cf0d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1cf0dc: 0xc481008c
    ctx->pc = 0x1cf0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf0e0: 0xc4800050
    ctx->pc = 0x1cf0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf0e4: 0x46010000
    ctx->pc = 0x1cf0e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cf0e8: 0xe4800050
    ctx->pc = 0x1cf0e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x1cf0ec: 0xc4810090
    ctx->pc = 0x1cf0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf0f0: 0xc4800054
    ctx->pc = 0x1cf0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf0f4: 0x46010000
    ctx->pc = 0x1cf0f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cf0f8: 0xe4800054
    ctx->pc = 0x1cf0f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x1cf0fc: 0xc4810094
    ctx->pc = 0x1cf0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf100: 0xc4800058
    ctx->pc = 0x1cf100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf104: 0x46010000
    ctx->pc = 0x1cf104u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cf108: 0xe4800058
    ctx->pc = 0x1cf108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x1cf10c: 0xc6010050
    ctx->pc = 0x1cf10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf110: 0xc4800054
    ctx->pc = 0x1cf110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf114: 0x46010001
    ctx->pc = 0x1cf114u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1cf118: 0xe4800054
    ctx->pc = 0x1cf118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x1cf11c: 0xc48100dc
    ctx->pc = 0x1cf11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf120: 0xc48000a0
    ctx->pc = 0x1cf120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf124: 0x46010000
    ctx->pc = 0x1cf124u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cf128: 0xe48000a0
    ctx->pc = 0x1cf128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    // 0x1cf12c: 0xc48100e0
    ctx->pc = 0x1cf12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf130: 0xc48000a4
    ctx->pc = 0x1cf130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf134: 0x46010000
    ctx->pc = 0x1cf134u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cf138: 0xe48000a4
    ctx->pc = 0x1cf138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
    // 0x1cf13c: 0xc48100e4
    ctx->pc = 0x1cf13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf140: 0xc48000a8
    ctx->pc = 0x1cf140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf144: 0x46010000
    ctx->pc = 0x1cf144u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cf148: 0xe48000a8
    ctx->pc = 0x1cf148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 168), bits); }
    // 0x1cf14c: 0xc6010050
    ctx->pc = 0x1cf14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf150: 0xc48000a4
    ctx->pc = 0x1cf150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf154: 0x46010001
    ctx->pc = 0x1cf154u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1cf158: 0xe48000a4
    ctx->pc = 0x1cf158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
    // 0x1cf15c: 0xc481012c
    ctx->pc = 0x1cf15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf160: 0xc48000f0
    ctx->pc = 0x1cf160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf164: 0x46010000
    ctx->pc = 0x1cf164u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cf168: 0xe48000f0
    ctx->pc = 0x1cf168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 240), bits); }
    // 0x1cf16c: 0xc4810130
    ctx->pc = 0x1cf16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf170: 0xc48000f4
    ctx->pc = 0x1cf170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf174: 0x46010000
    ctx->pc = 0x1cf174u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cf178: 0xe48000f4
    ctx->pc = 0x1cf178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 244), bits); }
    // 0x1cf17c: 0xc4810134
    ctx->pc = 0x1cf17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf180: 0xc48000f8
    ctx->pc = 0x1cf180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf184: 0x46010000
    ctx->pc = 0x1cf184u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cf188: 0xe48000f8
    ctx->pc = 0x1cf188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 248), bits); }
    // 0x1cf18c: 0xc6010050
    ctx->pc = 0x1cf18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf190: 0xc48000f4
    ctx->pc = 0x1cf190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf194: 0x46010001
    ctx->pc = 0x1cf194u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1cf198: 0xe48000f4
    ctx->pc = 0x1cf198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 244), bits); }
    // 0x1cf19c: 0xc481017c
    ctx->pc = 0x1cf19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf1a0: 0xc4800140
    ctx->pc = 0x1cf1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf1a4: 0x46010000
    ctx->pc = 0x1cf1a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cf1a8: 0xe4800140
    ctx->pc = 0x1cf1a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 320), bits); }
    // 0x1cf1ac: 0xc4810180
    ctx->pc = 0x1cf1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf1b0: 0xc4800144
    ctx->pc = 0x1cf1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf1b4: 0x46010000
    ctx->pc = 0x1cf1b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cf1b8: 0xe4800144
    ctx->pc = 0x1cf1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 324), bits); }
    // 0x1cf1bc: 0xc4810184
    ctx->pc = 0x1cf1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf1c0: 0xc4800148
    ctx->pc = 0x1cf1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf1c4: 0x46010000
    ctx->pc = 0x1cf1c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cf1c8: 0xe4800148
    ctx->pc = 0x1cf1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 328), bits); }
    // 0x1cf1cc: 0xc6010050
    ctx->pc = 0x1cf1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf1d0: 0xc4800144
    ctx->pc = 0x1cf1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf1d4: 0x46010001
    ctx->pc = 0x1cf1d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1cf1d8: 0xe4800144
    ctx->pc = 0x1cf1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 324), bits); }
    // 0x1cf1dc: 0xc48101cc
    ctx->pc = 0x1cf1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf1e0: 0xc4800190
    ctx->pc = 0x1cf1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf1e4: 0x46010000
    ctx->pc = 0x1cf1e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cf1e8: 0xe4800190
    ctx->pc = 0x1cf1e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 400), bits); }
    // 0x1cf1ec: 0xc48101d0
    ctx->pc = 0x1cf1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf1f0: 0xc4800194
    ctx->pc = 0x1cf1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf1f4: 0x46010000
    ctx->pc = 0x1cf1f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cf1f8: 0xe4800194
    ctx->pc = 0x1cf1f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 404), bits); }
    // 0x1cf1fc: 0xc48101d4
    ctx->pc = 0x1cf1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf200: 0xc4800198
    ctx->pc = 0x1cf200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf204: 0x46010000
    ctx->pc = 0x1cf204u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cf208: 0xe4800198
    ctx->pc = 0x1cf208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 408), bits); }
    // 0x1cf20c: 0xc6010050
    ctx->pc = 0x1cf20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf210: 0xc4800194
    ctx->pc = 0x1cf210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf214: 0x46010001
    ctx->pc = 0x1cf214u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1cf218: 0xe4800194
    ctx->pc = 0x1cf218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 404), bits); }
    // 0x1cf21c: 0xc481021c
    ctx->pc = 0x1cf21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf220: 0xc48001e0
    ctx->pc = 0x1cf220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf224: 0x46010000
    ctx->pc = 0x1cf224u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cf228: 0xe48001e0
    ctx->pc = 0x1cf228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 480), bits); }
    // 0x1cf22c: 0xc4810220
    ctx->pc = 0x1cf22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf230: 0xc48001e4
    ctx->pc = 0x1cf230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf234: 0x46010000
    ctx->pc = 0x1cf234u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cf238: 0xe48001e4
    ctx->pc = 0x1cf238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 484), bits); }
    // 0x1cf23c: 0xc4810224
    ctx->pc = 0x1cf23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf240: 0xc48001e8
    ctx->pc = 0x1cf240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf244: 0x46010000
    ctx->pc = 0x1cf244u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cf248: 0xe48001e8
    ctx->pc = 0x1cf248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 488), bits); }
    // 0x1cf24c: 0xc6010050
    ctx->pc = 0x1cf24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf250: 0xc48001e4
    ctx->pc = 0x1cf250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf254: 0x46010001
    ctx->pc = 0x1cf254u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1cf258: 0xe48001e4
    ctx->pc = 0x1cf258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 484), bits); }
    // 0x1cf25c: 0xc481026c
    ctx->pc = 0x1cf25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf260: 0xc4800230
    ctx->pc = 0x1cf260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf264: 0x46010000
    ctx->pc = 0x1cf264u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cf268: 0xe4800230
    ctx->pc = 0x1cf268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 560), bits); }
    // 0x1cf26c: 0xc4810270
    ctx->pc = 0x1cf26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf270: 0xc4800234
    ctx->pc = 0x1cf270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf274: 0x46010000
    ctx->pc = 0x1cf274u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cf278: 0xe4800234
    ctx->pc = 0x1cf278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 564), bits); }
    // 0x1cf27c: 0xc4810274
    ctx->pc = 0x1cf27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf280: 0xc4800238
    ctx->pc = 0x1cf280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf284: 0x46010000
    ctx->pc = 0x1cf284u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cf288: 0xe4800238
    ctx->pc = 0x1cf288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 568), bits); }
    // 0x1cf28c: 0xc6010050
    ctx->pc = 0x1cf28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf290: 0xc4800234
    ctx->pc = 0x1cf290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf294: 0x46010001
    ctx->pc = 0x1cf294u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1cf298: 0xe4800234
    ctx->pc = 0x1cf298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 564), bits); }
    // 0x1cf29c: 0x1440ff7d
    ctx->pc = 0x1CF29Cu;
    {
        const bool branch_taken_0x1cf29c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CF2A0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 640));
        if (branch_taken_0x1cf29c) {
            ctx->pc = 0x1CF094u;
            goto label_1cf094;
        }
    }
    ctx->pc = 0x1CF2A4u;
    // 0x1cf2a4: 0x0
    ctx->pc = 0x1cf2a4u;
    // NOP
label_1cf2a8:
    // 0x1cf2a8: 0x71082a
    ctx->pc = 0x1cf2a8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 17)));
    // 0x1cf2ac: 0x10200016
    ctx->pc = 0x1CF2ACu;
    {
        const bool branch_taken_0x1cf2ac = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cf2ac) {
            ctx->pc = 0x1CF308u;
            goto label_1cf308;
        }
    }
    ctx->pc = 0x1CF2B4u;
label_1cf2b4:
    // 0x1cf2b4: 0xc481003c
    ctx->pc = 0x1cf2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf2b8: 0xc4800000
    ctx->pc = 0x1cf2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf2bc: 0x24630001
    ctx->pc = 0x1cf2bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cf2c0: 0x71102a
    ctx->pc = 0x1cf2c0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 17)));
    // 0x1cf2c4: 0x46010000
    ctx->pc = 0x1cf2c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cf2c8: 0xe4800000
    ctx->pc = 0x1cf2c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1cf2cc: 0xc4810040
    ctx->pc = 0x1cf2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf2d0: 0xc4800004
    ctx->pc = 0x1cf2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf2d4: 0x46010000
    ctx->pc = 0x1cf2d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cf2d8: 0xe4800004
    ctx->pc = 0x1cf2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1cf2dc: 0xc4810044
    ctx->pc = 0x1cf2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf2e0: 0xc4800008
    ctx->pc = 0x1cf2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf2e4: 0x46010000
    ctx->pc = 0x1cf2e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cf2e8: 0xe4800008
    ctx->pc = 0x1cf2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1cf2ec: 0xc6010050
    ctx->pc = 0x1cf2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf2f0: 0xc4800004
    ctx->pc = 0x1cf2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf2f4: 0x46010001
    ctx->pc = 0x1cf2f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1cf2f8: 0xe4800004
    ctx->pc = 0x1cf2f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1cf2fc: 0x1440ffed
    ctx->pc = 0x1CF2FCu;
    {
        const bool branch_taken_0x1cf2fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CF300u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 80));
        if (branch_taken_0x1cf2fc) {
            ctx->pc = 0x1CF2B4u;
            goto label_1cf2b4;
        }
    }
    ctx->pc = 0x1CF304u;
    // 0x1cf304: 0x0
    ctx->pc = 0x1cf304u;
    // NOP
label_1cf308:
    // 0x1cf308: 0x8e020054
    ctx->pc = 0x1cf308u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1cf30c: 0x1040003e
    ctx->pc = 0x1CF30Cu;
    {
        const bool branch_taken_0x1cf30c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cf30c) {
            ctx->pc = 0x1CF408u;
            goto label_1cf408;
        }
    }
    ctx->pc = 0x1CF314u;
    // 0x1cf314: 0x8e040058
    ctx->pc = 0x1cf314u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1cf318: 0xc06c24e
    ctx->pc = 0x1CF318u;
    SET_GPR_U32(ctx, 31, 0x1CF320u);
    ctx->pc = 0x1CF31Cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1B0938u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0938_0x1b0938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF320u; }
        else if (ctx->pc != 0x1CF320u) { ctx->pc = 0x1CF320u; }
    }
    if (ctx->pc != 0x1CF320u) { return; }
    ctx->pc = 0x1CF320u;
    // 0x1cf320: 0x3c023ca3
    ctx->pc = 0x1cf320u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15523 << 16));
    // 0x1cf324: 0x3442d70a
    ctx->pc = 0x1cf324u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 55050));
    // 0x1cf328: 0x44820800
    ctx->pc = 0x1cf328u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1cf32c: 0x11082a
    ctx->pc = 0x1cf32cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 17)));
    // 0x1cf330: 0x46000842
    ctx->pc = 0x1cf330u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1cf334: 0x1020002a
    ctx->pc = 0x1CF334u;
    {
        const bool branch_taken_0x1cf334 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CF338u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1cf334) {
            ctx->pc = 0x1CF3E0u;
            goto label_1cf3e0;
        }
    }
    ctx->pc = 0x1CF33Cu;
    // 0x1cf33c: 0x2a210009
    ctx->pc = 0x1cf33cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 17), 9));
    // 0x1cf340: 0x1420001d
    ctx->pc = 0x1CF340u;
    {
        const bool branch_taken_0x1cf340 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CF344u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 4294967288));
        if (branch_taken_0x1cf340) {
            ctx->pc = 0x1CF3B8u;
            goto label_1cf3b8;
        }
    }
    ctx->pc = 0x1CF348u;
label_1cf348:
    // 0x1cf348: 0xc6400000
    ctx->pc = 0x1cf348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf34c: 0x24840008
    ctx->pc = 0x1cf34cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8));
    // 0x1cf350: 0x83102a
    ctx->pc = 0x1cf350u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x1cf354: 0x46010000
    ctx->pc = 0x1cf354u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cf358: 0xe6400000
    ctx->pc = 0x1cf358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1cf35c: 0xc6400050
    ctx->pc = 0x1cf35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf360: 0x46010000
    ctx->pc = 0x1cf360u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cf364: 0xe6400050
    ctx->pc = 0x1cf364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
    // 0x1cf368: 0xc64000a0
    ctx->pc = 0x1cf368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf36c: 0x46010000
    ctx->pc = 0x1cf36cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cf370: 0xe64000a0
    ctx->pc = 0x1cf370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 160), bits); }
    // 0x1cf374: 0xc64000f0
    ctx->pc = 0x1cf374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf378: 0x46010000
    ctx->pc = 0x1cf378u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cf37c: 0xe64000f0
    ctx->pc = 0x1cf37cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 240), bits); }
    // 0x1cf380: 0xc6400140
    ctx->pc = 0x1cf380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf384: 0x46010000
    ctx->pc = 0x1cf384u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cf388: 0xe6400140
    ctx->pc = 0x1cf388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 320), bits); }
    // 0x1cf38c: 0xc6400190
    ctx->pc = 0x1cf38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf390: 0x46010000
    ctx->pc = 0x1cf390u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cf394: 0xe6400190
    ctx->pc = 0x1cf394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 400), bits); }
    // 0x1cf398: 0xc64001e0
    ctx->pc = 0x1cf398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf39c: 0x46010000
    ctx->pc = 0x1cf39cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cf3a0: 0xe64001e0
    ctx->pc = 0x1cf3a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 480), bits); }
    // 0x1cf3a4: 0xc6400230
    ctx->pc = 0x1cf3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf3a8: 0x46010000
    ctx->pc = 0x1cf3a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cf3ac: 0xe6400230
    ctx->pc = 0x1cf3acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 560), bits); }
    // 0x1cf3b0: 0x1440ffe5
    ctx->pc = 0x1CF3B0u;
    {
        const bool branch_taken_0x1cf3b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CF3B4u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 640));
        if (branch_taken_0x1cf3b0) {
            ctx->pc = 0x1CF348u;
            goto label_1cf348;
        }
    }
    ctx->pc = 0x1CF3B8u;
label_1cf3b8:
    // 0x1cf3b8: 0x91082a
    ctx->pc = 0x1cf3b8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 17)));
    // 0x1cf3bc: 0x10200008
    ctx->pc = 0x1CF3BCu;
    {
        const bool branch_taken_0x1cf3bc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cf3bc) {
            ctx->pc = 0x1CF3E0u;
            goto label_1cf3e0;
        }
    }
    ctx->pc = 0x1CF3C4u;
label_1cf3c4:
    // 0x1cf3c4: 0xc6400000
    ctx->pc = 0x1cf3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf3c8: 0x24840001
    ctx->pc = 0x1cf3c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1cf3cc: 0x91102a
    ctx->pc = 0x1cf3ccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 17)));
    // 0x1cf3d0: 0x46010000
    ctx->pc = 0x1cf3d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cf3d4: 0xe6400000
    ctx->pc = 0x1cf3d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1cf3d8: 0x1440fffa
    ctx->pc = 0x1CF3D8u;
    {
        const bool branch_taken_0x1cf3d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CF3DCu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 80));
        if (branch_taken_0x1cf3d8) {
            ctx->pc = 0x1CF3C4u;
            goto label_1cf3c4;
        }
    }
    ctx->pc = 0x1CF3E0u;
label_1cf3e0:
    // 0x1cf3e0: 0x8e020058
    ctx->pc = 0x1cf3e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1cf3e4: 0x34038000
    ctx->pc = 0x1cf3e4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32768));
    // 0x1cf3e8: 0x24420800
    ctx->pc = 0x1cf3e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2048));
    // 0x1cf3ec: 0xae020058
    ctx->pc = 0x1cf3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x1cf3f0: 0x8e020058
    ctx->pc = 0x1cf3f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1cf3f4: 0x62082a
    ctx->pc = 0x1cf3f4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x1cf3f8: 0x10200003
    ctx->pc = 0x1CF3F8u;
    {
        const bool branch_taken_0x1cf3f8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cf3f8) {
            ctx->pc = 0x1CF408u;
            goto label_1cf408;
        }
    }
    ctx->pc = 0x1CF400u;
    // 0x1cf400: 0x24428000
    ctx->pc = 0x1cf400u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x1cf404: 0xae020058
    ctx->pc = 0x1cf404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
label_1cf408:
    // 0x1cf408: 0x8603001c
    ctx->pc = 0x1cf408u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1cf40c: 0x3c023f8c
    ctx->pc = 0x1cf40cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16268 << 16));
    // 0x1cf410: 0x3442cccd
    ctx->pc = 0x1cf410u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 52429));
    // 0x1cf414: 0x4482b800
    ctx->pc = 0x1cf414u;
    *(uint32_t*)&ctx->f[23] = GPR_U32(ctx, 2);
    // 0x1cf418: 0x24020005
    ctx->pc = 0x1cf418u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cf41c: 0x1062000d
    ctx->pc = 0x1CF41Cu;
    {
        const bool branch_taken_0x1cf41c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1CF420u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
        if (branch_taken_0x1cf41c) {
            ctx->pc = 0x1CF454u;
            goto label_1cf454;
        }
    }
    ctx->pc = 0x1CF424u;
    // 0x1cf424: 0x2402000b
    ctx->pc = 0x1cf424u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
    // 0x1cf428: 0x10620009
    ctx->pc = 0x1CF428u;
    {
        const bool branch_taken_0x1cf428 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1CF42Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967279));
        if (branch_taken_0x1cf428) {
            ctx->pc = 0x1CF450u;
            goto label_1cf450;
        }
    }
    ctx->pc = 0x1CF430u;
    // 0x1cf430: 0x2c410002
    ctx->pc = 0x1cf430u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x1cf434: 0x14200006
    ctx->pc = 0x1CF434u;
    {
        const bool branch_taken_0x1cf434 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CF438u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967276));
        if (branch_taken_0x1cf434) {
            ctx->pc = 0x1CF450u;
            goto label_1cf450;
        }
    }
    ctx->pc = 0x1CF43Cu;
    // 0x1cf43c: 0x2c410002
    ctx->pc = 0x1cf43cu;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x1cf440: 0x14200003
    ctx->pc = 0x1CF440u;
    {
        const bool branch_taken_0x1cf440 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CF444u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 22));
        if (branch_taken_0x1cf440) {
            ctx->pc = 0x1CF450u;
            goto label_1cf450;
        }
    }
    ctx->pc = 0x1CF448u;
    // 0x1cf448: 0x1462000c
    ctx->pc = 0x1CF448u;
    {
        const bool branch_taken_0x1cf448 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1CF44Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1cf448) {
            ctx->pc = 0x1CF47Cu;
            goto label_1cf47c;
        }
    }
    ctx->pc = 0x1CF450u;
label_1cf450:
    // 0x1cf450: 0x2402000b
    ctx->pc = 0x1cf450u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
label_1cf454:
    // 0x1cf454: 0x10620004
    ctx->pc = 0x1CF454u;
    {
        const bool branch_taken_0x1cf454 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1CF458u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
        if (branch_taken_0x1cf454) {
            ctx->pc = 0x1CF468u;
            goto label_1cf468;
        }
    }
    ctx->pc = 0x1CF45Cu;
    // 0x1cf45c: 0x24020014
    ctx->pc = 0x1cf45cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
    // 0x1cf460: 0x14620007
    ctx->pc = 0x1CF460u;
    {
        const bool branch_taken_0x1cf460 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1cf460) {
            ctx->pc = 0x1CF480u;
            goto label_1cf480;
        }
    }
    ctx->pc = 0x1CF468u;
label_1cf468:
    // 0x1cf468: 0x3c023f86
    ctx->pc = 0x1cf468u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16262 << 16));
    // 0x1cf46c: 0x34426666
    ctx->pc = 0x1cf46cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 26214));
    // 0x1cf470: 0x4482b800
    ctx->pc = 0x1cf470u;
    *(uint32_t*)&ctx->f[23] = GPR_U32(ctx, 2);
    // 0x1cf474: 0x10000003
    ctx->pc = 0x1CF474u;
    {
        const bool branch_taken_0x1cf474 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CF478u;
        SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 29), 176)));
        if (branch_taken_0x1cf474) {
            ctx->pc = 0x1CF484u;
            goto label_1cf484;
        }
    }
    ctx->pc = 0x1CF47Cu;
label_1cf47c:
    // 0x1cf47c: 0xafa200b0
    ctx->pc = 0x1cf47cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_1cf480:
    // 0x1cf480: 0x8fb600b0
    ctx->pc = 0x1cf480u;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1cf484:
    // 0x1cf484: 0x72c01628
    ctx->pc = 0x1cf484u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1cf488: 0x24430002
    ctx->pc = 0x1cf488u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 2));
    // 0x1cf48c: 0x43082a
    ctx->pc = 0x1cf48cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x1cf490: 0x10200133
    ctx->pc = 0x1CF490u;
    {
        const bool branch_taken_0x1cf490 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cf490) {
            ctx->pc = 0x1CF960u;
            goto label_1cf960;
        }
    }
    ctx->pc = 0x1CF498u;
    // 0x1cf498: 0x11082a
    ctx->pc = 0x1cf498u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 17)));
label_1cf49c:
    // 0x1cf49c: 0x1020005c
    ctx->pc = 0x1CF49Cu;
    {
        const bool branch_taken_0x1cf49c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CF4A0u;
        SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1cf49c) {
            ctx->pc = 0x1CF610u;
            goto label_1cf610;
        }
    }
    ctx->pc = 0x1CF4A4u;
    // 0x1cf4a4: 0x0
    ctx->pc = 0x1cf4a4u;
    // NOP
    // 0x1cf4a8: 0x171080
    ctx->pc = 0x1cf4a8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 23), 2));
label_1cf4ac:
    // 0x1cf4ac: 0x571021
    ctx->pc = 0x1cf4acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x1cf4b0: 0x21100
    ctx->pc = 0x1cf4b0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1cf4b4: 0x72e0a628
    ctx->pc = 0x1cf4b4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x1cf4b8: 0x1000004b
    ctx->pc = 0x1CF4B8u;
    {
        const bool branch_taken_0x1cf4b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CF4BCu;
        SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        if (branch_taken_0x1cf4b8) {
            ctx->pc = 0x1CF5E8u;
            goto label_1cf5e8;
        }
    }
    ctx->pc = 0x1CF4C0u;
    // 0x1cf4c0: 0x26830001
    ctx->pc = 0x1cf4c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 20), 1));
label_1cf4c4:
    // 0x1cf4c4: 0x31080
    ctx->pc = 0x1cf4c4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cf4c8: 0x431021
    ctx->pc = 0x1cf4c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cf4cc: 0x21100
    ctx->pc = 0x1cf4ccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1cf4d0: 0x2a29021
    ctx->pc = 0x1cf4d0u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1cf4d4: 0xc6450000
    ctx->pc = 0x1cf4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1cf4d8: 0xc6640000
    ctx->pc = 0x1cf4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1cf4dc: 0xc6430004
    ctx->pc = 0x1cf4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cf4e0: 0xc6620004
    ctx->pc = 0x1cf4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cf4e4: 0xc6410008
    ctx->pc = 0x1cf4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf4e8: 0xc6600008
    ctx->pc = 0x1cf4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf4ec: 0x46042d01
    ctx->pc = 0x1cf4ecu;
    ctx->f[20] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x1cf4f0: 0x46000d81
    ctx->pc = 0x1cf4f0u;
    ctx->f[22] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1cf4f4: 0x46021d41
    ctx->pc = 0x1cf4f4u;
    ctx->f[21] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1cf4f8: 0x4614a042
    ctx->pc = 0x1cf4f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x1cf4fc: 0x4615a802
    ctx->pc = 0x1cf4fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x1cf500: 0x46000818
    ctx->pc = 0x1cf500u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cf504: 0xc06c2a8
    ctx->pc = 0x1CF504u;
    SET_GPR_U32(ctx, 31, 0x1CF50Cu);
    ctx->pc = 0x1CF508u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[22]));
    ctx->pc = 0x1B0AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0AA0_0x1b0aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF50Cu; }
        else if (ctx->pc != 0x1CF50Cu) { ctx->pc = 0x1CF50Cu; }
    }
    if (ctx->pc != 0x1CF50Cu) { return; }
    ctx->pc = 0x1CF50Cu;
    // 0x1cf50c: 0x0
    ctx->pc = 0x1cf50cu;
    // NOP
    // 0x1cf510: 0x0
    ctx->pc = 0x1cf510u;
    // NOP
    // 0x1cf514: 0x4600a503
    ctx->pc = 0x1cf514u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[0];
    // 0x1cf518: 0xc6610048
    ctx->pc = 0x1cf518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf51c: 0x4600ad43
    ctx->pc = 0x1cf51cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[21] = ctx->f[21] / ctx->f[0];
    // 0x1cf520: 0x4600b583
    ctx->pc = 0x1cf520u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[22] = ctx->f[22] / ctx->f[0];
    // 0x1cf524: 0x0
    ctx->pc = 0x1cf524u;
    // NOP
    // 0x1cf528: 0x461708c2
    ctx->pc = 0x1cf528u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
    // 0x1cf52c: 0x46030036
    ctx->pc = 0x1cf52cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cf530: 0x0
    ctx->pc = 0x1cf530u;
    // NOP
    // 0x1cf534: 0x45010011
    ctx->pc = 0x1CF534u;
    {
        const bool branch_taken_0x1cf534 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CF538u;
        ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x1cf534) {
            ctx->pc = 0x1CF57Cu;
            goto label_1cf57c;
        }
    }
    ctx->pc = 0x1CF53Cu;
    // 0x1cf53c: 0x16c0000e
    ctx->pc = 0x1CF53Cu;
    {
        const bool branch_taken_0x1cf53c = (GPR_U32(ctx, 22) != GPR_U32(ctx, 0));
        if (branch_taken_0x1cf53c) {
            ctx->pc = 0x1CF578u;
            goto label_1cf578;
        }
    }
    ctx->pc = 0x1CF544u;
    // 0x1cf544: 0xc6620000
    ctx->pc = 0x1cf544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cf548: 0x4603a002
    ctx->pc = 0x1cf548u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x1cf54c: 0x46001080
    ctx->pc = 0x1cf54cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1cf550: 0xe6420000
    ctx->pc = 0x1cf550u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1cf554: 0xc6620004
    ctx->pc = 0x1cf554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cf558: 0x4603a842
    ctx->pc = 0x1cf558u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[3]);
    // 0x1cf55c: 0x46011040
    ctx->pc = 0x1cf55cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1cf560: 0xe6410004
    ctx->pc = 0x1cf560u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1cf564: 0xc6610008
    ctx->pc = 0x1cf564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf568: 0x4603b002
    ctx->pc = 0x1cf568u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[3]);
    // 0x1cf56c: 0x46000800
    ctx->pc = 0x1cf56cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cf570: 0x1000001b
    ctx->pc = 0x1CF570u;
    {
        const bool branch_taken_0x1cf570 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CF574u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        if (branch_taken_0x1cf570) {
            ctx->pc = 0x1CF5E0u;
            goto label_1cf5e0;
        }
    }
    ctx->pc = 0x1CF578u;
label_1cf578:
    // 0x1cf578: 0x46010081
    ctx->pc = 0x1cf578u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1cf57c:
    // 0x1cf57c: 0x3c024000
    ctx->pc = 0x1cf57cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x1cf580: 0x44820800
    ctx->pc = 0x1cf580u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1cf584: 0xc6600000
    ctx->pc = 0x1cf584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf588: 0x460110c3
    ctx->pc = 0x1cf588u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[3] = ctx->f[2] / ctx->f[1];
    // 0x1cf58c: 0x4603a042
    ctx->pc = 0x1cf58cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x1cf590: 0x46010000
    ctx->pc = 0x1cf590u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cf594: 0xe6600000
    ctx->pc = 0x1cf594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1cf598: 0xc6600004
    ctx->pc = 0x1cf598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf59c: 0x4603a882
    ctx->pc = 0x1cf59cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[3]);
    // 0x1cf5a0: 0x46020000
    ctx->pc = 0x1cf5a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1cf5a4: 0xe6600004
    ctx->pc = 0x1cf5a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1cf5a8: 0xc6600008
    ctx->pc = 0x1cf5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf5ac: 0x4603b0c2
    ctx->pc = 0x1cf5acu;
    ctx->f[3] = FPU_MUL_S(ctx->f[22], ctx->f[3]);
    // 0x1cf5b0: 0x46030000
    ctx->pc = 0x1cf5b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1cf5b4: 0xe6600008
    ctx->pc = 0x1cf5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x1cf5b8: 0xc6400000
    ctx->pc = 0x1cf5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf5bc: 0x46010001
    ctx->pc = 0x1cf5bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1cf5c0: 0xe6400000
    ctx->pc = 0x1cf5c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1cf5c4: 0xc6400004
    ctx->pc = 0x1cf5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf5c8: 0x46020001
    ctx->pc = 0x1cf5c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1cf5cc: 0xe6400004
    ctx->pc = 0x1cf5ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1cf5d0: 0xc6400008
    ctx->pc = 0x1cf5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf5d4: 0x46030001
    ctx->pc = 0x1cf5d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1cf5d8: 0xe6400008
    ctx->pc = 0x1cf5d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1cf5dc: 0x0
    ctx->pc = 0x1cf5dcu;
    // NOP
label_1cf5e0:
    // 0x1cf5e0: 0x26730050
    ctx->pc = 0x1cf5e0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 80));
    // 0x1cf5e4: 0x26940001
    ctx->pc = 0x1cf5e4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_1cf5e8:
    // 0x1cf5e8: 0x86030018
    ctx->pc = 0x1cf5e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cf5ec: 0x2e31021
    ctx->pc = 0x1cf5ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1cf5f0: 0x2442ffff
    ctx->pc = 0x1cf5f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1cf5f4: 0x282102a
    ctx->pc = 0x1cf5f4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 2)));
    // 0x1cf5f8: 0x5440ffb2
    ctx->pc = 0x1CF5F8u;
    {
        const bool branch_taken_0x1cf5f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1cf5f8) {
            ctx->pc = 0x1CF5FCu;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 20), 1));
            ctx->pc = 0x1CF4C4u;
            goto label_1cf4c4;
        }
    }
    ctx->pc = 0x1CF600u;
    // 0x1cf600: 0x2e3b821
    ctx->pc = 0x1cf600u;
    SET_GPR_U32(ctx, 23, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1cf604: 0x2f1102a
    ctx->pc = 0x1cf604u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 23), GPR_S32(ctx, 17)));
    // 0x1cf608: 0x1440ffa8
    ctx->pc = 0x1CF608u;
    {
        const bool branch_taken_0x1cf608 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CF60Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 23), 2));
        if (branch_taken_0x1cf608) {
            ctx->pc = 0x1CF4ACu;
            goto label_1cf4ac;
        }
    }
    ctx->pc = 0x1CF610u;
label_1cf610:
    // 0x1cf610: 0x1000005b
    ctx->pc = 0x1CF610u;
    {
        const bool branch_taken_0x1cf610 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CF614u;
        SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1cf610) {
            ctx->pc = 0x1CF780u;
            goto label_1cf780;
        }
    }
    ctx->pc = 0x1CF618u;
    // 0x1cf618: 0x171080
    ctx->pc = 0x1cf618u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 23), 2));
label_1cf61c:
    // 0x1cf61c: 0x571021
    ctx->pc = 0x1cf61cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x1cf620: 0x21100
    ctx->pc = 0x1cf620u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1cf624: 0x72e09e28
    ctx->pc = 0x1cf624u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x1cf628: 0x1000004f
    ctx->pc = 0x1CF628u;
    {
        const bool branch_taken_0x1cf628 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CF62Cu;
        SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        if (branch_taken_0x1cf628) {
            ctx->pc = 0x1CF768u;
            goto label_1cf768;
        }
    }
    ctx->pc = 0x1CF630u;
    // 0x1cf630: 0x2631021
    ctx->pc = 0x1cf630u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_1cf634:
    // 0x1cf634: 0x16200002
    ctx->pc = 0x1CF634u;
    {
        const bool branch_taken_0x1cf634 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CF638u;
        { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
        if (branch_taken_0x1cf634) {
            ctx->pc = 0x1CF640u;
            goto label_1cf640;
        }
    }
    ctx->pc = 0x1CF63Cu;
    // 0x1cf63c: 0x1cd
    ctx->pc = 0x1cf63cu;
    runtime->handleBreak(rdram, ctx);
label_1cf640:
    // 0x1cf640: 0x1810
    ctx->pc = 0x1cf640u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x1cf644: 0xc6440000
    ctx->pc = 0x1cf644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1cf648: 0xc6420004
    ctx->pc = 0x1cf648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cf64c: 0x31080
    ctx->pc = 0x1cf64cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cf650: 0x431021
    ctx->pc = 0x1cf650u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cf654: 0x21100
    ctx->pc = 0x1cf654u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1cf658: 0x2a2a021
    ctx->pc = 0x1cf658u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1cf65c: 0xc6850000
    ctx->pc = 0x1cf65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1cf660: 0xc6830004
    ctx->pc = 0x1cf660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cf664: 0xc6810008
    ctx->pc = 0x1cf664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf668: 0xc6400008
    ctx->pc = 0x1cf668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf66c: 0x46042d01
    ctx->pc = 0x1cf66cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x1cf670: 0x46000d81
    ctx->pc = 0x1cf670u;
    ctx->f[22] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1cf674: 0x46021d41
    ctx->pc = 0x1cf674u;
    ctx->f[21] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1cf678: 0x4614a042
    ctx->pc = 0x1cf678u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x1cf67c: 0x4615a802
    ctx->pc = 0x1cf67cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x1cf680: 0x46000818
    ctx->pc = 0x1cf680u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cf684: 0xc06c2a8
    ctx->pc = 0x1CF684u;
    SET_GPR_U32(ctx, 31, 0x1CF68Cu);
    ctx->pc = 0x1CF688u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[22]));
    ctx->pc = 0x1B0AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0AA0_0x1b0aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF68Cu; }
        else if (ctx->pc != 0x1CF68Cu) { ctx->pc = 0x1CF68Cu; }
    }
    if (ctx->pc != 0x1CF68Cu) { return; }
    ctx->pc = 0x1CF68Cu;
    // 0x1cf68c: 0x0
    ctx->pc = 0x1cf68cu;
    // NOP
    // 0x1cf690: 0x0
    ctx->pc = 0x1cf690u;
    // NOP
    // 0x1cf694: 0x4600a503
    ctx->pc = 0x1cf694u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[0];
    // 0x1cf698: 0xc641004c
    ctx->pc = 0x1cf698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf69c: 0x4600ad43
    ctx->pc = 0x1cf69cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[21] = ctx->f[21] / ctx->f[0];
    // 0x1cf6a0: 0x4600b583
    ctx->pc = 0x1cf6a0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[22] = ctx->f[22] / ctx->f[0];
    // 0x1cf6a4: 0x0
    ctx->pc = 0x1cf6a4u;
    // NOP
    // 0x1cf6a8: 0x461708c2
    ctx->pc = 0x1cf6a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
    // 0x1cf6ac: 0x46030036
    ctx->pc = 0x1cf6acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cf6b0: 0x0
    ctx->pc = 0x1cf6b0u;
    // NOP
    // 0x1cf6b4: 0x45010011
    ctx->pc = 0x1CF6B4u;
    {
        const bool branch_taken_0x1cf6b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CF6B8u;
        ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x1cf6b4) {
            ctx->pc = 0x1CF6FCu;
            goto label_1cf6fc;
        }
    }
    ctx->pc = 0x1CF6BCu;
    // 0x1cf6bc: 0x16c0000e
    ctx->pc = 0x1CF6BCu;
    {
        const bool branch_taken_0x1cf6bc = (GPR_U32(ctx, 22) != GPR_U32(ctx, 0));
        if (branch_taken_0x1cf6bc) {
            ctx->pc = 0x1CF6F8u;
            goto label_1cf6f8;
        }
    }
    ctx->pc = 0x1CF6C4u;
    // 0x1cf6c4: 0xc6420000
    ctx->pc = 0x1cf6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cf6c8: 0x4603a002
    ctx->pc = 0x1cf6c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x1cf6cc: 0x46001080
    ctx->pc = 0x1cf6ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1cf6d0: 0xe6820000
    ctx->pc = 0x1cf6d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x1cf6d4: 0xc6420004
    ctx->pc = 0x1cf6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cf6d8: 0x4603a842
    ctx->pc = 0x1cf6d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[3]);
    // 0x1cf6dc: 0x46011040
    ctx->pc = 0x1cf6dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1cf6e0: 0xe6810004
    ctx->pc = 0x1cf6e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x1cf6e4: 0xc6410008
    ctx->pc = 0x1cf6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf6e8: 0x4603b002
    ctx->pc = 0x1cf6e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[3]);
    // 0x1cf6ec: 0x46000800
    ctx->pc = 0x1cf6ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cf6f0: 0x1000001b
    ctx->pc = 0x1CF6F0u;
    {
        const bool branch_taken_0x1cf6f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CF6F4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
        if (branch_taken_0x1cf6f0) {
            ctx->pc = 0x1CF760u;
            goto label_1cf760;
        }
    }
    ctx->pc = 0x1CF6F8u;
label_1cf6f8:
    // 0x1cf6f8: 0x46010081
    ctx->pc = 0x1cf6f8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1cf6fc:
    // 0x1cf6fc: 0x3c024000
    ctx->pc = 0x1cf6fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x1cf700: 0x44820800
    ctx->pc = 0x1cf700u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1cf704: 0xc6400000
    ctx->pc = 0x1cf704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf708: 0x460110c3
    ctx->pc = 0x1cf708u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[3] = ctx->f[2] / ctx->f[1];
    // 0x1cf70c: 0x4603a042
    ctx->pc = 0x1cf70cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x1cf710: 0x46010000
    ctx->pc = 0x1cf710u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cf714: 0xe6400000
    ctx->pc = 0x1cf714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1cf718: 0xc6400004
    ctx->pc = 0x1cf718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf71c: 0x4603a882
    ctx->pc = 0x1cf71cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[3]);
    // 0x1cf720: 0x46020000
    ctx->pc = 0x1cf720u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1cf724: 0xe6400004
    ctx->pc = 0x1cf724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1cf728: 0xc6400008
    ctx->pc = 0x1cf728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf72c: 0x4603b0c2
    ctx->pc = 0x1cf72cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[22], ctx->f[3]);
    // 0x1cf730: 0x46030000
    ctx->pc = 0x1cf730u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1cf734: 0xe6400008
    ctx->pc = 0x1cf734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1cf738: 0xc6800000
    ctx->pc = 0x1cf738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf73c: 0x46010001
    ctx->pc = 0x1cf73cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1cf740: 0xe6800000
    ctx->pc = 0x1cf740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x1cf744: 0xc6800004
    ctx->pc = 0x1cf744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf748: 0x46020001
    ctx->pc = 0x1cf748u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1cf74c: 0xe6800004
    ctx->pc = 0x1cf74cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x1cf750: 0xc6800008
    ctx->pc = 0x1cf750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf754: 0x46030001
    ctx->pc = 0x1cf754u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1cf758: 0xe6800008
    ctx->pc = 0x1cf758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x1cf75c: 0x0
    ctx->pc = 0x1cf75cu;
    // NOP
label_1cf760:
    // 0x1cf760: 0x26520050
    ctx->pc = 0x1cf760u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 80));
    // 0x1cf764: 0x26730001
    ctx->pc = 0x1cf764u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_1cf768:
    // 0x1cf768: 0x86030018
    ctx->pc = 0x1cf768u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cf76c: 0x2e31021
    ctx->pc = 0x1cf76cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1cf770: 0x262102a
    ctx->pc = 0x1cf770u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 2)));
    // 0x1cf774: 0x1440ffaf
    ctx->pc = 0x1CF774u;
    {
        const bool branch_taken_0x1cf774 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CF778u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        if (branch_taken_0x1cf774) {
            ctx->pc = 0x1CF634u;
            goto label_1cf634;
        }
    }
    ctx->pc = 0x1CF77Cu;
    // 0x1cf77c: 0x2e3b821
    ctx->pc = 0x1cf77cu;
    SET_GPR_U32(ctx, 23, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_1cf780:
    // 0x1cf780: 0x86020018
    ctx->pc = 0x1cf780u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cf784: 0x2221023
    ctx->pc = 0x1cf784u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1cf788: 0x2e2102a
    ctx->pc = 0x1cf788u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 23), GPR_S32(ctx, 2)));
    // 0x1cf78c: 0x1440ffa3
    ctx->pc = 0x1CF78Cu;
    {
        const bool branch_taken_0x1cf78c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CF790u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 23), 2));
        if (branch_taken_0x1cf78c) {
            ctx->pc = 0x1CF61Cu;
            goto label_1cf61c;
        }
    }
    ctx->pc = 0x1CF794u;
    // 0x1cf794: 0x8603001c
    ctx->pc = 0x1cf794u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1cf798: 0x24020010
    ctx->pc = 0x1cf798u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1cf79c: 0x10620005
    ctx->pc = 0x1CF79Cu;
    {
        const bool branch_taken_0x1cf79c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1CF7A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
        if (branch_taken_0x1cf79c) {
            ctx->pc = 0x1CF7B4u;
            goto label_1cf7b4;
        }
    }
    ctx->pc = 0x1CF7A4u;
    // 0x1cf7a4: 0x24020014
    ctx->pc = 0x1cf7a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
    // 0x1cf7a8: 0x1462005c
    ctx->pc = 0x1CF7A8u;
    {
        const bool branch_taken_0x1cf7a8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1CF7ACu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1cf7a8) {
            ctx->pc = 0x1CF91Cu;
            goto label_1cf91c;
        }
    }
    ctx->pc = 0x1CF7B0u;
    // 0x1cf7b0: 0x24020014
    ctx->pc = 0x1cf7b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
label_1cf7b4:
    // 0x1cf7b4: 0x10620049
    ctx->pc = 0x1CF7B4u;
    {
        const bool branch_taken_0x1cf7b4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1CF7B8u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 17)));
        if (branch_taken_0x1cf7b4) {
            ctx->pc = 0x1CF8DCu;
            goto label_1cf8dc;
        }
    }
    ctx->pc = 0x1CF7BCu;
    // 0x1cf7bc: 0x24020010
    ctx->pc = 0x1cf7bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1cf7c0: 0x10620003
    ctx->pc = 0x1CF7C0u;
    {
        const bool branch_taken_0x1cf7c0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1cf7c0) {
            ctx->pc = 0x1CF7D0u;
            goto label_1cf7d0;
        }
    }
    ctx->pc = 0x1CF7C8u;
    // 0x1cf7c8: 0x10000053
    ctx->pc = 0x1CF7C8u;
    {
        const bool branch_taken_0x1cf7c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cf7c8) {
            ctx->pc = 0x1CF918u;
            goto label_1cf918;
        }
    }
    ctx->pc = 0x1CF7D0u;
label_1cf7d0:
    // 0x1cf7d0: 0x8f848c48
    ctx->pc = 0x1cf7d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1cf7d4: 0x3c023f00
    ctx->pc = 0x1cf7d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x1cf7d8: 0x44821000
    ctx->pc = 0x1cf7d8u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x1cf7dc: 0x24020137
    ctx->pc = 0x1cf7dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 311));
    // 0x1cf7e0: 0x848500d0
    ctx->pc = 0x1cf7e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x1cf7e4: 0x14a20014
    ctx->pc = 0x1CF7E4u;
    {
        const bool branch_taken_0x1cf7e4 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x1CF7E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 621));
        if (branch_taken_0x1cf7e4) {
            ctx->pc = 0x1CF838u;
            goto label_1cf838;
        }
    }
    ctx->pc = 0x1CF7ECu;
    // 0x1cf7ec: 0x8c830004
    ctx->pc = 0x1cf7ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1cf7f0: 0x3c024421
    ctx->pc = 0x1cf7f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17441 << 16));
    // 0x1cf7f4: 0x3442c000
    ctx->pc = 0x1cf7f4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 49152));
    // 0x1cf7f8: 0x44820000
    ctx->pc = 0x1cf7f8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1cf7fc: 0x31040
    ctx->pc = 0x1cf7fcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1cf800: 0x431021
    ctx->pc = 0x1cf800u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cf804: 0x21080
    ctx->pc = 0x1cf804u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf808: 0x431021
    ctx->pc = 0x1cf808u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cf80c: 0x21100
    ctx->pc = 0x1cf80cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1cf810: 0x821021
    ctx->pc = 0x1cf810u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1cf814: 0xc44100c0
    ctx->pc = 0x1cf814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf818: 0x46000834
    ctx->pc = 0x1cf818u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cf81c: 0x0
    ctx->pc = 0x1cf81cu;
    // NOP
    // 0x1cf820: 0x45000004
    ctx->pc = 0x1CF820u;
    {
        const bool branch_taken_0x1cf820 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CF824u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16480 << 16));
        if (branch_taken_0x1cf820) {
            ctx->pc = 0x1CF834u;
            goto label_1cf834;
        }
    }
    ctx->pc = 0x1CF828u;
    // 0x1cf828: 0x44821000
    ctx->pc = 0x1cf828u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x1cf82c: 0x1000001b
    ctx->pc = 0x1CF82Cu;
    {
        const bool branch_taken_0x1cf82c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CF830u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 17)));
        if (branch_taken_0x1cf82c) {
            ctx->pc = 0x1CF89Cu;
            goto label_1cf89c;
        }
    }
    ctx->pc = 0x1CF834u;
label_1cf834:
    // 0x1cf834: 0x2402026d
    ctx->pc = 0x1cf834u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 621));
label_1cf838:
    // 0x1cf838: 0x10a20006
    ctx->pc = 0x1CF838u;
    {
        const bool branch_taken_0x1cf838 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x1CF83Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)17247 << 16));
        if (branch_taken_0x1cf838) {
            ctx->pc = 0x1CF854u;
            goto label_1cf854;
        }
    }
    ctx->pc = 0x1CF840u;
    // 0x1cf840: 0x2402026e
    ctx->pc = 0x1cf840u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 622));
    // 0x1cf844: 0x14a20007
    ctx->pc = 0x1CF844u;
    {
        const bool branch_taken_0x1cf844 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x1CF848u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 623));
        if (branch_taken_0x1cf844) {
            ctx->pc = 0x1CF864u;
            goto label_1cf864;
        }
    }
    ctx->pc = 0x1CF84Cu;
    // 0x1cf84c: 0x0
    ctx->pc = 0x1cf84cu;
    // NOP
    // 0x1cf850: 0x3c02435f
    ctx->pc = 0x1cf850u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17247 << 16));
label_1cf854:
    // 0x1cf854: 0x44821000
    ctx->pc = 0x1cf854u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x1cf858: 0x1000000f
    ctx->pc = 0x1CF858u;
    {
        const bool branch_taken_0x1cf858 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cf858) {
            ctx->pc = 0x1CF898u;
            goto label_1cf898;
        }
    }
    ctx->pc = 0x1CF860u;
    // 0x1cf860: 0x2402026f
    ctx->pc = 0x1cf860u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 623));
label_1cf864:
    // 0x1cf864: 0x14a20007
    ctx->pc = 0x1CF864u;
    {
        const bool branch_taken_0x1cf864 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x1CF868u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 624));
        if (branch_taken_0x1cf864) {
            ctx->pc = 0x1CF884u;
            goto label_1cf884;
        }
    }
    ctx->pc = 0x1CF86Cu;
    // 0x1cf86c: 0x3c0244b3
    ctx->pc = 0x1cf86cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)17587 << 16));
    // 0x1cf870: 0x34426000
    ctx->pc = 0x1cf870u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 24576));
    // 0x1cf874: 0x44821000
    ctx->pc = 0x1cf874u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x1cf878: 0x10000007
    ctx->pc = 0x1CF878u;
    {
        const bool branch_taken_0x1cf878 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cf878) {
            ctx->pc = 0x1CF898u;
            goto label_1cf898;
        }
    }
    ctx->pc = 0x1CF880u;
    // 0x1cf880: 0x24020270
    ctx->pc = 0x1cf880u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 624));
label_1cf884:
    // 0x1cf884: 0x14a20004
    ctx->pc = 0x1CF884u;
    {
        const bool branch_taken_0x1cf884 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x1CF888u;
        SET_GPR_U32(ctx, 2, ((uint32_t)17766 << 16));
        if (branch_taken_0x1cf884) {
            ctx->pc = 0x1CF898u;
            goto label_1cf898;
        }
    }
    ctx->pc = 0x1CF88Cu;
    // 0x1cf88c: 0x34428000
    ctx->pc = 0x1cf88cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32768));
    // 0x1cf890: 0x44821000
    ctx->pc = 0x1cf890u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x1cf894: 0x0
    ctx->pc = 0x1cf894u;
    // NOP
label_1cf898:
    // 0x1cf898: 0x11082a
    ctx->pc = 0x1cf898u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 17)));
label_1cf89c:
    // 0x1cf89c: 0x1020001e
    ctx->pc = 0x1CF89Cu;
    {
        const bool branch_taken_0x1cf89c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CF8A0u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1cf89c) {
            ctx->pc = 0x1CF918u;
            goto label_1cf918;
        }
    }
    ctx->pc = 0x1CF8A4u;
    // 0x1cf8a4: 0x72a01e28
    ctx->pc = 0x1cf8a4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
label_1cf8a8:
    // 0x1cf8a8: 0xc4600004
    ctx->pc = 0x1cf8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf8ac: 0x46020034
    ctx->pc = 0x1cf8acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cf8b0: 0x0
    ctx->pc = 0x1cf8b0u;
    // NOP
    // 0x1cf8b4: 0x45020003
    ctx->pc = 0x1CF8B4u;
    {
        const bool branch_taken_0x1cf8b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cf8b4) {
            ctx->pc = 0x1CF8B8u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x1CF8C4u;
            goto label_1cf8c4;
        }
    }
    ctx->pc = 0x1CF8BCu;
    // 0x1cf8bc: 0xe4620004
    ctx->pc = 0x1cf8bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1cf8c0: 0x24840001
    ctx->pc = 0x1cf8c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_1cf8c4:
    // 0x1cf8c4: 0x91102a
    ctx->pc = 0x1cf8c4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 17)));
    // 0x1cf8c8: 0x1440fff7
    ctx->pc = 0x1CF8C8u;
    {
        const bool branch_taken_0x1cf8c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CF8CCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 80));
        if (branch_taken_0x1cf8c8) {
            ctx->pc = 0x1CF8A8u;
            goto label_1cf8a8;
        }
    }
    ctx->pc = 0x1CF8D0u;
    // 0x1cf8d0: 0x10000011
    ctx->pc = 0x1CF8D0u;
    {
        const bool branch_taken_0x1cf8d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cf8d0) {
            ctx->pc = 0x1CF918u;
            goto label_1cf918;
        }
    }
    ctx->pc = 0x1CF8D8u;
    // 0x1cf8d8: 0x11082a
    ctx->pc = 0x1cf8d8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 17)));
label_1cf8dc:
    // 0x1cf8dc: 0x1020000e
    ctx->pc = 0x1CF8DCu;
    {
        const bool branch_taken_0x1cf8dc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CF8E0u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1cf8dc) {
            ctx->pc = 0x1CF918u;
            goto label_1cf918;
        }
    }
    ctx->pc = 0x1CF8E4u;
    // 0x1cf8e4: 0x72a01e28
    ctx->pc = 0x1cf8e4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1cf8e8: 0x3c023f00
    ctx->pc = 0x1cf8e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x1cf8ec: 0x44820800
    ctx->pc = 0x1cf8ecu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_1cf8f0:
    // 0x1cf8f0: 0xc4600004
    ctx->pc = 0x1cf8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf8f4: 0x46010034
    ctx->pc = 0x1cf8f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cf8f8: 0x0
    ctx->pc = 0x1cf8f8u;
    // NOP
    // 0x1cf8fc: 0x45020003
    ctx->pc = 0x1CF8FCu;
    {
        const bool branch_taken_0x1cf8fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cf8fc) {
            ctx->pc = 0x1CF900u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x1CF90Cu;
            goto label_1cf90c;
        }
    }
    ctx->pc = 0x1CF904u;
    // 0x1cf904: 0xe4610004
    ctx->pc = 0x1cf904u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1cf908: 0x24840001
    ctx->pc = 0x1cf908u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_1cf90c:
    // 0x1cf90c: 0x91102a
    ctx->pc = 0x1cf90cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 17)));
    // 0x1cf910: 0x1440fff7
    ctx->pc = 0x1CF910u;
    {
        const bool branch_taken_0x1cf910 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CF914u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 80));
        if (branch_taken_0x1cf910) {
            ctx->pc = 0x1CF8F0u;
            goto label_1cf8f0;
        }
    }
    ctx->pc = 0x1CF918u;
label_1cf918:
    // 0x1cf918: 0x72002628
    ctx->pc = 0x1cf918u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1cf91c:
    // 0x1cf91c: 0xc074114
    ctx->pc = 0x1CF91Cu;
    SET_GPR_U32(ctx, 31, 0x1CF924u);
    ctx->pc = 0x1CF920u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 208));
    ctx->pc = 0x1D0450u;
    {
        const uint32_t __entryPc = ctx->pc;
        fixVtx__6CClothFP11tagNLmatrix_0x1d0450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF924u; }
        else if (ctx->pc != 0x1CF924u) { ctx->pc = 0x1CF924u; }
    }
    if (ctx->pc != 0x1CF924u) { return; }
    ctx->pc = 0x1CF924u;
    // 0x1cf924: 0x8fa600c0
    ctx->pc = 0x1cf924u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1cf928: 0x72002628
    ctx->pc = 0x1cf928u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1cf92c: 0xc073ed4
    ctx->pc = 0x1CF92Cu;
    SET_GPR_U32(ctx, 31, 0x1CF934u);
    ctx->pc = 0x1CF930u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1CFB50u;
    {
        const uint32_t __entryPc = ctx->pc;
        collision__6CClothFP11tagNLmatrixP11tagNLmatrix_0x1cfb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF934u; }
        else if (ctx->pc != 0x1CF934u) { ctx->pc = 0x1CF934u; }
    }
    if (ctx->pc != 0x1CF934u) { return; }
    ctx->pc = 0x1CF934u;
    // 0x1cf934: 0x8fa600c0
    ctx->pc = 0x1cf934u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1cf938: 0x72002628
    ctx->pc = 0x1cf938u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1cf93c: 0xc074050
    ctx->pc = 0x1CF93Cu;
    SET_GPR_U32(ctx, 31, 0x1CF944u);
    ctx->pc = 0x1CF940u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1D0140u;
    {
        const uint32_t __entryPc = ctx->pc;
        collisionSphere__6CClothFP11tagNLmatrixP11tagNLmatrix_0x1d0140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF944u; }
        else if (ctx->pc != 0x1CF944u) { ctx->pc = 0x1CF944u; }
    }
    if (ctx->pc != 0x1CF944u) { return; }
    ctx->pc = 0x1CF944u;
    // 0x1cf944: 0x8fa200b0
    ctx->pc = 0x1cf944u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cf948: 0x26d60001
    ctx->pc = 0x1cf948u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
    // 0x1cf94c: 0x24420002
    ctx->pc = 0x1cf94cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x1cf950: 0x2c2102a
    ctx->pc = 0x1cf950u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 22), GPR_S32(ctx, 2)));
    // 0x1cf954: 0x1440fed1
    ctx->pc = 0x1CF954u;
    {
        const bool branch_taken_0x1cf954 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CF958u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 17)));
        if (branch_taken_0x1cf954) {
            ctx->pc = 0x1CF49Cu;
            goto label_1cf49c;
        }
    }
    ctx->pc = 0x1CF95Cu;
    // 0x1cf95c: 0x0
    ctx->pc = 0x1cf95cu;
    // NOP
label_1cf960:
    // 0x1cf960: 0x4bede37d
    ctx->pc = 0x1cf960u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1cf964: 0x4bedeb7d
    ctx->pc = 0x1cf964u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1cf968: 0x4bedf37d
    ctx->pc = 0x1cf968u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1cf96c: 0x4bedfb7d
    ctx->pc = 0x1cf96cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1cf970: 0xc06c038
    ctx->pc = 0x1CF970u;
    SET_GPR_U32(ctx, 31, 0x1CF978u);
    ctx->pc = 0x1CF974u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 272));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF978u; }
        else if (ctx->pc != 0x1CF978u) { ctx->pc = 0x1CF978u; }
    }
    if (ctx->pc != 0x1CF978u) { return; }
    ctx->pc = 0x1CF978u;
    // 0x1cf978: 0x8e120000
    ctx->pc = 0x1cf978u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cf97c: 0x11082a
    ctx->pc = 0x1cf97cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 17)));
    // 0x1cf980: 0x10200015
    ctx->pc = 0x1CF980u;
    {
        const bool branch_taken_0x1cf980 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CF984u;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1cf980) {
            ctx->pc = 0x1CF9D8u;
            goto label_1cf9d8;
        }
    }
    ctx->pc = 0x1CF988u;
label_1cf988:
    // 0x1cf988: 0xc6400000
    ctx->pc = 0x1cf988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf98c: 0x27a40150
    ctx->pc = 0x1cf98cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 336));
    // 0x1cf990: 0x27a50160
    ctx->pc = 0x1cf990u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 352));
    // 0x1cf994: 0xe7a00150
    ctx->pc = 0x1cf994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1cf998: 0xc6400004
    ctx->pc = 0x1cf998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf99c: 0xe7a00154
    ctx->pc = 0x1cf99cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x1cf9a0: 0xc6400008
    ctx->pc = 0x1cf9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf9a4: 0xc06bf00
    ctx->pc = 0x1CF9A4u;
    SET_GPR_U32(ctx, 31, 0x1CF9ACu);
    ctx->pc = 0x1CF9A8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF9ACu; }
        else if (ctx->pc != 0x1CF9ACu) { ctx->pc = 0x1CF9ACu; }
    }
    if (ctx->pc != 0x1CF9ACu) { return; }
    ctx->pc = 0x1CF9ACu;
    // 0x1cf9ac: 0xc7a00160
    ctx->pc = 0x1cf9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf9b0: 0x26730001
    ctx->pc = 0x1cf9b0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x1cf9b4: 0x271182a
    ctx->pc = 0x1cf9b4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 17)));
    // 0x1cf9b8: 0xe6400018
    ctx->pc = 0x1cf9b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x1cf9bc: 0xc7a00164
    ctx->pc = 0x1cf9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf9c0: 0xe640001c
    ctx->pc = 0x1cf9c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x1cf9c4: 0xc7a00168
    ctx->pc = 0x1cf9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf9c8: 0xe6400020
    ctx->pc = 0x1cf9c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x1cf9cc: 0x1460ffee
    ctx->pc = 0x1CF9CCu;
    {
        const bool branch_taken_0x1cf9cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CF9D0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 80));
        if (branch_taken_0x1cf9cc) {
            ctx->pc = 0x1CF988u;
            goto label_1cf988;
        }
    }
    ctx->pc = 0x1CF9D4u;
    // 0x1cf9d4: 0x0
    ctx->pc = 0x1cf9d4u;
    // NOP
label_1cf9d8:
    // 0x1cf9d8: 0x4bff6b7e
    ctx->pc = 0x1cf9d8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1cf9dc: 0x4bfe6b7e
    ctx->pc = 0x1cf9dcu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1cf9e0: 0x4bfd6b7e
    ctx->pc = 0x1cf9e0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1cf9e4: 0x4bfc6b7e
    ctx->pc = 0x1cf9e4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1cf9e8: 0x8e040000
    ctx->pc = 0x1cf9e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cf9ec: 0x11082a
    ctx->pc = 0x1cf9ecu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 17)));
    // 0x1cf9f0: 0x10200047
    ctx->pc = 0x1CF9F0u;
    {
        const bool branch_taken_0x1cf9f0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CF9F4u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1cf9f0) {
            ctx->pc = 0x1CFB10u;
            goto label_1cfb10;
        }
    }
    ctx->pc = 0x1CF9F8u;
    // 0x1cf9f8: 0x3c033e4c
    ctx->pc = 0x1cf9f8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15948 << 16));
    // 0x1cf9fc: 0x3463cccd
    ctx->pc = 0x1cf9fcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52429));
    // 0x1cfa00: 0x44831800
    ctx->pc = 0x1cfa00u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 3);
    // 0x1cfa04: 0x3c03be4c
    ctx->pc = 0x1cfa04u;
    SET_GPR_U32(ctx, 3, ((uint32_t)48716 << 16));
    // 0x1cfa08: 0x3463cccd
    ctx->pc = 0x1cfa08u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52429));
    // 0x1cfa0c: 0x44832000
    ctx->pc = 0x1cfa0cu;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 3);
    // 0x1cfa10: 0x3c033f4c
    ctx->pc = 0x1cfa10u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16204 << 16));
    // 0x1cfa14: 0x3463cccd
    ctx->pc = 0x1cfa14u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52429));
    // 0x1cfa18: 0x44831000
    ctx->pc = 0x1cfa18u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
label_1cfa1c:
    // 0x1cfa1c: 0xc4810000
    ctx->pc = 0x1cfa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cfa20: 0xc480000c
    ctx->pc = 0x1cfa20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfa24: 0x46000801
    ctx->pc = 0x1cfa24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1cfa28: 0x46001002
    ctx->pc = 0x1cfa28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1cfa2c: 0xe480003c
    ctx->pc = 0x1cfa2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x1cfa30: 0xc4810004
    ctx->pc = 0x1cfa30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cfa34: 0xc4800010
    ctx->pc = 0x1cfa34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfa38: 0x46000801
    ctx->pc = 0x1cfa38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1cfa3c: 0x46001002
    ctx->pc = 0x1cfa3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1cfa40: 0xe4800040
    ctx->pc = 0x1cfa40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x1cfa44: 0xc4810008
    ctx->pc = 0x1cfa44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cfa48: 0xc4800014
    ctx->pc = 0x1cfa48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfa4c: 0x46000801
    ctx->pc = 0x1cfa4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1cfa50: 0x46001002
    ctx->pc = 0x1cfa50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1cfa54: 0xe4800044
    ctx->pc = 0x1cfa54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x1cfa58: 0xc480003c
    ctx->pc = 0x1cfa58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfa5c: 0x46030036
    ctx->pc = 0x1cfa5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cfa60: 0x0
    ctx->pc = 0x1cfa60u;
    // NOP
    // 0x1cfa64: 0x45010002
    ctx->pc = 0x1CFA64u;
    {
        const bool branch_taken_0x1cfa64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cfa64) {
            ctx->pc = 0x1CFA70u;
            goto label_1cfa70;
        }
    }
    ctx->pc = 0x1CFA6Cu;
    // 0x1cfa6c: 0xe483003c
    ctx->pc = 0x1cfa6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
label_1cfa70:
    // 0x1cfa70: 0xc4800040
    ctx->pc = 0x1cfa70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfa74: 0x46030036
    ctx->pc = 0x1cfa74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cfa78: 0x0
    ctx->pc = 0x1cfa78u;
    // NOP
    // 0x1cfa7c: 0x45010002
    ctx->pc = 0x1CFA7Cu;
    {
        const bool branch_taken_0x1cfa7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cfa7c) {
            ctx->pc = 0x1CFA88u;
            goto label_1cfa88;
        }
    }
    ctx->pc = 0x1CFA84u;
    // 0x1cfa84: 0xe4830040
    ctx->pc = 0x1cfa84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
label_1cfa88:
    // 0x1cfa88: 0xc4800044
    ctx->pc = 0x1cfa88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfa8c: 0x46030036
    ctx->pc = 0x1cfa8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cfa90: 0x0
    ctx->pc = 0x1cfa90u;
    // NOP
    // 0x1cfa94: 0x45010002
    ctx->pc = 0x1CFA94u;
    {
        const bool branch_taken_0x1cfa94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cfa94) {
            ctx->pc = 0x1CFAA0u;
            goto label_1cfaa0;
        }
    }
    ctx->pc = 0x1CFA9Cu;
    // 0x1cfa9c: 0xe4830044
    ctx->pc = 0x1cfa9cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
label_1cfaa0:
    // 0x1cfaa0: 0xc480003c
    ctx->pc = 0x1cfaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfaa4: 0x46040034
    ctx->pc = 0x1cfaa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cfaa8: 0x0
    ctx->pc = 0x1cfaa8u;
    // NOP
    // 0x1cfaac: 0x45000002
    ctx->pc = 0x1CFAACu;
    {
        const bool branch_taken_0x1cfaac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cfaac) {
            ctx->pc = 0x1CFAB8u;
            goto label_1cfab8;
        }
    }
    ctx->pc = 0x1CFAB4u;
    // 0x1cfab4: 0xe484003c
    ctx->pc = 0x1cfab4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
label_1cfab8:
    // 0x1cfab8: 0xc4800040
    ctx->pc = 0x1cfab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfabc: 0x46040034
    ctx->pc = 0x1cfabcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cfac0: 0x0
    ctx->pc = 0x1cfac0u;
    // NOP
    // 0x1cfac4: 0x45000002
    ctx->pc = 0x1CFAC4u;
    {
        const bool branch_taken_0x1cfac4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cfac4) {
            ctx->pc = 0x1CFAD0u;
            goto label_1cfad0;
        }
    }
    ctx->pc = 0x1CFACCu;
    // 0x1cfacc: 0xe4840040
    ctx->pc = 0x1cfaccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
label_1cfad0:
    // 0x1cfad0: 0xc4800044
    ctx->pc = 0x1cfad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfad4: 0x46040034
    ctx->pc = 0x1cfad4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cfad8: 0x0
    ctx->pc = 0x1cfad8u;
    // NOP
    // 0x1cfadc: 0x45000002
    ctx->pc = 0x1CFADCu;
    {
        const bool branch_taken_0x1cfadc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cfadc) {
            ctx->pc = 0x1CFAE8u;
            goto label_1cfae8;
        }
    }
    ctx->pc = 0x1CFAE4u;
    // 0x1cfae4: 0xe4840044
    ctx->pc = 0x1cfae4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
label_1cfae8:
    // 0x1cfae8: 0xc4800000
    ctx->pc = 0x1cfae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfaec: 0x24a50001
    ctx->pc = 0x1cfaecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1cfaf0: 0xb1182a
    ctx->pc = 0x1cfaf0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 17)));
    // 0x1cfaf4: 0xe480000c
    ctx->pc = 0x1cfaf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1cfaf8: 0xc4800004
    ctx->pc = 0x1cfaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfafc: 0xe4800010
    ctx->pc = 0x1cfafcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1cfb00: 0xc4800008
    ctx->pc = 0x1cfb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfb04: 0xe4800014
    ctx->pc = 0x1cfb04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1cfb08: 0x1460ffc4
    ctx->pc = 0x1CFB08u;
    {
        const bool branch_taken_0x1cfb08 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CFB0Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 80));
        if (branch_taken_0x1cfb08) {
            ctx->pc = 0x1CFA1Cu;
            goto label_1cfa1c;
        }
    }
    ctx->pc = 0x1CFB10u;
label_1cfb10:
    // 0x1cfb10: 0x7bbf00a0
    ctx->pc = 0x1cfb10u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1cfb14: 0x7bbe0090
    ctx->pc = 0x1cfb14u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cfb18: 0x7bb70080
    ctx->pc = 0x1cfb18u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1cfb1c: 0x7bb60070
    ctx->pc = 0x1cfb1cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cfb20: 0x7bb50060
    ctx->pc = 0x1cfb20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1cfb24: 0x7bb40050
    ctx->pc = 0x1cfb24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cfb28: 0x7bb30040
    ctx->pc = 0x1cfb28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cfb2c: 0x7bb20030
    ctx->pc = 0x1cfb2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cfb30: 0x7bb10020
    ctx->pc = 0x1cfb30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cfb34: 0x7bb00010
    ctx->pc = 0x1cfb34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cfb38: 0xc7b7000c
    ctx->pc = 0x1cfb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1cfb3c: 0xc7b60008
    ctx->pc = 0x1cfb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1cfb40: 0xc7b50004
    ctx->pc = 0x1cfb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1cfb44: 0xc7b40000
    ctx->pc = 0x1cfb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cfb48: 0x3e00008
    ctx->pc = 0x1CFB48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFB4Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CF018u: goto label_1cf018;
            case 0x1CF094u: goto label_1cf094;
            case 0x1CF2A8u: goto label_1cf2a8;
            case 0x1CF2B4u: goto label_1cf2b4;
            case 0x1CF308u: goto label_1cf308;
            case 0x1CF348u: goto label_1cf348;
            case 0x1CF3B8u: goto label_1cf3b8;
            case 0x1CF3C4u: goto label_1cf3c4;
            case 0x1CF3E0u: goto label_1cf3e0;
            case 0x1CF408u: goto label_1cf408;
            case 0x1CF450u: goto label_1cf450;
            case 0x1CF454u: goto label_1cf454;
            case 0x1CF468u: goto label_1cf468;
            case 0x1CF47Cu: goto label_1cf47c;
            case 0x1CF480u: goto label_1cf480;
            case 0x1CF484u: goto label_1cf484;
            case 0x1CF49Cu: goto label_1cf49c;
            case 0x1CF4ACu: goto label_1cf4ac;
            case 0x1CF4C4u: goto label_1cf4c4;
            case 0x1CF578u: goto label_1cf578;
            case 0x1CF57Cu: goto label_1cf57c;
            case 0x1CF5E0u: goto label_1cf5e0;
            case 0x1CF5E8u: goto label_1cf5e8;
            case 0x1CF610u: goto label_1cf610;
            case 0x1CF61Cu: goto label_1cf61c;
            case 0x1CF634u: goto label_1cf634;
            case 0x1CF640u: goto label_1cf640;
            case 0x1CF6F8u: goto label_1cf6f8;
            case 0x1CF6FCu: goto label_1cf6fc;
            case 0x1CF760u: goto label_1cf760;
            case 0x1CF768u: goto label_1cf768;
            case 0x1CF780u: goto label_1cf780;
            case 0x1CF7B4u: goto label_1cf7b4;
            case 0x1CF7D0u: goto label_1cf7d0;
            case 0x1CF834u: goto label_1cf834;
            case 0x1CF838u: goto label_1cf838;
            case 0x1CF854u: goto label_1cf854;
            case 0x1CF864u: goto label_1cf864;
            case 0x1CF884u: goto label_1cf884;
            case 0x1CF898u: goto label_1cf898;
            case 0x1CF89Cu: goto label_1cf89c;
            case 0x1CF8A8u: goto label_1cf8a8;
            case 0x1CF8C4u: goto label_1cf8c4;
            case 0x1CF8DCu: goto label_1cf8dc;
            case 0x1CF8F0u: goto label_1cf8f0;
            case 0x1CF90Cu: goto label_1cf90c;
            case 0x1CF918u: goto label_1cf918;
            case 0x1CF91Cu: goto label_1cf91c;
            case 0x1CF960u: goto label_1cf960;
            case 0x1CF988u: goto label_1cf988;
            case 0x1CF9D8u: goto label_1cf9d8;
            case 0x1CFA1Cu: goto label_1cfa1c;
            case 0x1CFA70u: goto label_1cfa70;
            case 0x1CFA88u: goto label_1cfa88;
            case 0x1CFAA0u: goto label_1cfaa0;
            case 0x1CFAB8u: goto label_1cfab8;
            case 0x1CFAD0u: goto label_1cfad0;
            case 0x1CFAE8u: goto label_1cfae8;
            case 0x1CFB10u: goto label_1cfb10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CFB50u;
}

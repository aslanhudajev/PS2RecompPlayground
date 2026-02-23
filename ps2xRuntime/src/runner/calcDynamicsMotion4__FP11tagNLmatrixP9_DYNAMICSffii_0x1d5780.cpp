#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: calcDynamicsMotion4__FP11tagNLmatrixP9_DYNAMICSffii
// Address: 0x1d5780 - 0x1d5aa8
void calcDynamicsMotion4__FP11tagNLmatrixP9_DYNAMICSffii_0x1d5780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("calcDynamicsMotion4__FP11tagNLmatrixP9_DYNAMICSffii");


    ctx->pc = 0x1d5780u;

    // 0x1d5780: 0x27bdff50
    ctx->pc = 0x1d5780u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1d5784: 0x7fbf0080
    ctx->pc = 0x1d5784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
    // 0x1d5788: 0x7fb60070
    ctx->pc = 0x1d5788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1d578c: 0x7fb50060
    ctx->pc = 0x1d578cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1d5790: 0x7fb40050
    ctx->pc = 0x1d5790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1d5794: 0x7fb30040
    ctx->pc = 0x1d5794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1d5798: 0x7fb20030
    ctx->pc = 0x1d5798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1d579c: 0x7fb10020
    ctx->pc = 0x1d579cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d57a0: 0x7fb00010
    ctx->pc = 0x1d57a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d57a4: 0xe7b60008
    ctx->pc = 0x1d57a4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1d57a8: 0xe7b50004
    ctx->pc = 0x1d57a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1d57ac: 0x460d6034
    ctx->pc = 0x1d57acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d57b0: 0xe7b40000
    ctx->pc = 0x1d57b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d57b4: 0x45010028
    ctx->pc = 0x1D57B4u;
    {
        const bool branch_taken_0x1d57b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D57B8u;
        SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d57b4) {
            ctx->pc = 0x1D5858u;
            goto label_1d5858;
        }
    }
    ctx->pc = 0x1D57BCu;
    // 0x1d57bc: 0x46006824
    ctx->pc = 0x1d57bcu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[13]);
    // 0x1d57c0: 0x71080
    ctx->pc = 0x1d57c0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
    // 0x1d57c4: 0x471021
    ctx->pc = 0x1d57c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1d57c8: 0x21880
    ctx->pc = 0x1d57c8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d57cc: 0x61080
    ctx->pc = 0x1d57ccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1d57d0: 0x461021
    ctx->pc = 0x1d57d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d57d4: 0x44040000
    ctx->pc = 0x1d57d4u;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[0]);
    // 0x1d57d8: 0x23080
    ctx->pc = 0x1d57d8u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d57dc: 0x831018
    ctx->pc = 0x1d57dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x1d57e0: 0xa21021
    ctx->pc = 0x1d57e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1d57e4: 0x461021
    ctx->pc = 0x1d57e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d57e8: 0xc4540000
    ctx->pc = 0x1d57e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d57ec: 0xc4550004
    ctx->pc = 0x1d57ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d57f0: 0xc4560008
    ctx->pc = 0x1d57f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1d57f4: 0x9450000c
    ctx->pc = 0x1d57f4u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1d57f8: 0x9451000e
    ctx->pc = 0x1d57f8u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1d57fc: 0x94520010
    ctx->pc = 0x1d57fcu;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d5800: 0x4bede37d
    ctx->pc = 0x1d5800u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1d5804: 0x4bedeb7d
    ctx->pc = 0x1d5804u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1d5808: 0x4bedf37d
    ctx->pc = 0x1d5808u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1d580c: 0xc06c20d
    ctx->pc = 0x1D580Cu;
    SET_GPR_U32(ctx, 31, 0x1D5814u);
    ctx->pc = 0x1D5810u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5814u; }
        else if (ctx->pc != 0x1D5814u) { ctx->pc = 0x1D5814u; }
    }
    if (ctx->pc != 0x1D5814u) { return; }
    ctx->pc = 0x1D5814u;
    // 0x1d5814: 0x4600a306
    ctx->pc = 0x1d5814u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1d5818: 0x4600ab46
    ctx->pc = 0x1d5818u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1d581c: 0xc06c202
    ctx->pc = 0x1D581Cu;
    SET_GPR_U32(ctx, 31, 0x1D5824u);
    ctx->pc = 0x1D5820u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5824u; }
        else if (ctx->pc != 0x1D5824u) { ctx->pc = 0x1D5824u; }
    }
    if (ctx->pc != 0x1D5824u) { return; }
    ctx->pc = 0x1D5824u;
    // 0x1d5824: 0xc06c157
    ctx->pc = 0x1D5824u;
    SET_GPR_U32(ctx, 31, 0x1D582Cu);
    ctx->pc = 0x1D5828u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 18), 65535));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D582Cu; }
        else if (ctx->pc != 0x1D582Cu) { ctx->pc = 0x1D582Cu; }
    }
    if (ctx->pc != 0x1D582Cu) { return; }
    ctx->pc = 0x1D582Cu;
    // 0x1d582c: 0xc06c0fb
    ctx->pc = 0x1D582Cu;
    SET_GPR_U32(ctx, 31, 0x1D5834u);
    ctx->pc = 0x1D5830u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 17), 65535));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5834u; }
        else if (ctx->pc != 0x1D5834u) { ctx->pc = 0x1D5834u; }
    }
    if (ctx->pc != 0x1D5834u) { return; }
    ctx->pc = 0x1D5834u;
    // 0x1d5834: 0xc06c09f
    ctx->pc = 0x1D5834u;
    SET_GPR_U32(ctx, 31, 0x1D583Cu);
    ctx->pc = 0x1D5838u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 16), 65535));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D583Cu; }
        else if (ctx->pc != 0x1D583Cu) { ctx->pc = 0x1D583Cu; }
    }
    if (ctx->pc != 0x1D583Cu) { return; }
    ctx->pc = 0x1D583Cu;
    // 0x1d583c: 0xc06bf55
    ctx->pc = 0x1D583Cu;
    SET_GPR_U32(ctx, 31, 0x1D5844u);
    ctx->pc = 0x1D5840u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5844u; }
        else if (ctx->pc != 0x1D5844u) { ctx->pc = 0x1D5844u; }
    }
    if (ctx->pc != 0x1D5844u) { return; }
    ctx->pc = 0x1D5844u;
    // 0x1d5844: 0x4bff6b7e
    ctx->pc = 0x1d5844u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1d5848: 0x4bfe6b7e
    ctx->pc = 0x1d5848u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1d584c: 0x4bfd6b7e
    ctx->pc = 0x1d584cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1d5850: 0x10000088
    ctx->pc = 0x1D5850u;
    {
        const bool branch_taken_0x1d5850 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D5854u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x1d5850) {
            ctx->pc = 0x1D5A74u;
            goto label_1d5a74;
        }
    }
    ctx->pc = 0x1D5858u;
label_1d5858:
    // 0x1d5858: 0x71080
    ctx->pc = 0x1d5858u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
    // 0x1d585c: 0x471021
    ctx->pc = 0x1d585cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1d5860: 0x3c033f80
    ctx->pc = 0x1d5860u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1d5864: 0x22080
    ctx->pc = 0x1d5864u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d5868: 0x61080
    ctx->pc = 0x1d5868u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1d586c: 0x44831000
    ctx->pc = 0x1d586cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
    // 0x1d5870: 0x461021
    ctx->pc = 0x1d5870u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d5874: 0x46006024
    ctx->pc = 0x1d5874u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[12]);
    // 0x1d5878: 0x21880
    ctx->pc = 0x1d5878u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d587c: 0x44020000
    ctx->pc = 0x1d587cu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1d5880: 0x460c1040
    ctx->pc = 0x1d5880u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
    // 0x1d5884: 0x441018
    ctx->pc = 0x1d5884u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x1d5888: 0x46800020
    ctx->pc = 0x1d5888u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1d588c: 0xa21021
    ctx->pc = 0x1d588cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1d5890: 0x431021
    ctx->pc = 0x1d5890u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d5894: 0xc4430000
    ctx->pc = 0x1d5894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d5898: 0xc4440004
    ctx->pc = 0x1d5898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1d589c: 0xc4450008
    ctx->pc = 0x1d589cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1d58a0: 0x46006301
    ctx->pc = 0x1d58a0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1d58a4: 0x9456000c
    ctx->pc = 0x1d58a4u;
    SET_GPR_U32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1d58a8: 0x9450000e
    ctx->pc = 0x1d58a8u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1d58ac: 0x94510010
    ctx->pc = 0x1d58acu;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d58b0: 0x46000864
    ctx->pc = 0x1d58b0u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x1d58b4: 0x44020800
    ctx->pc = 0x1d58b4u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x1d58b8: 0x460c1032
    ctx->pc = 0x1d58b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d58bc: 0x70441018
    ctx->pc = 0x1d58bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x1d58c0: 0xa21021
    ctx->pc = 0x1d58c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1d58c4: 0x621021
    ctx->pc = 0x1d58c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d58c8: 0xc4420000
    ctx->pc = 0x1d58c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d58cc: 0xc4410004
    ctx->pc = 0x1d58ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d58d0: 0xc4400008
    ctx->pc = 0x1d58d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d58d4: 0x9452000c
    ctx->pc = 0x1d58d4u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1d58d8: 0x9453000e
    ctx->pc = 0x1d58d8u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1d58dc: 0x94540010
    ctx->pc = 0x1d58dcu;
    SET_GPR_U32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d58e0: 0x46031081
    ctx->pc = 0x1d58e0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x1d58e4: 0x46040841
    ctx->pc = 0x1d58e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x1d58e8: 0x46050001
    ctx->pc = 0x1d58e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x1d58ec: 0x46026082
    ctx->pc = 0x1d58ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x1d58f0: 0x46016042
    ctx->pc = 0x1d58f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x1d58f4: 0x46006002
    ctx->pc = 0x1d58f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1d58f8: 0x46021d00
    ctx->pc = 0x1d58f8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1d58fc: 0x46012540
    ctx->pc = 0x1d58fcu;
    ctx->f[21] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x1d5900: 0x45000017
    ctx->pc = 0x1D5900u;
    {
        const bool branch_taken_0x1d5900 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D5904u;
        ctx->f[22] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
        if (branch_taken_0x1d5900) {
            ctx->pc = 0x1D5960u;
            goto label_1d5960;
        }
    }
    ctx->pc = 0x1D5908u;
    // 0x1d5908: 0x4bede37d
    ctx->pc = 0x1d5908u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1d590c: 0x4bedeb7d
    ctx->pc = 0x1d590cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1d5910: 0x4bedf37d
    ctx->pc = 0x1d5910u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1d5914: 0xc06c20d
    ctx->pc = 0x1D5914u;
    SET_GPR_U32(ctx, 31, 0x1D591Cu);
    ctx->pc = 0x1D5918u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D591Cu; }
        else if (ctx->pc != 0x1D591Cu) { ctx->pc = 0x1D591Cu; }
    }
    if (ctx->pc != 0x1D591Cu) { return; }
    ctx->pc = 0x1D591Cu;
    // 0x1d591c: 0x4600a306
    ctx->pc = 0x1d591cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1d5920: 0x4600ab46
    ctx->pc = 0x1d5920u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1d5924: 0xc06c202
    ctx->pc = 0x1D5924u;
    SET_GPR_U32(ctx, 31, 0x1D592Cu);
    ctx->pc = 0x1D5928u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D592Cu; }
        else if (ctx->pc != 0x1D592Cu) { ctx->pc = 0x1D592Cu; }
    }
    if (ctx->pc != 0x1D592Cu) { return; }
    ctx->pc = 0x1D592Cu;
    // 0x1d592c: 0xc06c157
    ctx->pc = 0x1D592Cu;
    SET_GPR_U32(ctx, 31, 0x1D5934u);
    ctx->pc = 0x1D5930u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 20), 65535));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5934u; }
        else if (ctx->pc != 0x1D5934u) { ctx->pc = 0x1D5934u; }
    }
    if (ctx->pc != 0x1D5934u) { return; }
    ctx->pc = 0x1D5934u;
    // 0x1d5934: 0xc06c0fb
    ctx->pc = 0x1D5934u;
    SET_GPR_U32(ctx, 31, 0x1D593Cu);
    ctx->pc = 0x1D5938u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 19), 65535));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D593Cu; }
        else if (ctx->pc != 0x1D593Cu) { ctx->pc = 0x1D593Cu; }
    }
    if (ctx->pc != 0x1D593Cu) { return; }
    ctx->pc = 0x1D593Cu;
    // 0x1d593c: 0xc06c09f
    ctx->pc = 0x1D593Cu;
    SET_GPR_U32(ctx, 31, 0x1D5944u);
    ctx->pc = 0x1D5940u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 18), 65535));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5944u; }
        else if (ctx->pc != 0x1D5944u) { ctx->pc = 0x1D5944u; }
    }
    if (ctx->pc != 0x1D5944u) { return; }
    ctx->pc = 0x1D5944u;
    // 0x1d5944: 0xc06bf55
    ctx->pc = 0x1D5944u;
    SET_GPR_U32(ctx, 31, 0x1D594Cu);
    ctx->pc = 0x1D5948u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D594Cu; }
        else if (ctx->pc != 0x1D594Cu) { ctx->pc = 0x1D594Cu; }
    }
    if (ctx->pc != 0x1D594Cu) { return; }
    ctx->pc = 0x1D594Cu;
    // 0x1d594c: 0x4bff6b7e
    ctx->pc = 0x1d594cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1d5950: 0x4bfe6b7e
    ctx->pc = 0x1d5950u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1d5954: 0x4bfd6b7e
    ctx->pc = 0x1d5954u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1d5958: 0x10000046
    ctx->pc = 0x1D5958u;
    {
        const bool branch_taken_0x1d5958 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D595Cu;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x1d5958) {
            ctx->pc = 0x1D5A74u;
            goto label_1d5a74;
        }
    }
    ctx->pc = 0x1D5960u;
label_1d5960:
    // 0x1d5960: 0x44800000
    ctx->pc = 0x1d5960u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1d5964: 0x0
    ctx->pc = 0x1d5964u;
    // NOP
    // 0x1d5968: 0x460c0032
    ctx->pc = 0x1d5968u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d596c: 0x0
    ctx->pc = 0x1d596cu;
    // NOP
    // 0x1d5970: 0x45000017
    ctx->pc = 0x1D5970u;
    {
        const bool branch_taken_0x1d5970 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D5974u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 22), 65535));
        if (branch_taken_0x1d5970) {
            ctx->pc = 0x1D59D0u;
            goto label_1d59d0;
        }
    }
    ctx->pc = 0x1D5978u;
    // 0x1d5978: 0x4bede37d
    ctx->pc = 0x1d5978u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1d597c: 0x4bedeb7d
    ctx->pc = 0x1d597cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1d5980: 0x4bedf37d
    ctx->pc = 0x1d5980u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1d5984: 0xc06c20d
    ctx->pc = 0x1D5984u;
    SET_GPR_U32(ctx, 31, 0x1D598Cu);
    ctx->pc = 0x1D5988u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D598Cu; }
        else if (ctx->pc != 0x1D598Cu) { ctx->pc = 0x1D598Cu; }
    }
    if (ctx->pc != 0x1D598Cu) { return; }
    ctx->pc = 0x1D598Cu;
    // 0x1d598c: 0x4600a306
    ctx->pc = 0x1d598cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1d5990: 0x4600ab46
    ctx->pc = 0x1d5990u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1d5994: 0xc06c202
    ctx->pc = 0x1D5994u;
    SET_GPR_U32(ctx, 31, 0x1D599Cu);
    ctx->pc = 0x1D5998u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D599Cu; }
        else if (ctx->pc != 0x1D599Cu) { ctx->pc = 0x1D599Cu; }
    }
    if (ctx->pc != 0x1D599Cu) { return; }
    ctx->pc = 0x1D599Cu;
    // 0x1d599c: 0xc06c157
    ctx->pc = 0x1D599Cu;
    SET_GPR_U32(ctx, 31, 0x1D59A4u);
    ctx->pc = 0x1D59A0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 17), 65535));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D59A4u; }
        else if (ctx->pc != 0x1D59A4u) { ctx->pc = 0x1D59A4u; }
    }
    if (ctx->pc != 0x1D59A4u) { return; }
    ctx->pc = 0x1D59A4u;
    // 0x1d59a4: 0xc06c0fb
    ctx->pc = 0x1D59A4u;
    SET_GPR_U32(ctx, 31, 0x1D59ACu);
    ctx->pc = 0x1D59A8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 16), 65535));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D59ACu; }
        else if (ctx->pc != 0x1D59ACu) { ctx->pc = 0x1D59ACu; }
    }
    if (ctx->pc != 0x1D59ACu) { return; }
    ctx->pc = 0x1D59ACu;
    // 0x1d59ac: 0xc06c09f
    ctx->pc = 0x1D59ACu;
    SET_GPR_U32(ctx, 31, 0x1D59B4u);
    ctx->pc = 0x1D59B0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 22), 65535));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D59B4u; }
        else if (ctx->pc != 0x1D59B4u) { ctx->pc = 0x1D59B4u; }
    }
    if (ctx->pc != 0x1D59B4u) { return; }
    ctx->pc = 0x1D59B4u;
    // 0x1d59b4: 0xc06bf55
    ctx->pc = 0x1D59B4u;
    SET_GPR_U32(ctx, 31, 0x1D59BCu);
    ctx->pc = 0x1D59B8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D59BCu; }
        else if (ctx->pc != 0x1D59BCu) { ctx->pc = 0x1D59BCu; }
    }
    if (ctx->pc != 0x1D59BCu) { return; }
    ctx->pc = 0x1D59BCu;
    // 0x1d59bc: 0x4bff6b7e
    ctx->pc = 0x1d59bcu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1d59c0: 0x4bfe6b7e
    ctx->pc = 0x1d59c0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1d59c4: 0x4bfd6b7e
    ctx->pc = 0x1d59c4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1d59c8: 0x1000002a
    ctx->pc = 0x1D59C8u;
    {
        const bool branch_taken_0x1d59c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D59CCu;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x1d59c8) {
            ctx->pc = 0x1D5A74u;
            goto label_1d5a74;
        }
    }
    ctx->pc = 0x1D59D0u;
label_1d59d0:
    // 0x1d59d0: 0xafa20090
    ctx->pc = 0x1d59d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x1d59d4: 0x3202ffff
    ctx->pc = 0x1d59d4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 65535));
    // 0x1d59d8: 0xafa20094
    ctx->pc = 0x1d59d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
    // 0x1d59dc: 0x3222ffff
    ctx->pc = 0x1d59dcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 65535));
    // 0x1d59e0: 0xafa20098
    ctx->pc = 0x1d59e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
    // 0x1d59e4: 0x3242ffff
    ctx->pc = 0x1d59e4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 65535));
    // 0x1d59e8: 0xafa200a0
    ctx->pc = 0x1d59e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1d59ec: 0x3262ffff
    ctx->pc = 0x1d59ecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 65535));
    // 0x1d59f0: 0xafa200a4
    ctx->pc = 0x1d59f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x1d59f4: 0x3282ffff
    ctx->pc = 0x1d59f4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 65535));
    // 0x1d59f8: 0xafa200a8
    ctx->pc = 0x1d59f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x1d59fc: 0x4bede37d
    ctx->pc = 0x1d59fcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1d5a00: 0x4bedeb7d
    ctx->pc = 0x1d5a00u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1d5a04: 0x4bedf37d
    ctx->pc = 0x1d5a04u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1d5a08: 0x4bedfb7d
    ctx->pc = 0x1d5a08u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1d5a0c: 0x27a40090
    ctx->pc = 0x1d5a0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
    // 0x1d5a10: 0xc075474
    ctx->pc = 0x1D5A10u;
    SET_GPR_U32(ctx, 31, 0x1D5A18u);
    ctx->pc = 0x1D5A14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 160));
    ctx->pc = 0x1D51D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nearZYXrotYAxis__FP4XYZAP4XYZAf_0x1d51d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5A18u; }
        else if (ctx->pc != 0x1D5A18u) { ctx->pc = 0x1D5A18u; }
    }
    if (ctx->pc != 0x1D5A18u) { return; }
    ctx->pc = 0x1D5A18u;
    // 0x1d5a18: 0xc06bf55
    ctx->pc = 0x1D5A18u;
    SET_GPR_U32(ctx, 31, 0x1D5A20u);
    ctx->pc = 0x1D5A1Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5A20u; }
        else if (ctx->pc != 0x1D5A20u) { ctx->pc = 0x1D5A20u; }
    }
    if (ctx->pc != 0x1D5A20u) { return; }
    ctx->pc = 0x1D5A20u;
    // 0x1d5a20: 0x4bff6b7e
    ctx->pc = 0x1d5a20u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1d5a24: 0x4bfe6b7e
    ctx->pc = 0x1d5a24u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1d5a28: 0x4bfd6b7e
    ctx->pc = 0x1d5a28u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1d5a2c: 0x4bfc6b7e
    ctx->pc = 0x1d5a2cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1d5a30: 0x4bede37d
    ctx->pc = 0x1d5a30u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1d5a34: 0x4bedeb7d
    ctx->pc = 0x1d5a34u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1d5a38: 0x4bedf37d
    ctx->pc = 0x1d5a38u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1d5a3c: 0xc06c20d
    ctx->pc = 0x1D5A3Cu;
    SET_GPR_U32(ctx, 31, 0x1D5A44u);
    ctx->pc = 0x1D5A40u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5A44u; }
        else if (ctx->pc != 0x1D5A44u) { ctx->pc = 0x1D5A44u; }
    }
    if (ctx->pc != 0x1D5A44u) { return; }
    ctx->pc = 0x1D5A44u;
    // 0x1d5a44: 0x4600a306
    ctx->pc = 0x1d5a44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1d5a48: 0x4600ab46
    ctx->pc = 0x1d5a48u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1d5a4c: 0xc06c202
    ctx->pc = 0x1D5A4Cu;
    SET_GPR_U32(ctx, 31, 0x1D5A54u);
    ctx->pc = 0x1D5A50u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5A54u; }
        else if (ctx->pc != 0x1D5A54u) { ctx->pc = 0x1D5A54u; }
    }
    if (ctx->pc != 0x1D5A54u) { return; }
    ctx->pc = 0x1D5A54u;
    // 0x1d5a54: 0xc06c04e
    ctx->pc = 0x1D5A54u;
    SET_GPR_U32(ctx, 31, 0x1D5A5Cu);
    ctx->pc = 0x1D5A58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5A5Cu; }
        else if (ctx->pc != 0x1D5A5Cu) { ctx->pc = 0x1D5A5Cu; }
    }
    if (ctx->pc != 0x1D5A5Cu) { return; }
    ctx->pc = 0x1D5A5Cu;
    // 0x1d5a5c: 0xc06bf55
    ctx->pc = 0x1D5A5Cu;
    SET_GPR_U32(ctx, 31, 0x1D5A64u);
    ctx->pc = 0x1D5A60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5A64u; }
        else if (ctx->pc != 0x1D5A64u) { ctx->pc = 0x1D5A64u; }
    }
    if (ctx->pc != 0x1D5A64u) { return; }
    ctx->pc = 0x1D5A64u;
    // 0x1d5a64: 0x4bff6b7e
    ctx->pc = 0x1d5a64u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1d5a68: 0x4bfe6b7e
    ctx->pc = 0x1d5a68u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1d5a6c: 0x4bfd6b7e
    ctx->pc = 0x1d5a6cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1d5a70: 0x4bfc6b7e
    ctx->pc = 0x1d5a70u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_1d5a74:
    // 0x1d5a74: 0x7bbf0080
    ctx->pc = 0x1d5a74u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d5a78: 0x7bb60070
    ctx->pc = 0x1d5a78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d5a7c: 0x7bb50060
    ctx->pc = 0x1d5a7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d5a80: 0x7bb40050
    ctx->pc = 0x1d5a80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d5a84: 0x7bb30040
    ctx->pc = 0x1d5a84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d5a88: 0x7bb20030
    ctx->pc = 0x1d5a88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5a8c: 0x7bb10020
    ctx->pc = 0x1d5a8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5a90: 0x7bb00010
    ctx->pc = 0x1d5a90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5a94: 0xc7b60008
    ctx->pc = 0x1d5a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1d5a98: 0xc7b50004
    ctx->pc = 0x1d5a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d5a9c: 0xc7b40000
    ctx->pc = 0x1d5a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d5aa0: 0x3e00008
    ctx->pc = 0x1D5AA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5AA4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D5858u: goto label_1d5858;
            case 0x1D5960u: goto label_1d5960;
            case 0x1D59D0u: goto label_1d59d0;
            case 0x1D5A74u: goto label_1d5a74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D5AA8u;
}

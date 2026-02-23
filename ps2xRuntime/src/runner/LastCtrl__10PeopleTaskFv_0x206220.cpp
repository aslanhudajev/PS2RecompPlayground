#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: LastCtrl__10PeopleTaskFv
// Address: 0x206220 - 0x20674c
void LastCtrl__10PeopleTaskFv_0x206220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("LastCtrl__10PeopleTaskFv");


    ctx->pc = 0x206220u;

    // 0x206220: 0x27bdff80
    ctx->pc = 0x206220u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x206224: 0x7fbf0030
    ctx->pc = 0x206224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x206228: 0x7fb20020
    ctx->pc = 0x206228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20622c: 0x7fb10010
    ctx->pc = 0x20622cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x206230: 0x7fb00000
    ctx->pc = 0x206230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x206234: 0x8c900034
    ctx->pc = 0x206234u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x206238: 0x70809628
    ctx->pc = 0x206238u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x20623c: 0x3c030002
    ctx->pc = 0x20623cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)2 << 16));
    // 0x206240: 0x8c84000c
    ctx->pc = 0x206240u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x206244: 0x831824
    ctx->pc = 0x206244u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x206248: 0x14600051
    ctx->pc = 0x206248u;
    {
        const bool branch_taken_0x206248 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x20624Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 844));
        if (branch_taken_0x206248) {
            ctx->pc = 0x206390u;
            goto label_206390;
        }
    }
    ctx->pc = 0x206250u;
    // 0x206250: 0x4bede37d
    ctx->pc = 0x206250u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x206254: 0x4bedeb7d
    ctx->pc = 0x206254u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x206258: 0x4bedf37d
    ctx->pc = 0x206258u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x20625c: 0x4bedfb7d
    ctx->pc = 0x20625cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x206260: 0x8f848c48
    ctx->pc = 0x206260u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x206264: 0x8c830004
    ctx->pc = 0x206264u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x206268: 0x31040
    ctx->pc = 0x206268u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x20626c: 0x431021
    ctx->pc = 0x20626cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x206270: 0x21080
    ctx->pc = 0x206270u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x206274: 0x431021
    ctx->pc = 0x206274u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x206278: 0x21100
    ctx->pc = 0x206278u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x20627c: 0x821021
    ctx->pc = 0x20627cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x206280: 0xc06c038
    ctx->pc = 0x206280u;
    SET_GPR_U32(ctx, 31, 0x206288u);
    ctx->pc = 0x206284u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206288u; }
        else if (ctx->pc != 0x206288u) { ctx->pc = 0x206288u; }
    }
    if (ctx->pc != 0x206288u) { return; }
    ctx->pc = 0x206288u;
    // 0x206288: 0xc06c04e
    ctx->pc = 0x206288u;
    SET_GPR_U32(ctx, 31, 0x206290u);
    ctx->pc = 0x20628Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 688));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206290u; }
        else if (ctx->pc != 0x206290u) { ctx->pc = 0x206290u; }
    }
    if (ctx->pc != 0x206290u) { return; }
    ctx->pc = 0x206290u;
    // 0x206290: 0xafa00050
    ctx->pc = 0x206290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x206294: 0x3c023f00
    ctx->pc = 0x206294u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x206298: 0xafa20054
    ctx->pc = 0x206298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x20629c: 0x3c023fc0
    ctx->pc = 0x20629cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16320 << 16));
    // 0x2062a0: 0xafa20058
    ctx->pc = 0x2062a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x2062a4: 0x27a40050
    ctx->pc = 0x2062a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x2062a8: 0xc06bf00
    ctx->pc = 0x2062A8u;
    SET_GPR_U32(ctx, 31, 0x2062B0u);
    ctx->pc = 0x2062ACu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2062B0u; }
        else if (ctx->pc != 0x2062B0u) { ctx->pc = 0x2062B0u; }
    }
    if (ctx->pc != 0x2062B0u) { return; }
    ctx->pc = 0x2062B0u;
    // 0x2062b0: 0xc7a20060
    ctx->pc = 0x2062b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2062b4: 0xc7a10064
    ctx->pc = 0x2062b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2062b8: 0xc7a00068
    ctx->pc = 0x2062b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2062bc: 0xe7a20040
    ctx->pc = 0x2062bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2062c0: 0xe7a10044
    ctx->pc = 0x2062c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2062c4: 0xe7a00048
    ctx->pc = 0x2062c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2062c8: 0x4bff6b7e
    ctx->pc = 0x2062c8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2062cc: 0x4bfe6b7e
    ctx->pc = 0x2062ccu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2062d0: 0x4bfd6b7e
    ctx->pc = 0x2062d0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2062d4: 0x4bfc6b7e
    ctx->pc = 0x2062d4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2062d8: 0x87848d6c
    ctx->pc = 0x2062d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937964)));
    // 0x2062dc: 0x87838d70
    ctx->pc = 0x2062dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937968)));
    // 0x2062e0: 0x64082a
    ctx->pc = 0x2062e0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x2062e4: 0x1020002a
    ctx->pc = 0x2062E4u;
    {
        const bool branch_taken_0x2062e4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x2062e4) {
            ctx->pc = 0x206390u;
            goto label_206390;
        }
    }
    ctx->pc = 0x2062ECu;
    // 0x2062ec: 0x8e43000c
    ctx->pc = 0x2062ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2062f0: 0x3c021000
    ctx->pc = 0x2062f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2062f4: 0x621024
    ctx->pc = 0x2062f4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2062f8: 0x10400014
    ctx->pc = 0x2062F8u;
    {
        const bool branch_taken_0x2062f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2062f8) {
            ctx->pc = 0x20634Cu;
            goto label_20634c;
        }
    }
    ctx->pc = 0x206300u;
    // 0x206300: 0xc6220000
    ctx->pc = 0x206300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x206304: 0xc6210004
    ctx->pc = 0x206304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206308: 0x3c02447a
    ctx->pc = 0x206308u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17530 << 16));
    // 0x20630c: 0xc6230008
    ctx->pc = 0x20630cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x206310: 0x44820000
    ctx->pc = 0x206310u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x206314: 0x8f848c48
    ctx->pc = 0x206314u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x206318: 0x46021082
    ctx->pc = 0x206318u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x20631c: 0x70002e28
    ctx->pc = 0x20631cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x206320: 0x27a60040
    ctx->pc = 0x206320u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 64));
    // 0x206324: 0x46010842
    ctx->pc = 0x206324u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x206328: 0x46011018
    ctx->pc = 0x206328u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x20632c: 0x4603185c
    ctx->pc = 0x20632cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x206330: 0x46010303
    ctx->pc = 0x206330u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[1];
    // 0x206334: 0x0
    ctx->pc = 0x206334u;
    // NOP
    // 0x206338: 0x0
    ctx->pc = 0x206338u;
    // NOP
    // 0x20633c: 0xc072648
    ctx->pc = 0x20633Cu;
    SET_GPR_U32(ctx, 31, 0x206344u);
    ctx->pc = 0x1C9920u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryObj__10CameraTaskFiP11tagNLpoint3f_0x1c9920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206344u; }
        else if (ctx->pc != 0x206344u) { ctx->pc = 0x206344u; }
    }
    if (ctx->pc != 0x206344u) { return; }
    ctx->pc = 0x206344u;
    // 0x206344: 0x10000013
    ctx->pc = 0x206344u;
    {
        const bool branch_taken_0x206344 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x206348u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 7596)));
        if (branch_taken_0x206344) {
            ctx->pc = 0x206394u;
            goto label_206394;
        }
    }
    ctx->pc = 0x20634Cu;
label_20634c:
    // 0x20634c: 0xc6220000
    ctx->pc = 0x20634cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x206350: 0xc6210004
    ctx->pc = 0x206350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206354: 0x3c0242c8
    ctx->pc = 0x206354u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17096 << 16));
    // 0x206358: 0xc6230008
    ctx->pc = 0x206358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20635c: 0x44820000
    ctx->pc = 0x20635cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x206360: 0x8f848c48
    ctx->pc = 0x206360u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x206364: 0x46021082
    ctx->pc = 0x206364u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x206368: 0x70002e28
    ctx->pc = 0x206368u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20636c: 0x27a60040
    ctx->pc = 0x20636cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 64));
    // 0x206370: 0x46010842
    ctx->pc = 0x206370u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x206374: 0x46011018
    ctx->pc = 0x206374u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x206378: 0x4603185c
    ctx->pc = 0x206378u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x20637c: 0x46010303
    ctx->pc = 0x20637cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[1];
    // 0x206380: 0x0
    ctx->pc = 0x206380u;
    // NOP
    // 0x206384: 0x0
    ctx->pc = 0x206384u;
    // NOP
    // 0x206388: 0xc072648
    ctx->pc = 0x206388u;
    SET_GPR_U32(ctx, 31, 0x206390u);
    ctx->pc = 0x1C9920u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryObj__10CameraTaskFiP11tagNLpoint3f_0x1c9920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206390u; }
        else if (ctx->pc != 0x206390u) { ctx->pc = 0x206390u; }
    }
    if (ctx->pc != 0x206390u) { return; }
    ctx->pc = 0x206390u;
label_206390:
    // 0x206390: 0x8e441dac
    ctx->pc = 0x206390u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 7596)));
label_206394:
    // 0x206394: 0x18800011
    ctx->pc = 0x206394u;
    {
        const bool branch_taken_0x206394 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x206394) {
            ctx->pc = 0x2063DCu;
            goto label_2063dc;
        }
    }
    ctx->pc = 0x20639Cu;
    // 0x20639c: 0x8e430034
    ctx->pc = 0x20639cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x2063a0: 0xc6410044
    ctx->pc = 0x2063a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2063a4: 0xc6401da8
    ctx->pc = 0x2063a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 7592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2063a8: 0x3c0101fb
    ctx->pc = 0x2063a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)507 << 16));
    // 0x2063ac: 0x31840
    ctx->pc = 0x2063acu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x2063b0: 0x610821
    ctx->pc = 0x2063b0u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x2063b4: 0x842373e4
    ctx->pc = 0x2063b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 29668)));
    // 0x2063b8: 0x46000840
    ctx->pc = 0x2063b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2063bc: 0x44830000
    ctx->pc = 0x2063bcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x2063c0: 0x0
    ctx->pc = 0x2063c0u;
    // NOP
    // 0x2063c4: 0x46800020
    ctx->pc = 0x2063c4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2063c8: 0x46000834
    ctx->pc = 0x2063c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2063cc: 0x0
    ctx->pc = 0x2063ccu;
    // NOP
    // 0x2063d0: 0x45010002
    ctx->pc = 0x2063D0u;
    {
        const bool branch_taken_0x2063d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2063D4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294967295));
        if (branch_taken_0x2063d0) {
            ctx->pc = 0x2063DCu;
            goto label_2063dc;
        }
    }
    ctx->pc = 0x2063D8u;
    // 0x2063d8: 0xae431dac
    ctx->pc = 0x2063d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7596), GPR_U32(ctx, 3));
label_2063dc:
    // 0x2063dc: 0x8e441da4
    ctx->pc = 0x2063dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 7588)));
    // 0x2063e0: 0x24030027
    ctx->pc = 0x2063e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 39));
    // 0x2063e4: 0x108300b4
    ctx->pc = 0x2063E4u;
    {
        const bool branch_taken_0x2063e4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x2063E8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 37));
        if (branch_taken_0x2063e4) {
            ctx->pc = 0x2066B8u;
            goto label_2066b8;
        }
    }
    ctx->pc = 0x2063ECu;
    // 0x2063ec: 0x108300b0
    ctx->pc = 0x2063ECu;
    {
        const bool branch_taken_0x2063ec = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x2063F0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2063ec) {
            ctx->pc = 0x2066B0u;
            goto label_2066b0;
        }
    }
    ctx->pc = 0x2063F4u;
    // 0x2063f4: 0x24030007
    ctx->pc = 0x2063f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
    // 0x2063f8: 0x5083009e
    ctx->pc = 0x2063F8u;
    {
        const bool branch_taken_0x2063f8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x2063f8) {
            ctx->pc = 0x2063FCu;
            SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
            ctx->pc = 0x206674u;
            goto label_206674;
        }
    }
    ctx->pc = 0x206400u;
    // 0x206400: 0x24030006
    ctx->pc = 0x206400u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
    // 0x206404: 0x10830092
    ctx->pc = 0x206404u;
    {
        const bool branch_taken_0x206404 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x206408u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x206404) {
            ctx->pc = 0x206650u;
            goto label_206650;
        }
    }
    ctx->pc = 0x20640Cu;
    // 0x20640c: 0x1083005f
    ctx->pc = 0x20640Cu;
    {
        const bool branch_taken_0x20640c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x206410u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x20640c) {
            ctx->pc = 0x20658Cu;
            goto label_20658c;
        }
    }
    ctx->pc = 0x206414u;
    // 0x206414: 0x1083003f
    ctx->pc = 0x206414u;
    {
        const bool branch_taken_0x206414 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x206418u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x206414) {
            ctx->pc = 0x206514u;
            goto label_206514;
        }
    }
    ctx->pc = 0x20641Cu;
    // 0x20641c: 0x10830034
    ctx->pc = 0x20641Cu;
    {
        const bool branch_taken_0x20641c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x206420u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x20641c) {
            ctx->pc = 0x2064F0u;
            goto label_2064f0;
        }
    }
    ctx->pc = 0x206424u;
    // 0x206424: 0x1083001d
    ctx->pc = 0x206424u;
    {
        const bool branch_taken_0x206424 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x206428u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x206424) {
            ctx->pc = 0x20649Cu;
            goto label_20649c;
        }
    }
    ctx->pc = 0x20642Cu;
    // 0x20642c: 0x10830012
    ctx->pc = 0x20642Cu;
    {
        const bool branch_taken_0x20642c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x20642c) {
            ctx->pc = 0x206478u;
            goto label_206478;
        }
    }
    ctx->pc = 0x206434u;
    // 0x206434: 0x10800003
    ctx->pc = 0x206434u;
    {
        const bool branch_taken_0x206434 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x206434) {
            ctx->pc = 0x206444u;
            goto label_206444;
        }
    }
    ctx->pc = 0x20643Cu;
    // 0x20643c: 0x100000a6
    ctx->pc = 0x20643Cu;
    {
        const bool branch_taken_0x20643c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x206440u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937836)));
        if (branch_taken_0x20643c) {
            ctx->pc = 0x2066D8u;
            goto label_2066d8;
        }
    }
    ctx->pc = 0x206444u;
label_206444:
    // 0x206444: 0x8e431dac
    ctx->pc = 0x206444u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 7596)));
    // 0x206448: 0x146000a2
    ctx->pc = 0x206448u;
    {
        const bool branch_taken_0x206448 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x20644Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x206448) {
            ctx->pc = 0x2066D4u;
            goto label_2066d4;
        }
    }
    ctx->pc = 0x206450u;
    // 0x206450: 0xae431da4
    ctx->pc = 0x206450u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7588), GPR_U32(ctx, 3));
    // 0x206454: 0x8e430028
    ctx->pc = 0x206454u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x206458: 0x8e441da0
    ctx->pc = 0x206458u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 7584)));
    // 0x20645c: 0x8c630008
    ctx->pc = 0x20645cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x206460: 0x1483009c
    ctx->pc = 0x206460u;
    {
        const bool branch_taken_0x206460 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x206460) {
            ctx->pc = 0x2066D4u;
            goto label_2066d4;
        }
    }
    ctx->pc = 0x206468u;
    // 0x206468: 0x87838d74
    ctx->pc = 0x206468u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937972)));
    // 0x20646c: 0x2463ffff
    ctx->pc = 0x20646cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x206470: 0x10000098
    ctx->pc = 0x206470u;
    {
        const bool branch_taken_0x206470 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x206474u;
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294937972), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x206470) {
            ctx->pc = 0x2066D4u;
            goto label_2066d4;
        }
    }
    ctx->pc = 0x206478u;
label_206478:
    // 0x206478: 0xc6401dc0
    ctx->pc = 0x206478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 7616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20647c: 0xc641003c
    ctx->pc = 0x20647cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206480: 0x46800020
    ctx->pc = 0x206480u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x206484: 0x46000834
    ctx->pc = 0x206484u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x206488: 0x0
    ctx->pc = 0x206488u;
    // NOP
    // 0x20648c: 0x45010091
    ctx->pc = 0x20648Cu;
    {
        const bool branch_taken_0x20648c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x206490u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x20648c) {
            ctx->pc = 0x2066D4u;
            goto label_2066d4;
        }
    }
    ctx->pc = 0x206494u;
    // 0x206494: 0x1000008f
    ctx->pc = 0x206494u;
    {
        const bool branch_taken_0x206494 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x206498u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 7588), GPR_U32(ctx, 3));
        if (branch_taken_0x206494) {
            ctx->pc = 0x2066D4u;
            goto label_2066d4;
        }
    }
    ctx->pc = 0x20649Cu;
label_20649c:
    // 0x20649c: 0x8f868c48
    ctx->pc = 0x20649cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x2064a0: 0x8e431dc0
    ctx->pc = 0x2064a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 7616)));
    // 0x2064a4: 0x8cc50004
    ctx->pc = 0x2064a4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2064a8: 0x52040
    ctx->pc = 0x2064a8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 1));
    // 0x2064ac: 0x852021
    ctx->pc = 0x2064acu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2064b0: 0x42080
    ctx->pc = 0x2064b0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x2064b4: 0x852021
    ctx->pc = 0x2064b4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2064b8: 0x42100
    ctx->pc = 0x2064b8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
    // 0x2064bc: 0x862821
    ctx->pc = 0x2064bcu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2064c0: 0x84a400d0
    ctx->pc = 0x2064c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 208)));
    // 0x2064c4: 0x14830083
    ctx->pc = 0x2064C4u;
    {
        const bool branch_taken_0x2064c4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x2064c4) {
            ctx->pc = 0x2066D4u;
            goto label_2066d4;
        }
    }
    ctx->pc = 0x2064CCu;
    // 0x2064cc: 0xc6401dc4
    ctx->pc = 0x2064ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 7620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2064d0: 0xc4a100c0
    ctx->pc = 0x2064d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2064d4: 0x46800020
    ctx->pc = 0x2064d4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2064d8: 0x46000834
    ctx->pc = 0x2064d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2064dc: 0x0
    ctx->pc = 0x2064dcu;
    // NOP
    // 0x2064e0: 0x4501007c
    ctx->pc = 0x2064E0u;
    {
        const bool branch_taken_0x2064e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2064E4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2064e0) {
            ctx->pc = 0x2066D4u;
            goto label_2066d4;
        }
    }
    ctx->pc = 0x2064E8u;
    // 0x2064e8: 0x1000007a
    ctx->pc = 0x2064E8u;
    {
        const bool branch_taken_0x2064e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2064ECu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 7588), GPR_U32(ctx, 3));
        if (branch_taken_0x2064e8) {
            ctx->pc = 0x2066D4u;
            goto label_2066d4;
        }
    }
    ctx->pc = 0x2064F0u;
label_2064f0:
    // 0x2064f0: 0x8e441dc0
    ctx->pc = 0x2064f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 7616)));
    // 0x2064f4: 0x3c030050
    ctx->pc = 0x2064f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x2064f8: 0x2463e400
    ctx->pc = 0x2064f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294960128));
    // 0x2064fc: 0x641821
    ctx->pc = 0x2064fcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x206500: 0x80630000
    ctx->pc = 0x206500u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x206504: 0x10600073
    ctx->pc = 0x206504u;
    {
        const bool branch_taken_0x206504 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x206508u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x206504) {
            ctx->pc = 0x2066D4u;
            goto label_2066d4;
        }
    }
    ctx->pc = 0x20650Cu;
    // 0x20650c: 0x10000071
    ctx->pc = 0x20650Cu;
    {
        const bool branch_taken_0x20650c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x206510u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 7588), GPR_U32(ctx, 3));
        if (branch_taken_0x20650c) {
            ctx->pc = 0x2066D4u;
            goto label_2066d4;
        }
    }
    ctx->pc = 0x206514u;
label_206514:
    // 0x206514: 0x4bede37d
    ctx->pc = 0x206514u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x206518: 0x4bedeb7d
    ctx->pc = 0x206518u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x20651c: 0x4bedf37d
    ctx->pc = 0x20651cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x206520: 0x4bedfb7d
    ctx->pc = 0x206520u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x206524: 0x8f848c48
    ctx->pc = 0x206524u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x206528: 0x8c830004
    ctx->pc = 0x206528u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20652c: 0x31040
    ctx->pc = 0x20652cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x206530: 0x431021
    ctx->pc = 0x206530u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x206534: 0x21080
    ctx->pc = 0x206534u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x206538: 0x431021
    ctx->pc = 0x206538u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20653c: 0x21100
    ctx->pc = 0x20653cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x206540: 0x821021
    ctx->pc = 0x206540u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x206544: 0xc06c038
    ctx->pc = 0x206544u;
    SET_GPR_U32(ctx, 31, 0x20654Cu);
    ctx->pc = 0x206548u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20654Cu; }
        else if (ctx->pc != 0x20654Cu) { ctx->pc = 0x20654Cu; }
    }
    if (ctx->pc != 0x20654Cu) { return; }
    ctx->pc = 0x20654Cu;
    // 0x20654c: 0x26440bbc
    ctx->pc = 0x20654cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 3004));
    // 0x206550: 0xc06bf00
    ctx->pc = 0x206550u;
    SET_GPR_U32(ctx, 31, 0x206558u);
    ctx->pc = 0x206554u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 112));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206558u; }
        else if (ctx->pc != 0x206558u) { ctx->pc = 0x206558u; }
    }
    if (ctx->pc != 0x206558u) { return; }
    ctx->pc = 0x206558u;
    // 0x206558: 0x4bff6b7e
    ctx->pc = 0x206558u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x20655c: 0x4bfe6b7e
    ctx->pc = 0x20655cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x206560: 0x4bfd6b7e
    ctx->pc = 0x206560u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x206564: 0x4bfc6b7e
    ctx->pc = 0x206564u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x206568: 0xc7ad0074
    ctx->pc = 0x206568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20656c: 0xc7ae0078
    ctx->pc = 0x20656cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x206570: 0xc64f1ce0
    ctx->pc = 0x206570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 7392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x206574: 0xc074f64
    ctx->pc = 0x206574u;
    SET_GPR_U32(ctx, 31, 0x20657Cu);
    ctx->pc = 0x206578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1D3D90u;
    {
        const uint32_t __entryPc = ctx->pc;
        CheckOnSc__Fffff_0x1d3d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20657Cu; }
        else if (ctx->pc != 0x20657Cu) { ctx->pc = 0x20657Cu; }
    }
    if (ctx->pc != 0x20657Cu) { return; }
    ctx->pc = 0x20657Cu;
    // 0x20657c: 0x14400055
    ctx->pc = 0x20657Cu;
    {
        const bool branch_taken_0x20657c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x206580u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x20657c) {
            ctx->pc = 0x2066D4u;
            goto label_2066d4;
        }
    }
    ctx->pc = 0x206584u;
    // 0x206584: 0x10000053
    ctx->pc = 0x206584u;
    {
        const bool branch_taken_0x206584 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x206588u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 7588), GPR_U32(ctx, 3));
        if (branch_taken_0x206584) {
            ctx->pc = 0x2066D4u;
            goto label_2066d4;
        }
    }
    ctx->pc = 0x20658Cu;
label_20658c:
    // 0x20658c: 0x8e420030
    ctx->pc = 0x20658cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x206590: 0xc4400038
    ctx->pc = 0x206590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206594: 0xc44c0030
    ctx->pc = 0x206594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x206598: 0xc069e68
    ctx->pc = 0x206598u;
    SET_GPR_U32(ctx, 31, 0x2065A0u);
    ctx->pc = 0x20659Cu;
    ctx->f[13] = FPU_NEG_S(ctx->f[0]);
    ctx->pc = 0x1A79A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcTan2_0x1a79a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2065A0u; }
        else if (ctx->pc != 0x2065A0u) { ctx->pc = 0x2065A0u; }
    }
    if (ctx->pc != 0x2065A0u) { return; }
    ctx->pc = 0x2065A0u;
    // 0x2065a0: 0x21c3c
    ctx->pc = 0x2065a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2065a4: 0x31c3f
    ctx->pc = 0x2065a4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2065a8: 0x44830000
    ctx->pc = 0x2065a8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x2065ac: 0x8f878c48
    ctx->pc = 0x2065acu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x2065b0: 0x46800060
    ctx->pc = 0x2065b0u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2065b4: 0x3c083bb4
    ctx->pc = 0x2065b4u;
    SET_GPR_U32(ctx, 8, ((uint32_t)15284 << 16));
    // 0x2065b8: 0x3c030050
    ctx->pc = 0x2065b8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x2065bc: 0x2466fb00
    ctx->pc = 0x2065bcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 4294966016));
    // 0x2065c0: 0x3c054420
    ctx->pc = 0x2065c0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)17440 << 16));
    // 0x2065c4: 0x8ce70004
    ctx->pc = 0x2065c4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2065c8: 0x44880000
    ctx->pc = 0x2065c8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 8);
    // 0x2065cc: 0x44851000
    ctx->pc = 0x2065ccu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 5);
    // 0x2065d0: 0x46010002
    ctx->pc = 0x2065d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2065d4: 0x3c0443e0
    ctx->pc = 0x2065d4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)17376 << 16));
    // 0x2065d8: 0x3c034000
    ctx->pc = 0x2065d8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16384 << 16));
    // 0x2065dc: 0x73880
    ctx->pc = 0x2065dcu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 2));
    // 0x2065e0: 0xc73021
    ctx->pc = 0x2065e0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2065e4: 0xc4c10000
    ctx->pc = 0x2065e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2065e8: 0x46000024
    ctx->pc = 0x2065e8u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2065ec: 0x44060000
    ctx->pc = 0x2065ecu;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[0]);
    // 0x2065f0: 0x46011042
    ctx->pc = 0x2065f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2065f4: 0x44840000
    ctx->pc = 0x2065f4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 4);
    // 0x2065f8: 0x0
    ctx->pc = 0x2065f8u;
    // NOP
    // 0x2065fc: 0x46000843
    ctx->pc = 0x2065fcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x206600: 0x0
    ctx->pc = 0x206600u;
    // NOP
    // 0x206604: 0x44830000
    ctx->pc = 0x206604u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x206608: 0x0
    ctx->pc = 0x206608u;
    // NOP
    // 0x20660c: 0x46000843
    ctx->pc = 0x20660cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x206610: 0x0
    ctx->pc = 0x206610u;
    // NOP
    // 0x206614: 0x0
    ctx->pc = 0x206614u;
    // NOP
    // 0x206618: 0x18c00003
    ctx->pc = 0x206618u;
    {
        const bool branch_taken_0x206618 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x206618) {
            ctx->pc = 0x206628u;
            goto label_206628;
        }
    }
    ctx->pc = 0x206620u;
    // 0x206620: 0x10000002
    ctx->pc = 0x206620u;
    {
        const bool branch_taken_0x206620 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x206620) {
            ctx->pc = 0x20662Cu;
            goto label_20662c;
        }
    }
    ctx->pc = 0x206628u;
label_206628:
    // 0x206628: 0x63023
    ctx->pc = 0x206628u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
label_20662c:
    // 0x20662c: 0x44860000
    ctx->pc = 0x20662cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 6);
    // 0x206630: 0x0
    ctx->pc = 0x206630u;
    // NOP
    // 0x206634: 0x46800020
    ctx->pc = 0x206634u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x206638: 0x46010036
    ctx->pc = 0x206638u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20663c: 0x0
    ctx->pc = 0x20663cu;
    // NOP
    // 0x206640: 0x45010024
    ctx->pc = 0x206640u;
    {
        const bool branch_taken_0x206640 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x206644u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x206640) {
            ctx->pc = 0x2066D4u;
            goto label_2066d4;
        }
    }
    ctx->pc = 0x206648u;
    // 0x206648: 0x10000022
    ctx->pc = 0x206648u;
    {
        const bool branch_taken_0x206648 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20664Cu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 7588), GPR_U32(ctx, 3));
        if (branch_taken_0x206648) {
            ctx->pc = 0x2066D4u;
            goto label_2066d4;
        }
    }
    ctx->pc = 0x206650u;
label_206650:
    // 0x206650: 0xc6401dc0
    ctx->pc = 0x206650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 7616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206654: 0xc6411df8
    ctx->pc = 0x206654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 7672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206658: 0x46800020
    ctx->pc = 0x206658u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x20665c: 0x46000836
    ctx->pc = 0x20665cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x206660: 0x0
    ctx->pc = 0x206660u;
    // NOP
    // 0x206664: 0x4500001b
    ctx->pc = 0x206664u;
    {
        const bool branch_taken_0x206664 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x206668u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x206664) {
            ctx->pc = 0x2066D4u;
            goto label_2066d4;
        }
    }
    ctx->pc = 0x20666Cu;
    // 0x20666c: 0x10000019
    ctx->pc = 0x20666Cu;
    {
        const bool branch_taken_0x20666c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x206670u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 7588), GPR_U32(ctx, 3));
        if (branch_taken_0x20666c) {
            ctx->pc = 0x2066D4u;
            goto label_2066d4;
        }
    }
    ctx->pc = 0x206674u;
label_206674:
    // 0x206674: 0xc082a08
    ctx->pc = 0x206674u;
    SET_GPR_U32(ctx, 31, 0x20667Cu);
    ctx->pc = 0x20A820u;
    {
        const uint32_t __entryPc = ctx->pc;
        backWaitPos__10PeopleTaskFv_0x20a820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20667Cu; }
        else if (ctx->pc != 0x20667Cu) { ctx->pc = 0x20667Cu; }
    }
    if (ctx->pc != 0x20667Cu) { return; }
    ctx->pc = 0x20667Cu;
    // 0x20667c: 0x1440000a
    ctx->pc = 0x20667Cu;
    {
        const bool branch_taken_0x20667c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x206680u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x20667c) {
            ctx->pc = 0x2066A8u;
            goto label_2066a8;
        }
    }
    ctx->pc = 0x206684u;
    // 0x206684: 0x8e441dc0
    ctx->pc = 0x206684u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 7616)));
    // 0x206688: 0x4800012
    ctx->pc = 0x206688u;
    {
        const bool branch_taken_0x206688 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x20668Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
        if (branch_taken_0x206688) {
            ctx->pc = 0x2066D4u;
            goto label_2066d4;
        }
    }
    ctx->pc = 0x206690u;
    // 0x206690: 0x2463e400
    ctx->pc = 0x206690u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294960128));
    // 0x206694: 0x641821
    ctx->pc = 0x206694u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x206698: 0x80630000
    ctx->pc = 0x206698u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20669c: 0x1060000d
    ctx->pc = 0x20669Cu;
    {
        const bool branch_taken_0x20669c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x20669c) {
            ctx->pc = 0x2066D4u;
            goto label_2066d4;
        }
    }
    ctx->pc = 0x2066A4u;
    // 0x2066a4: 0x2403ffff
    ctx->pc = 0x2066a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2066a8:
    // 0x2066a8: 0x1000000a
    ctx->pc = 0x2066A8u;
    {
        const bool branch_taken_0x2066a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2066ACu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 7588), GPR_U32(ctx, 3));
        if (branch_taken_0x2066a8) {
            ctx->pc = 0x2066D4u;
            goto label_2066d4;
        }
    }
    ctx->pc = 0x2066B0u;
label_2066b0:
    // 0x2066b0: 0x10000008
    ctx->pc = 0x2066B0u;
    {
        const bool branch_taken_0x2066b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2066B4u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 7588), GPR_U32(ctx, 3));
        if (branch_taken_0x2066b0) {
            ctx->pc = 0x2066D4u;
            goto label_2066d4;
        }
    }
    ctx->pc = 0x2066B8u;
label_2066b8:
    // 0x2066b8: 0x8e431e64
    ctx->pc = 0x2066b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 7780)));
    // 0x2066bc: 0x24630001
    ctx->pc = 0x2066bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2066c0: 0x28610002
    ctx->pc = 0x2066c0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 2));
    // 0x2066c4: 0x14200003
    ctx->pc = 0x2066C4u;
    {
        const bool branch_taken_0x2066c4 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x2066C8u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 7780), GPR_U32(ctx, 3));
        if (branch_taken_0x2066c4) {
            ctx->pc = 0x2066D4u;
            goto label_2066d4;
        }
    }
    ctx->pc = 0x2066CCu;
    // 0x2066cc: 0x2403ffff
    ctx->pc = 0x2066ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2066d0: 0xae431da4
    ctx->pc = 0x2066d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7588), GPR_U32(ctx, 3));
label_2066d4:
    // 0x2066d4: 0x8f838cec
    ctx->pc = 0x2066d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937836)));
label_2066d8:
    // 0x2066d8: 0x10600002
    ctx->pc = 0x2066D8u;
    {
        const bool branch_taken_0x2066d8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2066DCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2066d8) {
            ctx->pc = 0x2066E4u;
            goto label_2066e4;
        }
    }
    ctx->pc = 0x2066E0u;
    // 0x2066e0: 0xae431da4
    ctx->pc = 0x2066e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7588), GPR_U32(ctx, 3));
label_2066e4:
    // 0x2066e4: 0x8e441da4
    ctx->pc = 0x2066e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 7588)));
    // 0x2066e8: 0x2403ffff
    ctx->pc = 0x2066e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2066ec: 0x14830003
    ctx->pc = 0x2066ECu;
    {
        const bool branch_taken_0x2066ec = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x2066F0u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2066ec) {
            ctx->pc = 0x2066FCu;
            goto label_2066fc;
        }
    }
    ctx->pc = 0x2066F4u;
    // 0x2066f4: 0xc082450
    ctx->pc = 0x2066F4u;
    SET_GPR_U32(ctx, 31, 0x2066FCu);
    ctx->pc = 0x209140u;
    {
        const uint32_t __entryPc = ctx->pc;
        getParam__10PeopleTaskFv_0x209140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2066FCu; }
        else if (ctx->pc != 0x2066FCu) { ctx->pc = 0x2066FCu; }
    }
    if (ctx->pc != 0x2066FCu) { return; }
    ctx->pc = 0x2066FCu;
label_2066fc:
    // 0x2066fc: 0x8e431dac
    ctx->pc = 0x2066fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 7596)));
    // 0x206700: 0x1060000c
    ctx->pc = 0x206700u;
    {
        const bool branch_taken_0x206700 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x206700) {
            ctx->pc = 0x206734u;
            goto label_206734;
        }
    }
    ctx->pc = 0x206708u;
    // 0x206708: 0x8e430034
    ctx->pc = 0x206708u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x20670c: 0x14700009
    ctx->pc = 0x20670Cu;
    {
        const bool branch_taken_0x20670c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 16));
        if (branch_taken_0x20670c) {
            ctx->pc = 0x206734u;
            goto label_206734;
        }
    }
    ctx->pc = 0x206714u;
    // 0x206714: 0xc6411da8
    ctx->pc = 0x206714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 7592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206718: 0xc640003c
    ctx->pc = 0x206718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20671c: 0x46010000
    ctx->pc = 0x20671cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x206720: 0xe640003c
    ctx->pc = 0x206720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
    // 0x206724: 0xc6411da8
    ctx->pc = 0x206724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 7592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206728: 0xc6400040
    ctx->pc = 0x206728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20672c: 0x46010000
    ctx->pc = 0x20672cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x206730: 0xe6400040
    ctx->pc = 0x206730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
label_206734:
    // 0x206734: 0x7bbf0030
    ctx->pc = 0x206734u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x206738: 0x7bb20020
    ctx->pc = 0x206738u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20673c: 0x7bb10010
    ctx->pc = 0x20673cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206740: 0x7bb00000
    ctx->pc = 0x206740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206744: 0x3e00008
    ctx->pc = 0x206744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206748u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20634Cu: goto label_20634c;
            case 0x206390u: goto label_206390;
            case 0x206394u: goto label_206394;
            case 0x2063DCu: goto label_2063dc;
            case 0x206444u: goto label_206444;
            case 0x206478u: goto label_206478;
            case 0x20649Cu: goto label_20649c;
            case 0x2064F0u: goto label_2064f0;
            case 0x206514u: goto label_206514;
            case 0x20658Cu: goto label_20658c;
            case 0x206628u: goto label_206628;
            case 0x20662Cu: goto label_20662c;
            case 0x206650u: goto label_206650;
            case 0x206674u: goto label_206674;
            case 0x2066A8u: goto label_2066a8;
            case 0x2066B0u: goto label_2066b0;
            case 0x2066B8u: goto label_2066b8;
            case 0x2066D4u: goto label_2066d4;
            case 0x2066D8u: goto label_2066d8;
            case 0x2066E4u: goto label_2066e4;
            case 0x2066FCu: goto label_2066fc;
            case 0x206734u: goto label_206734;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20674Cu;
}

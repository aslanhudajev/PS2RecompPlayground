#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlObjPutSendOskMat__FiP11tagNLmatrixP11tagNLmatrixiP10MotObjTask
// Address: 0x200120 - 0x200318
void nlObjPutSendOskMat__FiP11tagNLmatrixP11tagNLmatrixiP10MotObjTask_0x200120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlObjPutSendOskMat__FiP11tagNLmatrixP11tagNLmatrixiP10MotObjTask");


    ctx->pc = 0x200120u;

    // 0x200120: 0x27bdff50
    ctx->pc = 0x200120u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x200124: 0x7fbf0090
    ctx->pc = 0x200124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x200128: 0x7fbe0080
    ctx->pc = 0x200128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x20012c: 0x7fb70070
    ctx->pc = 0x20012cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x200130: 0x7fb60060
    ctx->pc = 0x200130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x200134: 0x7fb50050
    ctx->pc = 0x200134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x200138: 0x7fb40040
    ctx->pc = 0x200138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x20013c: 0x7fb30030
    ctx->pc = 0x20013cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x200140: 0x7fb20020
    ctx->pc = 0x200140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x200144: 0x7fb10010
    ctx->pc = 0x200144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x200148: 0x3c020051
    ctx->pc = 0x200148u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x20014c: 0x41880
    ctx->pc = 0x20014cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x200150: 0x244225f0
    ctx->pc = 0x200150u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9712));
    // 0x200154: 0x7fb00000
    ctx->pc = 0x200154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x200158: 0x431021
    ctx->pc = 0x200158u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20015c: 0x8c430000
    ctx->pc = 0x20015cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x200160: 0x71008e28
    ctx->pc = 0x200160u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x200164: 0x70a09628
    ctx->pc = 0x200164u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x200168: 0x70c0ae28
    ctx->pc = 0x200168u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x20016c: 0x70e0b628
    ctx->pc = 0x20016cu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x200170: 0x26370070
    ctx->pc = 0x200170u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 17), 112));
    // 0x200174: 0x2402ffc0
    ctx->pc = 0x200174u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x200178: 0x2463003f
    ctx->pc = 0x200178u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 63));
    // 0x20017c: 0x62a024
    ctx->pc = 0x20017cu;
    SET_GPR_U32(ctx, 20, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x200180: 0x8e900000
    ctx->pc = 0x200180u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x200184: 0x101080
    ctx->pc = 0x200184u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x200188: 0xafa200a0
    ctx->pc = 0x200188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x20018c: 0xc069528
    ctx->pc = 0x20018Cu;
    SET_GPR_U32(ctx, 31, 0x200194u);
    ctx->pc = 0x200190u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4));
    ctx->pc = 0x1A54A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoSprAddr_0x1a54a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200194u; }
        else if (ctx->pc != 0x200194u) { ctx->pc = 0x200194u; }
    }
    if (ctx->pc != 0x200194u) { return; }
    ctx->pc = 0x200194u;
    // 0x200194: 0x7040f628
    ctx->pc = 0x200194u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x200198: 0x27d30010
    ctx->pc = 0x200198u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 30), 16));
label_20019c:
    // 0x20019c: 0x3c011001
    ctx->pc = 0x20019cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x2001a0: 0x8c22d000
    ctx->pc = 0x2001a0u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955008))); // MMIO: 0x1000d000
    // 0x2001a4: 0x30420100
    ctx->pc = 0x2001a4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x2001a8: 0x0
    ctx->pc = 0x2001a8u;
    // NOP
    // 0x2001ac: 0x0
    ctx->pc = 0x2001acu;
    // NOP
    // 0x2001b0: 0x1440fffa
    ctx->pc = 0x2001B0u;
    {
        const bool branch_taken_0x2001b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2001b0) {
            ctx->pc = 0x20019Cu;
            goto label_20019c;
        }
    }
    ctx->pc = 0x2001B8u;
    // 0x2001b8: 0x4bede37d
    ctx->pc = 0x2001b8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x2001bc: 0x4bedeb7d
    ctx->pc = 0x2001bcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x2001c0: 0x4bedf37d
    ctx->pc = 0x2001c0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x2001c4: 0x4bedfb7d
    ctx->pc = 0x2001c4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x2001c8: 0x3c023f80
    ctx->pc = 0x2001c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x2001cc: 0xc6211ca0
    ctx->pc = 0x2001ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2001d0: 0x44820000
    ctx->pc = 0x2001d0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2001d4: 0x0
    ctx->pc = 0x2001d4u;
    // NOP
    // 0x2001d8: 0x46010032
    ctx->pc = 0x2001d8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2001dc: 0x0
    ctx->pc = 0x2001dcu;
    // NOP
    // 0x2001e0: 0x45000005
    ctx->pc = 0x2001E0u;
    {
        const bool branch_taken_0x2001e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2001E4u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2001e0) {
            ctx->pc = 0x2001F8u;
            goto label_2001f8;
        }
    }
    ctx->pc = 0x2001E8u;
    // 0x2001e8: 0xc0693c8
    ctx->pc = 0x2001E8u;
    SET_GPR_U32(ctx, 31, 0x2001F0u);
    ctx->pc = 0x1A4F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlQuickInvertMatrix_0x1a4f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2001F0u; }
        else if (ctx->pc != 0x2001F0u) { ctx->pc = 0x2001F0u; }
    }
    if (ctx->pc != 0x2001F0u) { return; }
    ctx->pc = 0x2001F0u;
    // 0x2001f0: 0x10000004
    ctx->pc = 0x2001F0u;
    {
        const bool branch_taken_0x2001f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2001F4u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 16)));
        if (branch_taken_0x2001f0) {
            ctx->pc = 0x200204u;
            goto label_200204;
        }
    }
    ctx->pc = 0x2001F8u;
label_2001f8:
    // 0x2001f8: 0xc0691c4
    ctx->pc = 0x2001F8u;
    SET_GPR_U32(ctx, 31, 0x200200u);
    ctx->pc = 0x1A4710u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlInvertMatrix_0x1a4710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200200u; }
        else if (ctx->pc != 0x200200u) { ctx->pc = 0x200200u; }
    }
    if (ctx->pc != 0x200200u) { return; }
    ctx->pc = 0x200200u;
    // 0x200200: 0x10082a
    ctx->pc = 0x200200u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 16)));
label_200204:
    // 0x200204: 0x10200026
    ctx->pc = 0x200204u;
    {
        const bool branch_taken_0x200204 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x200208u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x200204) {
            ctx->pc = 0x2002A0u;
            goto label_2002a0;
        }
    }
    ctx->pc = 0x20020Cu;
    // 0x20020c: 0x161180
    ctx->pc = 0x20020cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 22), 6));
    // 0x200210: 0x242b021
    ctx->pc = 0x200210u;
    SET_GPR_U32(ctx, 22, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_200214:
    // 0x200214: 0x8e920000
    ctx->pc = 0x200214u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x200218: 0x26940004
    ctx->pc = 0x200218u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4));
    // 0x20021c: 0x4bede37d
    ctx->pc = 0x20021cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x200220: 0x4bedeb7d
    ctx->pc = 0x200220u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x200224: 0x4bedf37d
    ctx->pc = 0x200224u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x200228: 0x1240000e
    ctx->pc = 0x200228u;
    {
        const bool branch_taken_0x200228 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x20022Cu;
        { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
        if (branch_taken_0x200228) {
            ctx->pc = 0x200264u;
            goto label_200264;
        }
    }
    ctx->pc = 0x200230u;
    // 0x200230: 0x121100
    ctx->pc = 0x200230u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 4));
    // 0x200234: 0x521023
    ctx->pc = 0x200234u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x200238: 0x21100
    ctx->pc = 0x200238u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x20023c: 0x2e21021
    ctx->pc = 0x20023cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x200240: 0xc06c04e
    ctx->pc = 0x200240u;
    SET_GPR_U32(ctx, 31, 0x200248u);
    ctx->pc = 0x200244u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 48));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200248u; }
        else if (ctx->pc != 0x200248u) { ctx->pc = 0x200248u; }
    }
    if (ctx->pc != 0x200248u) { return; }
    ctx->pc = 0x200248u;
    // 0x200248: 0x121180
    ctx->pc = 0x200248u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 6));
    // 0x20024c: 0xc06c04e
    ctx->pc = 0x20024Cu;
    SET_GPR_U32(ctx, 31, 0x200254u);
    ctx->pc = 0x200250u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200254u; }
        else if (ctx->pc != 0x200254u) { ctx->pc = 0x200254u; }
    }
    if (ctx->pc != 0x200254u) { return; }
    ctx->pc = 0x200254u;
    // 0x200254: 0xc06c04e
    ctx->pc = 0x200254u;
    SET_GPR_U32(ctx, 31, 0x20025Cu);
    ctx->pc = 0x200258u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20025Cu; }
        else if (ctx->pc != 0x20025Cu) { ctx->pc = 0x20025Cu; }
    }
    if (ctx->pc != 0x20025Cu) { return; }
    ctx->pc = 0x20025Cu;
    // 0x20025c: 0x10000005
    ctx->pc = 0x20025Cu;
    {
        const bool branch_taken_0x20025c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x200260u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20025c) {
            ctx->pc = 0x200274u;
            goto label_200274;
        }
    }
    ctx->pc = 0x200264u;
label_200264:
    // 0x200264: 0xc06c20d
    ctx->pc = 0x200264u;
    SET_GPR_U32(ctx, 31, 0x20026Cu);
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20026Cu; }
        else if (ctx->pc != 0x20026Cu) { ctx->pc = 0x20026Cu; }
    }
    if (ctx->pc != 0x20026Cu) { return; }
    ctx->pc = 0x20026Cu;
    // 0x20026c: 0x0
    ctx->pc = 0x20026cu;
    // NOP
    // 0x200270: 0x72602628
    ctx->pc = 0x200270u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_200274:
    // 0x200274: 0xc06bf55
    ctx->pc = 0x200274u;
    SET_GPR_U32(ctx, 31, 0x20027Cu);
    ctx->pc = 0x200278u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 4), 64));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20027Cu; }
        else if (ctx->pc != 0x20027Cu) { ctx->pc = 0x20027Cu; }
    }
    if (ctx->pc != 0x20027Cu) { return; }
    ctx->pc = 0x20027Cu;
    // 0x20027c: 0x4bff6b7e
    ctx->pc = 0x20027cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x200280: 0x4bfe6b7e
    ctx->pc = 0x200280u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x200284: 0x4bfd6b7e
    ctx->pc = 0x200284u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x200288: 0x4bfc6b7e
    ctx->pc = 0x200288u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x20028c: 0x26310001
    ctx->pc = 0x20028cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x200290: 0x230102a
    ctx->pc = 0x200290u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 16)));
    // 0x200294: 0x1440ffdf
    ctx->pc = 0x200294u;
    {
        const bool branch_taken_0x200294 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x200294) {
            ctx->pc = 0x200214u;
            goto label_200214;
        }
    }
    ctx->pc = 0x20029Cu;
    // 0x20029c: 0x0
    ctx->pc = 0x20029cu;
    // NOP
label_2002a0:
    // 0x2002a0: 0x4bff6b7e
    ctx->pc = 0x2002a0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2002a4: 0x4bfe6b7e
    ctx->pc = 0x2002a4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2002a8: 0x4bfd6b7e
    ctx->pc = 0x2002a8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2002ac: 0x4bfc6b7e
    ctx->pc = 0x2002acu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2002b0: 0x8fa200a0
    ctx->pc = 0x2002b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2002b4: 0x3c031000
    ctx->pc = 0x2002b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2002b8: 0x431025
    ctx->pc = 0x2002b8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2002bc: 0xafc20000
    ctx->pc = 0x2002bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x2002c0: 0xafc00004
    ctx->pc = 0x2002c0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
    // 0x2002c4: 0xafc30008
    ctx->pc = 0x2002c4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 3));
    // 0x2002c8: 0x8fa200a0
    ctx->pc = 0x2002c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2002cc: 0x21c00
    ctx->pc = 0x2002ccu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 16));
    // 0x2002d0: 0x24440001
    ctx->pc = 0x2002d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2002d4: 0x3c026c00
    ctx->pc = 0x2002d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)27648 << 16));
    // 0x2002d8: 0x3442038c
    ctx->pc = 0x2002d8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 908));
    // 0x2002dc: 0x621025
    ctx->pc = 0x2002dcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2002e0: 0xc06952c
    ctx->pc = 0x2002E0u;
    SET_GPR_U32(ctx, 31, 0x2002E8u);
    ctx->pc = 0x2002E4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x1A54B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaSendToMFifo_0x1a54b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2002E8u; }
        else if (ctx->pc != 0x2002E8u) { ctx->pc = 0x2002E8u; }
    }
    if (ctx->pc != 0x2002E8u) { return; }
    ctx->pc = 0x2002E8u;
    // 0x2002e8: 0x7bbf0090
    ctx->pc = 0x2002e8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2002ec: 0x7bbe0080
    ctx->pc = 0x2002ecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2002f0: 0x7bb70070
    ctx->pc = 0x2002f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2002f4: 0x7bb60060
    ctx->pc = 0x2002f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2002f8: 0x7bb50050
    ctx->pc = 0x2002f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2002fc: 0x7bb40040
    ctx->pc = 0x2002fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x200300: 0x7bb30030
    ctx->pc = 0x200300u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x200304: 0x7bb20020
    ctx->pc = 0x200304u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x200308: 0x7bb10010
    ctx->pc = 0x200308u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20030c: 0x7bb00000
    ctx->pc = 0x20030cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200310: 0x3e00008
    ctx->pc = 0x200310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200314u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20019Cu: goto label_20019c;
            case 0x2001F8u: goto label_2001f8;
            case 0x200204u: goto label_200204;
            case 0x200214u: goto label_200214;
            case 0x200264u: goto label_200264;
            case 0x200274u: goto label_200274;
            case 0x2002A0u: goto label_2002a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x200318u;
}

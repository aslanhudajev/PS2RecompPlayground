#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PreDispVampDead__10PeopleTaskFv
// Address: 0x208570 - 0x2086d8
void PreDispVampDead__10PeopleTaskFv_0x208570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PreDispVampDead__10PeopleTaskFv");


    ctx->pc = 0x208570u;

    // 0x208570: 0x27bdffa0
    ctx->pc = 0x208570u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x208574: 0x7fbf0010
    ctx->pc = 0x208574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x208578: 0x7fb00000
    ctx->pc = 0x208578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20857c: 0x8c831db8
    ctx->pc = 0x20857cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 7608)));
    // 0x208580: 0x10600003
    ctx->pc = 0x208580u;
    {
        const bool branch_taken_0x208580 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x208584u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x208580) {
            ctx->pc = 0x208590u;
            goto label_208590;
        }
    }
    ctx->pc = 0x208588u;
    // 0x208588: 0x10000050
    ctx->pc = 0x208588u;
    {
        const bool branch_taken_0x208588 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20858Cu;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x208588) {
            ctx->pc = 0x2086CCu;
            goto label_2086cc;
        }
    }
    ctx->pc = 0x208590u;
label_208590:
    // 0x208590: 0xc6011d78
    ctx->pc = 0x208590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x208594: 0x3c033f80
    ctx->pc = 0x208594u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x208598: 0x44830000
    ctx->pc = 0x208598u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x20859c: 0x44801000
    ctx->pc = 0x20859cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
    // 0x2085a0: 0x46000801
    ctx->pc = 0x2085a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2085a4: 0x46011032
    ctx->pc = 0x2085a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2085a8: 0x0
    ctx->pc = 0x2085a8u;
    // NOP
    // 0x2085ac: 0x45000046
    ctx->pc = 0x2085ACu;
    {
        const bool branch_taken_0x2085ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2085B0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7544), bits); }
        if (branch_taken_0x2085ac) {
            ctx->pc = 0x2086C8u;
            goto label_2086c8;
        }
    }
    ctx->pc = 0x2085B4u;
    // 0x2085b4: 0x8e03000c
    ctx->pc = 0x2085b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2085b8: 0x3c020002
    ctx->pc = 0x2085b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x2085bc: 0x2404ffff
    ctx->pc = 0x2085bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2085c0: 0x621025
    ctx->pc = 0x2085c0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2085c4: 0xae02000c
    ctx->pc = 0x2085c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2085c8: 0x87828d6c
    ctx->pc = 0x2085c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937964)));
    // 0x2085cc: 0x2442ffff
    ctx->pc = 0x2085ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2085d0: 0xa7828d6c
    ctx->pc = 0x2085d0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937964), (uint16_t)GPR_U32(ctx, 2));
    // 0x2085d4: 0x82021e00
    ctx->pc = 0x2085d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7680)));
    // 0x2085d8: 0x10440005
    ctx->pc = 0x2085D8u;
    {
        const bool branch_taken_0x2085d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x2085DCu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
        if (branch_taken_0x2085d8) {
            ctx->pc = 0x2085F0u;
            goto label_2085f0;
        }
    }
    ctx->pc = 0x2085E0u;
    // 0x2085e0: 0x27828b60
    ctx->pc = 0x2085e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 28), 4294937440));
    // 0x2085e4: 0x431021
    ctx->pc = 0x2085e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2085e8: 0xac400000
    ctx->pc = 0x2085e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2085ec: 0xa2041e00
    ctx->pc = 0x2085ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7680), (uint8_t)GPR_U32(ctx, 4));
label_2085f0:
    // 0x2085f0: 0x4bede37d
    ctx->pc = 0x2085f0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x2085f4: 0x4bedeb7d
    ctx->pc = 0x2085f4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x2085f8: 0x4bedf37d
    ctx->pc = 0x2085f8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x2085fc: 0x4bedfb7d
    ctx->pc = 0x2085fcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x208600: 0x8f848c48
    ctx->pc = 0x208600u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x208604: 0x8c830004
    ctx->pc = 0x208604u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x208608: 0x31040
    ctx->pc = 0x208608u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x20860c: 0x431021
    ctx->pc = 0x20860cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x208610: 0x21080
    ctx->pc = 0x208610u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x208614: 0x431021
    ctx->pc = 0x208614u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x208618: 0x21100
    ctx->pc = 0x208618u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x20861c: 0x821021
    ctx->pc = 0x20861cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x208620: 0xc06c038
    ctx->pc = 0x208620u;
    SET_GPR_U32(ctx, 31, 0x208628u);
    ctx->pc = 0x208624u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208628u; }
        else if (ctx->pc != 0x208628u) { ctx->pc = 0x208628u; }
    }
    if (ctx->pc != 0x208628u) { return; }
    ctx->pc = 0x208628u;
    // 0x208628: 0xc600025c
    ctx->pc = 0x208628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20862c: 0x27a40040
    ctx->pc = 0x20862cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x208630: 0x27a50050
    ctx->pc = 0x208630u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
    // 0x208634: 0xe7a00040
    ctx->pc = 0x208634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x208638: 0xc6000260
    ctx->pc = 0x208638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20863c: 0xe7a00044
    ctx->pc = 0x20863cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x208640: 0xc6000264
    ctx->pc = 0x208640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x208644: 0xc06bf00
    ctx->pc = 0x208644u;
    SET_GPR_U32(ctx, 31, 0x20864Cu);
    ctx->pc = 0x208648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20864Cu; }
        else if (ctx->pc != 0x20864Cu) { ctx->pc = 0x20864Cu; }
    }
    if (ctx->pc != 0x20864Cu) { return; }
    ctx->pc = 0x20864Cu;
    // 0x20864c: 0xc7a20050
    ctx->pc = 0x20864cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x208650: 0xc7a10054
    ctx->pc = 0x208650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x208654: 0xc7a00058
    ctx->pc = 0x208654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x208658: 0x8f868c48
    ctx->pc = 0x208658u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x20865c: 0x3c023f80
    ctx->pc = 0x20865cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x208660: 0x44826000
    ctx->pc = 0x208660u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x208664: 0xe7a20020
    ctx->pc = 0x208664u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x208668: 0xe7a10024
    ctx->pc = 0x208668u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x20866c: 0xe7a00028
    ctx->pc = 0x20866cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x208670: 0x8cc30004
    ctx->pc = 0x208670u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x208674: 0x24040047
    ctx->pc = 0x208674u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 71));
    // 0x208678: 0x27a50020
    ctx->pc = 0x208678u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x20867c: 0x31040
    ctx->pc = 0x20867cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x208680: 0x431021
    ctx->pc = 0x208680u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x208684: 0x21080
    ctx->pc = 0x208684u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x208688: 0x431021
    ctx->pc = 0x208688u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20868c: 0x21100
    ctx->pc = 0x20868cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x208690: 0xc21821
    ctx->pc = 0x208690u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x208694: 0x8c62009c
    ctx->pc = 0x208694u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x208698: 0xafa2002c
    ctx->pc = 0x208698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x20869c: 0x8c6200a0
    ctx->pc = 0x20869cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x2086a0: 0xafa20030
    ctx->pc = 0x2086a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x2086a4: 0x8c6200a4
    ctx->pc = 0x2086a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x2086a8: 0xc0785e0
    ctx->pc = 0x2086A8u;
    SET_GPR_U32(ctx, 31, 0x2086B0u);
    ctx->pc = 0x2086ACu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    ctx->pc = 0x1E1780u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_FcvEffectTask__Fi4ANPOf_0x1e1780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2086B0u; }
        else if (ctx->pc != 0x2086B0u) { ctx->pc = 0x2086B0u; }
    }
    if (ctx->pc != 0x2086B0u) { return; }
    ctx->pc = 0x2086B0u;
    // 0x2086b0: 0x4bff6b7e
    ctx->pc = 0x2086b0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2086b4: 0x4bfe6b7e
    ctx->pc = 0x2086b4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2086b8: 0x4bfd6b7e
    ctx->pc = 0x2086b8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2086bc: 0x4bfc6b7e
    ctx->pc = 0x2086bcu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2086c0: 0xc068fe0
    ctx->pc = 0x2086C0u;
    SET_GPR_U32(ctx, 31, 0x2086C8u);
    ctx->pc = 0x2086C4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 7536)));
    ctx->pc = 0x1A3F80u;
    {
        const uint32_t __entryPc = ctx->pc;
        deleteExec__11SystemTask2Fv_0x1a3f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2086C8u; }
        else if (ctx->pc != 0x2086C8u) { ctx->pc = 0x2086C8u; }
    }
    if (ctx->pc != 0x2086C8u) { return; }
    ctx->pc = 0x2086C8u;
label_2086c8:
    // 0x2086c8: 0x7bbf0010
    ctx->pc = 0x2086c8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2086cc:
    // 0x2086cc: 0x7bb00000
    ctx->pc = 0x2086ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2086d0: 0x3e00008
    ctx->pc = 0x2086D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2086D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x208590u: goto label_208590;
            case 0x2085F0u: goto label_2085f0;
            case 0x2086C8u: goto label_2086c8;
            case 0x2086CCu: goto label_2086cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2086D8u;
}

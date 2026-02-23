#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PutFont__8MojiUchiFPci
// Address: 0x2242d0 - 0x2245fc
void PutFont__8MojiUchiFPci_0x2242d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PutFont__8MojiUchiFPci");


    ctx->pc = 0x2242d0u;

    // 0x2242d0: 0x27bdff60
    ctx->pc = 0x2242d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2242d4: 0x7fbf0090
    ctx->pc = 0x2242d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x2242d8: 0x7fbe0080
    ctx->pc = 0x2242d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2242dc: 0x7fb70070
    ctx->pc = 0x2242dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2242e0: 0x7fb60060
    ctx->pc = 0x2242e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2242e4: 0x7fb50050
    ctx->pc = 0x2242e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2242e8: 0x7fb40040
    ctx->pc = 0x2242e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2242ec: 0x7fb30030
    ctx->pc = 0x2242ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2242f0: 0x7fb20020
    ctx->pc = 0x2242f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2242f4: 0x7fb10010
    ctx->pc = 0x2242f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2242f8: 0x7fb00000
    ctx->pc = 0x2242f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2242fc: 0x3c010050
    ctx->pc = 0x2242fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x224300: 0x8023fec5
    ctx->pc = 0x224300u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x224304: 0x7080b628
    ctx->pc = 0x224304u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x224308: 0x8c841024
    ctx->pc = 0x224308u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4132)));
    // 0x22430c: 0x70a0ae28
    ctx->pc = 0x22430cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x224310: 0x70c0a628
    ctx->pc = 0x224310u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x224314: 0x70008628
    ctx->pc = 0x224314u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x224318: 0x310c0
    ctx->pc = 0x224318u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 3));
    // 0x22431c: 0x431021
    ctx->pc = 0x22431cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x224320: 0x21080
    ctx->pc = 0x224320u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x224324: 0x441021
    ctx->pc = 0x224324u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x224328: 0x8c570008
    ctx->pc = 0x224328u;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x22432c: 0x70008e28
    ctx->pc = 0x22432cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x224330: 0x7000f628
    ctx->pc = 0x224330u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x224334: 0x10000092
    ctx->pc = 0x224334u;
    {
        const bool branch_taken_0x224334 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x224338u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x224334) {
            ctx->pc = 0x224580u;
            goto label_224580;
        }
    }
    ctx->pc = 0x22433Cu;
label_22433c:
    // 0x22433c: 0xc08902c
    ctx->pc = 0x22433Cu;
    SET_GPR_U32(ctx, 31, 0x224344u);
    ctx->pc = 0x224340u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2240B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetMojiCode2__8MojiUchiFPCc_0x2240b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224344u; }
        else if (ctx->pc != 0x224344u) { ctx->pc = 0x224344u; }
    }
    if (ctx->pc != 0x224344u) { return; }
    ctx->pc = 0x224344u;
    // 0x224344: 0x70409e28
    ctx->pc = 0x224344u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x224348: 0x2402ffff
    ctx->pc = 0x224348u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22434c: 0x12620004
    ctx->pc = 0x22434Cu;
    {
        const bool branch_taken_0x22434c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        ctx->pc = 0x224350u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x22434c) {
            ctx->pc = 0x224360u;
            goto label_224360;
        }
    }
    ctx->pc = 0x224354u;
    // 0x224354: 0x1662000b
    ctx->pc = 0x224354u;
    {
        const bool branch_taken_0x224354 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x224358u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x224354) {
            ctx->pc = 0x224384u;
            goto label_224384;
        }
    }
    ctx->pc = 0x22435Cu;
    // 0x22435c: 0x0
    ctx->pc = 0x22435cu;
    // NOP
label_224360:
    // 0x224360: 0x12000005
    ctx->pc = 0x224360u;
    {
        const bool branch_taken_0x224360 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x224364u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x224360) {
            ctx->pc = 0x224378u;
            goto label_224378;
        }
    }
    ctx->pc = 0x224368u;
    // 0x224368: 0x2631ffff
    ctx->pc = 0x224368u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x22436c: 0x10000082
    ctx->pc = 0x22436Cu;
    {
        const bool branch_taken_0x22436c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x224370u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x22436c) {
            ctx->pc = 0x224578u;
            goto label_224578;
        }
    }
    ctx->pc = 0x224374u;
    // 0x224374: 0x70008628
    ctx->pc = 0x224374u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_224378:
    // 0x224378: 0x10000080
    ctx->pc = 0x224378u;
    {
        const bool branch_taken_0x224378 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22437Cu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 2));
        if (branch_taken_0x224378) {
            ctx->pc = 0x22457Cu;
            goto label_22457c;
        }
    }
    ctx->pc = 0x224380u;
    // 0x224380: 0x2402fffd
    ctx->pc = 0x224380u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
label_224384:
    // 0x224384: 0x16620004
    ctx->pc = 0x224384u;
    {
        const bool branch_taken_0x224384 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x224388u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967292));
        if (branch_taken_0x224384) {
            ctx->pc = 0x224398u;
            goto label_224398;
        }
    }
    ctx->pc = 0x22438Cu;
    // 0x22438c: 0x1000007a
    ctx->pc = 0x22438Cu;
    {
        const bool branch_taken_0x22438c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x224390u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x22438c) {
            ctx->pc = 0x224578u;
            goto label_224578;
        }
    }
    ctx->pc = 0x224394u;
    // 0x224394: 0x2402fffc
    ctx->pc = 0x224394u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967292));
label_224398:
    // 0x224398: 0x16620004
    ctx->pc = 0x224398u;
    {
        const bool branch_taken_0x224398 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x22439Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967291));
        if (branch_taken_0x224398) {
            ctx->pc = 0x2243ACu;
            goto label_2243ac;
        }
    }
    ctx->pc = 0x2243A0u;
    // 0x2243a0: 0x10000075
    ctx->pc = 0x2243A0u;
    {
        const bool branch_taken_0x2243a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2243A4u;
        SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2243a0) {
            ctx->pc = 0x224578u;
            goto label_224578;
        }
    }
    ctx->pc = 0x2243A8u;
    // 0x2243a8: 0x2402fffb
    ctx->pc = 0x2243a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967291));
label_2243ac:
    // 0x2243ac: 0x16620004
    ctx->pc = 0x2243ACu;
    {
        const bool branch_taken_0x2243ac = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x2243B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 153));
        if (branch_taken_0x2243ac) {
            ctx->pc = 0x2243C0u;
            goto label_2243c0;
        }
    }
    ctx->pc = 0x2243B4u;
    // 0x2243b4: 0x10000070
    ctx->pc = 0x2243B4u;
    {
        const bool branch_taken_0x2243b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2243B8u;
        SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2243b4) {
            ctx->pc = 0x224578u;
            goto label_224578;
        }
    }
    ctx->pc = 0x2243BCu;
    // 0x2243bc: 0x24020099
    ctx->pc = 0x2243bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 153));
label_2243c0:
    // 0x2243c0: 0x12620005
    ctx->pc = 0x2243C0u;
    {
        const bool branch_taken_0x2243c0 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        ctx->pc = 0x2243C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 162));
        if (branch_taken_0x2243c0) {
            ctx->pc = 0x2243D8u;
            goto label_2243d8;
        }
    }
    ctx->pc = 0x2243C8u;
    // 0x2243c8: 0x12620003
    ctx->pc = 0x2243C8u;
    {
        const bool branch_taken_0x2243c8 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        ctx->pc = 0x2243CCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 185));
        if (branch_taken_0x2243c8) {
            ctx->pc = 0x2243D8u;
            goto label_2243d8;
        }
    }
    ctx->pc = 0x2243D0u;
    // 0x2243d0: 0x16620005
    ctx->pc = 0x2243D0u;
    {
        const bool branch_taken_0x2243d0 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        if (branch_taken_0x2243d0) {
            ctx->pc = 0x2243E8u;
            goto label_2243e8;
        }
    }
    ctx->pc = 0x2243D8u;
label_2243d8:
    // 0x2243d8: 0x16000003
    ctx->pc = 0x2243D8u;
    {
        const bool branch_taken_0x2243d8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x2243d8) {
            ctx->pc = 0x2243E8u;
            goto label_2243e8;
        }
    }
    ctx->pc = 0x2243E0u;
    // 0x2243e0: 0x26310001
    ctx->pc = 0x2243e0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x2243e4: 0x72e08628
    ctx->pc = 0x2243e4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
label_2243e8:
    // 0x2243e8: 0x4bede37d
    ctx->pc = 0x2243e8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x2243ec: 0x4bedeb7d
    ctx->pc = 0x2243ecu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x2243f0: 0x4bedf37d
    ctx->pc = 0x2243f0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x2243f4: 0x4bedfb7d
    ctx->pc = 0x2243f4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x2243f8: 0x24020002
    ctx->pc = 0x2243f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2243fc: 0x12820004
    ctx->pc = 0x2243FCu;
    {
        const bool branch_taken_0x2243fc = (GPR_U32(ctx, 20) == GPR_U32(ctx, 2));
        if (branch_taken_0x2243fc) {
            ctx->pc = 0x224410u;
            goto label_224410;
        }
    }
    ctx->pc = 0x224404u;
    // 0x224404: 0xc06c20d
    ctx->pc = 0x224404u;
    SET_GPR_U32(ctx, 31, 0x22440Cu);
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22440Cu; }
        else if (ctx->pc != 0x22440Cu) { ctx->pc = 0x22440Cu; }
    }
    if (ctx->pc != 0x22440Cu) { return; }
    ctx->pc = 0x22440Cu;
    // 0x22440c: 0x0
    ctx->pc = 0x22440cu;
    // NOP
label_224410:
    // 0x224410: 0xc6cd0004
    ctx->pc = 0x224410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x224414: 0xc6ce0008
    ctx->pc = 0x224414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x224418: 0xc06c202
    ctx->pc = 0x224418u;
    SET_GPR_U32(ctx, 31, 0x224420u);
    ctx->pc = 0x22441Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224420u; }
        else if (ctx->pc != 0x224420u) { ctx->pc = 0x224420u; }
    }
    if (ctx->pc != 0x224420u) { return; }
    ctx->pc = 0x224420u;
    // 0x224420: 0x3c010050
    ctx->pc = 0x224420u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x224424: 0x8024fec5
    ctx->pc = 0x224424u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x224428: 0x8ec21024
    ctx->pc = 0x224428u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 4132)));
    // 0x22442c: 0x418c0
    ctx->pc = 0x22442cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
    // 0x224430: 0x641821
    ctx->pc = 0x224430u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x224434: 0x31880
    ctx->pc = 0x224434u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x224438: 0x431021
    ctx->pc = 0x224438u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22443c: 0xc44d001c
    ctx->pc = 0x22443cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x224440: 0xc44e0020
    ctx->pc = 0x224440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x224444: 0xc06c1b3
    ctx->pc = 0x224444u;
    SET_GPR_U32(ctx, 31, 0x22444Cu);
    ctx->pc = 0x224448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22444Cu; }
        else if (ctx->pc != 0x22444Cu) { ctx->pc = 0x22444Cu; }
    }
    if (ctx->pc != 0x22444Cu) { return; }
    ctx->pc = 0x22444Cu;
    // 0x22444c: 0x3c010050
    ctx->pc = 0x22444cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x224450: 0x8024fec5
    ctx->pc = 0x224450u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x224454: 0x8ec21024
    ctx->pc = 0x224454u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 4132)));
    // 0x224458: 0x418c0
    ctx->pc = 0x224458u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
    // 0x22445c: 0x641821
    ctx->pc = 0x22445cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x224460: 0x31880
    ctx->pc = 0x224460u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x224464: 0x431021
    ctx->pc = 0x224464u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x224468: 0xc06b218
    ctx->pc = 0x224468u;
    SET_GPR_U32(ctx, 31, 0x224470u);
    ctx->pc = 0x22446Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224470u; }
        else if (ctx->pc != 0x224470u) { ctx->pc = 0x224470u; }
    }
    if (ctx->pc != 0x224470u) { return; }
    ctx->pc = 0x224470u;
    // 0x224470: 0x4bede37d
    ctx->pc = 0x224470u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x224474: 0x4bedeb7d
    ctx->pc = 0x224474u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x224478: 0x4bedf37d
    ctx->pc = 0x224478u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x22447c: 0x4bedfb7d
    ctx->pc = 0x22447cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x224480: 0x3c010050
    ctx->pc = 0x224480u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x224484: 0x44900800
    ctx->pc = 0x224484u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 16);
    // 0x224488: 0x3c023f80
    ctx->pc = 0x224488u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x22448c: 0x44910000
    ctx->pc = 0x22448cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 17);
    // 0x224490: 0x8024fec5
    ctx->pc = 0x224490u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x224494: 0x44822000
    ctx->pc = 0x224494u;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 2);
    // 0x224498: 0x8ec31024
    ctx->pc = 0x224498u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 4132)));
    // 0x22449c: 0x468008e0
    ctx->pc = 0x22449cu;
    ctx->f[3] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2244a0: 0x410c0
    ctx->pc = 0x2244a0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 3));
    // 0x2244a4: 0x441021
    ctx->pc = 0x2244a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2244a8: 0x21080
    ctx->pc = 0x2244a8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2244ac: 0x621021
    ctx->pc = 0x2244acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2244b0: 0xc4420000
    ctx->pc = 0x2244b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2244b4: 0xc4410004
    ctx->pc = 0x2244b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2244b8: 0x46800020
    ctx->pc = 0x2244b8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2244bc: 0x46022080
    ctx->pc = 0x2244bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x2244c0: 0x46012040
    ctx->pc = 0x2244c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2244c4: 0x46021b02
    ctx->pc = 0x2244c4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2244c8: 0x44807000
    ctx->pc = 0x2244c8u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 0);
    // 0x2244cc: 0xc06c202
    ctx->pc = 0x2244CCu;
    SET_GPR_U32(ctx, 31, 0x2244D4u);
    ctx->pc = 0x2244D0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2244D4u; }
        else if (ctx->pc != 0x2244D4u) { ctx->pc = 0x2244D4u; }
    }
    if (ctx->pc != 0x2244D4u) { return; }
    ctx->pc = 0x2244D4u;
    // 0x2244d4: 0xc06aafc
    ctx->pc = 0x2244D4u;
    SET_GPR_U32(ctx, 31, 0x2244DCu);
    ctx->pc = 0x1AABF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutPushFadeColor_0x1aabf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2244DCu; }
        else if (ctx->pc != 0x2244DCu) { ctx->pc = 0x2244DCu; }
    }
    if (ctx->pc != 0x2244DCu) { return; }
    ctx->pc = 0x2244DCu;
    // 0x2244dc: 0x13c00007
    ctx->pc = 0x2244DCu;
    {
        const bool branch_taken_0x2244dc = (GPR_U32(ctx, 30) == GPR_U32(ctx, 0));
        ctx->pc = 0x2244E0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
        if (branch_taken_0x2244dc) {
            ctx->pc = 0x2244FCu;
            goto label_2244fc;
        }
    }
    ctx->pc = 0x2244E4u;
    // 0x2244e4: 0x44806800
    ctx->pc = 0x2244e4u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x2244e8: 0x44826000
    ctx->pc = 0x2244e8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x2244ec: 0xc06aa80
    ctx->pc = 0x2244ECu;
    SET_GPR_U32(ctx, 31, 0x2244F4u);
    ctx->pc = 0x2244F0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->pc = 0x1AAA00u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutSetFadeColor_0x1aaa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2244F4u; }
        else if (ctx->pc != 0x2244F4u) { ctx->pc = 0x2244F4u; }
    }
    if (ctx->pc != 0x2244F4u) { return; }
    ctx->pc = 0x2244F4u;
    // 0x2244f4: 0x10000007
    ctx->pc = 0x2244F4u;
    {
        const bool branch_taken_0x2244f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2244F8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
        if (branch_taken_0x2244f4) {
            ctx->pc = 0x224514u;
            goto label_224514;
        }
    }
    ctx->pc = 0x2244FCu;
label_2244fc:
    // 0x2244fc: 0x44806000
    ctx->pc = 0x2244fcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x224500: 0x0
    ctx->pc = 0x224500u;
    // NOP
    // 0x224504: 0x46006346
    ctx->pc = 0x224504u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x224508: 0xc06aa80
    ctx->pc = 0x224508u;
    SET_GPR_U32(ctx, 31, 0x224510u);
    ctx->pc = 0x22450Cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1AAA00u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutSetFadeColor_0x1aaa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224510u; }
        else if (ctx->pc != 0x224510u) { ctx->pc = 0x224510u; }
    }
    if (ctx->pc != 0x224510u) { return; }
    ctx->pc = 0x224510u;
    // 0x224510: 0x131080
    ctx->pc = 0x224510u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
label_224514:
    // 0x224514: 0x2c21021
    ctx->pc = 0x224514u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x224518: 0x8c440014
    ctx->pc = 0x224518u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x22451c: 0xc06a09c
    ctx->pc = 0x22451Cu;
    SET_GPR_U32(ctx, 31, 0x224524u);
    ctx->pc = 0x224520u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1A8270u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutCategory_0x1a8270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224524u; }
        else if (ctx->pc != 0x224524u) { ctx->pc = 0x224524u; }
    }
    if (ctx->pc != 0x224524u) { return; }
    ctx->pc = 0x224524u;
    // 0x224524: 0xc06ab18
    ctx->pc = 0x224524u;
    SET_GPR_U32(ctx, 31, 0x22452Cu);
    ctx->pc = 0x1AAC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutPopFadeColor_0x1aac60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22452Cu; }
        else if (ctx->pc != 0x22452Cu) { ctx->pc = 0x22452Cu; }
    }
    if (ctx->pc != 0x22452Cu) { return; }
    ctx->pc = 0x22452Cu;
    // 0x22452c: 0x4bff6b7e
    ctx->pc = 0x22452cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x224530: 0x4bfe6b7e
    ctx->pc = 0x224530u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x224534: 0x4bfd6b7e
    ctx->pc = 0x224534u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x224538: 0x4bfc6b7e
    ctx->pc = 0x224538u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x22453c: 0x4bff6b7e
    ctx->pc = 0x22453cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x224540: 0x4bfe6b7e
    ctx->pc = 0x224540u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x224544: 0x4bfd6b7e
    ctx->pc = 0x224544u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x224548: 0x4bfc6b7e
    ctx->pc = 0x224548u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x22454c: 0x26100001
    ctx->pc = 0x22454cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x224550: 0x217102a
    ctx->pc = 0x224550u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 23)));
    // 0x224554: 0x14400004
    ctx->pc = 0x224554u;
    {
        const bool branch_taken_0x224554 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x224554) {
            ctx->pc = 0x224568u;
            goto label_224568;
        }
    }
    ctx->pc = 0x22455Cu;
    // 0x22455c: 0x70008628
    ctx->pc = 0x22455cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x224560: 0x2631ffff
    ctx->pc = 0x224560u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x224564: 0x0
    ctx->pc = 0x224564u;
    // NOP
label_224568:
    // 0x224568: 0x16800003
    ctx->pc = 0x224568u;
    {
        const bool branch_taken_0x224568 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 0));
        if (branch_taken_0x224568) {
            ctx->pc = 0x224578u;
            goto label_224578;
        }
    }
    ctx->pc = 0x224570u;
    // 0x224570: 0x26520001
    ctx->pc = 0x224570u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x224574: 0x0
    ctx->pc = 0x224574u;
    // NOP
label_224578:
    // 0x224578: 0x26b50002
    ctx->pc = 0x224578u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 2));
label_22457c:
    // 0x22457c: 0x0
    ctx->pc = 0x22457cu;
    // NOP
label_224580:
    // 0x224580: 0x82a20000
    ctx->pc = 0x224580u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x224584: 0x10400006
    ctx->pc = 0x224584u;
    {
        const bool branch_taken_0x224584 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x224584) {
            ctx->pc = 0x2245A0u;
            goto label_2245a0;
        }
    }
    ctx->pc = 0x22458Cu;
    // 0x22458c: 0x8ec2000c
    ctx->pc = 0x22458cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x224590: 0x242102a
    ctx->pc = 0x224590u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x224594: 0x1440ff69
    ctx->pc = 0x224594u;
    {
        const bool branch_taken_0x224594 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x224598u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
        if (branch_taken_0x224594) {
            ctx->pc = 0x22433Cu;
            goto label_22433c;
        }
    }
    ctx->pc = 0x22459Cu;
    // 0x22459c: 0x0
    ctx->pc = 0x22459cu;
    // NOP
label_2245a0:
    // 0x2245a0: 0x3c020050
    ctx->pc = 0x2245a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x2245a4: 0xc07ce18
    ctx->pc = 0x2245A4u;
    SET_GPR_U32(ctx, 31, 0x2245ACu);
    ctx->pc = 0x2245A8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2245ACu; }
        else if (ctx->pc != 0x2245ACu) { ctx->pc = 0x2245ACu; }
    }
    if (ctx->pc != 0x2245ACu) { return; }
    ctx->pc = 0x2245ACu;
    // 0x2245ac: 0x28410005
    ctx->pc = 0x2245acu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 5));
    // 0x2245b0: 0x10200006
    ctx->pc = 0x2245B0u;
    {
        const bool branch_taken_0x2245b0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x2245b0) {
            ctx->pc = 0x2245CCu;
            goto label_2245cc;
        }
    }
    ctx->pc = 0x2245B8u;
    // 0x2245b8: 0x82c3101c
    ctx->pc = 0x2245b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 4124)));
    // 0x2245bc: 0x14600003
    ctx->pc = 0x2245BCu;
    {
        const bool branch_taken_0x2245bc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2245C0u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2245bc) {
            ctx->pc = 0x2245CCu;
            goto label_2245cc;
        }
    }
    ctx->pc = 0x2245C4u;
    // 0x2245c4: 0xc089250
    ctx->pc = 0x2245C4u;
    SET_GPR_U32(ctx, 31, 0x2245CCu);
    ctx->pc = 0x224940u;
    {
        const uint32_t __entryPc = ctx->pc;
        MojiCount__8MojiUchiFv_0x224940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2245CCu; }
        else if (ctx->pc != 0x2245CCu) { ctx->pc = 0x2245CCu; }
    }
    if (ctx->pc != 0x2245CCu) { return; }
    ctx->pc = 0x2245CCu;
label_2245cc:
    // 0x2245cc: 0x7bbf0090
    ctx->pc = 0x2245ccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2245d0: 0x7bbe0080
    ctx->pc = 0x2245d0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2245d4: 0x7bb70070
    ctx->pc = 0x2245d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2245d8: 0x7bb60060
    ctx->pc = 0x2245d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2245dc: 0x7bb50050
    ctx->pc = 0x2245dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2245e0: 0x7bb40040
    ctx->pc = 0x2245e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2245e4: 0x7bb30030
    ctx->pc = 0x2245e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2245e8: 0x7bb20020
    ctx->pc = 0x2245e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2245ec: 0x7bb10010
    ctx->pc = 0x2245ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2245f0: 0x7bb00000
    ctx->pc = 0x2245f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2245f4: 0x3e00008
    ctx->pc = 0x2245F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2245F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22433Cu: goto label_22433c;
            case 0x224360u: goto label_224360;
            case 0x224378u: goto label_224378;
            case 0x224384u: goto label_224384;
            case 0x224398u: goto label_224398;
            case 0x2243ACu: goto label_2243ac;
            case 0x2243C0u: goto label_2243c0;
            case 0x2243D8u: goto label_2243d8;
            case 0x2243E8u: goto label_2243e8;
            case 0x224410u: goto label_224410;
            case 0x2244FCu: goto label_2244fc;
            case 0x224514u: goto label_224514;
            case 0x224568u: goto label_224568;
            case 0x224578u: goto label_224578;
            case 0x22457Cu: goto label_22457c;
            case 0x224580u: goto label_224580;
            case 0x2245A0u: goto label_2245a0;
            case 0x2245CCu: goto label_2245cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2245FCu;
}

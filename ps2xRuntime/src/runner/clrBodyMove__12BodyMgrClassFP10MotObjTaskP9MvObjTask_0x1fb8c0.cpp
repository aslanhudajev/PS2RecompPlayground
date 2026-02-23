#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: clrBodyMove__12BodyMgrClassFP10MotObjTaskP9MvObjTask
// Address: 0x1fb8c0 - 0x1fba68
void clrBodyMove__12BodyMgrClassFP10MotObjTaskP9MvObjTask_0x1fb8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("clrBodyMove__12BodyMgrClassFP10MotObjTaskP9MvObjTask");


    ctx->pc = 0x1fb8c0u;

    // 0x1fb8c0: 0x27bdffb0
    ctx->pc = 0x1fb8c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fb8c4: 0x7fbf0020
    ctx->pc = 0x1fb8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1fb8c8: 0x7fb10010
    ctx->pc = 0x1fb8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fb8cc: 0x7fb00000
    ctx->pc = 0x1fb8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fb8d0: 0x8ca31c9c
    ctx->pc = 0x1fb8d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 7324)));
    // 0x1fb8d4: 0x2402fffd
    ctx->pc = 0x1fb8d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1fb8d8: 0x70c08628
    ctx->pc = 0x1fb8d8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1fb8dc: 0x70a08e28
    ctx->pc = 0x1fb8dcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1fb8e0: 0x621024
    ctx->pc = 0x1fb8e0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fb8e4: 0xaca21c9c
    ctx->pc = 0x1fb8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7324), GPR_U32(ctx, 2));
    // 0x1fb8e8: 0x4bede37d
    ctx->pc = 0x1fb8e8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1fb8ec: 0x4bedeb7d
    ctx->pc = 0x1fb8ecu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1fb8f0: 0x4bedf37d
    ctx->pc = 0x1fb8f0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1fb8f4: 0xc06c20d
    ctx->pc = 0x1FB8F4u;
    SET_GPR_U32(ctx, 31, 0x1FB8FCu);
    ctx->pc = 0x1FB8F8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB8FCu; }
        else if (ctx->pc != 0x1FB8FCu) { ctx->pc = 0x1FB8FCu; }
    }
    if (ctx->pc != 0x1FB8FCu) { return; }
    ctx->pc = 0x1FB8FCu;
    // 0x1fb8fc: 0xc60d0004
    ctx->pc = 0x1fb8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1fb900: 0xc60e0008
    ctx->pc = 0x1fb900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1fb904: 0xc06c202
    ctx->pc = 0x1FB904u;
    SET_GPR_U32(ctx, 31, 0x1FB90Cu);
    ctx->pc = 0x1FB908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB90Cu; }
        else if (ctx->pc != 0x1FB90Cu) { ctx->pc = 0x1FB90Cu; }
    }
    if (ctx->pc != 0x1FB90Cu) { return; }
    ctx->pc = 0x1FB90Cu;
    // 0x1fb90c: 0x8e231c98
    ctx->pc = 0x1fb90cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7320)));
    // 0x1fb910: 0x24020004
    ctx->pc = 0x1fb910u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fb914: 0x1062002b
    ctx->pc = 0x1FB914u;
    {
        const bool branch_taken_0x1fb914 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1FB918u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1fb914) {
            ctx->pc = 0x1FB9C4u;
            goto label_1fb9c4;
        }
    }
    ctx->pc = 0x1FB91Cu;
    // 0x1fb91c: 0x10620021
    ctx->pc = 0x1FB91Cu;
    {
        const bool branch_taken_0x1fb91c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1FB920u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1fb91c) {
            ctx->pc = 0x1FB9A4u;
            goto label_1fb9a4;
        }
    }
    ctx->pc = 0x1FB924u;
    // 0x1fb924: 0x10620017
    ctx->pc = 0x1FB924u;
    {
        const bool branch_taken_0x1fb924 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1FB928u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1fb924) {
            ctx->pc = 0x1FB984u;
            goto label_1fb984;
        }
    }
    ctx->pc = 0x1FB92Cu;
    // 0x1fb92c: 0x1062000d
    ctx->pc = 0x1FB92Cu;
    {
        const bool branch_taken_0x1fb92c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1fb92c) {
            ctx->pc = 0x1FB964u;
            goto label_1fb964;
        }
    }
    ctx->pc = 0x1FB934u;
    // 0x1fb934: 0x10600003
    ctx->pc = 0x1FB934u;
    {
        const bool branch_taken_0x1fb934 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fb934) {
            ctx->pc = 0x1FB944u;
            goto label_1fb944;
        }
    }
    ctx->pc = 0x1FB93Cu;
    // 0x1fb93c: 0x10000029
    ctx->pc = 0x1FB93Cu;
    {
        const bool branch_taken_0x1fb93c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FB940u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        if (branch_taken_0x1fb93c) {
            ctx->pc = 0x1FB9E4u;
            goto label_1fb9e4;
        }
    }
    ctx->pc = 0x1FB944u;
label_1fb944:
    // 0x1fb944: 0xc06c09f
    ctx->pc = 0x1FB944u;
    SET_GPR_U32(ctx, 31, 0x1FB94Cu);
    ctx->pc = 0x1FB948u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB94Cu; }
        else if (ctx->pc != 0x1FB94Cu) { ctx->pc = 0x1FB94Cu; }
    }
    if (ctx->pc != 0x1FB94Cu) { return; }
    ctx->pc = 0x1FB94Cu;
    // 0x1fb94c: 0xc06c0fb
    ctx->pc = 0x1FB94Cu;
    SET_GPR_U32(ctx, 31, 0x1FB954u);
    ctx->pc = 0x1FB950u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB954u; }
        else if (ctx->pc != 0x1FB954u) { ctx->pc = 0x1FB954u; }
    }
    if (ctx->pc != 0x1FB954u) { return; }
    ctx->pc = 0x1FB954u;
    // 0x1fb954: 0xc06c157
    ctx->pc = 0x1FB954u;
    SET_GPR_U32(ctx, 31, 0x1FB95Cu);
    ctx->pc = 0x1FB958u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB95Cu; }
        else if (ctx->pc != 0x1FB95Cu) { ctx->pc = 0x1FB95Cu; }
    }
    if (ctx->pc != 0x1FB95Cu) { return; }
    ctx->pc = 0x1FB95Cu;
    // 0x1fb95c: 0x10000028
    ctx->pc = 0x1FB95Cu;
    {
        const bool branch_taken_0x1fb95c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FB960u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x1fb95c) {
            ctx->pc = 0x1FBA00u;
            goto label_1fba00;
        }
    }
    ctx->pc = 0x1FB964u;
label_1fb964:
    // 0x1fb964: 0xc06c09f
    ctx->pc = 0x1FB964u;
    SET_GPR_U32(ctx, 31, 0x1FB96Cu);
    ctx->pc = 0x1FB968u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB96Cu; }
        else if (ctx->pc != 0x1FB96Cu) { ctx->pc = 0x1FB96Cu; }
    }
    if (ctx->pc != 0x1FB96Cu) { return; }
    ctx->pc = 0x1FB96Cu;
    // 0x1fb96c: 0xc06c157
    ctx->pc = 0x1FB96Cu;
    SET_GPR_U32(ctx, 31, 0x1FB974u);
    ctx->pc = 0x1FB970u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB974u; }
        else if (ctx->pc != 0x1FB974u) { ctx->pc = 0x1FB974u; }
    }
    if (ctx->pc != 0x1FB974u) { return; }
    ctx->pc = 0x1FB974u;
    // 0x1fb974: 0xc06c0fb
    ctx->pc = 0x1FB974u;
    SET_GPR_U32(ctx, 31, 0x1FB97Cu);
    ctx->pc = 0x1FB978u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB97Cu; }
        else if (ctx->pc != 0x1FB97Cu) { ctx->pc = 0x1FB97Cu; }
    }
    if (ctx->pc != 0x1FB97Cu) { return; }
    ctx->pc = 0x1FB97Cu;
    // 0x1fb97c: 0x1000001f
    ctx->pc = 0x1FB97Cu;
    {
        const bool branch_taken_0x1fb97c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fb97c) {
            ctx->pc = 0x1FB9FCu;
            goto label_1fb9fc;
        }
    }
    ctx->pc = 0x1FB984u;
label_1fb984:
    // 0x1fb984: 0xc06c0fb
    ctx->pc = 0x1FB984u;
    SET_GPR_U32(ctx, 31, 0x1FB98Cu);
    ctx->pc = 0x1FB988u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB98Cu; }
        else if (ctx->pc != 0x1FB98Cu) { ctx->pc = 0x1FB98Cu; }
    }
    if (ctx->pc != 0x1FB98Cu) { return; }
    ctx->pc = 0x1FB98Cu;
    // 0x1fb98c: 0xc06c09f
    ctx->pc = 0x1FB98Cu;
    SET_GPR_U32(ctx, 31, 0x1FB994u);
    ctx->pc = 0x1FB990u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB994u; }
        else if (ctx->pc != 0x1FB994u) { ctx->pc = 0x1FB994u; }
    }
    if (ctx->pc != 0x1FB994u) { return; }
    ctx->pc = 0x1FB994u;
    // 0x1fb994: 0xc06c157
    ctx->pc = 0x1FB994u;
    SET_GPR_U32(ctx, 31, 0x1FB99Cu);
    ctx->pc = 0x1FB998u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB99Cu; }
        else if (ctx->pc != 0x1FB99Cu) { ctx->pc = 0x1FB99Cu; }
    }
    if (ctx->pc != 0x1FB99Cu) { return; }
    ctx->pc = 0x1FB99Cu;
    // 0x1fb99c: 0x10000017
    ctx->pc = 0x1FB99Cu;
    {
        const bool branch_taken_0x1fb99c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fb99c) {
            ctx->pc = 0x1FB9FCu;
            goto label_1fb9fc;
        }
    }
    ctx->pc = 0x1FB9A4u;
label_1fb9a4:
    // 0x1fb9a4: 0xc06c0fb
    ctx->pc = 0x1FB9A4u;
    SET_GPR_U32(ctx, 31, 0x1FB9ACu);
    ctx->pc = 0x1FB9A8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB9ACu; }
        else if (ctx->pc != 0x1FB9ACu) { ctx->pc = 0x1FB9ACu; }
    }
    if (ctx->pc != 0x1FB9ACu) { return; }
    ctx->pc = 0x1FB9ACu;
    // 0x1fb9ac: 0xc06c157
    ctx->pc = 0x1FB9ACu;
    SET_GPR_U32(ctx, 31, 0x1FB9B4u);
    ctx->pc = 0x1FB9B0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB9B4u; }
        else if (ctx->pc != 0x1FB9B4u) { ctx->pc = 0x1FB9B4u; }
    }
    if (ctx->pc != 0x1FB9B4u) { return; }
    ctx->pc = 0x1FB9B4u;
    // 0x1fb9b4: 0xc06c09f
    ctx->pc = 0x1FB9B4u;
    SET_GPR_U32(ctx, 31, 0x1FB9BCu);
    ctx->pc = 0x1FB9B8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB9BCu; }
        else if (ctx->pc != 0x1FB9BCu) { ctx->pc = 0x1FB9BCu; }
    }
    if (ctx->pc != 0x1FB9BCu) { return; }
    ctx->pc = 0x1FB9BCu;
    // 0x1fb9bc: 0x1000000f
    ctx->pc = 0x1FB9BCu;
    {
        const bool branch_taken_0x1fb9bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fb9bc) {
            ctx->pc = 0x1FB9FCu;
            goto label_1fb9fc;
        }
    }
    ctx->pc = 0x1FB9C4u;
label_1fb9c4:
    // 0x1fb9c4: 0xc06c157
    ctx->pc = 0x1FB9C4u;
    SET_GPR_U32(ctx, 31, 0x1FB9CCu);
    ctx->pc = 0x1FB9C8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB9CCu; }
        else if (ctx->pc != 0x1FB9CCu) { ctx->pc = 0x1FB9CCu; }
    }
    if (ctx->pc != 0x1FB9CCu) { return; }
    ctx->pc = 0x1FB9CCu;
    // 0x1fb9cc: 0xc06c09f
    ctx->pc = 0x1FB9CCu;
    SET_GPR_U32(ctx, 31, 0x1FB9D4u);
    ctx->pc = 0x1FB9D0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB9D4u; }
        else if (ctx->pc != 0x1FB9D4u) { ctx->pc = 0x1FB9D4u; }
    }
    if (ctx->pc != 0x1FB9D4u) { return; }
    ctx->pc = 0x1FB9D4u;
    // 0x1fb9d4: 0xc06c0fb
    ctx->pc = 0x1FB9D4u;
    SET_GPR_U32(ctx, 31, 0x1FB9DCu);
    ctx->pc = 0x1FB9D8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB9DCu; }
        else if (ctx->pc != 0x1FB9DCu) { ctx->pc = 0x1FB9DCu; }
    }
    if (ctx->pc != 0x1FB9DCu) { return; }
    ctx->pc = 0x1FB9DCu;
    // 0x1fb9dc: 0x10000007
    ctx->pc = 0x1FB9DCu;
    {
        const bool branch_taken_0x1fb9dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fb9dc) {
            ctx->pc = 0x1FB9FCu;
            goto label_1fb9fc;
        }
    }
    ctx->pc = 0x1FB9E4u;
label_1fb9e4:
    // 0x1fb9e4: 0xc06c157
    ctx->pc = 0x1FB9E4u;
    SET_GPR_U32(ctx, 31, 0x1FB9ECu);
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB9ECu; }
        else if (ctx->pc != 0x1FB9ECu) { ctx->pc = 0x1FB9ECu; }
    }
    if (ctx->pc != 0x1FB9ECu) { return; }
    ctx->pc = 0x1FB9ECu;
    // 0x1fb9ec: 0xc06c0fb
    ctx->pc = 0x1FB9ECu;
    SET_GPR_U32(ctx, 31, 0x1FB9F4u);
    ctx->pc = 0x1FB9F0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB9F4u; }
        else if (ctx->pc != 0x1FB9F4u) { ctx->pc = 0x1FB9F4u; }
    }
    if (ctx->pc != 0x1FB9F4u) { return; }
    ctx->pc = 0x1FB9F4u;
    // 0x1fb9f4: 0xc06c09f
    ctx->pc = 0x1FB9F4u;
    SET_GPR_U32(ctx, 31, 0x1FB9FCu);
    ctx->pc = 0x1FB9F8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB9FCu; }
        else if (ctx->pc != 0x1FB9FCu) { ctx->pc = 0x1FB9FCu; }
    }
    if (ctx->pc != 0x1FB9FCu) { return; }
    ctx->pc = 0x1FB9FCu;
label_1fb9fc:
    // 0x1fb9fc: 0xc62c1ca0
    ctx->pc = 0x1fb9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1fba00:
    // 0x1fba00: 0x46006346
    ctx->pc = 0x1fba00u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1fba04: 0xc06c1b3
    ctx->pc = 0x1FBA04u;
    SET_GPR_U32(ctx, 31, 0x1FBA0Cu);
    ctx->pc = 0x1FBA08u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBA0Cu; }
        else if (ctx->pc != 0x1FBA0Cu) { ctx->pc = 0x1FBA0Cu; }
    }
    if (ctx->pc != 0x1FBA0Cu) { return; }
    ctx->pc = 0x1FBA0Cu;
    // 0x1fba0c: 0xc6200040
    ctx->pc = 0x1fba0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fba10: 0x27a40030
    ctx->pc = 0x1fba10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fba14: 0x27a50040
    ctx->pc = 0x1fba14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fba18: 0x46000007
    ctx->pc = 0x1fba18u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1fba1c: 0xe7a00030
    ctx->pc = 0x1fba1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1fba20: 0xafa00034
    ctx->pc = 0x1fba20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1fba24: 0xc6200048
    ctx->pc = 0x1fba24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fba28: 0x46000007
    ctx->pc = 0x1fba28u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1fba2c: 0xc06bf00
    ctx->pc = 0x1FBA2Cu;
    SET_GPR_U32(ctx, 31, 0x1FBA34u);
    ctx->pc = 0x1FBA30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBA34u; }
        else if (ctx->pc != 0x1FBA34u) { ctx->pc = 0x1FBA34u; }
    }
    if (ctx->pc != 0x1FBA34u) { return; }
    ctx->pc = 0x1FBA34u;
    // 0x1fba34: 0xc7a00040
    ctx->pc = 0x1fba34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fba38: 0xe6000000
    ctx->pc = 0x1fba38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1fba3c: 0xc7a00048
    ctx->pc = 0x1fba3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fba40: 0xe6000008
    ctx->pc = 0x1fba40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1fba44: 0x4bff6b7e
    ctx->pc = 0x1fba44u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1fba48: 0x4bfe6b7e
    ctx->pc = 0x1fba48u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1fba4c: 0x4bfd6b7e
    ctx->pc = 0x1fba4cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1fba50: 0x4bfc6b7e
    ctx->pc = 0x1fba50u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1fba54: 0x7bbf0020
    ctx->pc = 0x1fba54u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fba58: 0x7bb10010
    ctx->pc = 0x1fba58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fba5c: 0x7bb00000
    ctx->pc = 0x1fba5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fba60: 0x3e00008
    ctx->pc = 0x1FBA60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBA64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FB944u: goto label_1fb944;
            case 0x1FB964u: goto label_1fb964;
            case 0x1FB984u: goto label_1fb984;
            case 0x1FB9A4u: goto label_1fb9a4;
            case 0x1FB9C4u: goto label_1fb9c4;
            case 0x1FB9E4u: goto label_1fb9e4;
            case 0x1FB9FCu: goto label_1fb9fc;
            case 0x1FBA00u: goto label_1fba00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FBA68u;
}

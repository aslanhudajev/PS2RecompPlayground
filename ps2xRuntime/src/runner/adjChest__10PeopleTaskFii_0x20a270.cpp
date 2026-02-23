#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adjChest__10PeopleTaskFii
// Address: 0x20a270 - 0x20a4d8
void adjChest__10PeopleTaskFii_0x20a270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adjChest__10PeopleTaskFii");


    ctx->pc = 0x20a270u;

    // 0x20a270: 0x27bdff80
    ctx->pc = 0x20a270u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x20a274: 0x7fbf0030
    ctx->pc = 0x20a274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x20a278: 0x7fb10020
    ctx->pc = 0x20a278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x20a27c: 0x7fb00010
    ctx->pc = 0x20a27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x20a280: 0xe7b50004
    ctx->pc = 0x20a280u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x20a284: 0xe7b40000
    ctx->pc = 0x20a284u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x20a288: 0x70a01e28
    ctx->pc = 0x20a288u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x20a28c: 0x8485005c
    ctx->pc = 0x20a28cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x20a290: 0x70808628
    ctx->pc = 0x20a290u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x20a294: 0x4c10003
    ctx->pc = 0x20A294u;
    {
        const bool branch_taken_0x20a294 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x20A298u;
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 6), 1));
        if (branch_taken_0x20a294) {
            ctx->pc = 0x20A2A4u;
            goto label_20a2a4;
        }
    }
    ctx->pc = 0x20A29Cu;
    // 0x20a29c: 0x24c20001
    ctx->pc = 0x20a29cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 1));
    // 0x20a2a0: 0x23843
    ctx->pc = 0x20a2a0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 1));
label_20a2a4:
    // 0x20a2a4: 0x70603628
    ctx->pc = 0x20a2a4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x20a2a8: 0xc07f1d8
    ctx->pc = 0x20A2A8u;
    SET_GPR_U32(ctx, 31, 0x20A2B0u);
    ctx->pc = 0x20A2ACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC760u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdr__11MotMgrClassFiii_0x1fc760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A2B0u; }
        else if (ctx->pc != 0x20A2B0u) { ctx->pc = 0x20A2B0u; }
    }
    if (ctx->pc != 0x20A2B0u) { return; }
    ctx->pc = 0x20A2B0u;
    // 0x20a2b0: 0x2451000c
    ctx->pc = 0x20a2b0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 12));
    // 0x20a2b4: 0x4bede37d
    ctx->pc = 0x20a2b4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x20a2b8: 0x4bedeb7d
    ctx->pc = 0x20a2b8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x20a2bc: 0x4bedf37d
    ctx->pc = 0x20a2bcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x20a2c0: 0x4bedfb7d
    ctx->pc = 0x20a2c0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x20a2c4: 0xc6010074
    ctx->pc = 0x20a2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a2c8: 0xc4400004
    ctx->pc = 0x20a2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a2cc: 0x8e030030
    ctx->pc = 0x20a2ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x20a2d0: 0x46000841
    ctx->pc = 0x20a2d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20a2d4: 0xc4600004
    ctx->pc = 0x20a2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a2d8: 0x46010000
    ctx->pc = 0x20a2d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20a2dc: 0xe4600004
    ctx->pc = 0x20a2dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x20a2e0: 0xc4400000
    ctx->pc = 0x20a2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a2e4: 0xe600007c
    ctx->pc = 0x20a2e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x20a2e8: 0xc4400004
    ctx->pc = 0x20a2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a2ec: 0xe6000080
    ctx->pc = 0x20a2ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x20a2f0: 0xc4400008
    ctx->pc = 0x20a2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a2f4: 0xe6000084
    ctx->pc = 0x20a2f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x20a2f8: 0xc600007c
    ctx->pc = 0x20a2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a2fc: 0xe6000070
    ctx->pc = 0x20a2fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x20a300: 0xc6000080
    ctx->pc = 0x20a300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a304: 0xe6000074
    ctx->pc = 0x20a304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x20a308: 0xc6000084
    ctx->pc = 0x20a308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a30c: 0xc06c20d
    ctx->pc = 0x20A30Cu;
    SET_GPR_U32(ctx, 31, 0x20A314u);
    ctx->pc = 0x20A310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A314u; }
        else if (ctx->pc != 0x20A314u) { ctx->pc = 0x20A314u; }
    }
    if (ctx->pc != 0x20A314u) { return; }
    ctx->pc = 0x20A314u;
    // 0x20a314: 0xc06c157
    ctx->pc = 0x20A314u;
    SET_GPR_U32(ctx, 31, 0x20A31Cu);
    ctx->pc = 0x20A318u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A31Cu; }
        else if (ctx->pc != 0x20A31Cu) { ctx->pc = 0x20A31Cu; }
    }
    if (ctx->pc != 0x20A31Cu) { return; }
    ctx->pc = 0x20A31Cu;
    // 0x20a31c: 0xc06c0fb
    ctx->pc = 0x20A31Cu;
    SET_GPR_U32(ctx, 31, 0x20A324u);
    ctx->pc = 0x20A320u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A324u; }
        else if (ctx->pc != 0x20A324u) { ctx->pc = 0x20A324u; }
    }
    if (ctx->pc != 0x20A324u) { return; }
    ctx->pc = 0x20A324u;
    // 0x20a324: 0xc06c09f
    ctx->pc = 0x20A324u;
    SET_GPR_U32(ctx, 31, 0x20A32Cu);
    ctx->pc = 0x20A328u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A32Cu; }
        else if (ctx->pc != 0x20A32Cu) { ctx->pc = 0x20A32Cu; }
    }
    if (ctx->pc != 0x20A32Cu) { return; }
    ctx->pc = 0x20A32Cu;
    // 0x20a32c: 0xc06c157
    ctx->pc = 0x20A32Cu;
    SET_GPR_U32(ctx, 31, 0x20A334u);
    ctx->pc = 0x20A330u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A334u; }
        else if (ctx->pc != 0x20A334u) { ctx->pc = 0x20A334u; }
    }
    if (ctx->pc != 0x20A334u) { return; }
    ctx->pc = 0x20A334u;
    // 0x20a334: 0xc06c0fb
    ctx->pc = 0x20A334u;
    SET_GPR_U32(ctx, 31, 0x20A33Cu);
    ctx->pc = 0x20A338u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A33Cu; }
        else if (ctx->pc != 0x20A33Cu) { ctx->pc = 0x20A33Cu; }
    }
    if (ctx->pc != 0x20A33Cu) { return; }
    ctx->pc = 0x20A33Cu;
    // 0x20a33c: 0xc06c09f
    ctx->pc = 0x20A33Cu;
    SET_GPR_U32(ctx, 31, 0x20A344u);
    ctx->pc = 0x20A340u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A344u; }
        else if (ctx->pc != 0x20A344u) { ctx->pc = 0x20A344u; }
    }
    if (ctx->pc != 0x20A344u) { return; }
    ctx->pc = 0x20A344u;
    // 0x20a344: 0xafa00040
    ctx->pc = 0x20a344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x20a348: 0xafa00044
    ctx->pc = 0x20a348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x20a34c: 0x3c023f80
    ctx->pc = 0x20a34cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x20a350: 0xafa20048
    ctx->pc = 0x20a350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x20a354: 0x27a40040
    ctx->pc = 0x20a354u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x20a358: 0xc06bf00
    ctx->pc = 0x20A358u;
    SET_GPR_U32(ctx, 31, 0x20A360u);
    ctx->pc = 0x20A35Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A360u; }
        else if (ctx->pc != 0x20A360u) { ctx->pc = 0x20A360u; }
    }
    if (ctx->pc != 0x20A360u) { return; }
    ctx->pc = 0x20A360u;
    // 0x20a360: 0xc7b50058
    ctx->pc = 0x20a360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x20a364: 0xc06c20d
    ctx->pc = 0x20A364u;
    SET_GPR_U32(ctx, 31, 0x20A36Cu);
    ctx->pc = 0x20A368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A36Cu; }
        else if (ctx->pc != 0x20A36Cu) { ctx->pc = 0x20A36Cu; }
    }
    if (ctx->pc != 0x20A36Cu) { return; }
    ctx->pc = 0x20A36Cu;
    // 0x20a36c: 0xc06c157
    ctx->pc = 0x20A36Cu;
    SET_GPR_U32(ctx, 31, 0x20A374u);
    ctx->pc = 0x20A370u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 172)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A374u; }
        else if (ctx->pc != 0x20A374u) { ctx->pc = 0x20A374u; }
    }
    if (ctx->pc != 0x20A374u) { return; }
    ctx->pc = 0x20A374u;
    // 0x20a374: 0xc06c0fb
    ctx->pc = 0x20A374u;
    SET_GPR_U32(ctx, 31, 0x20A37Cu);
    ctx->pc = 0x20A378u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 168)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A37Cu; }
        else if (ctx->pc != 0x20A37Cu) { ctx->pc = 0x20A37Cu; }
    }
    if (ctx->pc != 0x20A37Cu) { return; }
    ctx->pc = 0x20A37Cu;
    // 0x20a37c: 0xc06c09f
    ctx->pc = 0x20A37Cu;
    SET_GPR_U32(ctx, 31, 0x20A384u);
    ctx->pc = 0x20A380u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 164)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A384u; }
        else if (ctx->pc != 0x20A384u) { ctx->pc = 0x20A384u; }
    }
    if (ctx->pc != 0x20A384u) { return; }
    ctx->pc = 0x20A384u;
    // 0x20a384: 0xc06c157
    ctx->pc = 0x20A384u;
    SET_GPR_U32(ctx, 31, 0x20A38Cu);
    ctx->pc = 0x20A388u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 412)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A38Cu; }
        else if (ctx->pc != 0x20A38Cu) { ctx->pc = 0x20A38Cu; }
    }
    if (ctx->pc != 0x20A38Cu) { return; }
    ctx->pc = 0x20A38Cu;
    // 0x20a38c: 0xc06c0fb
    ctx->pc = 0x20A38Cu;
    SET_GPR_U32(ctx, 31, 0x20A394u);
    ctx->pc = 0x20A390u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 408)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A394u; }
        else if (ctx->pc != 0x20A394u) { ctx->pc = 0x20A394u; }
    }
    if (ctx->pc != 0x20A394u) { return; }
    ctx->pc = 0x20A394u;
    // 0x20a394: 0xc06c09f
    ctx->pc = 0x20A394u;
    SET_GPR_U32(ctx, 31, 0x20A39Cu);
    ctx->pc = 0x20A398u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 404)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A39Cu; }
        else if (ctx->pc != 0x20A39Cu) { ctx->pc = 0x20A39Cu; }
    }
    if (ctx->pc != 0x20A39Cu) { return; }
    ctx->pc = 0x20A39Cu;
    // 0x20a39c: 0xafa00060
    ctx->pc = 0x20a39cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x20a3a0: 0xafa00064
    ctx->pc = 0x20a3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x20a3a4: 0x3c023f80
    ctx->pc = 0x20a3a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x20a3a8: 0xafa20068
    ctx->pc = 0x20a3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x20a3ac: 0x27a40060
    ctx->pc = 0x20a3acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
    // 0x20a3b0: 0xc06bf00
    ctx->pc = 0x20A3B0u;
    SET_GPR_U32(ctx, 31, 0x20A3B8u);
    ctx->pc = 0x20A3B4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 112));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A3B8u; }
        else if (ctx->pc != 0x20A3B8u) { ctx->pc = 0x20A3B8u; }
    }
    if (ctx->pc != 0x20A3B8u) { return; }
    ctx->pc = 0x20A3B8u;
    // 0x20a3b8: 0xc7ad0078
    ctx->pc = 0x20a3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20a3bc: 0xc069e68
    ctx->pc = 0x20A3BCu;
    SET_GPR_U32(ctx, 31, 0x20A3C4u);
    ctx->pc = 0x20A3C0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1A79A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcTan2_0x1a79a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A3C4u; }
        else if (ctx->pc != 0x20A3C4u) { ctx->pc = 0x20A3C4u; }
    }
    if (ctx->pc != 0x20A3C4u) { return; }
    ctx->pc = 0x20A3C4u;
    // 0x20a3c4: 0x28c3c
    ctx->pc = 0x20a3c4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20a3c8: 0x4600a306
    ctx->pc = 0x20a3c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x20a3cc: 0x4600ab46
    ctx->pc = 0x20a3ccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x20a3d0: 0xc069e68
    ctx->pc = 0x20A3D0u;
    SET_GPR_U32(ctx, 31, 0x20A3D8u);
    ctx->pc = 0x20A3D4u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    ctx->pc = 0x1A79A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcTan2_0x1a79a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A3D8u; }
        else if (ctx->pc != 0x20A3D8u) { ctx->pc = 0x20A3D8u; }
    }
    if (ctx->pc != 0x20A3D8u) { return; }
    ctx->pc = 0x20A3D8u;
    // 0x20a3d8: 0x8e030030
    ctx->pc = 0x20a3d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x20a3dc: 0x2143c
    ctx->pc = 0x20a3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20a3e0: 0x2143f
    ctx->pc = 0x20a3e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x20a3e4: 0x2228823
    ctx->pc = 0x20a3e4u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x20a3e8: 0x8c620028
    ctx->pc = 0x20a3e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x20a3ec: 0x511021
    ctx->pc = 0x20a3ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x20a3f0: 0xc06c20d
    ctx->pc = 0x20A3F0u;
    SET_GPR_U32(ctx, 31, 0x20A3F8u);
    ctx->pc = 0x20A3F4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A3F8u; }
        else if (ctx->pc != 0x20A3F8u) { ctx->pc = 0x20A3F8u; }
    }
    if (ctx->pc != 0x20A3F8u) { return; }
    ctx->pc = 0x20A3F8u;
    // 0x20a3f8: 0x8e0200a4
    ctx->pc = 0x20a3f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x20a3fc: 0xc06c09f
    ctx->pc = 0x20A3FCu;
    SET_GPR_U32(ctx, 31, 0x20A404u);
    ctx->pc = 0x20A400u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A404u; }
        else if (ctx->pc != 0x20A404u) { ctx->pc = 0x20A404u; }
    }
    if (ctx->pc != 0x20A404u) { return; }
    ctx->pc = 0x20A404u;
    // 0x20a404: 0x8e0200a8
    ctx->pc = 0x20a404u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x20a408: 0xc06c0fb
    ctx->pc = 0x20A408u;
    SET_GPR_U32(ctx, 31, 0x20A410u);
    ctx->pc = 0x20A40Cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A410u; }
        else if (ctx->pc != 0x20A410u) { ctx->pc = 0x20A410u; }
    }
    if (ctx->pc != 0x20A410u) { return; }
    ctx->pc = 0x20A410u;
    // 0x20a410: 0x8e0200ac
    ctx->pc = 0x20a410u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x20a414: 0xc06c157
    ctx->pc = 0x20A414u;
    SET_GPR_U32(ctx, 31, 0x20A41Cu);
    ctx->pc = 0x20A418u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A41Cu; }
        else if (ctx->pc != 0x20A41Cu) { ctx->pc = 0x20A41Cu; }
    }
    if (ctx->pc != 0x20A41Cu) { return; }
    ctx->pc = 0x20A41Cu;
    // 0x20a41c: 0xc06c0fb
    ctx->pc = 0x20A41Cu;
    SET_GPR_U32(ctx, 31, 0x20A424u);
    ctx->pc = 0x20A420u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A424u; }
        else if (ctx->pc != 0x20A424u) { ctx->pc = 0x20A424u; }
    }
    if (ctx->pc != 0x20A424u) { return; }
    ctx->pc = 0x20A424u;
    // 0x20a424: 0xc06c157
    ctx->pc = 0x20A424u;
    SET_GPR_U32(ctx, 31, 0x20A42Cu);
    ctx->pc = 0x20A428u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 172)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A42Cu; }
        else if (ctx->pc != 0x20A42Cu) { ctx->pc = 0x20A42Cu; }
    }
    if (ctx->pc != 0x20A42Cu) { return; }
    ctx->pc = 0x20A42Cu;
    // 0x20a42c: 0xc06c0fb
    ctx->pc = 0x20A42Cu;
    SET_GPR_U32(ctx, 31, 0x20A434u);
    ctx->pc = 0x20A430u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 168)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A434u; }
        else if (ctx->pc != 0x20A434u) { ctx->pc = 0x20A434u; }
    }
    if (ctx->pc != 0x20A434u) { return; }
    ctx->pc = 0x20A434u;
    // 0x20a434: 0xc06c09f
    ctx->pc = 0x20A434u;
    SET_GPR_U32(ctx, 31, 0x20A43Cu);
    ctx->pc = 0x20A438u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 164)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A43Cu; }
        else if (ctx->pc != 0x20A43Cu) { ctx->pc = 0x20A43Cu; }
    }
    if (ctx->pc != 0x20A43Cu) { return; }
    ctx->pc = 0x20A43Cu;
    // 0x20a43c: 0x4bede37d
    ctx->pc = 0x20a43cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x20a440: 0x4bedeb7d
    ctx->pc = 0x20a440u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x20a444: 0x4bedf37d
    ctx->pc = 0x20a444u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x20a448: 0x4bedfb7d
    ctx->pc = 0x20a448u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x20a44c: 0xc06c157
    ctx->pc = 0x20A44Cu;
    SET_GPR_U32(ctx, 31, 0x20A454u);
    ctx->pc = 0x20A450u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 412)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A454u; }
        else if (ctx->pc != 0x20A454u) { ctx->pc = 0x20A454u; }
    }
    if (ctx->pc != 0x20A454u) { return; }
    ctx->pc = 0x20A454u;
    // 0x20a454: 0xc06c0fb
    ctx->pc = 0x20A454u;
    SET_GPR_U32(ctx, 31, 0x20A45Cu);
    ctx->pc = 0x20A458u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 408)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A45Cu; }
        else if (ctx->pc != 0x20A45Cu) { ctx->pc = 0x20A45Cu; }
    }
    if (ctx->pc != 0x20A45Cu) { return; }
    ctx->pc = 0x20A45Cu;
    // 0x20a45c: 0xc06c09f
    ctx->pc = 0x20A45Cu;
    SET_GPR_U32(ctx, 31, 0x20A464u);
    ctx->pc = 0x20A460u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 404)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A464u; }
        else if (ctx->pc != 0x20A464u) { ctx->pc = 0x20A464u; }
    }
    if (ctx->pc != 0x20A464u) { return; }
    ctx->pc = 0x20A464u;
    // 0x20a464: 0x26040194
    ctx->pc = 0x20a464u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 404));
    // 0x20a468: 0x26050198
    ctx->pc = 0x20a468u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 408));
    // 0x20a46c: 0xc0724f8
    ctx->pc = 0x20A46Cu;
    SET_GPR_U32(ctx, 31, 0x20A474u);
    ctx->pc = 0x20A470u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 412));
    ctx->pc = 0x1C93E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetRotZYX__FPiPiPi_0x1c93e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A474u; }
        else if (ctx->pc != 0x20A474u) { ctx->pc = 0x20A474u; }
    }
    if (ctx->pc != 0x20A474u) { return; }
    ctx->pc = 0x20A474u;
    // 0x20a474: 0x4bff6b7e
    ctx->pc = 0x20a474u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x20a478: 0x4bfe6b7e
    ctx->pc = 0x20a478u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x20a47c: 0x4bfd6b7e
    ctx->pc = 0x20a47cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x20a480: 0x4bfc6b7e
    ctx->pc = 0x20a480u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x20a484: 0xc06c157
    ctx->pc = 0x20A484u;
    SET_GPR_U32(ctx, 31, 0x20A48Cu);
    ctx->pc = 0x20A488u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2812)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A48Cu; }
        else if (ctx->pc != 0x20A48Cu) { ctx->pc = 0x20A48Cu; }
    }
    if (ctx->pc != 0x20A48Cu) { return; }
    ctx->pc = 0x20A48Cu;
    // 0x20a48c: 0xc06c0fb
    ctx->pc = 0x20A48Cu;
    SET_GPR_U32(ctx, 31, 0x20A494u);
    ctx->pc = 0x20A490u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2808)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A494u; }
        else if (ctx->pc != 0x20A494u) { ctx->pc = 0x20A494u; }
    }
    if (ctx->pc != 0x20A494u) { return; }
    ctx->pc = 0x20A494u;
    // 0x20a494: 0xc06c09f
    ctx->pc = 0x20A494u;
    SET_GPR_U32(ctx, 31, 0x20A49Cu);
    ctx->pc = 0x20A498u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2804)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A49Cu; }
        else if (ctx->pc != 0x20A49Cu) { ctx->pc = 0x20A49Cu; }
    }
    if (ctx->pc != 0x20A49Cu) { return; }
    ctx->pc = 0x20A49Cu;
    // 0x20a49c: 0x26040af4
    ctx->pc = 0x20a49cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 2804));
    // 0x20a4a0: 0x26050af8
    ctx->pc = 0x20a4a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 2808));
    // 0x20a4a4: 0xc0724f8
    ctx->pc = 0x20A4A4u;
    SET_GPR_U32(ctx, 31, 0x20A4ACu);
    ctx->pc = 0x20A4A8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 2812));
    ctx->pc = 0x1C93E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetRotZYX__FPiPiPi_0x1c93e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A4ACu; }
        else if (ctx->pc != 0x20A4ACu) { ctx->pc = 0x20A4ACu; }
    }
    if (ctx->pc != 0x20A4ACu) { return; }
    ctx->pc = 0x20A4ACu;
    // 0x20a4ac: 0x4bff6b7e
    ctx->pc = 0x20a4acu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x20a4b0: 0x4bfe6b7e
    ctx->pc = 0x20a4b0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x20a4b4: 0x4bfd6b7e
    ctx->pc = 0x20a4b4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x20a4b8: 0x4bfc6b7e
    ctx->pc = 0x20a4b8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x20a4bc: 0x7bbf0030
    ctx->pc = 0x20a4bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20a4c0: 0x7bb10020
    ctx->pc = 0x20a4c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20a4c4: 0x7bb00010
    ctx->pc = 0x20a4c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a4c8: 0xc7b50004
    ctx->pc = 0x20a4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x20a4cc: 0xc7b40000
    ctx->pc = 0x20a4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20a4d0: 0x3e00008
    ctx->pc = 0x20A4D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A4D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20A2A4u: goto label_20a2a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20A4D8u;
}

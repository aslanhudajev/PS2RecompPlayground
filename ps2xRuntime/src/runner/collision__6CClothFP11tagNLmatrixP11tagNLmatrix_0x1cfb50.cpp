#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: collision__6CClothFP11tagNLmatrixP11tagNLmatrix
// Address: 0x1cfb50 - 0x1d013c
void collision__6CClothFP11tagNLmatrixP11tagNLmatrix_0x1cfb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("collision__6CClothFP11tagNLmatrixP11tagNLmatrix");


    ctx->pc = 0x1cfb50u;

    // 0x1cfb50: 0x27bdfe90
    ctx->pc = 0x1cfb50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x1cfb54: 0x7fbf00b0
    ctx->pc = 0x1cfb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 31));
    // 0x1cfb58: 0x7fbe00a0
    ctx->pc = 0x1cfb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x1cfb5c: 0x7fb70090
    ctx->pc = 0x1cfb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x1cfb60: 0x7fb60080
    ctx->pc = 0x1cfb60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1cfb64: 0x7fb50070
    ctx->pc = 0x1cfb64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1cfb68: 0x7fb40060
    ctx->pc = 0x1cfb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1cfb6c: 0x7fb30050
    ctx->pc = 0x1cfb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1cfb70: 0x7fb20040
    ctx->pc = 0x1cfb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1cfb74: 0x7fb10030
    ctx->pc = 0x1cfb74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1cfb78: 0x7fb00020
    ctx->pc = 0x1cfb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1cfb7c: 0xe7ba0018
    ctx->pc = 0x1cfb7cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1cfb80: 0xe7b90014
    ctx->pc = 0x1cfb80u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1cfb84: 0xe7b80010
    ctx->pc = 0x1cfb84u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1cfb88: 0xe7b7000c
    ctx->pc = 0x1cfb88u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1cfb8c: 0xe7b60008
    ctx->pc = 0x1cfb8cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1cfb90: 0xe7b50004
    ctx->pc = 0x1cfb90u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1cfb94: 0xe7b40000
    ctx->pc = 0x1cfb94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1cfb98: 0xafa500f0
    ctx->pc = 0x1cfb98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 5));
    // 0x1cfb9c: 0xafa600e0
    ctx->pc = 0x1cfb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 6));
    // 0x1cfba0: 0x84860018
    ctx->pc = 0x1cfba0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1cfba4: 0x8485001a
    ctx->pc = 0x1cfba4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x1cfba8: 0x7080be28
    ctx->pc = 0x1cfba8u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1cfbac: 0x24030005
    ctx->pc = 0x1cfbacu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cfbb0: 0x8484001c
    ctx->pc = 0x1cfbb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1cfbb4: 0x1083000a
    ctx->pc = 0x1CFBB4u;
    {
        const bool branch_taken_0x1cfbb4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CFBB8u;
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)(uint32_t)result); }
        if (branch_taken_0x1cfbb4) {
            ctx->pc = 0x1CFBE0u;
            goto label_1cfbe0;
        }
    }
    ctx->pc = 0x1CFBBCu;
    // 0x1cfbbc: 0x2483fff8
    ctx->pc = 0x1cfbbcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x1cfbc0: 0x2c610002
    ctx->pc = 0x1cfbc0u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), 2));
    // 0x1cfbc4: 0x14200007
    ctx->pc = 0x1CFBC4u;
    {
        const bool branch_taken_0x1cfbc4 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CFBC8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 13));
        if (branch_taken_0x1cfbc4) {
            ctx->pc = 0x1CFBE4u;
            goto label_1cfbe4;
        }
    }
    ctx->pc = 0x1CFBCCu;
    // 0x1cfbcc: 0x2403000c
    ctx->pc = 0x1cfbccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
    // 0x1cfbd0: 0x10830003
    ctx->pc = 0x1CFBD0u;
    {
        const bool branch_taken_0x1cfbd0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CFBD4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 13));
        if (branch_taken_0x1cfbd0) {
            ctx->pc = 0x1CFBE0u;
            goto label_1cfbe0;
        }
    }
    ctx->pc = 0x1CFBD8u;
    // 0x1cfbd8: 0x14830145
    ctx->pc = 0x1CFBD8u;
    {
        const bool branch_taken_0x1cfbd8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x1cfbd8) {
            ctx->pc = 0x1D00F0u;
            goto label_1d00f0;
        }
    }
    ctx->pc = 0x1CFBE0u;
label_1cfbe0:
    // 0x1cfbe0: 0x2403000d
    ctx->pc = 0x1cfbe0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 13));
label_1cfbe4:
    // 0x1cfbe4: 0x10830025
    ctx->pc = 0x1CFBE4u;
    {
        const bool branch_taken_0x1cfbe4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1cfbe4) {
            ctx->pc = 0x1CFC7Cu;
            goto label_1cfc7c;
        }
    }
    ctx->pc = 0x1CFBECu;
    // 0x1cfbec: 0x2403000c
    ctx->pc = 0x1cfbecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
    // 0x1cfbf0: 0x1083001c
    ctx->pc = 0x1CFBF0u;
    {
        const bool branch_taken_0x1cfbf0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CFBF4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
        if (branch_taken_0x1cfbf0) {
            ctx->pc = 0x1CFC64u;
            goto label_1cfc64;
        }
    }
    ctx->pc = 0x1CFBF8u;
    // 0x1cfbf8: 0x24030009
    ctx->pc = 0x1cfbf8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 9));
    // 0x1cfbfc: 0x10830013
    ctx->pc = 0x1CFBFCu;
    {
        const bool branch_taken_0x1cfbfc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CFC00u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
        if (branch_taken_0x1cfbfc) {
            ctx->pc = 0x1CFC4Cu;
            goto label_1cfc4c;
        }
    }
    ctx->pc = 0x1CFC04u;
    // 0x1cfc04: 0x24030008
    ctx->pc = 0x1cfc04u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1cfc08: 0x1083000f
    ctx->pc = 0x1CFC08u;
    {
        const bool branch_taken_0x1cfc08 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CFC0Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x1cfc08) {
            ctx->pc = 0x1CFC48u;
            goto label_1cfc48;
        }
    }
    ctx->pc = 0x1CFC10u;
    // 0x1cfc10: 0x10830003
    ctx->pc = 0x1CFC10u;
    {
        const bool branch_taken_0x1cfc10 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CFC14u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 14));
        if (branch_taken_0x1cfc10) {
            ctx->pc = 0x1CFC20u;
            goto label_1cfc20;
        }
    }
    ctx->pc = 0x1CFC18u;
    // 0x1cfc18: 0x1000001e
    ctx->pc = 0x1CFC18u;
    {
        const bool branch_taken_0x1cfc18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CFC1Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 208)));
        if (branch_taken_0x1cfc18) {
            ctx->pc = 0x1CFC94u;
            goto label_1cfc94;
        }
    }
    ctx->pc = 0x1CFC20u;
label_1cfc20:
    // 0x1cfc20: 0xafa30100
    ctx->pc = 0x1cfc20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
    // 0x1cfc24: 0x2403000f
    ctx->pc = 0x1cfc24u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
    // 0x1cfc28: 0xafa30104
    ctx->pc = 0x1cfc28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
    // 0x1cfc2c: 0x24030012
    ctx->pc = 0x1cfc2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 18));
    // 0x1cfc30: 0xafa30108
    ctx->pc = 0x1cfc30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 3));
    // 0x1cfc34: 0x24030013
    ctx->pc = 0x1cfc34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 19));
    // 0x1cfc38: 0xafa3010c
    ctx->pc = 0x1cfc38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 3));
    // 0x1cfc3c: 0x24030004
    ctx->pc = 0x1cfc3cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cfc40: 0x10000013
    ctx->pc = 0x1CFC40u;
    {
        const bool branch_taken_0x1cfc40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CFC44u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
        if (branch_taken_0x1cfc40) {
            ctx->pc = 0x1CFC90u;
            goto label_1cfc90;
        }
    }
    ctx->pc = 0x1CFC48u;
label_1cfc48:
    // 0x1cfc48: 0x2403000f
    ctx->pc = 0x1cfc48u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
label_1cfc4c:
    // 0x1cfc4c: 0xafa30100
    ctx->pc = 0x1cfc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
    // 0x1cfc50: 0x24030013
    ctx->pc = 0x1cfc50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 19));
    // 0x1cfc54: 0xafa30104
    ctx->pc = 0x1cfc54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
    // 0x1cfc58: 0x24030002
    ctx->pc = 0x1cfc58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cfc5c: 0x1000000c
    ctx->pc = 0x1CFC5Cu;
    {
        const bool branch_taken_0x1cfc5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CFC60u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
        if (branch_taken_0x1cfc5c) {
            ctx->pc = 0x1CFC90u;
            goto label_1cfc90;
        }
    }
    ctx->pc = 0x1CFC64u;
label_1cfc64:
    // 0x1cfc64: 0xafa30100
    ctx->pc = 0x1cfc64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
    // 0x1cfc68: 0x24030012
    ctx->pc = 0x1cfc68u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 18));
    // 0x1cfc6c: 0xafa30104
    ctx->pc = 0x1cfc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
    // 0x1cfc70: 0x24030002
    ctx->pc = 0x1cfc70u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cfc74: 0x10000006
    ctx->pc = 0x1CFC74u;
    {
        const bool branch_taken_0x1cfc74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CFC78u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
        if (branch_taken_0x1cfc74) {
            ctx->pc = 0x1CFC90u;
            goto label_1cfc90;
        }
    }
    ctx->pc = 0x1CFC7Cu;
label_1cfc7c:
    // 0x1cfc7c: 0xafa30100
    ctx->pc = 0x1cfc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
    // 0x1cfc80: 0x24030010
    ctx->pc = 0x1cfc80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1cfc84: 0xafa30104
    ctx->pc = 0x1cfc84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
    // 0x1cfc88: 0x24030002
    ctx->pc = 0x1cfc88u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cfc8c: 0xafa300d0
    ctx->pc = 0x1cfc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_1cfc90:
    // 0x1cfc90: 0x8fa300d0
    ctx->pc = 0x1cfc90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1cfc94:
    // 0x1cfc94: 0x3082a
    ctx->pc = 0x1cfc94u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 3)));
    // 0x1cfc98: 0x10200115
    ctx->pc = 0x1CFC98u;
    {
        const bool branch_taken_0x1cfc98 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CFC9Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
        if (branch_taken_0x1cfc98) {
            ctx->pc = 0x1D00F0u;
            goto label_1d00f0;
        }
    }
    ctx->pc = 0x1CFCA0u;
    // 0x1cfca0: 0x27b60100
    ctx->pc = 0x1cfca0u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 29), 256));
label_1cfca4:
    // 0x1cfca4: 0x4bede37d
    ctx->pc = 0x1cfca4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1cfca8: 0x4bedeb7d
    ctx->pc = 0x1cfca8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1cfcac: 0x4bedf37d
    ctx->pc = 0x1cfcacu;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1cfcb0: 0x4bedfb7d
    ctx->pc = 0x1cfcb0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1cfcb4: 0x8ec20000
    ctx->pc = 0x1cfcb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1cfcb8: 0x21980
    ctx->pc = 0x1cfcb8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 6));
    // 0x1cfcbc: 0x8fa200f0
    ctx->pc = 0x1cfcbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1cfcc0: 0xc06c038
    ctx->pc = 0x1CFCC0u;
    SET_GPR_U32(ctx, 31, 0x1CFCC8u);
    ctx->pc = 0x1CFCC4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFCC8u; }
        else if (ctx->pc != 0x1CFCC8u) { ctx->pc = 0x1CFCC8u; }
    }
    if (ctx->pc != 0x1CFCC8u) { return; }
    ctx->pc = 0x1CFCC8u;
    // 0x1cfcc8: 0xc06c06f
    ctx->pc = 0x1CFCC8u;
    SET_GPR_U32(ctx, 31, 0x1CFCD0u);
    ctx->pc = 0x1CFCCCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 224)));
    ctx->pc = 0x1B01BCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B01BC_0x1b01bc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFCD0u; }
        else if (ctx->pc != 0x1CFCD0u) { ctx->pc = 0x1CFCD0u; }
    }
    if (ctx->pc != 0x1CFCD0u) { return; }
    ctx->pc = 0x1CFCD0u;
    // 0x1cfcd0: 0xc06bf55
    ctx->pc = 0x1CFCD0u;
    SET_GPR_U32(ctx, 31, 0x1CFCD8u);
    ctx->pc = 0x1CFCD4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 272));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFCD8u; }
        else if (ctx->pc != 0x1CFCD8u) { ctx->pc = 0x1CFCD8u; }
    }
    if (ctx->pc != 0x1CFCD8u) { return; }
    ctx->pc = 0x1CFCD8u;
    // 0x1cfcd8: 0xc0691c4
    ctx->pc = 0x1CFCD8u;
    SET_GPR_U32(ctx, 31, 0x1CFCE0u);
    ctx->pc = 0x1CFCDCu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4710u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlInvertMatrix_0x1a4710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFCE0u; }
        else if (ctx->pc != 0x1CFCE0u) { ctx->pc = 0x1CFCE0u; }
    }
    if (ctx->pc != 0x1CFCE0u) { return; }
    ctx->pc = 0x1CFCE0u;
    // 0x1cfce0: 0x8ef10000
    ctx->pc = 0x1cfce0u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1cfce4: 0x1e082a
    ctx->pc = 0x1cfce4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 30)));
    // 0x1cfce8: 0x102000f5
    ctx->pc = 0x1CFCE8u;
    {
        const bool branch_taken_0x1cfce8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CFCECu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1cfce8) {
            ctx->pc = 0x1D00C0u;
            goto label_1d00c0;
        }
    }
    ctx->pc = 0x1CFCF0u;
label_1cfcf0:
    // 0x1cfcf0: 0xc6200000
    ctx->pc = 0x1cfcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfcf4: 0x27b20154
    ctx->pc = 0x1cfcf4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 340));
    // 0x1cfcf8: 0x27b30158
    ctx->pc = 0x1cfcf8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 344));
    // 0x1cfcfc: 0x27a40150
    ctx->pc = 0x1cfcfcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 336));
    // 0x1cfd00: 0x27a50160
    ctx->pc = 0x1cfd00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 352));
    // 0x1cfd04: 0xe7a00150
    ctx->pc = 0x1cfd04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1cfd08: 0xc6200004
    ctx->pc = 0x1cfd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfd0c: 0xe6400000
    ctx->pc = 0x1cfd0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1cfd10: 0xc6200008
    ctx->pc = 0x1cfd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfd14: 0xc06bf00
    ctx->pc = 0x1CFD14u;
    SET_GPR_U32(ctx, 31, 0x1CFD1Cu);
    ctx->pc = 0x1CFD18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFD1Cu; }
        else if (ctx->pc != 0x1CFD1Cu) { ctx->pc = 0x1CFD1Cu; }
    }
    if (ctx->pc != 0x1CFD1Cu) { return; }
    ctx->pc = 0x1CFD1Cu;
    // 0x1cfd1c: 0x86e4001c
    ctx->pc = 0x1cfd1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 28)));
    // 0x1cfd20: 0x4480c000
    ctx->pc = 0x1cfd20u;
    *(uint32_t*)&ctx->f[24] = GPR_U32(ctx, 0);
    // 0x1cfd24: 0x2403000d
    ctx->pc = 0x1cfd24u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 13));
    // 0x1cfd28: 0x1083002a
    ctx->pc = 0x1CFD28u;
    {
        const bool branch_taken_0x1cfd28 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CFD2Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
        if (branch_taken_0x1cfd28) {
            ctx->pc = 0x1CFDD4u;
            goto label_1cfdd4;
        }
    }
    ctx->pc = 0x1CFD30u;
    // 0x1cfd30: 0x2403000b
    ctx->pc = 0x1cfd30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11));
    // 0x1cfd34: 0x1083001e
    ctx->pc = 0x1CFD34u;
    {
        const bool branch_taken_0x1cfd34 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CFD38u;
        SET_GPR_U32(ctx, 3, ((uint32_t)16409 << 16));
        if (branch_taken_0x1cfd34) {
            ctx->pc = 0x1CFDB0u;
            goto label_1cfdb0;
        }
    }
    ctx->pc = 0x1CFD3Cu;
    // 0x1cfd3c: 0x24030005
    ctx->pc = 0x1cfd3cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cfd40: 0x10830003
    ctx->pc = 0x1CFD40u;
    {
        const bool branch_taken_0x1cfd40 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1cfd40) {
            ctx->pc = 0x1CFD50u;
            goto label_1cfd50;
        }
    }
    ctx->pc = 0x1CFD48u;
    // 0x1cfd48: 0x1000002d
    ctx->pc = 0x1CFD48u;
    {
        const bool branch_taken_0x1cfd48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CFD4Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)16268 << 16));
        if (branch_taken_0x1cfd48) {
            ctx->pc = 0x1CFE00u;
            goto label_1cfe00;
        }
    }
    ctx->pc = 0x1CFD50u;
label_1cfd50:
    // 0x1cfd50: 0x8ec40000
    ctx->pc = 0x1cfd50u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1cfd54: 0x3c033f99
    ctx->pc = 0x1cfd54u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16281 << 16));
    // 0x1cfd58: 0x3463999a
    ctx->pc = 0x1cfd58u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 39322));
    // 0x1cfd5c: 0x4483a800
    ctx->pc = 0x1cfd5cu;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 3);
    // 0x1cfd60: 0x2403000e
    ctx->pc = 0x1cfd60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1cfd64: 0x10830005
    ctx->pc = 0x1CFD64u;
    {
        const bool branch_taken_0x1cfd64 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CFD68u;
        SET_GPR_U32(ctx, 3, ((uint32_t)48588 << 16));
        if (branch_taken_0x1cfd64) {
            ctx->pc = 0x1CFD7Cu;
            goto label_1cfd7c;
        }
    }
    ctx->pc = 0x1CFD6Cu;
    // 0x1cfd6c: 0x24030012
    ctx->pc = 0x1cfd6cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 18));
    // 0x1cfd70: 0x14830007
    ctx->pc = 0x1CFD70u;
    {
        const bool branch_taken_0x1cfd70 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1CFD74u;
        SET_GPR_U32(ctx, 3, ((uint32_t)48793 << 16));
        if (branch_taken_0x1cfd70) {
            ctx->pc = 0x1CFD90u;
            goto label_1cfd90;
        }
    }
    ctx->pc = 0x1CFD78u;
    // 0x1cfd78: 0x3c03bdcc
    ctx->pc = 0x1cfd78u;
    SET_GPR_U32(ctx, 3, ((uint32_t)48588 << 16));
label_1cfd7c:
    // 0x1cfd7c: 0x3463cccd
    ctx->pc = 0x1cfd7cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52429));
    // 0x1cfd80: 0x4483b000
    ctx->pc = 0x1cfd80u;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 3);
    // 0x1cfd84: 0x10000005
    ctx->pc = 0x1CFD84u;
    {
        const bool branch_taken_0x1cfd84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CFD88u;
        SET_GPR_U32(ctx, 3, ((uint32_t)49286 << 16));
        if (branch_taken_0x1cfd84) {
            ctx->pc = 0x1CFD9Cu;
            goto label_1cfd9c;
        }
    }
    ctx->pc = 0x1CFD8Cu;
    // 0x1cfd8c: 0x3c03be99
    ctx->pc = 0x1cfd8cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)48793 << 16));
label_1cfd90:
    // 0x1cfd90: 0x3463999a
    ctx->pc = 0x1cfd90u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 39322));
    // 0x1cfd94: 0x4483b000
    ctx->pc = 0x1cfd94u;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 3);
    // 0x1cfd98: 0x3c03c086
    ctx->pc = 0x1cfd98u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49286 << 16));
label_1cfd9c:
    // 0x1cfd9c: 0x34636666
    ctx->pc = 0x1cfd9cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 26214));
    // 0x1cfda0: 0x4483b800
    ctx->pc = 0x1cfda0u;
    *(uint32_t*)&ctx->f[23] = GPR_U32(ctx, 3);
    // 0x1cfda4: 0x1000001d
    ctx->pc = 0x1CFDA4u;
    {
        const bool branch_taken_0x1cfda4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CFDA8u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 29), 356));
        if (branch_taken_0x1cfda4) {
            ctx->pc = 0x1CFE1Cu;
            goto label_1cfe1c;
        }
    }
    ctx->pc = 0x1CFDACu;
    // 0x1cfdac: 0x3c034019
    ctx->pc = 0x1cfdacu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16409 << 16));
label_1cfdb0:
    // 0x1cfdb0: 0x3463999a
    ctx->pc = 0x1cfdb0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 39322));
    // 0x1cfdb4: 0x4483a800
    ctx->pc = 0x1cfdb4u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 3);
    // 0x1cfdb8: 0x3c03bf00
    ctx->pc = 0x1cfdb8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)48896 << 16));
    // 0x1cfdbc: 0x4483b000
    ctx->pc = 0x1cfdbcu;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 3);
    // 0x1cfdc0: 0x3c03c040
    ctx->pc = 0x1cfdc0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49216 << 16));
    // 0x1cfdc4: 0x4483b800
    ctx->pc = 0x1cfdc4u;
    *(uint32_t*)&ctx->f[23] = GPR_U32(ctx, 3);
    // 0x1cfdc8: 0x10000013
    ctx->pc = 0x1CFDC8u;
    {
        const bool branch_taken_0x1cfdc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cfdc8) {
            ctx->pc = 0x1CFE18u;
            goto label_1cfe18;
        }
    }
    ctx->pc = 0x1CFDD0u;
    // 0x1cfdd0: 0x3c033f80
    ctx->pc = 0x1cfdd0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
label_1cfdd4:
    // 0x1cfdd4: 0x4483a800
    ctx->pc = 0x1cfdd4u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 3);
    // 0x1cfdd8: 0x3c03bf00
    ctx->pc = 0x1cfdd8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)48896 << 16));
    // 0x1cfddc: 0x4483b000
    ctx->pc = 0x1cfddcu;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 3);
    // 0x1cfde0: 0x3c03c080
    ctx->pc = 0x1cfde0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49280 << 16));
    // 0x1cfde4: 0x4483b800
    ctx->pc = 0x1cfde4u;
    *(uint32_t*)&ctx->f[23] = GPR_U32(ctx, 3);
    // 0x1cfde8: 0x3c033e4c
    ctx->pc = 0x1cfde8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15948 << 16));
    // 0x1cfdec: 0x3463cccd
    ctx->pc = 0x1cfdecu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52429));
    // 0x1cfdf0: 0x4483c000
    ctx->pc = 0x1cfdf0u;
    *(uint32_t*)&ctx->f[24] = GPR_U32(ctx, 3);
    // 0x1cfdf4: 0x10000008
    ctx->pc = 0x1CFDF4u;
    {
        const bool branch_taken_0x1cfdf4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cfdf4) {
            ctx->pc = 0x1CFE18u;
            goto label_1cfe18;
        }
    }
    ctx->pc = 0x1CFDFCu;
    // 0x1cfdfc: 0x3c033f8c
    ctx->pc = 0x1cfdfcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16268 << 16));
label_1cfe00:
    // 0x1cfe00: 0x3463cccd
    ctx->pc = 0x1cfe00u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52429));
    // 0x1cfe04: 0x4483a800
    ctx->pc = 0x1cfe04u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 3);
    // 0x1cfe08: 0x3c03bf00
    ctx->pc = 0x1cfe08u;
    SET_GPR_U32(ctx, 3, ((uint32_t)48896 << 16));
    // 0x1cfe0c: 0x4483b000
    ctx->pc = 0x1cfe0cu;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 3);
    // 0x1cfe10: 0x3c03c040
    ctx->pc = 0x1cfe10u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49216 << 16));
    // 0x1cfe14: 0x4483b800
    ctx->pc = 0x1cfe14u;
    *(uint32_t*)&ctx->f[23] = GPR_U32(ctx, 3);
label_1cfe18:
    // 0x1cfe18: 0x27b40164
    ctx->pc = 0x1cfe18u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 29), 356));
label_1cfe1c:
    // 0x1cfe1c: 0xc6830000
    ctx->pc = 0x1cfe1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cfe20: 0x27b50168
    ctx->pc = 0x1cfe20u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 29), 360));
    // 0x1cfe24: 0xc6a00000
    ctx->pc = 0x1cfe24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfe28: 0xc7a20160
    ctx->pc = 0x1cfe28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cfe2c: 0x44800800
    ctx->pc = 0x1cfe2cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x1cfe30: 0x46161d01
    ctx->pc = 0x1cfe30u;
    ctx->f[20] = FPU_SUB_S(ctx->f[3], ctx->f[22]);
    // 0x1cfe34: 0x46180681
    ctx->pc = 0x1cfe34u;
    ctx->f[26] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
    // 0x1cfe38: 0x46011641
    ctx->pc = 0x1cfe38u;
    ctx->f[25] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1cfe3c: 0x4601a034
    ctx->pc = 0x1cfe3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cfe40: 0x4619c842
    ctx->pc = 0x1cfe40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[25], ctx->f[25]);
    // 0x1cfe44: 0x4614a002
    ctx->pc = 0x1cfe44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x1cfe48: 0x46000818
    ctx->pc = 0x1cfe48u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cfe4c: 0x4501002c
    ctx->pc = 0x1CFE4Cu;
    {
        const bool branch_taken_0x1cfe4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CFE50u;
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[26], ctx->f[26]));
        if (branch_taken_0x1cfe4c) {
            ctx->pc = 0x1CFF00u;
            goto label_1cff00;
        }
    }
    ctx->pc = 0x1CFE54u;
    // 0x1cfe54: 0x4615a802
    ctx->pc = 0x1cfe54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x1cfe58: 0x46006034
    ctx->pc = 0x1cfe58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cfe5c: 0x0
    ctx->pc = 0x1cfe5cu;
    // NOP
    // 0x1cfe60: 0x45020028
    ctx->pc = 0x1CFE60u;
    {
        const bool branch_taken_0x1cfe60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cfe60) {
            ctx->pc = 0x1CFE64u;
            ctx->f[20] = FPU_SUB_S(ctx->f[3], ctx->f[23]);
            ctx->pc = 0x1CFF04u;
            goto label_1cff04;
        }
    }
    ctx->pc = 0x1CFE68u;
    // 0x1cfe68: 0xc06c2a8
    ctx->pc = 0x1CFE68u;
    SET_GPR_U32(ctx, 31, 0x1CFE70u);
    ctx->pc = 0x1B0AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0AA0_0x1b0aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFE70u; }
        else if (ctx->pc != 0x1CFE70u) { ctx->pc = 0x1CFE70u; }
    }
    if (ctx->pc != 0x1CFE70u) { return; }
    ctx->pc = 0x1CFE70u;
    // 0x1cfe70: 0x0
    ctx->pc = 0x1cfe70u;
    // NOP
    // 0x1cfe74: 0x0
    ctx->pc = 0x1cfe74u;
    // NOP
    // 0x1cfe78: 0x4600ce43
    ctx->pc = 0x1cfe78u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[25] = copysignf(INFINITY, ctx->f[25] * 0.0f); } else ctx->f[25] = ctx->f[25] / ctx->f[0];
    // 0x1cfe7c: 0x4600a503
    ctx->pc = 0x1cfe7cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[0];
    // 0x1cfe80: 0x4600d683
    ctx->pc = 0x1cfe80u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[26] = copysignf(INFINITY, ctx->f[26] * 0.0f); } else ctx->f[26] = ctx->f[26] / ctx->f[0];
    // 0x1cfe84: 0x4615a002
    ctx->pc = 0x1cfe84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x1cfe88: 0x4600b040
    ctx->pc = 0x1cfe88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x1cfe8c: 0x4615d002
    ctx->pc = 0x1cfe8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[26], ctx->f[21]);
    // 0x1cfe90: 0x4615c8c2
    ctx->pc = 0x1cfe90u;
    ctx->f[3] = FPU_MUL_S(ctx->f[25], ctx->f[21]);
    // 0x1cfe94: 0x44801000
    ctx->pc = 0x1cfe94u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
    // 0x1cfe98: 0x4600c000
    ctx->pc = 0x1cfe98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
    // 0x1cfe9c: 0x46031080
    ctx->pc = 0x1cfe9cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1cfea0: 0xe7a20150
    ctx->pc = 0x1cfea0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1cfea4: 0xe6410000
    ctx->pc = 0x1cfea4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1cfea8: 0xe6600000
    ctx->pc = 0x1cfea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1cfeac: 0x4bede37d
    ctx->pc = 0x1cfeacu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1cfeb0: 0x4bedeb7d
    ctx->pc = 0x1cfeb0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1cfeb4: 0x4bedf37d
    ctx->pc = 0x1cfeb4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1cfeb8: 0x4bedfb7d
    ctx->pc = 0x1cfeb8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1cfebc: 0xc06c038
    ctx->pc = 0x1CFEBCu;
    SET_GPR_U32(ctx, 31, 0x1CFEC4u);
    ctx->pc = 0x1CFEC0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 272));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFEC4u; }
        else if (ctx->pc != 0x1CFEC4u) { ctx->pc = 0x1CFEC4u; }
    }
    if (ctx->pc != 0x1CFEC4u) { return; }
    ctx->pc = 0x1CFEC4u;
    // 0x1cfec4: 0x27a40150
    ctx->pc = 0x1cfec4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 336));
    // 0x1cfec8: 0xc06bf00
    ctx->pc = 0x1CFEC8u;
    SET_GPR_U32(ctx, 31, 0x1CFED0u);
    ctx->pc = 0x1CFECCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 352));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFED0u; }
        else if (ctx->pc != 0x1CFED0u) { ctx->pc = 0x1CFED0u; }
    }
    if (ctx->pc != 0x1CFED0u) { return; }
    ctx->pc = 0x1CFED0u;
    // 0x1cfed0: 0xc7a00160
    ctx->pc = 0x1cfed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfed4: 0xe6200000
    ctx->pc = 0x1cfed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1cfed8: 0xc6800000
    ctx->pc = 0x1cfed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfedc: 0xe6200004
    ctx->pc = 0x1cfedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1cfee0: 0xc6a00000
    ctx->pc = 0x1cfee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfee4: 0xe6200008
    ctx->pc = 0x1cfee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1cfee8: 0x4bff6b7e
    ctx->pc = 0x1cfee8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1cfeec: 0x4bfe6b7e
    ctx->pc = 0x1cfeecu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1cfef0: 0x4bfd6b7e
    ctx->pc = 0x1cfef0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1cfef4: 0x4bfc6b7e
    ctx->pc = 0x1cfef4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1cfef8: 0x1000006d
    ctx->pc = 0x1CFEF8u;
    {
        const bool branch_taken_0x1cfef8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CFEFCu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 80));
        if (branch_taken_0x1cfef8) {
            ctx->pc = 0x1D00B0u;
            goto label_1d00b0;
        }
    }
    ctx->pc = 0x1CFF00u;
label_1cff00:
    // 0x1cff00: 0x46171d01
    ctx->pc = 0x1cff00u;
    ctx->f[20] = FPU_SUB_S(ctx->f[3], ctx->f[23]);
label_1cff04:
    // 0x1cff04: 0x4619c882
    ctx->pc = 0x1cff04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[25], ctx->f[25]);
    // 0x1cff08: 0x4614a002
    ctx->pc = 0x1cff08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x1cff0c: 0x46001018
    ctx->pc = 0x1cff0cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1cff10: 0x44800000
    ctx->pc = 0x1cff10u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1cff14: 0x461ad042
    ctx->pc = 0x1cff14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[26], ctx->f[26]);
    // 0x1cff18: 0x4600a036
    ctx->pc = 0x1cff18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cff1c: 0x0
    ctx->pc = 0x1cff1cu;
    // NOP
    // 0x1cff20: 0x4500002c
    ctx->pc = 0x1CFF20u;
    {
        const bool branch_taken_0x1cff20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CFF24u;
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[26], ctx->f[26]));
        if (branch_taken_0x1cff20) {
            ctx->pc = 0x1CFFD4u;
            goto label_1cffd4;
        }
    }
    ctx->pc = 0x1CFF28u;
    // 0x1cff28: 0x4615a802
    ctx->pc = 0x1cff28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x1cff2c: 0x46006034
    ctx->pc = 0x1cff2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cff30: 0x0
    ctx->pc = 0x1cff30u;
    // NOP
    // 0x1cff34: 0x45020028
    ctx->pc = 0x1CFF34u;
    {
        const bool branch_taken_0x1cff34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cff34) {
            ctx->pc = 0x1CFF38u;
            ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
            ctx->pc = 0x1CFFD8u;
            goto label_1cffd8;
        }
    }
    ctx->pc = 0x1CFF3Cu;
    // 0x1cff3c: 0xc06c2a8
    ctx->pc = 0x1CFF3Cu;
    SET_GPR_U32(ctx, 31, 0x1CFF44u);
    ctx->pc = 0x1B0AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0AA0_0x1b0aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFF44u; }
        else if (ctx->pc != 0x1CFF44u) { ctx->pc = 0x1CFF44u; }
    }
    if (ctx->pc != 0x1CFF44u) { return; }
    ctx->pc = 0x1CFF44u;
    // 0x1cff44: 0x0
    ctx->pc = 0x1cff44u;
    // NOP
    // 0x1cff48: 0x0
    ctx->pc = 0x1cff48u;
    // NOP
    // 0x1cff4c: 0x4600ce43
    ctx->pc = 0x1cff4cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[25] = copysignf(INFINITY, ctx->f[25] * 0.0f); } else ctx->f[25] = ctx->f[25] / ctx->f[0];
    // 0x1cff50: 0x4600a503
    ctx->pc = 0x1cff50u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[0];
    // 0x1cff54: 0x4600d683
    ctx->pc = 0x1cff54u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[26] = copysignf(INFINITY, ctx->f[26] * 0.0f); } else ctx->f[26] = ctx->f[26] / ctx->f[0];
    // 0x1cff58: 0x4615a002
    ctx->pc = 0x1cff58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x1cff5c: 0x4600b840
    ctx->pc = 0x1cff5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x1cff60: 0x4615d002
    ctx->pc = 0x1cff60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[26], ctx->f[21]);
    // 0x1cff64: 0x4615c8c2
    ctx->pc = 0x1cff64u;
    ctx->f[3] = FPU_MUL_S(ctx->f[25], ctx->f[21]);
    // 0x1cff68: 0x44801000
    ctx->pc = 0x1cff68u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
    // 0x1cff6c: 0x4600c000
    ctx->pc = 0x1cff6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
    // 0x1cff70: 0x46031080
    ctx->pc = 0x1cff70u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1cff74: 0xe7a20150
    ctx->pc = 0x1cff74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1cff78: 0xe6410000
    ctx->pc = 0x1cff78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1cff7c: 0xe6600000
    ctx->pc = 0x1cff7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1cff80: 0x4bede37d
    ctx->pc = 0x1cff80u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1cff84: 0x4bedeb7d
    ctx->pc = 0x1cff84u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1cff88: 0x4bedf37d
    ctx->pc = 0x1cff88u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1cff8c: 0x4bedfb7d
    ctx->pc = 0x1cff8cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1cff90: 0xc06c038
    ctx->pc = 0x1CFF90u;
    SET_GPR_U32(ctx, 31, 0x1CFF98u);
    ctx->pc = 0x1CFF94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 272));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFF98u; }
        else if (ctx->pc != 0x1CFF98u) { ctx->pc = 0x1CFF98u; }
    }
    if (ctx->pc != 0x1CFF98u) { return; }
    ctx->pc = 0x1CFF98u;
    // 0x1cff98: 0x27a40150
    ctx->pc = 0x1cff98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 336));
    // 0x1cff9c: 0xc06bf00
    ctx->pc = 0x1CFF9Cu;
    SET_GPR_U32(ctx, 31, 0x1CFFA4u);
    ctx->pc = 0x1CFFA0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 352));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFFA4u; }
        else if (ctx->pc != 0x1CFFA4u) { ctx->pc = 0x1CFFA4u; }
    }
    if (ctx->pc != 0x1CFFA4u) { return; }
    ctx->pc = 0x1CFFA4u;
    // 0x1cffa4: 0xc7a00160
    ctx->pc = 0x1cffa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cffa8: 0xe6200000
    ctx->pc = 0x1cffa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1cffac: 0xc6800000
    ctx->pc = 0x1cffacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cffb0: 0xe6200004
    ctx->pc = 0x1cffb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1cffb4: 0xc6a00000
    ctx->pc = 0x1cffb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cffb8: 0xe6200008
    ctx->pc = 0x1cffb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1cffbc: 0x4bff6b7e
    ctx->pc = 0x1cffbcu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1cffc0: 0x4bfe6b7e
    ctx->pc = 0x1cffc0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1cffc4: 0x4bfd6b7e
    ctx->pc = 0x1cffc4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1cffc8: 0x4bfc6b7e
    ctx->pc = 0x1cffc8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1cffcc: 0x10000038
    ctx->pc = 0x1CFFCCu;
    {
        const bool branch_taken_0x1cffcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CFFD0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 80));
        if (branch_taken_0x1cffcc) {
            ctx->pc = 0x1D00B0u;
            goto label_1d00b0;
        }
    }
    ctx->pc = 0x1CFFD4u;
label_1cffd4:
    // 0x1cffd4: 0x46011300
    ctx->pc = 0x1cffd4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1cffd8:
    // 0x1cffd8: 0x4615a802
    ctx->pc = 0x1cffd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x1cffdc: 0x44800800
    ctx->pc = 0x1cffdcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x1cffe0: 0x0
    ctx->pc = 0x1cffe0u;
    // NOP
    // 0x1cffe4: 0x46006034
    ctx->pc = 0x1cffe4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cffe8: 0x0
    ctx->pc = 0x1cffe8u;
    // NOP
    // 0x1cffec: 0x4500002e
    ctx->pc = 0x1CFFECu;
    {
        const bool branch_taken_0x1cffec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CFFF0u;
        ctx->f[20] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
        if (branch_taken_0x1cffec) {
            ctx->pc = 0x1D00A8u;
            goto label_1d00a8;
        }
    }
    ctx->pc = 0x1CFFF4u;
    // 0x1cfff4: 0x4616a034
    ctx->pc = 0x1cfff4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cfff8: 0x0
    ctx->pc = 0x1cfff8u;
    // NOP
    // 0x1cfffc: 0x4502002b
    ctx->pc = 0x1CFFFCu;
    {
        const bool branch_taken_0x1cfffc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cfffc) {
            ctx->pc = 0x1D0000u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 80));
            ctx->pc = 0x1D00ACu;
            goto label_1d00ac;
        }
    }
    ctx->pc = 0x1D0004u;
    // 0x1d0004: 0x4617a036
    ctx->pc = 0x1d0004u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d0008: 0x0
    ctx->pc = 0x1d0008u;
    // NOP
    // 0x1d000c: 0x45010026
    ctx->pc = 0x1D000Cu;
    {
        const bool branch_taken_0x1d000c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d000c) {
            ctx->pc = 0x1D00A8u;
            goto label_1d00a8;
        }
    }
    ctx->pc = 0x1D0014u;
    // 0x1d0014: 0xc06c2a8
    ctx->pc = 0x1D0014u;
    SET_GPR_U32(ctx, 31, 0x1D001Cu);
    ctx->pc = 0x1B0AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0AA0_0x1b0aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D001Cu; }
        else if (ctx->pc != 0x1D001Cu) { ctx->pc = 0x1D001Cu; }
    }
    if (ctx->pc != 0x1D001Cu) { return; }
    ctx->pc = 0x1D001Cu;
    // 0x1d001c: 0x0
    ctx->pc = 0x1d001cu;
    // NOP
    // 0x1d0020: 0x0
    ctx->pc = 0x1d0020u;
    // NOP
    // 0x1d0024: 0x4600ce43
    ctx->pc = 0x1d0024u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[25] = copysignf(INFINITY, ctx->f[25] * 0.0f); } else ctx->f[25] = ctx->f[25] / ctx->f[0];
    // 0x1d0028: 0x4600d683
    ctx->pc = 0x1d0028u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[26] = copysignf(INFINITY, ctx->f[26] * 0.0f); } else ctx->f[26] = ctx->f[26] / ctx->f[0];
    // 0x1d002c: 0x4615d002
    ctx->pc = 0x1d002cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[26], ctx->f[21]);
    // 0x1d0030: 0x4615c882
    ctx->pc = 0x1d0030u;
    ctx->f[2] = FPU_MUL_S(ctx->f[25], ctx->f[21]);
    // 0x1d0034: 0x44800800
    ctx->pc = 0x1d0034u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x1d0038: 0x0
    ctx->pc = 0x1d0038u;
    // NOP
    // 0x1d003c: 0x4600c000
    ctx->pc = 0x1d003cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
    // 0x1d0040: 0x46020880
    ctx->pc = 0x1d0040u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1d0044: 0x4601a040
    ctx->pc = 0x1d0044u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x1d0048: 0xe7a20150
    ctx->pc = 0x1d0048u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1d004c: 0xe6410000
    ctx->pc = 0x1d004cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1d0050: 0xe6600000
    ctx->pc = 0x1d0050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1d0054: 0x4bede37d
    ctx->pc = 0x1d0054u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1d0058: 0x4bedeb7d
    ctx->pc = 0x1d0058u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1d005c: 0x4bedf37d
    ctx->pc = 0x1d005cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1d0060: 0x4bedfb7d
    ctx->pc = 0x1d0060u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1d0064: 0xc06c038
    ctx->pc = 0x1D0064u;
    SET_GPR_U32(ctx, 31, 0x1D006Cu);
    ctx->pc = 0x1D0068u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 272));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D006Cu; }
        else if (ctx->pc != 0x1D006Cu) { ctx->pc = 0x1D006Cu; }
    }
    if (ctx->pc != 0x1D006Cu) { return; }
    ctx->pc = 0x1D006Cu;
    // 0x1d006c: 0x27a40150
    ctx->pc = 0x1d006cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 336));
    // 0x1d0070: 0xc06bf00
    ctx->pc = 0x1D0070u;
    SET_GPR_U32(ctx, 31, 0x1D0078u);
    ctx->pc = 0x1D0074u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 352));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0078u; }
        else if (ctx->pc != 0x1D0078u) { ctx->pc = 0x1D0078u; }
    }
    if (ctx->pc != 0x1D0078u) { return; }
    ctx->pc = 0x1D0078u;
    // 0x1d0078: 0xc7a00160
    ctx->pc = 0x1d0078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d007c: 0xe6200000
    ctx->pc = 0x1d007cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1d0080: 0xc6800000
    ctx->pc = 0x1d0080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0084: 0xe6200004
    ctx->pc = 0x1d0084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1d0088: 0xc6a00000
    ctx->pc = 0x1d0088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d008c: 0xe6200008
    ctx->pc = 0x1d008cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1d0090: 0x4bff6b7e
    ctx->pc = 0x1d0090u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1d0094: 0x4bfe6b7e
    ctx->pc = 0x1d0094u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1d0098: 0x4bfd6b7e
    ctx->pc = 0x1d0098u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1d009c: 0x4bfc6b7e
    ctx->pc = 0x1d009cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1d00a0: 0x10000003
    ctx->pc = 0x1D00A0u;
    {
        const bool branch_taken_0x1d00a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D00A4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 80));
        if (branch_taken_0x1d00a0) {
            ctx->pc = 0x1D00B0u;
            goto label_1d00b0;
        }
    }
    ctx->pc = 0x1D00A8u;
label_1d00a8:
    // 0x1d00a8: 0x26310050
    ctx->pc = 0x1d00a8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 80));
label_1d00ac:
    // 0x1d00ac: 0x0
    ctx->pc = 0x1d00acu;
    // NOP
label_1d00b0:
    // 0x1d00b0: 0x26100001
    ctx->pc = 0x1d00b0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d00b4: 0x21e182a
    ctx->pc = 0x1d00b4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 30)));
    // 0x1d00b8: 0x1460ff0d
    ctx->pc = 0x1D00B8u;
    {
        const bool branch_taken_0x1d00b8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d00b8) {
            ctx->pc = 0x1CFCF0u;
            goto label_1cfcf0;
        }
    }
    ctx->pc = 0x1D00C0u;
label_1d00c0:
    // 0x1d00c0: 0x4bff6b7e
    ctx->pc = 0x1d00c0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1d00c4: 0x4bfe6b7e
    ctx->pc = 0x1d00c4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1d00c8: 0x4bfd6b7e
    ctx->pc = 0x1d00c8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1d00cc: 0x4bfc6b7e
    ctx->pc = 0x1d00ccu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1d00d0: 0x8fa300c0
    ctx->pc = 0x1d00d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d00d4: 0x24630001
    ctx->pc = 0x1d00d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d00d8: 0xafa300c0
    ctx->pc = 0x1d00d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x1d00dc: 0x8fa400c0
    ctx->pc = 0x1d00dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d00e0: 0x8fa300d0
    ctx->pc = 0x1d00e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d00e4: 0x83182a
    ctx->pc = 0x1d00e4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x1d00e8: 0x1460feee
    ctx->pc = 0x1D00E8u;
    {
        const bool branch_taken_0x1d00e8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D00ECu;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 4));
        if (branch_taken_0x1d00e8) {
            ctx->pc = 0x1CFCA4u;
            goto label_1cfca4;
        }
    }
    ctx->pc = 0x1D00F0u;
label_1d00f0:
    // 0x1d00f0: 0x7bbf00b0
    ctx->pc = 0x1d00f0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d00f4: 0x7bbe00a0
    ctx->pc = 0x1d00f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d00f8: 0x7bb70090
    ctx->pc = 0x1d00f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d00fc: 0x7bb60080
    ctx->pc = 0x1d00fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d0100: 0x7bb50070
    ctx->pc = 0x1d0100u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d0104: 0x7bb40060
    ctx->pc = 0x1d0104u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d0108: 0x7bb30050
    ctx->pc = 0x1d0108u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d010c: 0x7bb20040
    ctx->pc = 0x1d010cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d0110: 0x7bb10030
    ctx->pc = 0x1d0110u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d0114: 0x7bb00020
    ctx->pc = 0x1d0114u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d0118: 0xc7ba0018
    ctx->pc = 0x1d0118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1d011c: 0xc7b90014
    ctx->pc = 0x1d011cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1d0120: 0xc7b80010
    ctx->pc = 0x1d0120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1d0124: 0xc7b7000c
    ctx->pc = 0x1d0124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1d0128: 0xc7b60008
    ctx->pc = 0x1d0128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1d012c: 0xc7b50004
    ctx->pc = 0x1d012cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d0130: 0xc7b40000
    ctx->pc = 0x1d0130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d0134: 0x3e00008
    ctx->pc = 0x1D0134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0138u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CFBE0u: goto label_1cfbe0;
            case 0x1CFBE4u: goto label_1cfbe4;
            case 0x1CFC20u: goto label_1cfc20;
            case 0x1CFC48u: goto label_1cfc48;
            case 0x1CFC4Cu: goto label_1cfc4c;
            case 0x1CFC64u: goto label_1cfc64;
            case 0x1CFC7Cu: goto label_1cfc7c;
            case 0x1CFC90u: goto label_1cfc90;
            case 0x1CFC94u: goto label_1cfc94;
            case 0x1CFCA4u: goto label_1cfca4;
            case 0x1CFCF0u: goto label_1cfcf0;
            case 0x1CFD50u: goto label_1cfd50;
            case 0x1CFD7Cu: goto label_1cfd7c;
            case 0x1CFD90u: goto label_1cfd90;
            case 0x1CFD9Cu: goto label_1cfd9c;
            case 0x1CFDB0u: goto label_1cfdb0;
            case 0x1CFDD4u: goto label_1cfdd4;
            case 0x1CFE00u: goto label_1cfe00;
            case 0x1CFE18u: goto label_1cfe18;
            case 0x1CFE1Cu: goto label_1cfe1c;
            case 0x1CFF00u: goto label_1cff00;
            case 0x1CFF04u: goto label_1cff04;
            case 0x1CFFD4u: goto label_1cffd4;
            case 0x1CFFD8u: goto label_1cffd8;
            case 0x1D00A8u: goto label_1d00a8;
            case 0x1D00ACu: goto label_1d00ac;
            case 0x1D00B0u: goto label_1d00b0;
            case 0x1D00C0u: goto label_1d00c0;
            case 0x1D00F0u: goto label_1d00f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D013Cu;
}

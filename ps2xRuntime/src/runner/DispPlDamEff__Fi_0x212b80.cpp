#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DispPlDamEff__Fi
// Address: 0x212b80 - 0x212fec
void DispPlDamEff__Fi_0x212b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DispPlDamEff__Fi");


    ctx->pc = 0x212b80u;

    // 0x212b80: 0x27bdff80
    ctx->pc = 0x212b80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x212b84: 0x7fbf0070
    ctx->pc = 0x212b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x212b88: 0x7fb50060
    ctx->pc = 0x212b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x212b8c: 0x7fb40050
    ctx->pc = 0x212b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x212b90: 0x7fb30040
    ctx->pc = 0x212b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x212b94: 0x7fb20030
    ctx->pc = 0x212b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x212b98: 0x7fb10020
    ctx->pc = 0x212b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x212b9c: 0x7fb00010
    ctx->pc = 0x212b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x212ba0: 0x7080ae28
    ctx->pc = 0x212ba0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x212ba4: 0x410c0
    ctx->pc = 0x212ba4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 3));
    // 0x212ba8: 0x551023
    ctx->pc = 0x212ba8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x212bac: 0x21880
    ctx->pc = 0x212bacu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x212bb0: 0x3c020050
    ctx->pc = 0x212bb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x212bb4: 0x2442e3b0
    ctx->pc = 0x212bb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294960048));
    // 0x212bb8: 0x438021
    ctx->pc = 0x212bb8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x212bbc: 0x3c020050
    ctx->pc = 0x212bbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x212bc0: 0x2444e510
    ctx->pc = 0x212bc0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    // 0x212bc4: 0xc07ce18
    ctx->pc = 0x212BC4u;
    SET_GPR_U32(ctx, 31, 0x212BCCu);
    ctx->pc = 0x212BC8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212BCCu; }
        else if (ctx->pc != 0x212BCCu) { ctx->pc = 0x212BCCu; }
    }
    if (ctx->pc != 0x212BCCu) { return; }
    ctx->pc = 0x212BCCu;
    // 0x212bcc: 0x1c400004
    ctx->pc = 0x212BCCu;
    {
        const bool branch_taken_0x212bcc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x212BD0u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x212bcc) {
            ctx->pc = 0x212BE0u;
            goto label_212be0;
        }
    }
    ctx->pc = 0x212BD4u;
    // 0x212bd4: 0x8e020004
    ctx->pc = 0x212bd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x212bd8: 0x2442ffff
    ctx->pc = 0x212bd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x212bdc: 0xae020004
    ctx->pc = 0x212bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_212be0:
    // 0x212be0: 0x8423e504
    ctx->pc = 0x212be0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x212be4: 0x2402000a
    ctx->pc = 0x212be4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x212be8: 0x1462000a
    ctx->pc = 0x212BE8u;
    {
        const bool branch_taken_0x212be8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x212be8) {
            ctx->pc = 0x212C14u;
            goto label_212c14;
        }
    }
    ctx->pc = 0x212BF0u;
    // 0x212bf0: 0x8f838bcc
    ctx->pc = 0x212bf0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x212bf4: 0x24020001
    ctx->pc = 0x212bf4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x212bf8: 0x14620006
    ctx->pc = 0x212BF8u;
    {
        const bool branch_taken_0x212bf8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x212bf8) {
            ctx->pc = 0x212C14u;
            goto label_212c14;
        }
    }
    ctx->pc = 0x212C00u;
    // 0x212c00: 0x83838b90
    ctx->pc = 0x212c00u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937488)));
    // 0x212c04: 0x24020010
    ctx->pc = 0x212c04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x212c08: 0x14620002
    ctx->pc = 0x212C08u;
    {
        const bool branch_taken_0x212c08 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x212c08) {
            ctx->pc = 0x212C14u;
            goto label_212c14;
        }
    }
    ctx->pc = 0x212C10u;
    // 0x212c10: 0xae000004
    ctx->pc = 0x212c10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_212c14:
    // 0x212c14: 0x8e020000
    ctx->pc = 0x212c14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x212c18: 0x1040000c
    ctx->pc = 0x212C18u;
    {
        const bool branch_taken_0x212c18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x212c18) {
            ctx->pc = 0x212C4Cu;
            goto label_212c4c;
        }
    }
    ctx->pc = 0x212C20u;
    // 0x212c20: 0x8e020004
    ctx->pc = 0x212c20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x212c24: 0x10400007
    ctx->pc = 0x212C24u;
    {
        const bool branch_taken_0x212c24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x212C28u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
        if (branch_taken_0x212c24) {
            ctx->pc = 0x212C44u;
            goto label_212c44;
        }
    }
    ctx->pc = 0x212C2Cu;
    // 0x212c2c: 0x3c010050
    ctx->pc = 0x212c2cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x212c30: 0x8e030018
    ctx->pc = 0x212c30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x212c34: 0x8422e3ec
    ctx->pc = 0x212c34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960108)));
    // 0x212c38: 0x62082a
    ctx->pc = 0x212c38u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x212c3c: 0x10200003
    ctx->pc = 0x212C3Cu;
    {
        const bool branch_taken_0x212c3c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x212c3c) {
            ctx->pc = 0x212C4Cu;
            goto label_212c4c;
        }
    }
    ctx->pc = 0x212C44u;
label_212c44:
    // 0x212c44: 0xc084ad4
    ctx->pc = 0x212C44u;
    SET_GPR_U32(ctx, 31, 0x212C4Cu);
    ctx->pc = 0x212B50u;
    {
        const uint32_t __entryPc = ctx->pc;
        ClrPlDamEff__Fi_0x212b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212C4Cu; }
        else if (ctx->pc != 0x212C4Cu) { ctx->pc = 0x212C4Cu; }
    }
    if (ctx->pc != 0x212C4Cu) { return; }
    ctx->pc = 0x212C4Cu;
label_212c4c:
    // 0x212c4c: 0x8e020000
    ctx->pc = 0x212c4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x212c50: 0x10400097
    ctx->pc = 0x212C50u;
    {
        const bool branch_taken_0x212c50 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x212c50) {
            ctx->pc = 0x212EB0u;
            goto label_212eb0;
        }
    }
    ctx->pc = 0x212C58u;
    // 0x212c58: 0x3c020027
    ctx->pc = 0x212c58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x212c5c: 0x24433560
    ctx->pc = 0x212c5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 13664));
    // 0x212c60: 0x3c023e0f
    ctx->pc = 0x212c60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15887 << 16));
    // 0x212c64: 0x34425c29
    ctx->pc = 0x212c64u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 23593));
    // 0x212c68: 0x8e040014
    ctx->pc = 0x212c68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x212c6c: 0x44820000
    ctx->pc = 0x212c6cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x212c70: 0x41080
    ctx->pc = 0x212c70u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x212c74: 0x621021
    ctx->pc = 0x212c74u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x212c78: 0xc4540000
    ctx->pc = 0x212c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x212c7c: 0x4600a502
    ctx->pc = 0x212c7cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x212c80: 0x4bede37d
    ctx->pc = 0x212c80u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x212c84: 0x4bedeb7d
    ctx->pc = 0x212c84u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x212c88: 0x4bedf37d
    ctx->pc = 0x212c88u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x212c8c: 0xc06c20d
    ctx->pc = 0x212C8Cu;
    SET_GPR_U32(ctx, 31, 0x212C94u);
    ctx->pc = 0x212C90u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212C94u; }
        else if (ctx->pc != 0x212C94u) { ctx->pc = 0x212C94u; }
    }
    if (ctx->pc != 0x212C94u) { return; }
    ctx->pc = 0x212C94u;
    // 0x212c94: 0x8e030014
    ctx->pc = 0x212c94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x212c98: 0x3c02bd50
    ctx->pc = 0x212c98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48464 << 16));
    // 0x212c9c: 0x3442e560
    ctx->pc = 0x212c9cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 58720));
    // 0x212ca0: 0x44827000
    ctx->pc = 0x212ca0u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x212ca4: 0xc6010010
    ctx->pc = 0x212ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212ca8: 0x3c020027
    ctx->pc = 0x212ca8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x212cac: 0x318c0
    ctx->pc = 0x212cacu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x212cb0: 0x24423500
    ctx->pc = 0x212cb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13568));
    // 0x212cb4: 0x431021
    ctx->pc = 0x212cb4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x212cb8: 0xc4400000
    ctx->pc = 0x212cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212cbc: 0x3c020027
    ctx->pc = 0x212cbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x212cc0: 0x24423504
    ctx->pc = 0x212cc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13572));
    // 0x212cc4: 0x431021
    ctx->pc = 0x212cc4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x212cc8: 0xc44d0000
    ctx->pc = 0x212cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x212ccc: 0xc06c202
    ctx->pc = 0x212CCCu;
    SET_GPR_U32(ctx, 31, 0x212CD4u);
    ctx->pc = 0x212CD0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212CD4u; }
        else if (ctx->pc != 0x212CD4u) { ctx->pc = 0x212CD4u; }
    }
    if (ctx->pc != 0x212CD4u) { return; }
    ctx->pc = 0x212CD4u;
    // 0x212cd4: 0x3c010050
    ctx->pc = 0x212cd4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x212cd8: 0x8423e504
    ctx->pc = 0x212cd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x212cdc: 0x2402000a
    ctx->pc = 0x212cdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x212ce0: 0x14620008
    ctx->pc = 0x212CE0u;
    {
        const bool branch_taken_0x212ce0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x212ce0) {
            ctx->pc = 0x212D04u;
            goto label_212d04;
        }
    }
    ctx->pc = 0x212CE8u;
    // 0x212ce8: 0x8f838bcc
    ctx->pc = 0x212ce8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x212cec: 0x24020001
    ctx->pc = 0x212cecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x212cf0: 0x14620004
    ctx->pc = 0x212CF0u;
    {
        const bool branch_taken_0x212cf0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x212cf0) {
            ctx->pc = 0x212D04u;
            goto label_212d04;
        }
    }
    ctx->pc = 0x212CF8u;
    // 0x212cf8: 0x83828ca0
    ctx->pc = 0x212cf8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937760)));
    // 0x212cfc: 0x14400068
    ctx->pc = 0x212CFCu;
    {
        const bool branch_taken_0x212cfc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x212cfc) {
            ctx->pc = 0x212EA0u;
            goto label_212ea0;
        }
    }
    ctx->pc = 0x212D04u;
label_212d04:
    // 0x212d04: 0x8e02000c
    ctx->pc = 0x212d04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x212d08: 0x1440000a
    ctx->pc = 0x212D08u;
    {
        const bool branch_taken_0x212d08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x212D0Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
        if (branch_taken_0x212d08) {
            ctx->pc = 0x212D34u;
            goto label_212d34;
        }
    }
    ctx->pc = 0x212D10u;
    // 0x212d10: 0x8e040014
    ctx->pc = 0x212d10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x212d14: 0x2443349c
    ctx->pc = 0x212d14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 13468));
    // 0x212d18: 0x8e020018
    ctx->pc = 0x212d18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x212d1c: 0x420c0
    ctx->pc = 0x212d1cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 3));
    // 0x212d20: 0x641821
    ctx->pc = 0x212d20u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x212d24: 0x21080
    ctx->pc = 0x212d24u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x212d28: 0x431021
    ctx->pc = 0x212d28u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x212d2c: 0x8c420000
    ctx->pc = 0x212d2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x212d30: 0xae020008
    ctx->pc = 0x212d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_212d34:
    // 0x212d34: 0x8e04000c
    ctx->pc = 0x212d34u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x212d38: 0x28810026
    ctx->pc = 0x212d38u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 38));
    // 0x212d3c: 0x1020004a
    ctx->pc = 0x212D3Cu;
    {
        const bool branch_taken_0x212d3c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x212d3c) {
            ctx->pc = 0x212E68u;
            goto label_212e68;
        }
    }
    ctx->pc = 0x212D44u;
    // 0x212d44: 0x8e030014
    ctx->pc = 0x212d44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x212d48: 0x2402000b
    ctx->pc = 0x212d48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
    // 0x212d4c: 0x10620007
    ctx->pc = 0x212D4Cu;
    {
        const bool branch_taken_0x212d4c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x212D50u;
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        if (branch_taken_0x212d4c) {
            ctx->pc = 0x212D6Cu;
            goto label_212d6c;
        }
    }
    ctx->pc = 0x212D54u;
    // 0x212d54: 0x4810002
    ctx->pc = 0x212D54u;
    {
        const bool branch_taken_0x212d54 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x212D58u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x212d54) {
            ctx->pc = 0x212D60u;
            goto label_212d60;
        }
    }
    ctx->pc = 0x212D5Cu;
    // 0x212d5c: 0x21843
    ctx->pc = 0x212d5cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_212d60:
    // 0x212d60: 0x8e020008
    ctx->pc = 0x212d60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x212d64: 0x10000003
    ctx->pc = 0x212D64u;
    {
        const bool branch_taken_0x212d64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x212D68u;
        SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x212d64) {
            ctx->pc = 0x212D74u;
            goto label_212d74;
        }
    }
    ctx->pc = 0x212D6Cu;
label_212d6c:
    // 0x212d6c: 0x8e110008
    ctx->pc = 0x212d6cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x212d70: 0x0
    ctx->pc = 0x212d70u;
    // NOP
label_212d74:
    // 0x212d74: 0x4810003
    ctx->pc = 0x212D74u;
    {
        const bool branch_taken_0x212d74 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x212D78u;
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 4), 1));
        if (branch_taken_0x212d74) {
            ctx->pc = 0x212D84u;
            goto label_212d84;
        }
    }
    ctx->pc = 0x212D7Cu;
    // 0x212d7c: 0x24820001
    ctx->pc = 0x212d7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
    // 0x212d80: 0x29043
    ctx->pc = 0x212d80u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 1));
label_212d84:
    // 0x212d84: 0x3c020001
    ctx->pc = 0x212d84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x212d88: 0x34420048
    ctx->pc = 0x212d88u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 72));
    // 0x212d8c: 0x222102a
    ctx->pc = 0x212d8cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x212d90: 0x1440002e
    ctx->pc = 0x212D90u;
    {
        const bool branch_taken_0x212d90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x212D94u;
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        if (branch_taken_0x212d90) {
            ctx->pc = 0x212E4Cu;
            goto label_212e4c;
        }
    }
    ctx->pc = 0x212D98u;
    // 0x212d98: 0x3c010001
    ctx->pc = 0x212d98u;
    SET_GPR_U32(ctx, 1, ((uint32_t)1 << 16));
    // 0x212d9c: 0x34210053
    ctx->pc = 0x212d9cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 83));
    // 0x212da0: 0x221082a
    ctx->pc = 0x212da0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 1)));
    // 0x212da4: 0x1020002a
    ctx->pc = 0x212DA4u;
    {
        const bool branch_taken_0x212da4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x212DA8u;
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        if (branch_taken_0x212da4) {
            ctx->pc = 0x212E50u;
            goto label_212e50;
        }
    }
    ctx->pc = 0x212DACu;
    // 0x212dac: 0x3c020027
    ctx->pc = 0x212dacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x212db0: 0x24543590
    ctx->pc = 0x212db0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 13712));
    // 0x212db4: 0x3c023fc0
    ctx->pc = 0x212db4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16320 << 16));
    // 0x212db8: 0x44820000
    ctx->pc = 0x212db8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x212dbc: 0x0
    ctx->pc = 0x212dbcu;
    // NOP
    // 0x212dc0: 0x46140502
    ctx->pc = 0x212dc0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x212dc4: 0x4600a306
    ctx->pc = 0x212dc4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x212dc8: 0x4600a346
    ctx->pc = 0x212dc8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x212dcc: 0xc06c1b3
    ctx->pc = 0x212DCCu;
    SET_GPR_U32(ctx, 31, 0x212DD4u);
    ctx->pc = 0x212DD0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212DD4u; }
        else if (ctx->pc != 0x212DD4u) { ctx->pc = 0x212DD4u; }
    }
    if (ctx->pc != 0x212DD4u) { return; }
    ctx->pc = 0x212DD4u;
    // 0x212dd4: 0xc06b218
    ctx->pc = 0x212DD4u;
    SET_GPR_U32(ctx, 31, 0x212DDCu);
    ctx->pc = 0x212DD8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212DDCu; }
        else if (ctx->pc != 0x212DDCu) { ctx->pc = 0x212DDCu; }
    }
    if (ctx->pc != 0x212DDCu) { return; }
    ctx->pc = 0x212DDCu;
    // 0x212ddc: 0x70009e28
    ctx->pc = 0x212ddcu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_212de0:
    // 0x212de0: 0x4bede37d
    ctx->pc = 0x212de0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x212de4: 0x4bedeb7d
    ctx->pc = 0x212de4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x212de8: 0x4bedf37d
    ctx->pc = 0x212de8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x212dec: 0x4bedfb7d
    ctx->pc = 0x212decu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x212df0: 0xc68d0008
    ctx->pc = 0x212df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x212df4: 0xc68e000c
    ctx->pc = 0x212df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x212df8: 0xc06c202
    ctx->pc = 0x212DF8u;
    SET_GPR_U32(ctx, 31, 0x212E00u);
    ctx->pc = 0x212DFCu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212E00u; }
        else if (ctx->pc != 0x212E00u) { ctx->pc = 0x212E00u; }
    }
    if (ctx->pc != 0x212E00u) { return; }
    ctx->pc = 0x212E00u;
    // 0x212e00: 0xc06c157
    ctx->pc = 0x212E00u;
    SET_GPR_U32(ctx, 31, 0x212E08u);
    ctx->pc = 0x212E04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212E08u; }
        else if (ctx->pc != 0x212E08u) { ctx->pc = 0x212E08u; }
    }
    if (ctx->pc != 0x212E08u) { return; }
    ctx->pc = 0x212E08u;
    // 0x212e08: 0xc0853ac
    ctx->pc = 0x212E08u;
    SET_GPR_U32(ctx, 31, 0x212E10u);
    ctx->pc = 0x212E0Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212E10u; }
        else if (ctx->pc != 0x212E10u) { ctx->pc = 0x212E10u; }
    }
    if (ctx->pc != 0x212E10u) { return; }
    ctx->pc = 0x212E10u;
    // 0x212e10: 0x3c020001
    ctx->pc = 0x212e10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x212e14: 0x34420029
    ctx->pc = 0x212e14u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 41));
    // 0x212e18: 0xc0853ac
    ctx->pc = 0x212E18u;
    SET_GPR_U32(ctx, 31, 0x212E20u);
    ctx->pc = 0x212E1Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212E20u; }
        else if (ctx->pc != 0x212E20u) { ctx->pc = 0x212E20u; }
    }
    if (ctx->pc != 0x212E20u) { return; }
    ctx->pc = 0x212E20u;
    // 0x212e20: 0x26940010
    ctx->pc = 0x212e20u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 16));
    // 0x212e24: 0x4bff6b7e
    ctx->pc = 0x212e24u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x212e28: 0x4bfe6b7e
    ctx->pc = 0x212e28u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x212e2c: 0x4bfd6b7e
    ctx->pc = 0x212e2cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x212e30: 0x4bfc6b7e
    ctx->pc = 0x212e30u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x212e34: 0x26730001
    ctx->pc = 0x212e34u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x212e38: 0x2a620006
    ctx->pc = 0x212e38u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 6));
    // 0x212e3c: 0x1440ffe8
    ctx->pc = 0x212E3Cu;
    {
        const bool branch_taken_0x212e3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x212e3c) {
            ctx->pc = 0x212DE0u;
            goto label_212de0;
        }
    }
    ctx->pc = 0x212E44u;
    // 0x212e44: 0x10000009
    ctx->pc = 0x212E44u;
    {
        const bool branch_taken_0x212e44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x212E48u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
        if (branch_taken_0x212e44) {
            ctx->pc = 0x212E6Cu;
            goto label_212e6c;
        }
    }
    ctx->pc = 0x212E4Cu;
label_212e4c:
    // 0x212e4c: 0x4600a346
    ctx->pc = 0x212e4cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_212e50:
    // 0x212e50: 0xc06c1b3
    ctx->pc = 0x212E50u;
    SET_GPR_U32(ctx, 31, 0x212E58u);
    ctx->pc = 0x212E54u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212E58u; }
        else if (ctx->pc != 0x212E58u) { ctx->pc = 0x212E58u; }
    }
    if (ctx->pc != 0x212E58u) { return; }
    ctx->pc = 0x212E58u;
    // 0x212e58: 0xc06b218
    ctx->pc = 0x212E58u;
    SET_GPR_U32(ctx, 31, 0x212E60u);
    ctx->pc = 0x212E5Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212E60u; }
        else if (ctx->pc != 0x212E60u) { ctx->pc = 0x212E60u; }
    }
    if (ctx->pc != 0x212E60u) { return; }
    ctx->pc = 0x212E60u;
    // 0x212e60: 0xc0853ac
    ctx->pc = 0x212E60u;
    SET_GPR_U32(ctx, 31, 0x212E68u);
    ctx->pc = 0x212E64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212E68u; }
        else if (ctx->pc != 0x212E68u) { ctx->pc = 0x212E68u; }
    }
    if (ctx->pc != 0x212E68u) { return; }
    ctx->pc = 0x212E68u;
label_212e68:
    // 0x212e68: 0x8e02000c
    ctx->pc = 0x212e68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_212e6c:
    // 0x212e6c: 0x2841000a
    ctx->pc = 0x212e6cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 10));
    // 0x212e70: 0x50200004
    ctx->pc = 0x212E70u;
    {
        const bool branch_taken_0x212e70 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x212e70) {
            ctx->pc = 0x212E74u;
            SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
            ctx->pc = 0x212E84u;
            goto label_212e84;
        }
    }
    ctx->pc = 0x212E78u;
    // 0x212e78: 0x24420001
    ctx->pc = 0x212e78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x212e7c: 0x10000008
    ctx->pc = 0x212E7Cu;
    {
        const bool branch_taken_0x212e7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x212E80u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x212e7c) {
            ctx->pc = 0x212EA0u;
            goto label_212ea0;
        }
    }
    ctx->pc = 0x212E84u;
label_212e84:
    // 0x212e84: 0xc07ce18
    ctx->pc = 0x212E84u;
    SET_GPR_U32(ctx, 31, 0x212E8Cu);
    ctx->pc = 0x212E88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212E8Cu; }
        else if (ctx->pc != 0x212E8Cu) { ctx->pc = 0x212E8Cu; }
    }
    if (ctx->pc != 0x212E8Cu) { return; }
    ctx->pc = 0x212E8Cu;
    // 0x212e8c: 0x1c400004
    ctx->pc = 0x212E8Cu;
    {
        const bool branch_taken_0x212e8c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x212e8c) {
            ctx->pc = 0x212EA0u;
            goto label_212ea0;
        }
    }
    ctx->pc = 0x212E94u;
    // 0x212e94: 0x8e02000c
    ctx->pc = 0x212e94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x212e98: 0x24420001
    ctx->pc = 0x212e98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x212e9c: 0xae02000c
    ctx->pc = 0x212e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_212ea0:
    // 0x212ea0: 0x4bff6b7e
    ctx->pc = 0x212ea0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x212ea4: 0x4bfe6b7e
    ctx->pc = 0x212ea4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x212ea8: 0x4bfd6b7e
    ctx->pc = 0x212ea8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x212eac: 0x4bfc6b7e
    ctx->pc = 0x212eacu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_212eb0:
    // 0x212eb0: 0x3c020050
    ctx->pc = 0x212eb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x212eb4: 0xc07ce18
    ctx->pc = 0x212EB4u;
    SET_GPR_U32(ctx, 31, 0x212EBCu);
    ctx->pc = 0x212EB8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212EBCu; }
        else if (ctx->pc != 0x212EBCu) { ctx->pc = 0x212EBCu; }
    }
    if (ctx->pc != 0x212EBCu) { return; }
    ctx->pc = 0x212EBCu;
    // 0x212ebc: 0x1c400041
    ctx->pc = 0x212EBCu;
    {
        const bool branch_taken_0x212ebc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x212ebc) {
            ctx->pc = 0x212FC4u;
            goto label_212fc4;
        }
    }
    ctx->pc = 0x212EC4u;
    // 0x212ec4: 0x8e040014
    ctx->pc = 0x212ec4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x212ec8: 0x2403000b
    ctx->pc = 0x212ec8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11));
    // 0x212ecc: 0x1083003d
    ctx->pc = 0x212ECCu;
    {
        const bool branch_taken_0x212ecc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x212ecc) {
            ctx->pc = 0x212FC4u;
            goto label_212fc4;
        }
    }
    ctx->pc = 0x212ED4u;
    // 0x212ed4: 0x8e040004
    ctx->pc = 0x212ed4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x212ed8: 0x2403002d
    ctx->pc = 0x212ed8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 45));
    // 0x212edc: 0x14830039
    ctx->pc = 0x212EDCu;
    {
        const bool branch_taken_0x212edc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x212edc) {
            ctx->pc = 0x212FC4u;
            goto label_212fc4;
        }
    }
    ctx->pc = 0x212EE4u;
    // 0x212ee4: 0x16a0001d
    ctx->pc = 0x212EE4u;
    {
        const bool branch_taken_0x212ee4 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        if (branch_taken_0x212ee4) {
            ctx->pc = 0x212F5Cu;
            goto label_212f5c;
        }
    }
    ctx->pc = 0x212EECu;
    // 0x212eec: 0xc069fb8
    ctx->pc = 0x212EECu;
    SET_GPR_U32(ctx, 31, 0x212EF4u);
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212EF4u; }
        else if (ctx->pc != 0x212EF4u) { ctx->pc = 0x212EF4u; }
    }
    if (ctx->pc != 0x212EF4u) { return; }
    ctx->pc = 0x212EF4u;
    // 0x212ef4: 0x4410004
    ctx->pc = 0x212EF4u;
    {
        const bool branch_taken_0x212ef4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x212EF8u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x212ef4) {
            ctx->pc = 0x212F08u;
            goto label_212f08;
        }
    }
    ctx->pc = 0x212EFCu;
    // 0x212efc: 0x10600002
    ctx->pc = 0x212EFCu;
    {
        const bool branch_taken_0x212efc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x212efc) {
            ctx->pc = 0x212F08u;
            goto label_212f08;
        }
    }
    ctx->pc = 0x212F04u;
    // 0x212f04: 0x2463fffe
    ctx->pc = 0x212f04u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967294));
label_212f08:
    // 0x212f08: 0x1060000b
    ctx->pc = 0x212F08u;
    {
        const bool branch_taken_0x212f08 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x212F0Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
        if (branch_taken_0x212f08) {
            ctx->pc = 0x212F38u;
            goto label_212f38;
        }
    }
    ctx->pc = 0x212F10u;
    // 0x212f10: 0x3c020051
    ctx->pc = 0x212f10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x212f14: 0x244434f0
    ctx->pc = 0x212f14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x212f18: 0x3c020002
    ctx->pc = 0x212f18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x212f1c: 0x34450011
    ctx->pc = 0x212f1cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 17));
    // 0x212f20: 0x70003628
    ctx->pc = 0x212f20u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x212f24: 0x70003e28
    ctx->pc = 0x212f24u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x212f28: 0xc086018
    ctx->pc = 0x212F28u;
    SET_GPR_U32(ctx, 31, 0x212F30u);
    ctx->pc = 0x212F2Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212F30u; }
        else if (ctx->pc != 0x212F30u) { ctx->pc = 0x212F30u; }
    }
    if (ctx->pc != 0x212F30u) { return; }
    ctx->pc = 0x212F30u;
    // 0x212f30: 0x10000025
    ctx->pc = 0x212F30u;
    {
        const bool branch_taken_0x212f30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x212F34u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x212f30) {
            ctx->pc = 0x212FC8u;
            goto label_212fc8;
        }
    }
    ctx->pc = 0x212F38u;
label_212f38:
    // 0x212f38: 0x244434f0
    ctx->pc = 0x212f38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x212f3c: 0x3c020002
    ctx->pc = 0x212f3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x212f40: 0x34450012
    ctx->pc = 0x212f40u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 18));
    // 0x212f44: 0x70003628
    ctx->pc = 0x212f44u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x212f48: 0x70003e28
    ctx->pc = 0x212f48u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x212f4c: 0xc086018
    ctx->pc = 0x212F4Cu;
    SET_GPR_U32(ctx, 31, 0x212F54u);
    ctx->pc = 0x212F50u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212F54u; }
        else if (ctx->pc != 0x212F54u) { ctx->pc = 0x212F54u; }
    }
    if (ctx->pc != 0x212F54u) { return; }
    ctx->pc = 0x212F54u;
    // 0x212f54: 0x1000001b
    ctx->pc = 0x212F54u;
    {
        const bool branch_taken_0x212f54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x212f54) {
            ctx->pc = 0x212FC4u;
            goto label_212fc4;
        }
    }
    ctx->pc = 0x212F5Cu;
label_212f5c:
    // 0x212f5c: 0xc069fb8
    ctx->pc = 0x212F5Cu;
    SET_GPR_U32(ctx, 31, 0x212F64u);
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212F64u; }
        else if (ctx->pc != 0x212F64u) { ctx->pc = 0x212F64u; }
    }
    if (ctx->pc != 0x212F64u) { return; }
    ctx->pc = 0x212F64u;
    // 0x212f64: 0x4410004
    ctx->pc = 0x212F64u;
    {
        const bool branch_taken_0x212f64 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x212F68u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x212f64) {
            ctx->pc = 0x212F78u;
            goto label_212f78;
        }
    }
    ctx->pc = 0x212F6Cu;
    // 0x212f6c: 0x10600002
    ctx->pc = 0x212F6Cu;
    {
        const bool branch_taken_0x212f6c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x212f6c) {
            ctx->pc = 0x212F78u;
            goto label_212f78;
        }
    }
    ctx->pc = 0x212F74u;
    // 0x212f74: 0x2463fffe
    ctx->pc = 0x212f74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967294));
label_212f78:
    // 0x212f78: 0x1060000b
    ctx->pc = 0x212F78u;
    {
        const bool branch_taken_0x212f78 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x212F7Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
        if (branch_taken_0x212f78) {
            ctx->pc = 0x212FA8u;
            goto label_212fa8;
        }
    }
    ctx->pc = 0x212F80u;
    // 0x212f80: 0x3c020051
    ctx->pc = 0x212f80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x212f84: 0x244434f0
    ctx->pc = 0x212f84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x212f88: 0x3c020002
    ctx->pc = 0x212f88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x212f8c: 0x34450014
    ctx->pc = 0x212f8cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 20));
    // 0x212f90: 0x70003628
    ctx->pc = 0x212f90u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x212f94: 0x70003e28
    ctx->pc = 0x212f94u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x212f98: 0xc086018
    ctx->pc = 0x212F98u;
    SET_GPR_U32(ctx, 31, 0x212FA0u);
    ctx->pc = 0x212F9Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212FA0u; }
        else if (ctx->pc != 0x212FA0u) { ctx->pc = 0x212FA0u; }
    }
    if (ctx->pc != 0x212FA0u) { return; }
    ctx->pc = 0x212FA0u;
    // 0x212fa0: 0x10000008
    ctx->pc = 0x212FA0u;
    {
        const bool branch_taken_0x212fa0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x212fa0) {
            ctx->pc = 0x212FC4u;
            goto label_212fc4;
        }
    }
    ctx->pc = 0x212FA8u;
label_212fa8:
    // 0x212fa8: 0x244434f0
    ctx->pc = 0x212fa8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x212fac: 0x3c020002
    ctx->pc = 0x212facu;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x212fb0: 0x34450015
    ctx->pc = 0x212fb0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 21));
    // 0x212fb4: 0x70003628
    ctx->pc = 0x212fb4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x212fb8: 0x70003e28
    ctx->pc = 0x212fb8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x212fbc: 0xc086018
    ctx->pc = 0x212FBCu;
    SET_GPR_U32(ctx, 31, 0x212FC4u);
    ctx->pc = 0x212FC0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212FC4u; }
        else if (ctx->pc != 0x212FC4u) { ctx->pc = 0x212FC4u; }
    }
    if (ctx->pc != 0x212FC4u) { return; }
    ctx->pc = 0x212FC4u;
label_212fc4:
    // 0x212fc4: 0x7bbf0070
    ctx->pc = 0x212fc4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_212fc8:
    // 0x212fc8: 0x7bb50060
    ctx->pc = 0x212fc8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x212fcc: 0x7bb40050
    ctx->pc = 0x212fccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x212fd0: 0x7bb30040
    ctx->pc = 0x212fd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x212fd4: 0x7bb20030
    ctx->pc = 0x212fd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x212fd8: 0x7bb10020
    ctx->pc = 0x212fd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212fdc: 0x7bb00010
    ctx->pc = 0x212fdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212fe0: 0xc7b40000
    ctx->pc = 0x212fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x212fe4: 0x3e00008
    ctx->pc = 0x212FE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212FE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x212BE0u: goto label_212be0;
            case 0x212C14u: goto label_212c14;
            case 0x212C44u: goto label_212c44;
            case 0x212C4Cu: goto label_212c4c;
            case 0x212D04u: goto label_212d04;
            case 0x212D34u: goto label_212d34;
            case 0x212D60u: goto label_212d60;
            case 0x212D6Cu: goto label_212d6c;
            case 0x212D74u: goto label_212d74;
            case 0x212D84u: goto label_212d84;
            case 0x212DE0u: goto label_212de0;
            case 0x212E4Cu: goto label_212e4c;
            case 0x212E50u: goto label_212e50;
            case 0x212E68u: goto label_212e68;
            case 0x212E6Cu: goto label_212e6c;
            case 0x212E84u: goto label_212e84;
            case 0x212EA0u: goto label_212ea0;
            case 0x212EB0u: goto label_212eb0;
            case 0x212F08u: goto label_212f08;
            case 0x212F38u: goto label_212f38;
            case 0x212F5Cu: goto label_212f5c;
            case 0x212F78u: goto label_212f78;
            case 0x212FA8u: goto label_212fa8;
            case 0x212FC4u: goto label_212fc4;
            case 0x212FC8u: goto label_212fc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x212FECu;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: st3BossxHashira__14TrnKomono2TaskFv
// Address: 0x222990 - 0x222c38
void st3BossxHashira__14TrnKomono2TaskFv_0x222990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("st3BossxHashira__14TrnKomono2TaskFv");


    ctx->pc = 0x222990u;

    // 0x222990: 0x27bdfb90
    ctx->pc = 0x222990u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966160));
    // 0x222994: 0x7fbf0030
    ctx->pc = 0x222994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x222998: 0x7fb20020
    ctx->pc = 0x222998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22299c: 0x70809628
    ctx->pc = 0x22299cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2229a0: 0x3c020050
    ctx->pc = 0x2229a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x2229a4: 0x7fb10010
    ctx->pc = 0x2229a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2229a8: 0x2444e510
    ctx->pc = 0x2229a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    // 0x2229ac: 0xc07ce18
    ctx->pc = 0x2229ACu;
    SET_GPR_U32(ctx, 31, 0x2229B4u);
    ctx->pc = 0x2229B0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2229B4u; }
        else if (ctx->pc != 0x2229B4u) { ctx->pc = 0x2229B4u; }
    }
    if (ctx->pc != 0x2229B4u) { return; }
    ctx->pc = 0x2229B4u;
    // 0x2229b4: 0x1c40003f
    ctx->pc = 0x2229B4u;
    {
        const bool branch_taken_0x2229b4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2229b4) {
            ctx->pc = 0x222AB4u;
            goto label_222ab4;
        }
    }
    ctx->pc = 0x2229BCu;
    // 0x2229bc: 0x8f858c48
    ctx->pc = 0x2229bcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x2229c0: 0x24020210
    ctx->pc = 0x2229c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 528));
    // 0x2229c4: 0x8ca40004
    ctx->pc = 0x2229c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2229c8: 0x41840
    ctx->pc = 0x2229c8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x2229cc: 0x641821
    ctx->pc = 0x2229ccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2229d0: 0x31880
    ctx->pc = 0x2229d0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2229d4: 0x641821
    ctx->pc = 0x2229d4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2229d8: 0x31900
    ctx->pc = 0x2229d8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x2229dc: 0x651821
    ctx->pc = 0x2229dcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2229e0: 0x846300d0
    ctx->pc = 0x2229e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x2229e4: 0x14620004
    ctx->pc = 0x2229E4u;
    {
        const bool branch_taken_0x2229e4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2229e4) {
            ctx->pc = 0x2229F8u;
            goto label_2229f8;
        }
    }
    ctx->pc = 0x2229ECu;
    // 0x2229ec: 0x8e42005c
    ctx->pc = 0x2229ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x2229f0: 0x24420001
    ctx->pc = 0x2229f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2229f4: 0xae42005c
    ctx->pc = 0x2229f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
label_2229f8:
    // 0x2229f8: 0x8e43005c
    ctx->pc = 0x2229f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x2229fc: 0x240200d0
    ctx->pc = 0x2229fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 208));
    // 0x222a00: 0x1462001d
    ctx->pc = 0x222A00u;
    {
        const bool branch_taken_0x222a00 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x222A04u;
        SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
        if (branch_taken_0x222a00) {
            ctx->pc = 0x222A78u;
            goto label_222a78;
        }
    }
    ctx->pc = 0x222A08u;
    // 0x222a08: 0xc4221ac0
    ctx->pc = 0x222a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 6848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x222a0c: 0xa3a00040
    ctx->pc = 0x222a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x222a10: 0x24020005
    ctx->pc = 0x222a10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x222a14: 0xa3a20041
    ctx->pc = 0x222a14u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 65), (uint8_t)GPR_U32(ctx, 2));
    // 0x222a18: 0xa7a00042
    ctx->pc = 0x222a18u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 66), (uint16_t)GPR_U32(ctx, 0));
    // 0x222a1c: 0xa7a00046
    ctx->pc = 0x222a1cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 70), (uint16_t)GPR_U32(ctx, 0));
    // 0x222a20: 0x3c01002c
    ctx->pc = 0x222a20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x222a24: 0xc4211ac4
    ctx->pc = 0x222a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 6852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222a28: 0xe7a20048
    ctx->pc = 0x222a28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x222a2c: 0x24020016
    ctx->pc = 0x222a2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 22));
    // 0x222a30: 0x27a40040
    ctx->pc = 0x222a30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x222a34: 0x3c01002c
    ctx->pc = 0x222a34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x222a38: 0xc4201ac8
    ctx->pc = 0x222a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 6856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222a3c: 0xe7a1004c
    ctx->pc = 0x222a3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x222a40: 0xe7a00050
    ctx->pc = 0x222a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x222a44: 0xa7a00044
    ctx->pc = 0x222a44u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 68), (uint16_t)GPR_U32(ctx, 0));
    // 0x222a48: 0xc078504
    ctx->pc = 0x222A48u;
    SET_GPR_U32(ctx, 31, 0x222A50u);
    ctx->pc = 0x222A4Cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    ctx->pc = 0x1E1410u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_DynamicsTask__FP11ENEMY_TABLE_0x1e1410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222A50u; }
        else if (ctx->pc != 0x222A50u) { ctx->pc = 0x222A50u; }
    }
    if (ctx->pc != 0x222A50u) { return; }
    ctx->pc = 0x222A50u;
    // 0x222a50: 0x3c020051
    ctx->pc = 0x222a50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x222a54: 0x244434f0
    ctx->pc = 0x222a54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x222a58: 0x3c020018
    ctx->pc = 0x222a58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)24 << 16));
    // 0x222a5c: 0x34450110
    ctx->pc = 0x222a5cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 272));
    // 0x222a60: 0x70003628
    ctx->pc = 0x222a60u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x222a64: 0x70003e28
    ctx->pc = 0x222a64u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x222a68: 0xc086018
    ctx->pc = 0x222A68u;
    SET_GPR_U32(ctx, 31, 0x222A70u);
    ctx->pc = 0x222A6Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222A70u; }
        else if (ctx->pc != 0x222A70u) { ctx->pc = 0x222A70u; }
    }
    if (ctx->pc != 0x222A70u) { return; }
    ctx->pc = 0x222A70u;
    // 0x222a70: 0x24020001
    ctx->pc = 0x222a70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x222a74: 0xae420060
    ctx->pc = 0x222a74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
label_222a78:
    // 0x222a78: 0x8f858c48
    ctx->pc = 0x222a78u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x222a7c: 0x2402012e
    ctx->pc = 0x222a7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 302));
    // 0x222a80: 0x8ca40004
    ctx->pc = 0x222a80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x222a84: 0x41840
    ctx->pc = 0x222a84u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x222a88: 0x641821
    ctx->pc = 0x222a88u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x222a8c: 0x31880
    ctx->pc = 0x222a8cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x222a90: 0x641821
    ctx->pc = 0x222a90u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x222a94: 0x31900
    ctx->pc = 0x222a94u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x222a98: 0x651821
    ctx->pc = 0x222a98u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x222a9c: 0x846300d0
    ctx->pc = 0x222a9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x222aa0: 0x14620003
    ctx->pc = 0x222AA0u;
    {
        const bool branch_taken_0x222aa0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x222AA4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x222aa0) {
            ctx->pc = 0x222AB0u;
            goto label_222ab0;
        }
    }
    ctx->pc = 0x222AA8u;
    // 0x222aa8: 0x10000002
    ctx->pc = 0x222AA8u;
    {
        const bool branch_taken_0x222aa8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x222AACu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
        if (branch_taken_0x222aa8) {
            ctx->pc = 0x222AB4u;
            goto label_222ab4;
        }
    }
    ctx->pc = 0x222AB0u;
label_222ab0:
    // 0x222ab0: 0xae400064
    ctx->pc = 0x222ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 0));
label_222ab4:
    // 0x222ab4: 0x3c02002c
    ctx->pc = 0x222ab4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x222ab8: 0x70008628
    ctx->pc = 0x222ab8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x222abc: 0x24511ac0
    ctx->pc = 0x222abcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 6848));
label_222ac0:
    // 0x222ac0: 0x8e420060
    ctx->pc = 0x222ac0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x222ac4: 0x10400004
    ctx->pc = 0x222AC4u;
    {
        const bool branch_taken_0x222ac4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x222AC8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x222ac4) {
            ctx->pc = 0x222AD8u;
            goto label_222ad8;
        }
    }
    ctx->pc = 0x222ACCu;
    // 0x222acc: 0x16020025
    ctx->pc = 0x222ACCu;
    {
        const bool branch_taken_0x222acc = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        if (branch_taken_0x222acc) {
            ctx->pc = 0x222B64u;
            goto label_222b64;
        }
    }
    ctx->pc = 0x222AD4u;
    // 0x222ad4: 0x0
    ctx->pc = 0x222ad4u;
    // NOP
label_222ad8:
    // 0x222ad8: 0x4bede37d
    ctx->pc = 0x222ad8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x222adc: 0x4bedeb7d
    ctx->pc = 0x222adcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x222ae0: 0x4bedf37d
    ctx->pc = 0x222ae0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x222ae4: 0x4bedfb7d
    ctx->pc = 0x222ae4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x222ae8: 0x3c040045
    ctx->pc = 0x222ae8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)69 << 16));
    // 0x222aec: 0xc085438
    ctx->pc = 0x222AECu;
    SET_GPR_U32(ctx, 31, 0x222AF4u);
    ctx->pc = 0x222AF0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 1104));
    ctx->pc = 0x2150E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetObjCulling__FiP10OBJCULLING_0x2150e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222AF4u; }
        else if (ctx->pc != 0x222AF4u) { ctx->pc = 0x222AF4u; }
    }
    if (ctx->pc != 0x222AF4u) { return; }
    ctx->pc = 0x222AF4u;
    // 0x222af4: 0xc62d0004
    ctx->pc = 0x222af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x222af8: 0xc62e0008
    ctx->pc = 0x222af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x222afc: 0xc06c202
    ctx->pc = 0x222AFCu;
    SET_GPR_U32(ctx, 31, 0x222B04u);
    ctx->pc = 0x222B00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222B04u; }
        else if (ctx->pc != 0x222B04u) { ctx->pc = 0x222B04u; }
    }
    if (ctx->pc != 0x222B04u) { return; }
    ctx->pc = 0x222B04u;
    // 0x222b04: 0x8e420064
    ctx->pc = 0x222b04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x222b08: 0x1040000a
    ctx->pc = 0x222B08u;
    {
        const bool branch_taken_0x222b08 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x222B0Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 1104));
        if (branch_taken_0x222b08) {
            ctx->pc = 0x222B34u;
            goto label_222b34;
        }
    }
    ctx->pc = 0x222B10u;
    // 0x222b10: 0x3c024270
    ctx->pc = 0x222b10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17008 << 16));
    // 0x222b14: 0x44827000
    ctx->pc = 0x222b14u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x222b18: 0x44806800
    ctx->pc = 0x222b18u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x222b1c: 0x3c02c0a0
    ctx->pc = 0x222b1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49312 << 16));
    // 0x222b20: 0x44826000
    ctx->pc = 0x222b20u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x222b24: 0xc06c202
    ctx->pc = 0x222B24u;
    SET_GPR_U32(ctx, 31, 0x222B2Cu);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222B2Cu; }
        else if (ctx->pc != 0x222B2Cu) { ctx->pc = 0x222B2Cu; }
    }
    if (ctx->pc != 0x222B2Cu) { return; }
    ctx->pc = 0x222B2Cu;
    // 0x222b2c: 0x0
    ctx->pc = 0x222b2cu;
    // NOP
    // 0x222b30: 0x27a40450
    ctx->pc = 0x222b30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 1104));
label_222b34:
    // 0x222b34: 0xc085528
    ctx->pc = 0x222B34u;
    SET_GPR_U32(ctx, 31, 0x222B3Cu);
    ctx->pc = 0x2154A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CheckCulling__FP10OBJCULLING_0x2154a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222B3Cu; }
        else if (ctx->pc != 0x222B3Cu) { ctx->pc = 0x222B3Cu; }
    }
    if (ctx->pc != 0x222B3Cu) { return; }
    ctx->pc = 0x222B3Cu;
    // 0x222b3c: 0x10400004
    ctx->pc = 0x222B3Cu;
    {
        const bool branch_taken_0x222b3c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x222B40u;
        SET_GPR_U32(ctx, 4, ((uint32_t)69 << 16));
        if (branch_taken_0x222b3c) {
            ctx->pc = 0x222B50u;
            goto label_222b50;
        }
    }
    ctx->pc = 0x222B44u;
    // 0x222b44: 0xc0853ac
    ctx->pc = 0x222B44u;
    SET_GPR_U32(ctx, 31, 0x222B4Cu);
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222B4Cu; }
        else if (ctx->pc != 0x222B4Cu) { ctx->pc = 0x222B4Cu; }
    }
    if (ctx->pc != 0x222B4Cu) { return; }
    ctx->pc = 0x222B4Cu;
    // 0x222b4c: 0x0
    ctx->pc = 0x222b4cu;
    // NOP
label_222b50:
    // 0x222b50: 0x4bff6b7e
    ctx->pc = 0x222b50u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x222b54: 0x4bfe6b7e
    ctx->pc = 0x222b54u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x222b58: 0x4bfd6b7e
    ctx->pc = 0x222b58u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x222b5c: 0x10000024
    ctx->pc = 0x222B5Cu;
    {
        const bool branch_taken_0x222b5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x222B60u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x222b5c) {
            ctx->pc = 0x222BF0u;
            goto label_222bf0;
        }
    }
    ctx->pc = 0x222B64u;
label_222b64:
    // 0x222b64: 0x4bede37d
    ctx->pc = 0x222b64u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x222b68: 0x4bedeb7d
    ctx->pc = 0x222b68u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x222b6c: 0x4bedf37d
    ctx->pc = 0x222b6cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x222b70: 0x4bedfb7d
    ctx->pc = 0x222b70u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x222b74: 0x3c020045
    ctx->pc = 0x222b74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)69 << 16));
    // 0x222b78: 0x34440003
    ctx->pc = 0x222b78u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 3));
    // 0x222b7c: 0xc085438
    ctx->pc = 0x222B7Cu;
    SET_GPR_U32(ctx, 31, 0x222B84u);
    ctx->pc = 0x222B80u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 1120));
    ctx->pc = 0x2150E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetObjCulling__FiP10OBJCULLING_0x2150e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222B84u; }
        else if (ctx->pc != 0x222B84u) { ctx->pc = 0x222B84u; }
    }
    if (ctx->pc != 0x222B84u) { return; }
    ctx->pc = 0x222B84u;
    // 0x222b84: 0xc62d0004
    ctx->pc = 0x222b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x222b88: 0xc62e0008
    ctx->pc = 0x222b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x222b8c: 0xc06c202
    ctx->pc = 0x222B8Cu;
    SET_GPR_U32(ctx, 31, 0x222B94u);
    ctx->pc = 0x222B90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222B94u; }
        else if (ctx->pc != 0x222B94u) { ctx->pc = 0x222B94u; }
    }
    if (ctx->pc != 0x222B94u) { return; }
    ctx->pc = 0x222B94u;
    // 0x222b94: 0x8e420064
    ctx->pc = 0x222b94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x222b98: 0x1040000a
    ctx->pc = 0x222B98u;
    {
        const bool branch_taken_0x222b98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x222B9Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 1120));
        if (branch_taken_0x222b98) {
            ctx->pc = 0x222BC4u;
            goto label_222bc4;
        }
    }
    ctx->pc = 0x222BA0u;
    // 0x222ba0: 0x3c024270
    ctx->pc = 0x222ba0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17008 << 16));
    // 0x222ba4: 0x44827000
    ctx->pc = 0x222ba4u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x222ba8: 0x44806800
    ctx->pc = 0x222ba8u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x222bac: 0x3c02c0a0
    ctx->pc = 0x222bacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49312 << 16));
    // 0x222bb0: 0x44826000
    ctx->pc = 0x222bb0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x222bb4: 0xc06c202
    ctx->pc = 0x222BB4u;
    SET_GPR_U32(ctx, 31, 0x222BBCu);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222BBCu; }
        else if (ctx->pc != 0x222BBCu) { ctx->pc = 0x222BBCu; }
    }
    if (ctx->pc != 0x222BBCu) { return; }
    ctx->pc = 0x222BBCu;
    // 0x222bbc: 0x0
    ctx->pc = 0x222bbcu;
    // NOP
    // 0x222bc0: 0x27a40460
    ctx->pc = 0x222bc0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 1120));
label_222bc4:
    // 0x222bc4: 0xc085528
    ctx->pc = 0x222BC4u;
    SET_GPR_U32(ctx, 31, 0x222BCCu);
    ctx->pc = 0x2154A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CheckCulling__FP10OBJCULLING_0x2154a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222BCCu; }
        else if (ctx->pc != 0x222BCCu) { ctx->pc = 0x222BCCu; }
    }
    if (ctx->pc != 0x222BCCu) { return; }
    ctx->pc = 0x222BCCu;
    // 0x222bcc: 0x10400004
    ctx->pc = 0x222BCCu;
    {
        const bool branch_taken_0x222bcc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x222bcc) {
            ctx->pc = 0x222BE0u;
            goto label_222be0;
        }
    }
    ctx->pc = 0x222BD4u;
    // 0x222bd4: 0x3c020045
    ctx->pc = 0x222bd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)69 << 16));
    // 0x222bd8: 0xc0853ac
    ctx->pc = 0x222BD8u;
    SET_GPR_U32(ctx, 31, 0x222BE0u);
    ctx->pc = 0x222BDCu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 3));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222BE0u; }
        else if (ctx->pc != 0x222BE0u) { ctx->pc = 0x222BE0u; }
    }
    if (ctx->pc != 0x222BE0u) { return; }
    ctx->pc = 0x222BE0u;
label_222be0:
    // 0x222be0: 0x4bff6b7e
    ctx->pc = 0x222be0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x222be4: 0x4bfe6b7e
    ctx->pc = 0x222be4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x222be8: 0x4bfd6b7e
    ctx->pc = 0x222be8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x222bec: 0x4bfc6b7e
    ctx->pc = 0x222becu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_222bf0:
    // 0x222bf0: 0x26100001
    ctx->pc = 0x222bf0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x222bf4: 0x2a030002
    ctx->pc = 0x222bf4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 2));
    // 0x222bf8: 0x1460ffb1
    ctx->pc = 0x222BF8u;
    {
        const bool branch_taken_0x222bf8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x222BFCu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 12));
        if (branch_taken_0x222bf8) {
            ctx->pc = 0x222AC0u;
            goto label_222ac0;
        }
    }
    ctx->pc = 0x222C00u;
    // 0x222c00: 0x8f838cec
    ctx->pc = 0x222c00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937836)));
    // 0x222c04: 0x14600004
    ctx->pc = 0x222C04u;
    {
        const bool branch_taken_0x222c04 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x222c04) {
            ctx->pc = 0x222C18u;
            goto label_222c18;
        }
    }
    ctx->pc = 0x222C0Cu;
    // 0x222c0c: 0x8f838ce8
    ctx->pc = 0x222c0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937832)));
    // 0x222c10: 0x10600003
    ctx->pc = 0x222C10u;
    {
        const bool branch_taken_0x222c10 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x222c10) {
            ctx->pc = 0x222C20u;
            goto label_222c20;
        }
    }
    ctx->pc = 0x222C18u;
label_222c18:
    // 0x222c18: 0xc06898c
    ctx->pc = 0x222C18u;
    SET_GPR_U32(ctx, 31, 0x222C20u);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222C20u; }
        else if (ctx->pc != 0x222C20u) { ctx->pc = 0x222C20u; }
    }
    if (ctx->pc != 0x222C20u) { return; }
    ctx->pc = 0x222C20u;
label_222c20:
    // 0x222c20: 0x7bbf0030
    ctx->pc = 0x222c20u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x222c24: 0x7bb20020
    ctx->pc = 0x222c24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222c28: 0x7bb10010
    ctx->pc = 0x222c28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222c2c: 0x7bb00000
    ctx->pc = 0x222c2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222c30: 0x3e00008
    ctx->pc = 0x222C30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222C34u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 1136));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2229F8u: goto label_2229f8;
            case 0x222A78u: goto label_222a78;
            case 0x222AB0u: goto label_222ab0;
            case 0x222AB4u: goto label_222ab4;
            case 0x222AC0u: goto label_222ac0;
            case 0x222AD8u: goto label_222ad8;
            case 0x222B34u: goto label_222b34;
            case 0x222B50u: goto label_222b50;
            case 0x222B64u: goto label_222b64;
            case 0x222BC4u: goto label_222bc4;
            case 0x222BE0u: goto label_222be0;
            case 0x222BF0u: goto label_222bf0;
            case 0x222C18u: goto label_222c18;
            case 0x222C20u: goto label_222c20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x222C38u;
}

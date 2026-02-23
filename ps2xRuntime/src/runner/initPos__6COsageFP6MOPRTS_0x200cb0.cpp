#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initPos__6COsageFP6MOPRTS
// Address: 0x200cb0 - 0x200ea8
void initPos__6COsageFP6MOPRTS_0x200cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initPos__6COsageFP6MOPRTS");


    ctx->pc = 0x200cb0u;

    // 0x200cb0: 0x27bdff70
    ctx->pc = 0x200cb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x200cb4: 0x7fbf0040
    ctx->pc = 0x200cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x200cb8: 0x7fb20030
    ctx->pc = 0x200cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x200cbc: 0x7fb10020
    ctx->pc = 0x200cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x200cc0: 0x7fb00010
    ctx->pc = 0x200cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x200cc4: 0xe7b40000
    ctx->pc = 0x200cc4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x200cc8: 0x70809628
    ctx->pc = 0x200cc8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x200ccc: 0x8c840880
    ctx->pc = 0x200cccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 2176)));
    // 0x200cd0: 0x24030001
    ctx->pc = 0x200cd0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x200cd4: 0x50830005
    ctx->pc = 0x200CD4u;
    {
        const bool branch_taken_0x200cd4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x200cd4) {
            ctx->pc = 0x200CD8u;
            SET_GPR_U32(ctx, 2, ((uint32_t)16219 << 16));
            ctx->pc = 0x200CECu;
            goto label_200cec;
        }
    }
    ctx->pc = 0x200CDCu;
    // 0x200cdc: 0x8e430888
    ctx->pc = 0x200cdcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 2184)));
    // 0x200ce0: 0x1860006a
    ctx->pc = 0x200CE0u;
    {
        const bool branch_taken_0x200ce0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x200ce0) {
            ctx->pc = 0x200E8Cu;
            goto label_200e8c;
        }
    }
    ctx->pc = 0x200CE8u;
    // 0x200ce8: 0x3c023f5b
    ctx->pc = 0x200ce8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16219 << 16));
label_200cec:
    // 0x200cec: 0x3442c6a8
    ctx->pc = 0x200cecu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 50856));
    // 0x200cf0: 0xafa20050
    ctx->pc = 0x200cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x200cf4: 0x3c023dde
    ctx->pc = 0x200cf4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15838 << 16));
    // 0x200cf8: 0x34449e1b
    ctx->pc = 0x200cf8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 40475));
    // 0x200cfc: 0x3c02be0c
    ctx->pc = 0x200cfcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48652 << 16));
    // 0x200d00: 0x3443cccd
    ctx->pc = 0x200d00u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 52429));
    // 0x200d04: 0x3c02bf5b
    ctx->pc = 0x200d04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48987 << 16));
    // 0x200d08: 0x3442c6a8
    ctx->pc = 0x200d08u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 50856));
    // 0x200d0c: 0xafa20060
    ctx->pc = 0x200d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x200d10: 0xafa40054
    ctx->pc = 0x200d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
    // 0x200d14: 0xafa40064
    ctx->pc = 0x200d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 4));
    // 0x200d18: 0xafa30058
    ctx->pc = 0x200d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x200d1c: 0xafa30068
    ctx->pc = 0x200d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
    // 0x200d20: 0x4bede37d
    ctx->pc = 0x200d20u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x200d24: 0x4bedeb7d
    ctx->pc = 0x200d24u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x200d28: 0x4bedf37d
    ctx->pc = 0x200d28u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x200d2c: 0x4bedfb7d
    ctx->pc = 0x200d2cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x200d30: 0xc06c038
    ctx->pc = 0x200D30u;
    SET_GPR_U32(ctx, 31, 0x200D38u);
    ctx->pc = 0x200D34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 528));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200D38u; }
        else if (ctx->pc != 0x200D38u) { ctx->pc = 0x200D38u; }
    }
    if (ctx->pc != 0x200D38u) { return; }
    ctx->pc = 0x200D38u;
    // 0x200d38: 0x8f848c48
    ctx->pc = 0x200d38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x200d3c: 0x8c830004
    ctx->pc = 0x200d3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x200d40: 0x31040
    ctx->pc = 0x200d40u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x200d44: 0x431021
    ctx->pc = 0x200d44u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x200d48: 0x21080
    ctx->pc = 0x200d48u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x200d4c: 0x431021
    ctx->pc = 0x200d4cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x200d50: 0x21100
    ctx->pc = 0x200d50u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x200d54: 0x821021
    ctx->pc = 0x200d54u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x200d58: 0xc06c06f
    ctx->pc = 0x200D58u;
    SET_GPR_U32(ctx, 31, 0x200D60u);
    ctx->pc = 0x200D5Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1B01BCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B01BC_0x1b01bc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200D60u; }
        else if (ctx->pc != 0x200D60u) { ctx->pc = 0x200D60u; }
    }
    if (ctx->pc != 0x200D60u) { return; }
    ctx->pc = 0x200D60u;
    // 0x200d60: 0x27a40050
    ctx->pc = 0x200d60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x200d64: 0xc06bf00
    ctx->pc = 0x200D64u;
    SET_GPR_U32(ctx, 31, 0x200D6Cu);
    ctx->pc = 0x200D68u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 112));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200D6Cu; }
        else if (ctx->pc != 0x200D6Cu) { ctx->pc = 0x200D6Cu; }
    }
    if (ctx->pc != 0x200D6Cu) { return; }
    ctx->pc = 0x200D6Cu;
    // 0x200d6c: 0x27a40060
    ctx->pc = 0x200d6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
    // 0x200d70: 0xc06bf00
    ctx->pc = 0x200D70u;
    SET_GPR_U32(ctx, 31, 0x200D78u);
    ctx->pc = 0x200D74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 128));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200D78u; }
        else if (ctx->pc != 0x200D78u) { ctx->pc = 0x200D78u; }
    }
    if (ctx->pc != 0x200D78u) { return; }
    ctx->pc = 0x200D78u;
    // 0x200d78: 0x4bff6b7e
    ctx->pc = 0x200d78u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x200d7c: 0x4bfe6b7e
    ctx->pc = 0x200d7cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x200d80: 0x4bfd6b7e
    ctx->pc = 0x200d80u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x200d84: 0x4bfc6b7e
    ctx->pc = 0x200d84u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x200d88: 0x70008628
    ctx->pc = 0x200d88u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x200d8c: 0x72408e28
    ctx->pc = 0x200d8cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_200d90:
    // 0x200d90: 0x2a010004
    ctx->pc = 0x200d90u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 4));
    // 0x200d94: 0x10200016
    ctx->pc = 0x200D94u;
    {
        const bool branch_taken_0x200d94 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x200d94) {
            ctx->pc = 0x200DF0u;
            goto label_200df0;
        }
    }
    ctx->pc = 0x200D9Cu;
    // 0x200d9c: 0x44900800
    ctx->pc = 0x200d9cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 16);
    // 0x200da0: 0x3c023e99
    ctx->pc = 0x200da0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16025 << 16));
    // 0x200da4: 0x46800860
    ctx->pc = 0x200da4u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x200da8: 0x3442999a
    ctx->pc = 0x200da8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39322));
    // 0x200dac: 0xc7a00074
    ctx->pc = 0x200dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200db0: 0xc7ac0070
    ctx->pc = 0x200db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x200db4: 0xc7ae0078
    ctx->pc = 0x200db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x200db8: 0x26240440
    ctx->pc = 0x200db8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 1088));
    // 0x200dbc: 0x44821000
    ctx->pc = 0x200dbcu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x200dc0: 0x0
    ctx->pc = 0x200dc0u;
    // NOP
    // 0x200dc4: 0x46011502
    ctx->pc = 0x200dc4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x200dc8: 0xc080134
    ctx->pc = 0x200DC8u;
    SET_GPR_U32(ctx, 31, 0x200DD0u);
    ctx->pc = 0x200DCCu;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    ctx->pc = 0x2004D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initPos__6CChainFfff_0x2004d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200DD0u; }
        else if (ctx->pc != 0x200DD0u) { ctx->pc = 0x200DD0u; }
    }
    if (ctx->pc != 0x200DD0u) { return; }
    ctx->pc = 0x200DD0u;
    // 0x200dd0: 0xc7a00084
    ctx->pc = 0x200dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200dd4: 0xc7ac0080
    ctx->pc = 0x200dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x200dd8: 0xc7ae0088
    ctx->pc = 0x200dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x200ddc: 0x72202628
    ctx->pc = 0x200ddcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x200de0: 0xc080134
    ctx->pc = 0x200DE0u;
    SET_GPR_U32(ctx, 31, 0x200DE8u);
    ctx->pc = 0x200DE4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    ctx->pc = 0x2004D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initPos__6CChainFfff_0x2004d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200DE8u; }
        else if (ctx->pc != 0x200DE8u) { ctx->pc = 0x200DE8u; }
    }
    if (ctx->pc != 0x200DE8u) { return; }
    ctx->pc = 0x200DE8u;
    // 0x200de8: 0x10000015
    ctx->pc = 0x200DE8u;
    {
        const bool branch_taken_0x200de8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x200de8) {
            ctx->pc = 0x200E40u;
            goto label_200e40;
        }
    }
    ctx->pc = 0x200DF0u;
label_200df0:
    // 0x200df0: 0x44900800
    ctx->pc = 0x200df0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 16);
    // 0x200df4: 0x3c023dcc
    ctx->pc = 0x200df4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15820 << 16));
    // 0x200df8: 0x46800860
    ctx->pc = 0x200df8u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x200dfc: 0x3442cccd
    ctx->pc = 0x200dfcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 52429));
    // 0x200e00: 0xc7a00074
    ctx->pc = 0x200e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200e04: 0xc7ac0070
    ctx->pc = 0x200e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x200e08: 0xc7ae0078
    ctx->pc = 0x200e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x200e0c: 0x26240440
    ctx->pc = 0x200e0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 1088));
    // 0x200e10: 0x44821000
    ctx->pc = 0x200e10u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x200e14: 0x0
    ctx->pc = 0x200e14u;
    // NOP
    // 0x200e18: 0x46011502
    ctx->pc = 0x200e18u;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x200e1c: 0xc080134
    ctx->pc = 0x200E1Cu;
    SET_GPR_U32(ctx, 31, 0x200E24u);
    ctx->pc = 0x200E20u;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    ctx->pc = 0x2004D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initPos__6CChainFfff_0x2004d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200E24u; }
        else if (ctx->pc != 0x200E24u) { ctx->pc = 0x200E24u; }
    }
    if (ctx->pc != 0x200E24u) { return; }
    ctx->pc = 0x200E24u;
    // 0x200e24: 0xc7a00084
    ctx->pc = 0x200e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200e28: 0xc7ac0080
    ctx->pc = 0x200e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x200e2c: 0xc7ae0088
    ctx->pc = 0x200e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x200e30: 0x72202628
    ctx->pc = 0x200e30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x200e34: 0xc080134
    ctx->pc = 0x200E34u;
    SET_GPR_U32(ctx, 31, 0x200E3Cu);
    ctx->pc = 0x200E38u;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    ctx->pc = 0x2004D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initPos__6CChainFfff_0x2004d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200E3Cu; }
        else if (ctx->pc != 0x200E3Cu) { ctx->pc = 0x200E3Cu; }
    }
    if (ctx->pc != 0x200E3Cu) { return; }
    ctx->pc = 0x200E3Cu;
    // 0x200e3c: 0x0
    ctx->pc = 0x200e3cu;
    // NOP
label_200e40:
    // 0x200e40: 0x44806000
    ctx->pc = 0x200e40u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x200e44: 0x26240440
    ctx->pc = 0x200e44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 1088));
    // 0x200e48: 0x46006346
    ctx->pc = 0x200e48u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x200e4c: 0xc080194
    ctx->pc = 0x200E4Cu;
    SET_GPR_U32(ctx, 31, 0x200E54u);
    ctx->pc = 0x200E50u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x200650u;
    {
        const uint32_t __entryPc = ctx->pc;
        setVel__6CChainFfff_0x200650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200E54u; }
        else if (ctx->pc != 0x200E54u) { ctx->pc = 0x200E54u; }
    }
    if (ctx->pc != 0x200E54u) { return; }
    ctx->pc = 0x200E54u;
    // 0x200e54: 0x44806000
    ctx->pc = 0x200e54u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x200e58: 0x72202628
    ctx->pc = 0x200e58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x200e5c: 0x46006346
    ctx->pc = 0x200e5cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x200e60: 0xc080194
    ctx->pc = 0x200E60u;
    SET_GPR_U32(ctx, 31, 0x200E68u);
    ctx->pc = 0x200E64u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x200650u;
    {
        const uint32_t __entryPc = ctx->pc;
        setVel__6CChainFfff_0x200650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200E68u; }
        else if (ctx->pc != 0x200E68u) { ctx->pc = 0x200E68u; }
    }
    if (ctx->pc != 0x200E68u) { return; }
    ctx->pc = 0x200E68u;
    // 0x200e68: 0x26100001
    ctx->pc = 0x200e68u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x200e6c: 0x2a030008
    ctx->pc = 0x200e6cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 8));
    // 0x200e70: 0x1460ffc7
    ctx->pc = 0x200E70u;
    {
        const bool branch_taken_0x200e70 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x200E74u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 136));
        if (branch_taken_0x200e70) {
            ctx->pc = 0x200D90u;
            goto label_200d90;
        }
    }
    ctx->pc = 0x200E78u;
    // 0x200e78: 0x24030002
    ctx->pc = 0x200e78u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x200e7c: 0xae430880
    ctx->pc = 0x200e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2176), GPR_U32(ctx, 3));
    // 0x200e80: 0x8e430888
    ctx->pc = 0x200e80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 2184)));
    // 0x200e84: 0x2463ffff
    ctx->pc = 0x200e84u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x200e88: 0xae430888
    ctx->pc = 0x200e88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2184), GPR_U32(ctx, 3));
label_200e8c:
    // 0x200e8c: 0x7bbf0040
    ctx->pc = 0x200e8cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x200e90: 0x7bb20030
    ctx->pc = 0x200e90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x200e94: 0x7bb10020
    ctx->pc = 0x200e94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x200e98: 0x7bb00010
    ctx->pc = 0x200e98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200e9c: 0xc7b40000
    ctx->pc = 0x200e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x200ea0: 0x3e00008
    ctx->pc = 0x200EA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200EA4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x200CECu: goto label_200cec;
            case 0x200D90u: goto label_200d90;
            case 0x200DF0u: goto label_200df0;
            case 0x200E40u: goto label_200e40;
            case 0x200E8Cu: goto label_200e8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x200EA8u;
}

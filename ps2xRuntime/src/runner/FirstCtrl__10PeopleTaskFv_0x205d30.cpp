#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: FirstCtrl__10PeopleTaskFv
// Address: 0x205d30 - 0x205f54
void FirstCtrl__10PeopleTaskFv_0x205d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("FirstCtrl__10PeopleTaskFv");


    ctx->pc = 0x205d30u;

    // 0x205d30: 0x27bdffb0
    ctx->pc = 0x205d30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x205d34: 0x7fbf0030
    ctx->pc = 0x205d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x205d38: 0x7fb10020
    ctx->pc = 0x205d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x205d3c: 0x7fb00010
    ctx->pc = 0x205d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x205d40: 0xe7b60008
    ctx->pc = 0x205d40u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x205d44: 0xe7b50004
    ctx->pc = 0x205d44u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x205d48: 0xe7b40000
    ctx->pc = 0x205d48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x205d4c: 0x8c821dc8
    ctx->pc = 0x205d4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 7624)));
    // 0x205d50: 0x70808e28
    ctx->pc = 0x205d50u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x205d54: 0x10400006
    ctx->pc = 0x205D54u;
    {
        const bool branch_taken_0x205d54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x205D58u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x205d54) {
            ctx->pc = 0x205D70u;
            goto label_205d70;
        }
    }
    ctx->pc = 0x205D5Cu;
    // 0x205d5c: 0x2442ffff
    ctx->pc = 0x205d5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x205d60: 0x14400035
    ctx->pc = 0x205D60u;
    {
        const bool branch_taken_0x205d60 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x205D64u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7624), GPR_U32(ctx, 2));
        if (branch_taken_0x205d60) {
            ctx->pc = 0x205E38u;
            goto label_205e38;
        }
    }
    ctx->pc = 0x205D68u;
    // 0x205d68: 0x10000033
    ctx->pc = 0x205D68u;
    {
        const bool branch_taken_0x205d68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x205D6Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x205d68) {
            ctx->pc = 0x205E38u;
            goto label_205e38;
        }
    }
    ctx->pc = 0x205D70u;
label_205d70:
    // 0x205d70: 0x8f858c48
    ctx->pc = 0x205d70u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x205d74: 0x8e260028
    ctx->pc = 0x205d74u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x205d78: 0x8ca40004
    ctx->pc = 0x205d78u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x205d7c: 0x84c20004
    ctx->pc = 0x205d7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x205d80: 0x41840
    ctx->pc = 0x205d80u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x205d84: 0x641821
    ctx->pc = 0x205d84u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x205d88: 0x31880
    ctx->pc = 0x205d88u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x205d8c: 0x641821
    ctx->pc = 0x205d8cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x205d90: 0x33900
    ctx->pc = 0x205d90u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 3), 4));
    // 0x205d94: 0xe52021
    ctx->pc = 0x205d94u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x205d98: 0x848300d0
    ctx->pc = 0x205d98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x205d9c: 0x1462000c
    ctx->pc = 0x205D9Cu;
    {
        const bool branch_taken_0x205d9c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x205d9c) {
            ctx->pc = 0x205DD0u;
            goto label_205dd0;
        }
    }
    ctx->pc = 0x205DA4u;
    // 0x205da4: 0x84c20006
    ctx->pc = 0x205da4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x205da8: 0xc48100c0
    ctx->pc = 0x205da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x205dac: 0x44820000
    ctx->pc = 0x205dacu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x205db0: 0x0
    ctx->pc = 0x205db0u;
    // NOP
    // 0x205db4: 0x46800020
    ctx->pc = 0x205db4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x205db8: 0x46000834
    ctx->pc = 0x205db8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x205dbc: 0x0
    ctx->pc = 0x205dbcu;
    // NOP
    // 0x205dc0: 0x45010003
    ctx->pc = 0x205DC0u;
    {
        const bool branch_taken_0x205dc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x205dc0) {
            ctx->pc = 0x205DD0u;
            goto label_205dd0;
        }
    }
    ctx->pc = 0x205DC8u;
    // 0x205dc8: 0x1000001b
    ctx->pc = 0x205DC8u;
    {
        const bool branch_taken_0x205dc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x205DCCu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x205dc8) {
            ctx->pc = 0x205E38u;
            goto label_205e38;
        }
    }
    ctx->pc = 0x205DD0u;
label_205dd0:
    // 0x205dd0: 0x8e221d74
    ctx->pc = 0x205dd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 7540)));
    // 0x205dd4: 0x30420100
    ctx->pc = 0x205dd4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x205dd8: 0x10400017
    ctx->pc = 0x205DD8u;
    {
        const bool branch_taken_0x205dd8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x205dd8) {
            ctx->pc = 0x205E38u;
            goto label_205e38;
        }
    }
    ctx->pc = 0x205DE0u;
    // 0x205de0: 0x4bede37d
    ctx->pc = 0x205de0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x205de4: 0x4bedeb7d
    ctx->pc = 0x205de4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x205de8: 0x4bedf37d
    ctx->pc = 0x205de8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x205dec: 0x4bedfb7d
    ctx->pc = 0x205decu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x205df0: 0xa71021
    ctx->pc = 0x205df0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x205df4: 0xc06c038
    ctx->pc = 0x205DF4u;
    SET_GPR_U32(ctx, 31, 0x205DFCu);
    ctx->pc = 0x205DF8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205DFCu; }
        else if (ctx->pc != 0x205DFCu) { ctx->pc = 0x205DFCu; }
    }
    if (ctx->pc != 0x205DFCu) { return; }
    ctx->pc = 0x205DFCu;
    // 0x205dfc: 0x26240bbc
    ctx->pc = 0x205dfcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 3004));
    // 0x205e00: 0xc06bf00
    ctx->pc = 0x205E00u;
    SET_GPR_U32(ctx, 31, 0x205E08u);
    ctx->pc = 0x205E04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205E08u; }
        else if (ctx->pc != 0x205E08u) { ctx->pc = 0x205E08u; }
    }
    if (ctx->pc != 0x205E08u) { return; }
    ctx->pc = 0x205E08u;
    // 0x205e08: 0x4bff6b7e
    ctx->pc = 0x205e08u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x205e0c: 0x4bfe6b7e
    ctx->pc = 0x205e0cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x205e10: 0x4bfd6b7e
    ctx->pc = 0x205e10u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x205e14: 0x4bfc6b7e
    ctx->pc = 0x205e14u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x205e18: 0xc7ad0044
    ctx->pc = 0x205e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x205e1c: 0xc7ae0048
    ctx->pc = 0x205e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x205e20: 0xc62f1ce0
    ctx->pc = 0x205e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x205e24: 0xc074f64
    ctx->pc = 0x205E24u;
    SET_GPR_U32(ctx, 31, 0x205E2Cu);
    ctx->pc = 0x205E28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1D3D90u;
    {
        const uint32_t __entryPc = ctx->pc;
        CheckOnSc__Fffff_0x1d3d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205E2Cu; }
        else if (ctx->pc != 0x205E2Cu) { ctx->pc = 0x205E2Cu; }
    }
    if (ctx->pc != 0x205E2Cu) { return; }
    ctx->pc = 0x205E2Cu;
    // 0x205e2c: 0x14400002
    ctx->pc = 0x205E2Cu;
    {
        const bool branch_taken_0x205e2c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x205e2c) {
            ctx->pc = 0x205E38u;
            goto label_205e38;
        }
    }
    ctx->pc = 0x205E34u;
    // 0x205e34: 0x24100001
    ctx->pc = 0x205e34u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
label_205e38:
    // 0x205e38: 0x1200000f
    ctx->pc = 0x205E38u;
    {
        const bool branch_taken_0x205e38 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x205e38) {
            ctx->pc = 0x205E78u;
            goto label_205e78;
        }
    }
    ctx->pc = 0x205E40u;
    // 0x205e40: 0xc068a84
    ctx->pc = 0x205E40u;
    SET_GPR_U32(ctx, 31, 0x205E48u);
    ctx->pc = 0x1A2A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        ChildAllClose_0x1a2a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205E48u; }
        else if (ctx->pc != 0x205E48u) { ctx->pc = 0x205E48u; }
    }
    if (ctx->pc != 0x205E48u) { return; }
    ctx->pc = 0x205E48u;
    // 0x205e48: 0x82231e00
    ctx->pc = 0x205e48u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 7680)));
    // 0x205e4c: 0x2402ffff
    ctx->pc = 0x205e4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x205e50: 0x10620005
    ctx->pc = 0x205E50u;
    {
        const bool branch_taken_0x205e50 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x205E54u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x205e50) {
            ctx->pc = 0x205E68u;
            goto label_205e68;
        }
    }
    ctx->pc = 0x205E58u;
    // 0x205e58: 0x31880
    ctx->pc = 0x205e58u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x205e5c: 0x27828b60
    ctx->pc = 0x205e5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 28), 4294937440));
    // 0x205e60: 0x431021
    ctx->pc = 0x205e60u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x205e64: 0xac400000
    ctx->pc = 0x205e64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_205e68:
    // 0x205e68: 0xc24cbe8
    ctx->pc = 0x205E68u;
    SET_GPR_U32(ctx, 31, 0x205E70u);
    ctx->pc = 0x932FA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnmIDClear__FP9EnemyTask_0x932fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205E70u; }
        else if (ctx->pc != 0x205E70u) { ctx->pc = 0x205E70u; }
    }
    if (ctx->pc != 0x205E70u) { return; }
    ctx->pc = 0x205E70u;
    // 0x205e70: 0xc06898c
    ctx->pc = 0x205E70u;
    SET_GPR_U32(ctx, 31, 0x205E78u);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205E78u; }
        else if (ctx->pc != 0x205E78u) { ctx->pc = 0x205E78u; }
    }
    if (ctx->pc != 0x205E78u) { return; }
    ctx->pc = 0x205E78u;
label_205e78:
    // 0x205e78: 0x8e221dd0
    ctx->pc = 0x205e78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 7632)));
    // 0x205e7c: 0x10400003
    ctx->pc = 0x205E7Cu;
    {
        const bool branch_taken_0x205e7c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x205E80u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x205e7c) {
            ctx->pc = 0x205E8Cu;
            goto label_205e8c;
        }
    }
    ctx->pc = 0x205E84u;
    // 0x205e84: 0xc082790
    ctx->pc = 0x205E84u;
    SET_GPR_U32(ctx, 31, 0x205E8Cu);
    ctx->pc = 0x209E40u;
    {
        const uint32_t __entryPc = ctx->pc;
        turnTarget__10PeopleTaskFv_0x209e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205E8Cu; }
        else if (ctx->pc != 0x205E8Cu) { ctx->pc = 0x205E8Cu; }
    }
    if (ctx->pc != 0x205E8Cu) { return; }
    ctx->pc = 0x205E8Cu;
label_205e8c:
    // 0x205e8c: 0x8e231dd0
    ctx->pc = 0x205e8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7632)));
    // 0x205e90: 0x2402ffff
    ctx->pc = 0x205e90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x205e94: 0x14620005
    ctx->pc = 0x205E94u;
    {
        const bool branch_taken_0x205e94 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x205e94) {
            ctx->pc = 0x205EACu;
            goto label_205eac;
        }
    }
    ctx->pc = 0x205E9Cu;
    // 0x205e9c: 0xc6351dd8
    ctx->pc = 0x205e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x205ea0: 0xc6361ddc
    ctx->pc = 0x205ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x205ea4: 0x1000000d
    ctx->pc = 0x205EA4u;
    {
        const bool branch_taken_0x205ea4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x205EA8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        if (branch_taken_0x205ea4) {
            ctx->pc = 0x205EDCu;
            goto label_205edc;
        }
    }
    ctx->pc = 0x205EACu;
label_205eac:
    // 0x205eac: 0x8f848c48
    ctx->pc = 0x205eacu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x205eb0: 0x8c830004
    ctx->pc = 0x205eb0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x205eb4: 0x31040
    ctx->pc = 0x205eb4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x205eb8: 0x431021
    ctx->pc = 0x205eb8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x205ebc: 0x21080
    ctx->pc = 0x205ebcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x205ec0: 0x431021
    ctx->pc = 0x205ec0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x205ec4: 0x21100
    ctx->pc = 0x205ec4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x205ec8: 0x821021
    ctx->pc = 0x205ec8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x205ecc: 0xc4540090
    ctx->pc = 0x205eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x205ed0: 0xc4550094
    ctx->pc = 0x205ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x205ed4: 0xc4560098
    ctx->pc = 0x205ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x205ed8: 0x0
    ctx->pc = 0x205ed8u;
    // NOP
label_205edc:
    // 0x205edc: 0x8e220030
    ctx->pc = 0x205edcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x205ee0: 0xc4410000
    ctx->pc = 0x205ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x205ee4: 0xc4400008
    ctx->pc = 0x205ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x205ee8: 0x46140841
    ctx->pc = 0x205ee8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x205eec: 0x46160001
    ctx->pc = 0x205eecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x205ef0: 0x4601081a
    ctx->pc = 0x205ef0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x205ef4: 0xc06c2a8
    ctx->pc = 0x205EF4u;
    SET_GPR_U32(ctx, 31, 0x205EFCu);
    ctx->pc = 0x205EF8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    ctx->pc = 0x1B0AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0AA0_0x1b0aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205EFCu; }
        else if (ctx->pc != 0x205EFCu) { ctx->pc = 0x205EFCu; }
    }
    if (ctx->pc != 0x205EFCu) { return; }
    ctx->pc = 0x205EFCu;
    // 0x205efc: 0xe6201df8
    ctx->pc = 0x205efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 7672), bits); }
    // 0x205f00: 0x8e220030
    ctx->pc = 0x205f00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x205f04: 0xc4420000
    ctx->pc = 0x205f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x205f08: 0xc4410004
    ctx->pc = 0x205f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x205f0c: 0xc4400008
    ctx->pc = 0x205f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x205f10: 0x46141081
    ctx->pc = 0x205f10u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[20]);
    // 0x205f14: 0x46150841
    ctx->pc = 0x205f14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
    // 0x205f18: 0x46021082
    ctx->pc = 0x205f18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x205f1c: 0x46010842
    ctx->pc = 0x205f1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x205f20: 0x46160001
    ctx->pc = 0x205f20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x205f24: 0x46011018
    ctx->pc = 0x205f24u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x205f28: 0xc06c2a8
    ctx->pc = 0x205F28u;
    SET_GPR_U32(ctx, 31, 0x205F30u);
    ctx->pc = 0x205F2Cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    ctx->pc = 0x1B0AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0AA0_0x1b0aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205F30u; }
        else if (ctx->pc != 0x205F30u) { ctx->pc = 0x205F30u; }
    }
    if (ctx->pc != 0x205F30u) { return; }
    ctx->pc = 0x205F30u;
    // 0x205f30: 0xe6201dfc
    ctx->pc = 0x205f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 7676), bits); }
    // 0x205f34: 0x7bbf0030
    ctx->pc = 0x205f34u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x205f38: 0x7bb10020
    ctx->pc = 0x205f38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x205f3c: 0x7bb00010
    ctx->pc = 0x205f3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x205f40: 0xc7b60008
    ctx->pc = 0x205f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x205f44: 0xc7b50004
    ctx->pc = 0x205f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x205f48: 0xc7b40000
    ctx->pc = 0x205f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x205f4c: 0x3e00008
    ctx->pc = 0x205F4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205F50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x205D70u: goto label_205d70;
            case 0x205DD0u: goto label_205dd0;
            case 0x205E38u: goto label_205e38;
            case 0x205E68u: goto label_205e68;
            case 0x205E78u: goto label_205e78;
            case 0x205E8Cu: goto label_205e8c;
            case 0x205EACu: goto label_205eac;
            case 0x205EDCu: goto label_205edc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x205F54u;
}

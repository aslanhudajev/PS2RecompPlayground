#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ChangeEffect__10PeopleTaskFv
// Address: 0x208d00 - 0x208f94
void ChangeEffect__10PeopleTaskFv_0x208d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ChangeEffect__10PeopleTaskFv");


    ctx->pc = 0x208d00u;

    // 0x208d00: 0x27bdffa0
    ctx->pc = 0x208d00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x208d04: 0x7fbf0040
    ctx->pc = 0x208d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x208d08: 0x7fb30030
    ctx->pc = 0x208d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x208d0c: 0x7fb20020
    ctx->pc = 0x208d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x208d10: 0x7fb10010
    ctx->pc = 0x208d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x208d14: 0x7fb00000
    ctx->pc = 0x208d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x208d18: 0x70809e28
    ctx->pc = 0x208d18u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x208d1c: 0x4bede37d
    ctx->pc = 0x208d1cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x208d20: 0x4bedeb7d
    ctx->pc = 0x208d20u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x208d24: 0x4bedf37d
    ctx->pc = 0x208d24u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x208d28: 0x4bedfb7d
    ctx->pc = 0x208d28u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x208d2c: 0x3c020050
    ctx->pc = 0x208d2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x208d30: 0xc07ce18
    ctx->pc = 0x208D30u;
    SET_GPR_U32(ctx, 31, 0x208D38u);
    ctx->pc = 0x208D34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208D38u; }
        else if (ctx->pc != 0x208D38u) { ctx->pc = 0x208D38u; }
    }
    if (ctx->pc != 0x208D38u) { return; }
    ctx->pc = 0x208D38u;
    // 0x208d38: 0x1c40002f
    ctx->pc = 0x208D38u;
    {
        const bool branch_taken_0x208d38 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x208d38) {
            ctx->pc = 0x208DF8u;
            goto label_208df8;
        }
    }
    ctx->pc = 0x208D40u;
    // 0x208d40: 0x8e631d74
    ctx->pc = 0x208d40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 7540)));
    // 0x208d44: 0x30630020
    ctx->pc = 0x208d44u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 32));
    // 0x208d48: 0x1060001e
    ctx->pc = 0x208D48u;
    {
        const bool branch_taken_0x208d48 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x208d48) {
            ctx->pc = 0x208DC4u;
            goto label_208dc4;
        }
    }
    ctx->pc = 0x208D50u;
    // 0x208d50: 0xc6611e28
    ctx->pc = 0x208d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 7720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x208d54: 0x3c033fb3
    ctx->pc = 0x208d54u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16307 << 16));
    // 0x208d58: 0x34633333
    ctx->pc = 0x208d58u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 13107));
    // 0x208d5c: 0x44830000
    ctx->pc = 0x208d5cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x208d60: 0x0
    ctx->pc = 0x208d60u;
    // NOP
    // 0x208d64: 0x46000836
    ctx->pc = 0x208d64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x208d68: 0x0
    ctx->pc = 0x208d68u;
    // NOP
    // 0x208d6c: 0x45000006
    ctx->pc = 0x208D6Cu;
    {
        const bool branch_taken_0x208d6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x208d6c) {
            ctx->pc = 0x208D88u;
            goto label_208d88;
        }
    }
    ctx->pc = 0x208D74u;
    // 0x208d74: 0x8e64000c
    ctx->pc = 0x208d74u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x208d78: 0x3c030400
    ctx->pc = 0x208d78u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1024 << 16));
    // 0x208d7c: 0x831824
    ctx->pc = 0x208d7cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x208d80: 0x1060001d
    ctx->pc = 0x208D80u;
    {
        const bool branch_taken_0x208d80 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x208d80) {
            ctx->pc = 0x208DF8u;
            goto label_208df8;
        }
    }
    ctx->pc = 0x208D88u;
label_208d88:
    // 0x208d88: 0xc6621e28
    ctx->pc = 0x208d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 7720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x208d8c: 0x3c033dc4
    ctx->pc = 0x208d8cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)15812 << 16));
    // 0x208d90: 0x34639ba6
    ctx->pc = 0x208d90u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 39846));
    // 0x208d94: 0x44830800
    ctx->pc = 0x208d94u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x208d98: 0x44800000
    ctx->pc = 0x208d98u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x208d9c: 0x0
    ctx->pc = 0x208d9cu;
    // NOP
    // 0x208da0: 0x46011041
    ctx->pc = 0x208da0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x208da4: 0x46000834
    ctx->pc = 0x208da4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x208da8: 0x0
    ctx->pc = 0x208da8u;
    // NOP
    // 0x208dac: 0x45000012
    ctx->pc = 0x208DACu;
    {
        const bool branch_taken_0x208dac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x208DB0u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 7720), bits); }
        if (branch_taken_0x208dac) {
            ctx->pc = 0x208DF8u;
            goto label_208df8;
        }
    }
    ctx->pc = 0x208DB4u;
    // 0x208db4: 0xc068fe0
    ctx->pc = 0x208DB4u;
    SET_GPR_U32(ctx, 31, 0x208DBCu);
    ctx->pc = 0x208DB8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 7536)));
    ctx->pc = 0x1A3F80u;
    {
        const uint32_t __entryPc = ctx->pc;
        deleteExec__11SystemTask2Fv_0x1a3f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208DBCu; }
        else if (ctx->pc != 0x208DBCu) { ctx->pc = 0x208DBCu; }
    }
    if (ctx->pc != 0x208DBCu) { return; }
    ctx->pc = 0x208DBCu;
    // 0x208dbc: 0x1000000f
    ctx->pc = 0x208DBCu;
    {
        const bool branch_taken_0x208dbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x208DC0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
        if (branch_taken_0x208dbc) {
            ctx->pc = 0x208DFCu;
            goto label_208dfc;
        }
    }
    ctx->pc = 0x208DC4u;
label_208dc4:
    // 0x208dc4: 0xc6611e28
    ctx->pc = 0x208dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 7720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x208dc8: 0x3c034000
    ctx->pc = 0x208dc8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16384 << 16));
    // 0x208dcc: 0x44830000
    ctx->pc = 0x208dccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x208dd0: 0x0
    ctx->pc = 0x208dd0u;
    // NOP
    // 0x208dd4: 0x46000834
    ctx->pc = 0x208dd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x208dd8: 0x0
    ctx->pc = 0x208dd8u;
    // NOP
    // 0x208ddc: 0x45000006
    ctx->pc = 0x208DDCu;
    {
        const bool branch_taken_0x208ddc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x208DE0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)15556 << 16));
        if (branch_taken_0x208ddc) {
            ctx->pc = 0x208DF8u;
            goto label_208df8;
        }
    }
    ctx->pc = 0x208DE4u;
    // 0x208de4: 0x34639ba6
    ctx->pc = 0x208de4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 39846));
    // 0x208de8: 0x44830000
    ctx->pc = 0x208de8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x208dec: 0x0
    ctx->pc = 0x208decu;
    // NOP
    // 0x208df0: 0x46000800
    ctx->pc = 0x208df0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x208df4: 0xe6601e28
    ctx->pc = 0x208df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 7720), bits); }
label_208df8:
    // 0x208df8: 0x8f838c00
    ctx->pc = 0x208df8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
label_208dfc:
    // 0x208dfc: 0x2c61192c
    ctx->pc = 0x208dfcu;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), 6444));
    // 0x208e00: 0x10200059
    ctx->pc = 0x208E00u;
    {
        const bool branch_taken_0x208e00 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x208e00) {
            ctx->pc = 0x208F68u;
            goto label_208f68;
        }
    }
    ctx->pc = 0x208E08u;
    // 0x208e08: 0xc06aafc
    ctx->pc = 0x208E08u;
    SET_GPR_U32(ctx, 31, 0x208E10u);
    ctx->pc = 0x1AABF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutPushFadeColor_0x1aabf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208E10u; }
        else if (ctx->pc != 0x208E10u) { ctx->pc = 0x208E10u; }
    }
    if (ctx->pc != 0x208E10u) { return; }
    ctx->pc = 0x208E10u;
    // 0x208e10: 0x3c023f80
    ctx->pc = 0x208e10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x208e14: 0x44827800
    ctx->pc = 0x208e14u;
    *(uint32_t*)&ctx->f[15] = GPR_U32(ctx, 2);
    // 0x208e18: 0x3c023e05
    ctx->pc = 0x208e18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15877 << 16));
    // 0x208e1c: 0x34421eb8
    ctx->pc = 0x208e1cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 7864));
    // 0x208e20: 0x44826000
    ctx->pc = 0x208e20u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x208e24: 0x46007c06
    ctx->pc = 0x208e24u;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
    // 0x208e28: 0x3c023e38
    ctx->pc = 0x208e28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15928 << 16));
    // 0x208e2c: 0x344251ec
    ctx->pc = 0x208e2cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 20972));
    // 0x208e30: 0x44826800
    ctx->pc = 0x208e30u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x208e34: 0x3c023ea8
    ctx->pc = 0x208e34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16040 << 16));
    // 0x208e38: 0x3442f5c3
    ctx->pc = 0x208e38u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 62915));
    // 0x208e3c: 0x44827000
    ctx->pc = 0x208e3cu;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x208e40: 0xc06aac8
    ctx->pc = 0x208E40u;
    SET_GPR_U32(ctx, 31, 0x208E48u);
    ctx->pc = 0x208E44u;
    ctx->f[17] = FPU_MOV_S(ctx->f[15]);
    ctx->pc = 0x1AAB20u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutScaleFadeColor_0x1aab20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208E48u; }
        else if (ctx->pc != 0x208E48u) { ctx->pc = 0x208E48u; }
    }
    if (ctx->pc != 0x208E48u) { return; }
    ctx->pc = 0x208E48u;
    // 0x208e48: 0x24100001
    ctx->pc = 0x208e48u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    // 0x208e4c: 0x267200f0
    ctx->pc = 0x208e4cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 19), 240));
label_208e50:
    // 0x208e50: 0x24020003
    ctx->pc = 0x208e50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x208e54: 0x5202003f
    ctx->pc = 0x208E54u;
    {
        const bool branch_taken_0x208e54 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        if (branch_taken_0x208e54) {
            ctx->pc = 0x208E58u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x208F54u;
            goto label_208f54;
        }
    }
    ctx->pc = 0x208E5Cu;
    // 0x208e5c: 0x24020007
    ctx->pc = 0x208e5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x208e60: 0x1202003b
    ctx->pc = 0x208E60u;
    {
        const bool branch_taken_0x208e60 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x208E64u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 208));
        if (branch_taken_0x208e60) {
            ctx->pc = 0x208F50u;
            goto label_208f50;
        }
    }
    ctx->pc = 0x208E68u;
    // 0x208e68: 0xc06c038
    ctx->pc = 0x208E68u;
    SET_GPR_U32(ctx, 31, 0x208E70u);
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208E70u; }
        else if (ctx->pc != 0x208E70u) { ctx->pc = 0x208E70u; }
    }
    if (ctx->pc != 0x208E70u) { return; }
    ctx->pc = 0x208E70u;
    // 0x208e70: 0xc06bfd2
    ctx->pc = 0x208E70u;
    SET_GPR_U32(ctx, 31, 0x208E78u);
    ctx->pc = 0x208E74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x1AFF48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFF48_0x1aff48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208E78u; }
        else if (ctx->pc != 0x208E78u) { ctx->pc = 0x208E78u; }
    }
    if (ctx->pc != 0x208E78u) { return; }
    ctx->pc = 0x208E78u;
    // 0x208e78: 0xc06c213
    ctx->pc = 0x208E78u;
    SET_GPR_U32(ctx, 31, 0x208E80u);
    ctx->pc = 0x1B084Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B084C_0x1b084c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208E80u; }
        else if (ctx->pc != 0x208E80u) { ctx->pc = 0x208E80u; }
    }
    if (ctx->pc != 0x208E80u) { return; }
    ctx->pc = 0x208E80u;
    // 0x208e80: 0x3c0240a0
    ctx->pc = 0x208e80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16544 << 16));
    // 0x208e84: 0x27a40050
    ctx->pc = 0x208e84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x208e88: 0x44826000
    ctx->pc = 0x208e88u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x208e8c: 0xc06be9f
    ctx->pc = 0x208E8Cu;
    SET_GPR_U32(ctx, 31, 0x208E94u);
    ctx->pc = 0x208E90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AFA7Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFA7C_0x1afa7c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208E94u; }
        else if (ctx->pc != 0x208E94u) { ctx->pc = 0x208E94u; }
    }
    if (ctx->pc != 0x208E94u) { return; }
    ctx->pc = 0x208E94u;
    // 0x208e94: 0xc7ad0054
    ctx->pc = 0x208e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x208e98: 0xc7ae0058
    ctx->pc = 0x208e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x208e9c: 0xc06c202
    ctx->pc = 0x208E9Cu;
    SET_GPR_U32(ctx, 31, 0x208EA4u);
    ctx->pc = 0x208EA0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208EA4u; }
        else if (ctx->pc != 0x208EA4u) { ctx->pc = 0x208EA4u; }
    }
    if (ctx->pc != 0x208EA4u) { return; }
    ctx->pc = 0x208EA4u;
    // 0x208ea4: 0xc66c1e28
    ctx->pc = 0x208ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 7720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x208ea8: 0x46006346
    ctx->pc = 0x208ea8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x208eac: 0xc06c1b3
    ctx->pc = 0x208EACu;
    SET_GPR_U32(ctx, 31, 0x208EB4u);
    ctx->pc = 0x208EB0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208EB4u; }
        else if (ctx->pc != 0x208EB4u) { ctx->pc = 0x208EB4u; }
    }
    if (ctx->pc != 0x208EB4u) { return; }
    ctx->pc = 0x208EB4u;
    // 0x208eb4: 0xc06b218
    ctx->pc = 0x208EB4u;
    SET_GPR_U32(ctx, 31, 0x208EBCu);
    ctx->pc = 0x208EB8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 7720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208EBCu; }
        else if (ctx->pc != 0x208EBCu) { ctx->pc = 0x208EBCu; }
    }
    if (ctx->pc != 0x208EBCu) { return; }
    ctx->pc = 0x208EBCu;
    // 0x208ebc: 0x8f858be4
    ctx->pc = 0x208ebcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937572)));
    // 0x208ec0: 0x2404001b
    ctx->pc = 0x208ec0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 27));
    // 0x208ec4: 0x3c010050
    ctx->pc = 0x208ec4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x208ec8: 0x8c23ec60
    ctx->pc = 0x208ec8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294962272)));
    // 0x208ecc: 0x3c028000
    ctx->pc = 0x208eccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x208ed0: 0xa4001a
    ctx->pc = 0x208ed0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x208ed4: 0x621024
    ctx->pc = 0x208ed4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x208ed8: 0x0
    ctx->pc = 0x208ed8u;
    // NOP
    // 0x208edc: 0x8810
    ctx->pc = 0x208edcu;
    SET_GPR_U32(ctx, 17, ctx->hi);
    // 0x208ee0: 0x14400005
    ctx->pc = 0x208EE0u;
    {
        const bool branch_taken_0x208ee0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x208ee0) {
            ctx->pc = 0x208EF8u;
            goto label_208ef8;
        }
    }
    ctx->pc = 0x208EE8u;
    // 0x208ee8: 0x3c020051
    ctx->pc = 0x208ee8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x208eec: 0x244437a0
    ctx->pc = 0x208eecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    // 0x208ef0: 0xc0863cc
    ctx->pc = 0x208EF0u;
    SET_GPR_U32(ctx, 31, 0x208EF8u);
    ctx->pc = 0x208EF4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 36));
    ctx->pc = 0x218F30u;
    {
        const uint32_t __entryPc = ctx->pc;
        waitEntryBankObjImm__13EntryDatClassFi_0x218f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208EF8u; }
        else if (ctx->pc != 0x208EF8u) { ctx->pc = 0x208EF8u; }
    }
    if (ctx->pc != 0x208EF8u) { return; }
    ctx->pc = 0x208EF8u;
label_208ef8:
    // 0x208ef8: 0x3c020050
    ctx->pc = 0x208ef8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x208efc: 0xc07ce18
    ctx->pc = 0x208EFCu;
    SET_GPR_U32(ctx, 31, 0x208F04u);
    ctx->pc = 0x208F00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208F04u; }
        else if (ctx->pc != 0x208F04u) { ctx->pc = 0x208F04u; }
    }
    if (ctx->pc != 0x208F04u) { return; }
    ctx->pc = 0x208F04u;
    // 0x208f04: 0x1c40000c
    ctx->pc = 0x208F04u;
    {
        const bool branch_taken_0x208f04 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x208F08u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16025 << 16));
        if (branch_taken_0x208f04) {
            ctx->pc = 0x208F38u;
            goto label_208f38;
        }
    }
    ctx->pc = 0x208F0Cu;
    // 0x208f0c: 0x3c020024
    ctx->pc = 0x208f0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x208f10: 0x34420008
    ctx->pc = 0x208f10u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8));
    // 0x208f14: 0x2222021
    ctx->pc = 0x208f14u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x208f18: 0x3c023e99
    ctx->pc = 0x208f18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16025 << 16));
    // 0x208f1c: 0x3442999a
    ctx->pc = 0x208f1cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39322));
    // 0x208f20: 0x44826000
    ctx->pc = 0x208f20u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x208f24: 0xc0853e4
    ctx->pc = 0x208F24u;
    SET_GPR_U32(ctx, 31, 0x208F2Cu);
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208F2Cu; }
        else if (ctx->pc != 0x208F2Cu) { ctx->pc = 0x208F2Cu; }
    }
    if (ctx->pc != 0x208F2Cu) { return; }
    ctx->pc = 0x208F2Cu;
    // 0x208f2c: 0x10000008
    ctx->pc = 0x208F2Cu;
    {
        const bool branch_taken_0x208f2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x208f2c) {
            ctx->pc = 0x208F50u;
            goto label_208f50;
        }
    }
    ctx->pc = 0x208F34u;
    // 0x208f34: 0x3c023e99
    ctx->pc = 0x208f34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16025 << 16));
label_208f38:
    // 0x208f38: 0x3442999a
    ctx->pc = 0x208f38u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39322));
    // 0x208f3c: 0x44826000
    ctx->pc = 0x208f3cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x208f40: 0x3c020024
    ctx->pc = 0x208f40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x208f44: 0xc0853e4
    ctx->pc = 0x208F44u;
    SET_GPR_U32(ctx, 31, 0x208F4Cu);
    ctx->pc = 0x208F48u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 8));
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208F4Cu; }
        else if (ctx->pc != 0x208F4Cu) { ctx->pc = 0x208F4Cu; }
    }
    if (ctx->pc != 0x208F4Cu) { return; }
    ctx->pc = 0x208F4Cu;
    // 0x208f4c: 0x0
    ctx->pc = 0x208f4cu;
    // NOP
label_208f50:
    // 0x208f50: 0x26100001
    ctx->pc = 0x208f50u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_208f54:
    // 0x208f54: 0x2a020012
    ctx->pc = 0x208f54u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 18));
    // 0x208f58: 0x1440ffbd
    ctx->pc = 0x208F58u;
    {
        const bool branch_taken_0x208f58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x208F5Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
        if (branch_taken_0x208f58) {
            ctx->pc = 0x208E50u;
            goto label_208e50;
        }
    }
    ctx->pc = 0x208F60u;
    // 0x208f60: 0xc06ab18
    ctx->pc = 0x208F60u;
    SET_GPR_U32(ctx, 31, 0x208F68u);
    ctx->pc = 0x1AAC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutPopFadeColor_0x1aac60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208F68u; }
        else if (ctx->pc != 0x208F68u) { ctx->pc = 0x208F68u; }
    }
    if (ctx->pc != 0x208F68u) { return; }
    ctx->pc = 0x208F68u;
label_208f68:
    // 0x208f68: 0x4bff6b7e
    ctx->pc = 0x208f68u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x208f6c: 0x4bfe6b7e
    ctx->pc = 0x208f6cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x208f70: 0x4bfd6b7e
    ctx->pc = 0x208f70u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x208f74: 0x4bfc6b7e
    ctx->pc = 0x208f74u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x208f78: 0x7bbf0040
    ctx->pc = 0x208f78u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x208f7c: 0x7bb30030
    ctx->pc = 0x208f7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x208f80: 0x7bb20020
    ctx->pc = 0x208f80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x208f84: 0x7bb10010
    ctx->pc = 0x208f84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208f88: 0x7bb00000
    ctx->pc = 0x208f88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208f8c: 0x3e00008
    ctx->pc = 0x208F8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208F90u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x208D88u: goto label_208d88;
            case 0x208DC4u: goto label_208dc4;
            case 0x208DF8u: goto label_208df8;
            case 0x208DFCu: goto label_208dfc;
            case 0x208E50u: goto label_208e50;
            case 0x208EF8u: goto label_208ef8;
            case 0x208F38u: goto label_208f38;
            case 0x208F50u: goto label_208f50;
            case 0x208F54u: goto label_208f54;
            case 0x208F68u: goto label_208f68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x208F94u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: Disp__7BudTaskFv
// Address: 0x204990 - 0x204d2c
void Disp__7BudTaskFv_0x204990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("Disp__7BudTaskFv");


    ctx->pc = 0x204990u;

    // 0x204990: 0x27bdff70
    ctx->pc = 0x204990u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x204994: 0x7fbf0040
    ctx->pc = 0x204994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x204998: 0x7fb20030
    ctx->pc = 0x204998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x20499c: 0x7fb10020
    ctx->pc = 0x20499cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2049a0: 0x7fb00010
    ctx->pc = 0x2049a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2049a4: 0xe7b7000c
    ctx->pc = 0x2049a4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2049a8: 0xe7b60008
    ctx->pc = 0x2049a8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2049ac: 0xe7b50004
    ctx->pc = 0x2049acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2049b0: 0xe7b40000
    ctx->pc = 0x2049b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2049b4: 0x8c83000c
    ctx->pc = 0x2049b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2049b8: 0x3c020400
    ctx->pc = 0x2049b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1024 << 16));
    // 0x2049bc: 0x621024
    ctx->pc = 0x2049bcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2049c0: 0x1040000b
    ctx->pc = 0x2049C0u;
    {
        const bool branch_taken_0x2049c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2049C4u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2049c0) {
            ctx->pc = 0x2049F0u;
            goto label_2049f0;
        }
    }
    ctx->pc = 0x2049C8u;
    // 0x2049c8: 0xc081380
    ctx->pc = 0x2049C8u;
    SET_GPR_U32(ctx, 31, 0x2049D0u);
    ctx->pc = 0x204E00u;
    {
        const uint32_t __entryPc = ctx->pc;
        DispDead__7BudTaskFv_0x204e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2049D0u; }
        else if (ctx->pc != 0x2049D0u) { ctx->pc = 0x2049D0u; }
    }
    if (ctx->pc != 0x2049D0u) { return; }
    ctx->pc = 0x2049D0u;
    // 0x2049d0: 0x3c020027
    ctx->pc = 0x2049d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x2049d4: 0x24422d90
    ctx->pc = 0x2049d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11664));
    // 0x2049d8: 0x8c450008
    ctx->pc = 0x2049d8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2049dc: 0x8e440140
    ctx->pc = 0x2049dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 320)));
    // 0x2049e0: 0xc068fd8
    ctx->pc = 0x2049E0u;
    SET_GPR_U32(ctx, 31, 0x2049E8u);
    ctx->pc = 0x2049E4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A3F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        changeExec__11SystemTask2FPFv_vPv_0x1a3f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2049E8u; }
        else if (ctx->pc != 0x2049E8u) { ctx->pc = 0x2049E8u; }
    }
    if (ctx->pc != 0x2049E8u) { return; }
    ctx->pc = 0x2049E8u;
    // 0x2049e8: 0x100000c7
    ctx->pc = 0x2049E8u;
    {
        const bool branch_taken_0x2049e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2049ECu;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x2049e8) {
            ctx->pc = 0x204D08u;
            goto label_204d08;
        }
    }
    ctx->pc = 0x2049F0u;
label_2049f0:
    // 0x2049f0: 0x8e440150
    ctx->pc = 0x2049f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x2049f4: 0x24020012
    ctx->pc = 0x2049f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 18));
    // 0x2049f8: 0x8c831d74
    ctx->pc = 0x2049f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 7540)));
    // 0x2049fc: 0x30630012
    ctx->pc = 0x2049fcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 18));
    // 0x204a00: 0x14620014
    ctx->pc = 0x204A00u;
    {
        const bool branch_taken_0x204a00 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x204a00) {
            ctx->pc = 0x204A54u;
            goto label_204a54;
        }
    }
    ctx->pc = 0x204A08u;
    // 0x204a08: 0xc6410044
    ctx->pc = 0x204a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x204a0c: 0x3c024302
    ctx->pc = 0x204a0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)17154 << 16));
    // 0x204a10: 0x44820000
    ctx->pc = 0x204a10u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x204a14: 0x0
    ctx->pc = 0x204a14u;
    // NOP
    // 0x204a18: 0x46000834
    ctx->pc = 0x204a18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x204a1c: 0x0
    ctx->pc = 0x204a1cu;
    // NOP
    // 0x204a20: 0x4501000c
    ctx->pc = 0x204A20u;
    {
        const bool branch_taken_0x204a20 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x204A24u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
        if (branch_taken_0x204a20) {
            ctx->pc = 0x204A54u;
            goto label_204a54;
        }
    }
    ctx->pc = 0x204A28u;
    // 0x204a28: 0xae42004c
    ctx->pc = 0x204a28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 2));
    // 0x204a2c: 0xc081470
    ctx->pc = 0x204A2Cu;
    SET_GPR_U32(ctx, 31, 0x204A34u);
    ctx->pc = 0x204A30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2051C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DispErs__7BudTaskFv_0x2051c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204A34u; }
        else if (ctx->pc != 0x204A34u) { ctx->pc = 0x204A34u; }
    }
    if (ctx->pc != 0x204A34u) { return; }
    ctx->pc = 0x204A34u;
    // 0x204a34: 0x3c020027
    ctx->pc = 0x204a34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x204a38: 0x24422da0
    ctx->pc = 0x204a38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11680));
    // 0x204a3c: 0x8c450008
    ctx->pc = 0x204a3cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x204a40: 0x8e440140
    ctx->pc = 0x204a40u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 320)));
    // 0x204a44: 0xc068fd8
    ctx->pc = 0x204A44u;
    SET_GPR_U32(ctx, 31, 0x204A4Cu);
    ctx->pc = 0x204A48u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A3F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        changeExec__11SystemTask2FPFv_vPv_0x1a3f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204A4Cu; }
        else if (ctx->pc != 0x204A4Cu) { ctx->pc = 0x204A4Cu; }
    }
    if (ctx->pc != 0x204A4Cu) { return; }
    ctx->pc = 0x204A4Cu;
    // 0x204a4c: 0x100000ad
    ctx->pc = 0x204A4Cu;
    {
        const bool branch_taken_0x204a4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x204a4c) {
            ctx->pc = 0x204D04u;
            goto label_204d04;
        }
    }
    ctx->pc = 0x204A54u;
label_204a54:
    // 0x204a54: 0xc0810b8
    ctx->pc = 0x204A54u;
    SET_GPR_U32(ctx, 31, 0x204A5Cu);
    ctx->pc = 0x2042E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LocalLightOn__FP10PeopleTask_0x2042e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204A5Cu; }
        else if (ctx->pc != 0x204A5Cu) { ctx->pc = 0x204A5Cu; }
    }
    if (ctx->pc != 0x204A5Cu) { return; }
    ctx->pc = 0x204A5Cu;
    // 0x204a5c: 0xc06ac08
    ctx->pc = 0x204A5Cu;
    SET_GPR_U32(ctx, 31, 0x204A64u);
    ctx->pc = 0x204A60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1AB020u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutLoadModule_0x1ab020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204A64u; }
        else if (ctx->pc != 0x204A64u) { ctx->pc = 0x204A64u; }
    }
    if (ctx->pc != 0x204A64u) { return; }
    ctx->pc = 0x204A64u;
    // 0x204a64: 0x70008628
    ctx->pc = 0x204a64u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204a68: 0x70008e28
    ctx->pc = 0x204a68u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_204a6c:
    // 0x204a6c: 0x8e42014c
    ctx->pc = 0x204a6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 332)));
    // 0x204a70: 0x511021
    ctx->pc = 0x204a70u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x204a74: 0x8c460000
    ctx->pc = 0x204a74u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x204a78: 0x50c00008
    ctx->pc = 0x204A78u;
    {
        const bool branch_taken_0x204a78 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x204a78) {
            ctx->pc = 0x204A7Cu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x204A9Cu;
            goto label_204a9c;
        }
    }
    ctx->pc = 0x204A80u;
    // 0x204a80: 0x8e450150
    ctx->pc = 0x204a80u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x204a84: 0x10a00002
    ctx->pc = 0x204A84u;
    {
        const bool branch_taken_0x204a84 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x204A88u;
        SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
        if (branch_taken_0x204a84) {
            ctx->pc = 0x204A90u;
            goto label_204a90;
        }
    }
    ctx->pc = 0x204A8Cu;
    // 0x204a8c: 0x24a50030
    ctx->pc = 0x204a8cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
label_204a90:
    // 0x204a90: 0xc07fb50
    ctx->pc = 0x204A90u;
    SET_GPR_U32(ctx, 31, 0x204A98u);
    ctx->pc = 0x204A94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 8784));
    ctx->pc = 0x1FED40u;
    {
        const uint32_t __entryPc = ctx->pc;
        attach__15OneSkinMgrClassFP10MotObjTaskP10ONESKIN_DB_0x1fed40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204A98u; }
        else if (ctx->pc != 0x204A98u) { ctx->pc = 0x204A98u; }
    }
    if (ctx->pc != 0x204A98u) { return; }
    ctx->pc = 0x204A98u;
    // 0x204a98: 0x26100001
    ctx->pc = 0x204a98u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_204a9c:
    // 0x204a9c: 0x2a020002
    ctx->pc = 0x204a9cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 2));
    // 0x204aa0: 0x1440fff2
    ctx->pc = 0x204AA0u;
    {
        const bool branch_taken_0x204aa0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x204AA4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
        if (branch_taken_0x204aa0) {
            ctx->pc = 0x204A6Cu;
            goto label_204a6c;
        }
    }
    ctx->pc = 0x204AA8u;
    // 0x204aa8: 0xc06ac08
    ctx->pc = 0x204AA8u;
    SET_GPR_U32(ctx, 31, 0x204AB0u);
    ctx->pc = 0x204AACu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AB020u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutLoadModule_0x1ab020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204AB0u; }
        else if (ctx->pc != 0x204AB0u) { ctx->pc = 0x204AB0u; }
    }
    if (ctx->pc != 0x204AB0u) { return; }
    ctx->pc = 0x204AB0u;
    // 0x204ab0: 0x4bede37d
    ctx->pc = 0x204ab0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x204ab4: 0x4bedeb7d
    ctx->pc = 0x204ab4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x204ab8: 0x4bedf37d
    ctx->pc = 0x204ab8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x204abc: 0x4bedfb7d
    ctx->pc = 0x204abcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x204ac0: 0xc06c038
    ctx->pc = 0x204AC0u;
    SET_GPR_U32(ctx, 31, 0x204AC8u);
    ctx->pc = 0x204AC4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 324)));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204AC8u; }
        else if (ctx->pc != 0x204AC8u) { ctx->pc = 0x204AC8u; }
    }
    if (ctx->pc != 0x204AC8u) { return; }
    ctx->pc = 0x204AC8u;
    // 0x204ac8: 0x8e42014c
    ctx->pc = 0x204ac8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 332)));
    // 0x204acc: 0xc44d0010
    ctx->pc = 0x204accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x204ad0: 0xc44e0014
    ctx->pc = 0x204ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x204ad4: 0xc06c202
    ctx->pc = 0x204AD4u;
    SET_GPR_U32(ctx, 31, 0x204ADCu);
    ctx->pc = 0x204AD8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204ADCu; }
        else if (ctx->pc != 0x204ADCu) { ctx->pc = 0x204ADCu; }
    }
    if (ctx->pc != 0x204ADCu) { return; }
    ctx->pc = 0x204ADCu;
    // 0x204adc: 0x8e430150
    ctx->pc = 0x204adcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x204ae0: 0x24020003
    ctx->pc = 0x204ae0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x204ae4: 0x80631e02
    ctx->pc = 0x204ae4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 7682)));
    // 0x204ae8: 0x10620010
    ctx->pc = 0x204AE8u;
    {
        const bool branch_taken_0x204ae8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x204AECu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 20480));
        if (branch_taken_0x204ae8) {
            ctx->pc = 0x204B2Cu;
            goto label_204b2c;
        }
    }
    ctx->pc = 0x204AF0u;
    // 0x204af0: 0x24020002
    ctx->pc = 0x204af0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x204af4: 0x1062000d
    ctx->pc = 0x204AF4u;
    {
        const bool branch_taken_0x204af4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x204AF8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x204af4) {
            ctx->pc = 0x204B2Cu;
            goto label_204b2c;
        }
    }
    ctx->pc = 0x204AFCu;
    // 0x204afc: 0x10620005
    ctx->pc = 0x204AFCu;
    {
        const bool branch_taken_0x204afc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x204B00u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7424));
        if (branch_taken_0x204afc) {
            ctx->pc = 0x204B14u;
            goto label_204b14;
        }
    }
    ctx->pc = 0x204B04u;
    // 0x204b04: 0x10600003
    ctx->pc = 0x204B04u;
    {
        const bool branch_taken_0x204b04 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x204b04) {
            ctx->pc = 0x204B14u;
            goto label_204b14;
        }
    }
    ctx->pc = 0x204B0Cu;
    // 0x204b0c: 0x1000000c
    ctx->pc = 0x204B0Cu;
    {
        const bool branch_taken_0x204b0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x204B10u;
        { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
        if (branch_taken_0x204b0c) {
            ctx->pc = 0x204B40u;
            goto label_204b40;
        }
    }
    ctx->pc = 0x204B14u;
label_204b14:
    // 0x204b14: 0xc06c09f
    ctx->pc = 0x204B14u;
    SET_GPR_U32(ctx, 31, 0x204B1Cu);
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204B1Cu; }
        else if (ctx->pc != 0x204B1Cu) { ctx->pc = 0x204B1Cu; }
    }
    if (ctx->pc != 0x204B1Cu) { return; }
    ctx->pc = 0x204B1Cu;
    // 0x204b1c: 0xc06c157
    ctx->pc = 0x204B1Cu;
    SET_GPR_U32(ctx, 31, 0x204B24u);
    ctx->pc = 0x204B20u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 63488));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204B24u; }
        else if (ctx->pc != 0x204B24u) { ctx->pc = 0x204B24u; }
    }
    if (ctx->pc != 0x204B24u) { return; }
    ctx->pc = 0x204B24u;
    // 0x204b24: 0x10000005
    ctx->pc = 0x204B24u;
    {
        const bool branch_taken_0x204b24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x204b24) {
            ctx->pc = 0x204B3Cu;
            goto label_204b3c;
        }
    }
    ctx->pc = 0x204B2Cu;
label_204b2c:
    // 0x204b2c: 0xc06c09f
    ctx->pc = 0x204B2Cu;
    SET_GPR_U32(ctx, 31, 0x204B34u);
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204B34u; }
        else if (ctx->pc != 0x204B34u) { ctx->pc = 0x204B34u; }
    }
    if (ctx->pc != 0x204B34u) { return; }
    ctx->pc = 0x204B34u;
    // 0x204b34: 0xc06c157
    ctx->pc = 0x204B34u;
    SET_GPR_U32(ctx, 31, 0x204B3Cu);
    ctx->pc = 0x204B38u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 61440));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204B3Cu; }
        else if (ctx->pc != 0x204B3Cu) { ctx->pc = 0x204B3Cu; }
    }
    if (ctx->pc != 0x204B3Cu) { return; }
    ctx->pc = 0x204B3Cu;
label_204b3c:
    // 0x204b3c: 0x4bede37d
    ctx->pc = 0x204b3cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_204b40:
    // 0x204b40: 0x4bedeb7d
    ctx->pc = 0x204b40u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x204b44: 0x4bedf37d
    ctx->pc = 0x204b44u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x204b48: 0x4bedfb7d
    ctx->pc = 0x204b48u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x204b4c: 0xc0691c4
    ctx->pc = 0x204B4Cu;
    SET_GPR_U32(ctx, 31, 0x204B54u);
    ctx->pc = 0x204B50u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4710u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlInvertMatrix_0x1a4710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204B54u; }
        else if (ctx->pc != 0x204B54u) { ctx->pc = 0x204B54u; }
    }
    if (ctx->pc != 0x204B54u) { return; }
    ctx->pc = 0x204B54u;
    // 0x204b54: 0xafa00060
    ctx->pc = 0x204b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x204b58: 0xafa00064
    ctx->pc = 0x204b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x204b5c: 0x27a40060
    ctx->pc = 0x204b5cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
    // 0x204b60: 0x27a50070
    ctx->pc = 0x204b60u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 112));
    // 0x204b64: 0xc06bf00
    ctx->pc = 0x204B64u;
    SET_GPR_U32(ctx, 31, 0x204B6Cu);
    ctx->pc = 0x204B68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204B6Cu; }
        else if (ctx->pc != 0x204B6Cu) { ctx->pc = 0x204B6Cu; }
    }
    if (ctx->pc != 0x204B6Cu) { return; }
    ctx->pc = 0x204B6Cu;
    // 0x204b6c: 0xc7b70070
    ctx->pc = 0x204b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x204b70: 0xc7b60078
    ctx->pc = 0x204b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x204b74: 0xc7b50074
    ctx->pc = 0x204b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x204b78: 0x4617b81a
    ctx->pc = 0x204b78u;
    ctx->f[31] = FPU_MUL_S(ctx->f[23], ctx->f[23]);
    // 0x204b7c: 0xc06c2a8
    ctx->pc = 0x204B7Cu;
    SET_GPR_U32(ctx, 31, 0x204B84u);
    ctx->pc = 0x204B80u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[22]));
    ctx->pc = 0x1B0AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0AA0_0x1b0aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204B84u; }
        else if (ctx->pc != 0x204B84u) { ctx->pc = 0x204B84u; }
    }
    if (ctx->pc != 0x204B84u) { return; }
    ctx->pc = 0x204B84u;
    // 0x204b84: 0x46000506
    ctx->pc = 0x204b84u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x204b88: 0x4600ab46
    ctx->pc = 0x204b88u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x204b8c: 0xc069e68
    ctx->pc = 0x204B8Cu;
    SET_GPR_U32(ctx, 31, 0x204B94u);
    ctx->pc = 0x204B90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1A79A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcTan2_0x1a79a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204B94u; }
        else if (ctx->pc != 0x204B94u) { ctx->pc = 0x204B94u; }
    }
    if (ctx->pc != 0x204B94u) { return; }
    ctx->pc = 0x204B94u;
    // 0x204b94: 0x4614b003
    ctx->pc = 0x204b94u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[0] = ctx->f[22] / ctx->f[20];
    // 0x204b98: 0x22c3c
    ctx->pc = 0x204b98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x204b9c: 0x52c3f
    ctx->pc = 0x204b9cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x204ba0: 0xe7a00050
    ctx->pc = 0x204ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x204ba4: 0x4600b807
    ctx->pc = 0x204ba4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[23]);
    // 0x204ba8: 0x46140003
    ctx->pc = 0x204ba8u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x204bac: 0xafa00054
    ctx->pc = 0x204bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x204bb0: 0xe7a00058
    ctx->pc = 0x204bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x204bb4: 0x4bff6b7e
    ctx->pc = 0x204bb4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x204bb8: 0x4bfe6b7e
    ctx->pc = 0x204bb8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x204bbc: 0x4bfd6b7e
    ctx->pc = 0x204bbcu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x204bc0: 0x10a0000a
    ctx->pc = 0x204BC0u;
    {
        const bool branch_taken_0x204bc0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x204BC4u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x204bc0) {
            ctx->pc = 0x204BECu;
            goto label_204bec;
        }
    }
    ctx->pc = 0x204BC8u;
    // 0x204bc8: 0x28a11000
    ctx->pc = 0x204bc8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 5), 4096));
    // 0x204bcc: 0x10200005
    ctx->pc = 0x204BCCu;
    {
        const bool branch_taken_0x204bcc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x204BD0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
        if (branch_taken_0x204bcc) {
            ctx->pc = 0x204BE4u;
            goto label_204be4;
        }
    }
    ctx->pc = 0x204BD4u;
    // 0x204bd4: 0xc06940c
    ctx->pc = 0x204BD4u;
    SET_GPR_U32(ctx, 31, 0x204BDCu);
    ctx->pc = 0x204BD8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x1A5030u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRotateAxe_0x1a5030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204BDCu; }
        else if (ctx->pc != 0x204BDCu) { ctx->pc = 0x204BDCu; }
    }
    if (ctx->pc != 0x204BDCu) { return; }
    ctx->pc = 0x204BDCu;
    // 0x204bdc: 0x10000003
    ctx->pc = 0x204BDCu;
    {
        const bool branch_taken_0x204bdc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x204bdc) {
            ctx->pc = 0x204BECu;
            goto label_204bec;
        }
    }
    ctx->pc = 0x204BE4u;
label_204be4:
    // 0x204be4: 0xc06940c
    ctx->pc = 0x204BE4u;
    SET_GPR_U32(ctx, 31, 0x204BECu);
    ctx->pc = 0x204BE8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4096));
    ctx->pc = 0x1A5030u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRotateAxe_0x1a5030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204BECu; }
        else if (ctx->pc != 0x204BECu) { ctx->pc = 0x204BECu; }
    }
    if (ctx->pc != 0x204BECu) { return; }
    ctx->pc = 0x204BECu;
label_204bec:
    // 0x204bec: 0x3c010050
    ctx->pc = 0x204becu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x204bf0: 0x8c23ec60
    ctx->pc = 0x204bf0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294962272)));
    // 0x204bf4: 0x3c028000
    ctx->pc = 0x204bf4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x204bf8: 0x621024
    ctx->pc = 0x204bf8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x204bfc: 0x14400006
    ctx->pc = 0x204BFCu;
    {
        const bool branch_taken_0x204bfc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x204C00u;
        SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
        if (branch_taken_0x204bfc) {
            ctx->pc = 0x204C18u;
            goto label_204c18;
        }
    }
    ctx->pc = 0x204C04u;
    // 0x204c04: 0x3c020051
    ctx->pc = 0x204c04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x204c08: 0x244437a0
    ctx->pc = 0x204c08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    // 0x204c0c: 0xc0863cc
    ctx->pc = 0x204C0Cu;
    SET_GPR_U32(ctx, 31, 0x204C14u);
    ctx->pc = 0x204C10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 36));
    ctx->pc = 0x218F30u;
    {
        const uint32_t __entryPc = ctx->pc;
        waitEntryBankObjImm__13EntryDatClassFi_0x218f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204C14u; }
        else if (ctx->pc != 0x204C14u) { ctx->pc = 0x204C14u; }
    }
    if (ctx->pc != 0x204C14u) { return; }
    ctx->pc = 0x204C14u;
    // 0x204c14: 0x3c020024
    ctx->pc = 0x204c14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
label_204c18:
    // 0x204c18: 0xc0853ac
    ctx->pc = 0x204C18u;
    SET_GPR_U32(ctx, 31, 0x204C20u);
    ctx->pc = 0x204C1Cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 2));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204C20u; }
        else if (ctx->pc != 0x204C20u) { ctx->pc = 0x204C20u; }
    }
    if (ctx->pc != 0x204C20u) { return; }
    ctx->pc = 0x204C20u;
    // 0x204c20: 0x4bff6b7e
    ctx->pc = 0x204c20u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x204c24: 0x4bfe6b7e
    ctx->pc = 0x204c24u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x204c28: 0x4bfd6b7e
    ctx->pc = 0x204c28u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x204c2c: 0x4bfc6b7e
    ctx->pc = 0x204c2cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x204c30: 0x8e420150
    ctx->pc = 0x204c30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x204c34: 0x8c441e68
    ctx->pc = 0x204c34u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 7784)));
    // 0x204c38: 0x4800030
    ctx->pc = 0x204C38u;
    {
        const bool branch_taken_0x204c38 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x204C3Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x204c38) {
            ctx->pc = 0x204CFCu;
            goto label_204cfc;
        }
    }
    ctx->pc = 0x204C40u;
    // 0x204c40: 0x8423e504
    ctx->pc = 0x204c40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x204c44: 0x2402000a
    ctx->pc = 0x204c44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x204c48: 0x1462002c
    ctx->pc = 0x204C48u;
    {
        const bool branch_taken_0x204c48 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x204c48) {
            ctx->pc = 0x204CFCu;
            goto label_204cfc;
        }
    }
    ctx->pc = 0x204C50u;
    // 0x204c50: 0x8f838bcc
    ctx->pc = 0x204c50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x204c54: 0x24020001
    ctx->pc = 0x204c54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x204c58: 0x14620028
    ctx->pc = 0x204C58u;
    {
        const bool branch_taken_0x204c58 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x204C5Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
        if (branch_taken_0x204c58) {
            ctx->pc = 0x204CFCu;
            goto label_204cfc;
        }
    }
    ctx->pc = 0x204C60u;
    // 0x204c60: 0x2442fcf8
    ctx->pc = 0x204c60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966520));
    // 0x204c64: 0x441021
    ctx->pc = 0x204c64u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x204c68: 0x80430000
    ctx->pc = 0x204c68u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x204c6c: 0x30620001
    ctx->pc = 0x204c6cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x204c70: 0x10400022
    ctx->pc = 0x204C70u;
    {
        const bool branch_taken_0x204c70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x204C74u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x204c70) {
            ctx->pc = 0x204CFCu;
            goto label_204cfc;
        }
    }
    ctx->pc = 0x204C78u;
    // 0x204c78: 0x10400020
    ctx->pc = 0x204C78u;
    {
        const bool branch_taken_0x204c78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x204C7Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 32));
        if (branch_taken_0x204c78) {
            ctx->pc = 0x204CFCu;
            goto label_204cfc;
        }
    }
    ctx->pc = 0x204C80u;
    // 0x204c80: 0x1440001e
    ctx->pc = 0x204C80u;
    {
        const bool branch_taken_0x204c80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x204c80) {
            ctx->pc = 0x204CFCu;
            goto label_204cfc;
        }
    }
    ctx->pc = 0x204C88u;
    // 0x204c88: 0x4bede37d
    ctx->pc = 0x204c88u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x204c8c: 0x4bedeb7d
    ctx->pc = 0x204c8cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x204c90: 0x4bedf37d
    ctx->pc = 0x204c90u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x204c94: 0x4bedfb7d
    ctx->pc = 0x204c94u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x204c98: 0x8f848c48
    ctx->pc = 0x204c98u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x204c9c: 0x8c830004
    ctx->pc = 0x204c9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x204ca0: 0x31040
    ctx->pc = 0x204ca0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x204ca4: 0x431021
    ctx->pc = 0x204ca4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x204ca8: 0x21080
    ctx->pc = 0x204ca8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x204cac: 0x431021
    ctx->pc = 0x204cacu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x204cb0: 0x21100
    ctx->pc = 0x204cb0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x204cb4: 0x821021
    ctx->pc = 0x204cb4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x204cb8: 0xc06c038
    ctx->pc = 0x204CB8u;
    SET_GPR_U32(ctx, 31, 0x204CC0u);
    ctx->pc = 0x204CBCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204CC0u; }
        else if (ctx->pc != 0x204CC0u) { ctx->pc = 0x204CC0u; }
    }
    if (ctx->pc != 0x204CC0u) { return; }
    ctx->pc = 0x204CC0u;
    // 0x204cc0: 0xc06c04e
    ctx->pc = 0x204CC0u;
    SET_GPR_U32(ctx, 31, 0x204CC8u);
    ctx->pc = 0x204CC4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 324)));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204CC8u; }
        else if (ctx->pc != 0x204CC8u) { ctx->pc = 0x204CC8u; }
    }
    if (ctx->pc != 0x204CC8u) { return; }
    ctx->pc = 0x204CC8u;
    // 0x204cc8: 0x8e42014c
    ctx->pc = 0x204cc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 332)));
    // 0x204ccc: 0xc44d001c
    ctx->pc = 0x204cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x204cd0: 0xc44e0020
    ctx->pc = 0x204cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x204cd4: 0xc06c202
    ctx->pc = 0x204CD4u;
    SET_GPR_U32(ctx, 31, 0x204CDCu);
    ctx->pc = 0x204CD8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204CDCu; }
        else if (ctx->pc != 0x204CDCu) { ctx->pc = 0x204CDCu; }
    }
    if (ctx->pc != 0x204CDCu) { return; }
    ctx->pc = 0x204CDCu;
    // 0x204cdc: 0xc06bfd2
    ctx->pc = 0x204CDCu;
    SET_GPR_U32(ctx, 31, 0x204CE4u);
    ctx->pc = 0x204CE0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
    ctx->pc = 0x1AFF48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFF48_0x1aff48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204CE4u; }
        else if (ctx->pc != 0x204CE4u) { ctx->pc = 0x204CE4u; }
    }
    if (ctx->pc != 0x204CE4u) { return; }
    ctx->pc = 0x204CE4u;
    // 0x204ce4: 0x4bff6b7e
    ctx->pc = 0x204ce4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x204ce8: 0x4bfe6b7e
    ctx->pc = 0x204ce8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x204cec: 0x4bfd6b7e
    ctx->pc = 0x204cecu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x204cf0: 0x4bfc6b7e
    ctx->pc = 0x204cf0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x204cf4: 0xc277eac
    ctx->pc = 0x204CF4u;
    SET_GPR_U32(ctx, 31, 0x204CFCu);
    ctx->pc = 0x204CF8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
    ctx->pc = 0x9DFAB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        OrgDispGoggleEffect__F11tagNLpoint3_0x9dfab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204CFCu; }
        else if (ctx->pc != 0x204CFCu) { ctx->pc = 0x204CFCu; }
    }
    if (ctx->pc != 0x204CFCu) { return; }
    ctx->pc = 0x204CFCu;
label_204cfc:
    // 0x204cfc: 0xc0810e8
    ctx->pc = 0x204CFCu;
    SET_GPR_U32(ctx, 31, 0x204D04u);
    ctx->pc = 0x2043A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LocalLightOff__Fv_0x2043a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204D04u; }
        else if (ctx->pc != 0x204D04u) { ctx->pc = 0x204D04u; }
    }
    if (ctx->pc != 0x204D04u) { return; }
    ctx->pc = 0x204D04u;
label_204d04:
    // 0x204d04: 0x7bbf0040
    ctx->pc = 0x204d04u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_204d08:
    // 0x204d08: 0x7bb20030
    ctx->pc = 0x204d08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x204d0c: 0x7bb10020
    ctx->pc = 0x204d0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x204d10: 0x7bb00010
    ctx->pc = 0x204d10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204d14: 0xc7b7000c
    ctx->pc = 0x204d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x204d18: 0xc7b60008
    ctx->pc = 0x204d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x204d1c: 0xc7b50004
    ctx->pc = 0x204d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x204d20: 0xc7b40000
    ctx->pc = 0x204d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x204d24: 0x3e00008
    ctx->pc = 0x204D24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204D28u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2049F0u: goto label_2049f0;
            case 0x204A54u: goto label_204a54;
            case 0x204A6Cu: goto label_204a6c;
            case 0x204A90u: goto label_204a90;
            case 0x204A9Cu: goto label_204a9c;
            case 0x204B14u: goto label_204b14;
            case 0x204B2Cu: goto label_204b2c;
            case 0x204B3Cu: goto label_204b3c;
            case 0x204B40u: goto label_204b40;
            case 0x204BE4u: goto label_204be4;
            case 0x204BECu: goto label_204bec;
            case 0x204C18u: goto label_204c18;
            case 0x204CFCu: goto label_204cfc;
            case 0x204D04u: goto label_204d04;
            case 0x204D08u: goto label_204d08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x204D2Cu;
}

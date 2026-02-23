#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nearZYXrotYAxis__12BodyMgrClassFP4XYZAP4XYZAf
// Address: 0x1fba70 - 0x1fbcc8
void nearZYXrotYAxis__12BodyMgrClassFP4XYZAP4XYZAf_0x1fba70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nearZYXrotYAxis__12BodyMgrClassFP4XYZAP4XYZAf");


    ctx->pc = 0x1fba70u;

    // 0x1fba70: 0x27bdff00
    ctx->pc = 0x1fba70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1fba74: 0x7fbf0040
    ctx->pc = 0x1fba74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1fba78: 0x7fb10030
    ctx->pc = 0x1fba78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1fba7c: 0x7fb00020
    ctx->pc = 0x1fba7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1fba80: 0xe7b80010
    ctx->pc = 0x1fba80u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1fba84: 0xe7b7000c
    ctx->pc = 0x1fba84u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1fba88: 0xe7b60008
    ctx->pc = 0x1fba88u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1fba8c: 0xe7b50004
    ctx->pc = 0x1fba8cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1fba90: 0xe7b40000
    ctx->pc = 0x1fba90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1fba94: 0x70a08628
    ctx->pc = 0x1fba94u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1fba98: 0x70c08e28
    ctx->pc = 0x1fba98u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1fba9c: 0xc06c20d
    ctx->pc = 0x1FBA9Cu;
    SET_GPR_U32(ctx, 31, 0x1FBAA4u);
    ctx->pc = 0x1FBAA0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBAA4u; }
        else if (ctx->pc != 0x1FBAA4u) { ctx->pc = 0x1FBAA4u; }
    }
    if (ctx->pc != 0x1FBAA4u) { return; }
    ctx->pc = 0x1FBAA4u;
    // 0x1fbaa4: 0x8e020000
    ctx->pc = 0x1fbaa4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fbaa8: 0xc06c09f
    ctx->pc = 0x1FBAA8u;
    SET_GPR_U32(ctx, 31, 0x1FBAB0u);
    ctx->pc = 0x1FBAACu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBAB0u; }
        else if (ctx->pc != 0x1FBAB0u) { ctx->pc = 0x1FBAB0u; }
    }
    if (ctx->pc != 0x1FBAB0u) { return; }
    ctx->pc = 0x1FBAB0u;
    // 0x1fbab0: 0x8e020004
    ctx->pc = 0x1fbab0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1fbab4: 0xc06c0fb
    ctx->pc = 0x1FBAB4u;
    SET_GPR_U32(ctx, 31, 0x1FBABCu);
    ctx->pc = 0x1FBAB8u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBABCu; }
        else if (ctx->pc != 0x1FBABCu) { ctx->pc = 0x1FBABCu; }
    }
    if (ctx->pc != 0x1FBABCu) { return; }
    ctx->pc = 0x1FBABCu;
    // 0x1fbabc: 0x8e230008
    ctx->pc = 0x1fbabcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1fbac0: 0x8e020008
    ctx->pc = 0x1fbac0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1fbac4: 0xc06c157
    ctx->pc = 0x1FBAC4u;
    SET_GPR_U32(ctx, 31, 0x1FBACCu);
    ctx->pc = 0x1FBAC8u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBACCu; }
        else if (ctx->pc != 0x1FBACCu) { ctx->pc = 0x1FBACCu; }
    }
    if (ctx->pc != 0x1FBACCu) { return; }
    ctx->pc = 0x1FBACCu;
    // 0x1fbacc: 0xc06c0fb
    ctx->pc = 0x1FBACCu;
    SET_GPR_U32(ctx, 31, 0x1FBAD4u);
    ctx->pc = 0x1FBAD0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBAD4u; }
        else if (ctx->pc != 0x1FBAD4u) { ctx->pc = 0x1FBAD4u; }
    }
    if (ctx->pc != 0x1FBAD4u) { return; }
    ctx->pc = 0x1FBAD4u;
    // 0x1fbad4: 0xc06c09f
    ctx->pc = 0x1FBAD4u;
    SET_GPR_U32(ctx, 31, 0x1FBADCu);
    ctx->pc = 0x1FBAD8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBADCu; }
        else if (ctx->pc != 0x1FBADCu) { ctx->pc = 0x1FBADCu; }
    }
    if (ctx->pc != 0x1FBADCu) { return; }
    ctx->pc = 0x1FBADCu;
    // 0x1fbadc: 0xafa000a0
    ctx->pc = 0x1fbadcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x1fbae0: 0x3c023f80
    ctx->pc = 0x1fbae0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1fbae4: 0xafa200a4
    ctx->pc = 0x1fbae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x1fbae8: 0x27a400a0
    ctx->pc = 0x1fbae8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 160));
    // 0x1fbaec: 0x27a500b0
    ctx->pc = 0x1fbaecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 176));
    // 0x1fbaf0: 0xc06bf00
    ctx->pc = 0x1FBAF0u;
    SET_GPR_U32(ctx, 31, 0x1FBAF8u);
    ctx->pc = 0x1FBAF4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBAF8u; }
        else if (ctx->pc != 0x1FBAF8u) { ctx->pc = 0x1FBAF8u; }
    }
    if (ctx->pc != 0x1FBAF8u) { return; }
    ctx->pc = 0x1FBAF8u;
    // 0x1fbaf8: 0xc7b800b0
    ctx->pc = 0x1fbaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1fbafc: 0xc7b700b8
    ctx->pc = 0x1fbafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1fbb00: 0xc7b600b4
    ctx->pc = 0x1fbb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1fbb04: 0x4618c01a
    ctx->pc = 0x1fbb04u;
    ctx->f[31] = FPU_MUL_S(ctx->f[24], ctx->f[24]);
    // 0x1fbb08: 0xc06c2a8
    ctx->pc = 0x1FBB08u;
    SET_GPR_U32(ctx, 31, 0x1FBB10u);
    ctx->pc = 0x1FBB0Cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[23], ctx->f[23]));
    ctx->pc = 0x1B0AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0AA0_0x1b0aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBB10u; }
        else if (ctx->pc != 0x1FBB10u) { ctx->pc = 0x1FBB10u; }
    }
    if (ctx->pc != 0x1FBB10u) { return; }
    ctx->pc = 0x1FBB10u;
    // 0x1fbb10: 0x46000546
    ctx->pc = 0x1fbb10u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x1fbb14: 0x4600ab06
    ctx->pc = 0x1fbb14u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1fbb18: 0xc069e68
    ctx->pc = 0x1FBB18u;
    SET_GPR_U32(ctx, 31, 0x1FBB20u);
    ctx->pc = 0x1FBB1Cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x1A79A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcTan2_0x1a79a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBB20u; }
        else if (ctx->pc != 0x1FBB20u) { ctx->pc = 0x1FBB20u; }
    }
    if (ctx->pc != 0x1FBB20u) { return; }
    ctx->pc = 0x1FBB20u;
    // 0x1fbb20: 0x28c3c
    ctx->pc = 0x1fbb20u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1fbb24: 0x118c3f
    ctx->pc = 0x1fbb24u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x1fbb28: 0x12200041
    ctx->pc = 0x1FBB28u;
    {
        const bool branch_taken_0x1fbb28 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FBB2Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
        if (branch_taken_0x1fbb28) {
            ctx->pc = 0x1FBC30u;
            goto label_1fbc30;
        }
    }
    ctx->pc = 0x1FBB30u;
    // 0x1fbb30: 0x24028000
    ctx->pc = 0x1fbb30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1fbb34: 0x16220005
    ctx->pc = 0x1FBB34u;
    {
        const bool branch_taken_0x1fbb34 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x1FBB38u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
        if (branch_taken_0x1fbb34) {
            ctx->pc = 0x1FBB4Cu;
            goto label_1fbb4c;
        }
    }
    ctx->pc = 0x1FBB3Cu;
    // 0x1fbb3c: 0xafa20090
    ctx->pc = 0x1fbb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x1fbb40: 0xafa00094
    ctx->pc = 0x1fbb40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x1fbb44: 0x10000009
    ctx->pc = 0x1FBB44u;
    {
        const bool branch_taken_0x1fbb44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FBB48u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
        if (branch_taken_0x1fbb44) {
            ctx->pc = 0x1FBB6Cu;
            goto label_1fbb6c;
        }
    }
    ctx->pc = 0x1FBB4Cu;
label_1fbb4c:
    // 0x1fbb4c: 0x0
    ctx->pc = 0x1fbb4cu;
    // NOP
    // 0x1fbb50: 0x0
    ctx->pc = 0x1fbb50u;
    // NOP
    // 0x1fbb54: 0x4615b803
    ctx->pc = 0x1fbb54u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[23] * 0.0f); } else ctx->f[0] = ctx->f[23] / ctx->f[21];
    // 0x1fbb58: 0xe7a00090
    ctx->pc = 0x1fbb58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1fbb5c: 0x4600c007
    ctx->pc = 0x1fbb5cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[24]);
    // 0x1fbb60: 0x46150003
    ctx->pc = 0x1fbb60u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[21];
    // 0x1fbb64: 0xafa00094
    ctx->pc = 0x1fbb64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x1fbb68: 0xe7a00098
    ctx->pc = 0x1fbb68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1fbb6c:
    // 0x1fbb6c: 0xc06bf55
    ctx->pc = 0x1FBB6Cu;
    SET_GPR_U32(ctx, 31, 0x1FBB74u);
    ctx->pc = 0x1FBB70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBB74u; }
        else if (ctx->pc != 0x1FBB74u) { ctx->pc = 0x1FBB74u; }
    }
    if (ctx->pc != 0x1FBB74u) { return; }
    ctx->pc = 0x1FBB74u;
    // 0x1fbb74: 0xc06c20d
    ctx->pc = 0x1FBB74u;
    SET_GPR_U32(ctx, 31, 0x1FBB7Cu);
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBB7Cu; }
        else if (ctx->pc != 0x1FBB7Cu) { ctx->pc = 0x1FBB7Cu; }
    }
    if (ctx->pc != 0x1FBB7Cu) { return; }
    ctx->pc = 0x1FBB7Cu;
    // 0x1fbb7c: 0x4600ab07
    ctx->pc = 0x1fbb7cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[21]);
    // 0x1fbb80: 0x4600b346
    ctx->pc = 0x1fbb80u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x1fbb84: 0xc069424
    ctx->pc = 0x1FBB84u;
    SET_GPR_U32(ctx, 31, 0x1FBB8Cu);
    ctx->pc = 0x1FBB88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
    ctx->pc = 0x1A5090u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRotateAxeSC_0x1a5090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBB8Cu; }
        else if (ctx->pc != 0x1FBB8Cu) { ctx->pc = 0x1FBB8Cu; }
    }
    if (ctx->pc != 0x1FBB8Cu) { return; }
    ctx->pc = 0x1FBB8Cu;
    // 0x1fbb8c: 0xc06c04e
    ctx->pc = 0x1FBB8Cu;
    SET_GPR_U32(ctx, 31, 0x1FBB94u);
    ctx->pc = 0x1FBB90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBB94u; }
        else if (ctx->pc != 0x1FBB94u) { ctx->pc = 0x1FBB94u; }
    }
    if (ctx->pc != 0x1FBB94u) { return; }
    ctx->pc = 0x1FBB94u;
    // 0x1fbb94: 0x3c023f80
    ctx->pc = 0x1fbb94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1fbb98: 0xafa200c0
    ctx->pc = 0x1fbb98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1fbb9c: 0xafa000c4
    ctx->pc = 0x1fbb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    // 0x1fbba0: 0x27a400c0
    ctx->pc = 0x1fbba0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 192));
    // 0x1fbba4: 0x27a500d0
    ctx->pc = 0x1fbba4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 208));
    // 0x1fbba8: 0xc06bf00
    ctx->pc = 0x1FBBA8u;
    SET_GPR_U32(ctx, 31, 0x1FBBB0u);
    ctx->pc = 0x1FBBACu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBBB0u; }
        else if (ctx->pc != 0x1FBBB0u) { ctx->pc = 0x1FBBB0u; }
    }
    if (ctx->pc != 0x1FBBB0u) { return; }
    ctx->pc = 0x1FBBB0u;
    // 0x1fbbb0: 0xc7b600d8
    ctx->pc = 0x1fbbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1fbbb4: 0xc06c20d
    ctx->pc = 0x1FBBB4u;
    SET_GPR_U32(ctx, 31, 0x1FBBBCu);
    ctx->pc = 0x1FBBB8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBBBCu; }
        else if (ctx->pc != 0x1FBBBCu) { ctx->pc = 0x1FBBBCu; }
    }
    if (ctx->pc != 0x1FBBBCu) { return; }
    ctx->pc = 0x1FBBBCu;
    // 0x1fbbbc: 0xc06c157
    ctx->pc = 0x1FBBBCu;
    SET_GPR_U32(ctx, 31, 0x1FBBC4u);
    ctx->pc = 0x1FBBC0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBBC4u; }
        else if (ctx->pc != 0x1FBBC4u) { ctx->pc = 0x1FBBC4u; }
    }
    if (ctx->pc != 0x1FBBC4u) { return; }
    ctx->pc = 0x1FBBC4u;
    // 0x1fbbc4: 0xc06c0fb
    ctx->pc = 0x1FBBC4u;
    SET_GPR_U32(ctx, 31, 0x1FBBCCu);
    ctx->pc = 0x1FBBC8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBBCCu; }
        else if (ctx->pc != 0x1FBBCCu) { ctx->pc = 0x1FBBCCu; }
    }
    if (ctx->pc != 0x1FBBCCu) { return; }
    ctx->pc = 0x1FBBCCu;
    // 0x1fbbcc: 0xc06c09f
    ctx->pc = 0x1FBBCCu;
    SET_GPR_U32(ctx, 31, 0x1FBBD4u);
    ctx->pc = 0x1FBBD0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBBD4u; }
        else if (ctx->pc != 0x1FBBD4u) { ctx->pc = 0x1FBBD4u; }
    }
    if (ctx->pc != 0x1FBBD4u) { return; }
    ctx->pc = 0x1FBBD4u;
    // 0x1fbbd4: 0x44910000
    ctx->pc = 0x1fbbd4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 17);
    // 0x1fbbd8: 0x0
    ctx->pc = 0x1fbbd8u;
    // NOP
    // 0x1fbbdc: 0x46800020
    ctx->pc = 0x1fbbdcu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1fbbe0: 0x46140002
    ctx->pc = 0x1fbbe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1fbbe4: 0x46000024
    ctx->pc = 0x1fbbe4u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1fbbe8: 0x44050000
    ctx->pc = 0x1fbbe8u;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[0]);
    // 0x1fbbec: 0xc06940c
    ctx->pc = 0x1FBBECu;
    SET_GPR_U32(ctx, 31, 0x1FBBF4u);
    ctx->pc = 0x1FBBF0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
    ctx->pc = 0x1A5030u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRotateAxe_0x1a5030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBBF4u; }
        else if (ctx->pc != 0x1FBBF4u) { ctx->pc = 0x1FBBF4u; }
    }
    if (ctx->pc != 0x1FBBF4u) { return; }
    ctx->pc = 0x1FBBF4u;
    // 0x1fbbf4: 0x4600b307
    ctx->pc = 0x1fbbf4u;
    ctx->f[12] = FPU_NEG_S(ctx->f[22]);
    // 0x1fbbf8: 0xc069e68
    ctx->pc = 0x1FBBF8u;
    SET_GPR_U32(ctx, 31, 0x1FBC00u);
    ctx->pc = 0x1FBBFCu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x1A79A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcTan2_0x1a79a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBC00u; }
        else if (ctx->pc != 0x1FBC00u) { ctx->pc = 0x1FBC00u; }
    }
    if (ctx->pc != 0x1FBC00u) { return; }
    ctx->pc = 0x1FBC00u;
    // 0x1fbc00: 0x2143c
    ctx->pc = 0x1fbc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1fbc04: 0x2143f
    ctx->pc = 0x1fbc04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1fbc08: 0x44820000
    ctx->pc = 0x1fbc08u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1fbc0c: 0x0
    ctx->pc = 0x1fbc0cu;
    // NOP
    // 0x1fbc10: 0x46800020
    ctx->pc = 0x1fbc10u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1fbc14: 0x4600a002
    ctx->pc = 0x1fbc14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1fbc18: 0x46000024
    ctx->pc = 0x1fbc18u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1fbc1c: 0x44040000
    ctx->pc = 0x1fbc1cu;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[0]);
    // 0x1fbc20: 0xc06c0fb
    ctx->pc = 0x1FBC20u;
    SET_GPR_U32(ctx, 31, 0x1FBC28u);
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBC28u; }
        else if (ctx->pc != 0x1FBC28u) { ctx->pc = 0x1FBC28u; }
    }
    if (ctx->pc != 0x1FBC28u) { return; }
    ctx->pc = 0x1FBC28u;
    // 0x1fbc28: 0x1000001e
    ctx->pc = 0x1FBC28u;
    {
        const bool branch_taken_0x1fbc28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FBC2Cu;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x1fbc28) {
            ctx->pc = 0x1FBCA4u;
            goto label_1fbca4;
        }
    }
    ctx->pc = 0x1FBC30u;
label_1fbc30:
    // 0x1fbc30: 0xafa200e0
    ctx->pc = 0x1fbc30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x1fbc34: 0xafa000e4
    ctx->pc = 0x1fbc34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
    // 0x1fbc38: 0x27a400e0
    ctx->pc = 0x1fbc38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 224));
    // 0x1fbc3c: 0x27a500f0
    ctx->pc = 0x1fbc3cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 240));
    // 0x1fbc40: 0xc06bf00
    ctx->pc = 0x1FBC40u;
    SET_GPR_U32(ctx, 31, 0x1FBC48u);
    ctx->pc = 0x1FBC44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBC48u; }
        else if (ctx->pc != 0x1FBC48u) { ctx->pc = 0x1FBC48u; }
    }
    if (ctx->pc != 0x1FBC48u) { return; }
    ctx->pc = 0x1FBC48u;
    // 0x1fbc48: 0xc7b600f8
    ctx->pc = 0x1fbc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1fbc4c: 0xc06c20d
    ctx->pc = 0x1FBC4Cu;
    SET_GPR_U32(ctx, 31, 0x1FBC54u);
    ctx->pc = 0x1FBC50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBC54u; }
        else if (ctx->pc != 0x1FBC54u) { ctx->pc = 0x1FBC54u; }
    }
    if (ctx->pc != 0x1FBC54u) { return; }
    ctx->pc = 0x1FBC54u;
    // 0x1fbc54: 0xc06c157
    ctx->pc = 0x1FBC54u;
    SET_GPR_U32(ctx, 31, 0x1FBC5Cu);
    ctx->pc = 0x1FBC58u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBC5Cu; }
        else if (ctx->pc != 0x1FBC5Cu) { ctx->pc = 0x1FBC5Cu; }
    }
    if (ctx->pc != 0x1FBC5Cu) { return; }
    ctx->pc = 0x1FBC5Cu;
    // 0x1fbc5c: 0xc06c0fb
    ctx->pc = 0x1FBC5Cu;
    SET_GPR_U32(ctx, 31, 0x1FBC64u);
    ctx->pc = 0x1FBC60u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBC64u; }
        else if (ctx->pc != 0x1FBC64u) { ctx->pc = 0x1FBC64u; }
    }
    if (ctx->pc != 0x1FBC64u) { return; }
    ctx->pc = 0x1FBC64u;
    // 0x1fbc64: 0xc06c09f
    ctx->pc = 0x1FBC64u;
    SET_GPR_U32(ctx, 31, 0x1FBC6Cu);
    ctx->pc = 0x1FBC68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBC6Cu; }
        else if (ctx->pc != 0x1FBC6Cu) { ctx->pc = 0x1FBC6Cu; }
    }
    if (ctx->pc != 0x1FBC6Cu) { return; }
    ctx->pc = 0x1FBC6Cu;
    // 0x1fbc6c: 0x4600b307
    ctx->pc = 0x1fbc6cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[22]);
    // 0x1fbc70: 0xc069e68
    ctx->pc = 0x1FBC70u;
    SET_GPR_U32(ctx, 31, 0x1FBC78u);
    ctx->pc = 0x1FBC74u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x1A79A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcTan2_0x1a79a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBC78u; }
        else if (ctx->pc != 0x1FBC78u) { ctx->pc = 0x1FBC78u; }
    }
    if (ctx->pc != 0x1FBC78u) { return; }
    ctx->pc = 0x1FBC78u;
    // 0x1fbc78: 0x2143c
    ctx->pc = 0x1fbc78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1fbc7c: 0x2143f
    ctx->pc = 0x1fbc7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1fbc80: 0x44820000
    ctx->pc = 0x1fbc80u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1fbc84: 0x0
    ctx->pc = 0x1fbc84u;
    // NOP
    // 0x1fbc88: 0x46800020
    ctx->pc = 0x1fbc88u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1fbc8c: 0x4600a002
    ctx->pc = 0x1fbc8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1fbc90: 0x46000024
    ctx->pc = 0x1fbc90u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1fbc94: 0x44040000
    ctx->pc = 0x1fbc94u;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[0]);
    // 0x1fbc98: 0xc06c0fb
    ctx->pc = 0x1FBC98u;
    SET_GPR_U32(ctx, 31, 0x1FBCA0u);
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBCA0u; }
        else if (ctx->pc != 0x1FBCA0u) { ctx->pc = 0x1FBCA0u; }
    }
    if (ctx->pc != 0x1FBCA0u) { return; }
    ctx->pc = 0x1FBCA0u;
    // 0x1fbca0: 0x7bbf0040
    ctx->pc = 0x1fbca0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fbca4:
    // 0x1fbca4: 0x7bb10030
    ctx->pc = 0x1fbca4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fbca8: 0x7bb00020
    ctx->pc = 0x1fbca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fbcac: 0xc7b80010
    ctx->pc = 0x1fbcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1fbcb0: 0xc7b7000c
    ctx->pc = 0x1fbcb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1fbcb4: 0xc7b60008
    ctx->pc = 0x1fbcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1fbcb8: 0xc7b50004
    ctx->pc = 0x1fbcb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1fbcbc: 0xc7b40000
    ctx->pc = 0x1fbcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1fbcc0: 0x3e00008
    ctx->pc = 0x1FBCC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBCC4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FBB4Cu: goto label_1fbb4c;
            case 0x1FBB6Cu: goto label_1fbb6c;
            case 0x1FBC30u: goto label_1fbc30;
            case 0x1FBCA4u: goto label_1fbca4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FBCC8u;
}

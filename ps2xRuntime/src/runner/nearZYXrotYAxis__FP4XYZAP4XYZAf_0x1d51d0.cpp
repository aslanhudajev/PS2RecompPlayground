#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nearZYXrotYAxis__FP4XYZAP4XYZAf
// Address: 0x1d51d0 - 0x1d5428
void nearZYXrotYAxis__FP4XYZAP4XYZAf_0x1d51d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nearZYXrotYAxis__FP4XYZAP4XYZAf");


    ctx->pc = 0x1d51d0u;

    // 0x1d51d0: 0x27bdff00
    ctx->pc = 0x1d51d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1d51d4: 0x7fbf0040
    ctx->pc = 0x1d51d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1d51d8: 0x7fb10030
    ctx->pc = 0x1d51d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d51dc: 0x7fb00020
    ctx->pc = 0x1d51dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d51e0: 0xe7b80010
    ctx->pc = 0x1d51e0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1d51e4: 0xe7b7000c
    ctx->pc = 0x1d51e4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1d51e8: 0xe7b60008
    ctx->pc = 0x1d51e8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1d51ec: 0xe7b50004
    ctx->pc = 0x1d51ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1d51f0: 0xe7b40000
    ctx->pc = 0x1d51f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d51f4: 0x70808628
    ctx->pc = 0x1d51f4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1d51f8: 0x70a08e28
    ctx->pc = 0x1d51f8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1d51fc: 0xc06c20d
    ctx->pc = 0x1D51FCu;
    SET_GPR_U32(ctx, 31, 0x1D5204u);
    ctx->pc = 0x1D5200u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5204u; }
        else if (ctx->pc != 0x1D5204u) { ctx->pc = 0x1D5204u; }
    }
    if (ctx->pc != 0x1D5204u) { return; }
    ctx->pc = 0x1D5204u;
    // 0x1d5204: 0x8e020000
    ctx->pc = 0x1d5204u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d5208: 0xc06c09f
    ctx->pc = 0x1D5208u;
    SET_GPR_U32(ctx, 31, 0x1D5210u);
    ctx->pc = 0x1D520Cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5210u; }
        else if (ctx->pc != 0x1D5210u) { ctx->pc = 0x1D5210u; }
    }
    if (ctx->pc != 0x1D5210u) { return; }
    ctx->pc = 0x1D5210u;
    // 0x1d5210: 0x8e020004
    ctx->pc = 0x1d5210u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d5214: 0xc06c0fb
    ctx->pc = 0x1D5214u;
    SET_GPR_U32(ctx, 31, 0x1D521Cu);
    ctx->pc = 0x1D5218u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D521Cu; }
        else if (ctx->pc != 0x1D521Cu) { ctx->pc = 0x1D521Cu; }
    }
    if (ctx->pc != 0x1D521Cu) { return; }
    ctx->pc = 0x1D521Cu;
    // 0x1d521c: 0x8e230008
    ctx->pc = 0x1d521cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d5220: 0x8e020008
    ctx->pc = 0x1d5220u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d5224: 0xc06c157
    ctx->pc = 0x1D5224u;
    SET_GPR_U32(ctx, 31, 0x1D522Cu);
    ctx->pc = 0x1D5228u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D522Cu; }
        else if (ctx->pc != 0x1D522Cu) { ctx->pc = 0x1D522Cu; }
    }
    if (ctx->pc != 0x1D522Cu) { return; }
    ctx->pc = 0x1D522Cu;
    // 0x1d522c: 0xc06c0fb
    ctx->pc = 0x1D522Cu;
    SET_GPR_U32(ctx, 31, 0x1D5234u);
    ctx->pc = 0x1D5230u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5234u; }
        else if (ctx->pc != 0x1D5234u) { ctx->pc = 0x1D5234u; }
    }
    if (ctx->pc != 0x1D5234u) { return; }
    ctx->pc = 0x1D5234u;
    // 0x1d5234: 0xc06c09f
    ctx->pc = 0x1D5234u;
    SET_GPR_U32(ctx, 31, 0x1D523Cu);
    ctx->pc = 0x1D5238u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D523Cu; }
        else if (ctx->pc != 0x1D523Cu) { ctx->pc = 0x1D523Cu; }
    }
    if (ctx->pc != 0x1D523Cu) { return; }
    ctx->pc = 0x1D523Cu;
    // 0x1d523c: 0xafa000a0
    ctx->pc = 0x1d523cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x1d5240: 0x3c023f80
    ctx->pc = 0x1d5240u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1d5244: 0xafa200a4
    ctx->pc = 0x1d5244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x1d5248: 0x27a400a0
    ctx->pc = 0x1d5248u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d524c: 0x27a500b0
    ctx->pc = 0x1d524cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 176));
    // 0x1d5250: 0xc06bf00
    ctx->pc = 0x1D5250u;
    SET_GPR_U32(ctx, 31, 0x1D5258u);
    ctx->pc = 0x1D5254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5258u; }
        else if (ctx->pc != 0x1D5258u) { ctx->pc = 0x1D5258u; }
    }
    if (ctx->pc != 0x1D5258u) { return; }
    ctx->pc = 0x1D5258u;
    // 0x1d5258: 0xc7b800b0
    ctx->pc = 0x1d5258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1d525c: 0xc7b700b8
    ctx->pc = 0x1d525cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1d5260: 0xc7b600b4
    ctx->pc = 0x1d5260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1d5264: 0x4618c01a
    ctx->pc = 0x1d5264u;
    ctx->f[31] = FPU_MUL_S(ctx->f[24], ctx->f[24]);
    // 0x1d5268: 0xc06c2a8
    ctx->pc = 0x1D5268u;
    SET_GPR_U32(ctx, 31, 0x1D5270u);
    ctx->pc = 0x1D526Cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[23], ctx->f[23]));
    ctx->pc = 0x1B0AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0AA0_0x1b0aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5270u; }
        else if (ctx->pc != 0x1D5270u) { ctx->pc = 0x1D5270u; }
    }
    if (ctx->pc != 0x1D5270u) { return; }
    ctx->pc = 0x1D5270u;
    // 0x1d5270: 0x46000546
    ctx->pc = 0x1d5270u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x1d5274: 0x4600ab06
    ctx->pc = 0x1d5274u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1d5278: 0xc069e68
    ctx->pc = 0x1D5278u;
    SET_GPR_U32(ctx, 31, 0x1D5280u);
    ctx->pc = 0x1D527Cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x1A79A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcTan2_0x1a79a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5280u; }
        else if (ctx->pc != 0x1D5280u) { ctx->pc = 0x1D5280u; }
    }
    if (ctx->pc != 0x1D5280u) { return; }
    ctx->pc = 0x1D5280u;
    // 0x1d5280: 0x28c3c
    ctx->pc = 0x1d5280u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d5284: 0x118c3f
    ctx->pc = 0x1d5284u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x1d5288: 0x12200041
    ctx->pc = 0x1D5288u;
    {
        const bool branch_taken_0x1d5288 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D528Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
        if (branch_taken_0x1d5288) {
            ctx->pc = 0x1D5390u;
            goto label_1d5390;
        }
    }
    ctx->pc = 0x1D5290u;
    // 0x1d5290: 0x24028000
    ctx->pc = 0x1d5290u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1d5294: 0x16220005
    ctx->pc = 0x1D5294u;
    {
        const bool branch_taken_0x1d5294 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x1D5298u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
        if (branch_taken_0x1d5294) {
            ctx->pc = 0x1D52ACu;
            goto label_1d52ac;
        }
    }
    ctx->pc = 0x1D529Cu;
    // 0x1d529c: 0xafa20090
    ctx->pc = 0x1d529cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x1d52a0: 0xafa00094
    ctx->pc = 0x1d52a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x1d52a4: 0x10000009
    ctx->pc = 0x1D52A4u;
    {
        const bool branch_taken_0x1d52a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D52A8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
        if (branch_taken_0x1d52a4) {
            ctx->pc = 0x1D52CCu;
            goto label_1d52cc;
        }
    }
    ctx->pc = 0x1D52ACu;
label_1d52ac:
    // 0x1d52ac: 0x0
    ctx->pc = 0x1d52acu;
    // NOP
    // 0x1d52b0: 0x0
    ctx->pc = 0x1d52b0u;
    // NOP
    // 0x1d52b4: 0x4615b803
    ctx->pc = 0x1d52b4u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[23] * 0.0f); } else ctx->f[0] = ctx->f[23] / ctx->f[21];
    // 0x1d52b8: 0xe7a00090
    ctx->pc = 0x1d52b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1d52bc: 0x4600c007
    ctx->pc = 0x1d52bcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[24]);
    // 0x1d52c0: 0x46150003
    ctx->pc = 0x1d52c0u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[21];
    // 0x1d52c4: 0xafa00094
    ctx->pc = 0x1d52c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x1d52c8: 0xe7a00098
    ctx->pc = 0x1d52c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1d52cc:
    // 0x1d52cc: 0xc06bf55
    ctx->pc = 0x1D52CCu;
    SET_GPR_U32(ctx, 31, 0x1D52D4u);
    ctx->pc = 0x1D52D0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D52D4u; }
        else if (ctx->pc != 0x1D52D4u) { ctx->pc = 0x1D52D4u; }
    }
    if (ctx->pc != 0x1D52D4u) { return; }
    ctx->pc = 0x1D52D4u;
    // 0x1d52d4: 0xc06c20d
    ctx->pc = 0x1D52D4u;
    SET_GPR_U32(ctx, 31, 0x1D52DCu);
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D52DCu; }
        else if (ctx->pc != 0x1D52DCu) { ctx->pc = 0x1D52DCu; }
    }
    if (ctx->pc != 0x1D52DCu) { return; }
    ctx->pc = 0x1D52DCu;
    // 0x1d52dc: 0x4600ab07
    ctx->pc = 0x1d52dcu;
    ctx->f[12] = FPU_NEG_S(ctx->f[21]);
    // 0x1d52e0: 0x4600b346
    ctx->pc = 0x1d52e0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x1d52e4: 0xc069424
    ctx->pc = 0x1D52E4u;
    SET_GPR_U32(ctx, 31, 0x1D52ECu);
    ctx->pc = 0x1D52E8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
    ctx->pc = 0x1A5090u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRotateAxeSC_0x1a5090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D52ECu; }
        else if (ctx->pc != 0x1D52ECu) { ctx->pc = 0x1D52ECu; }
    }
    if (ctx->pc != 0x1D52ECu) { return; }
    ctx->pc = 0x1D52ECu;
    // 0x1d52ec: 0xc06c04e
    ctx->pc = 0x1D52ECu;
    SET_GPR_U32(ctx, 31, 0x1D52F4u);
    ctx->pc = 0x1D52F0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D52F4u; }
        else if (ctx->pc != 0x1D52F4u) { ctx->pc = 0x1D52F4u; }
    }
    if (ctx->pc != 0x1D52F4u) { return; }
    ctx->pc = 0x1D52F4u;
    // 0x1d52f4: 0x3c023f80
    ctx->pc = 0x1d52f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1d52f8: 0xafa200c0
    ctx->pc = 0x1d52f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1d52fc: 0xafa000c4
    ctx->pc = 0x1d52fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    // 0x1d5300: 0x27a400c0
    ctx->pc = 0x1d5300u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 192));
    // 0x1d5304: 0x27a500d0
    ctx->pc = 0x1d5304u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 208));
    // 0x1d5308: 0xc06bf00
    ctx->pc = 0x1D5308u;
    SET_GPR_U32(ctx, 31, 0x1D5310u);
    ctx->pc = 0x1D530Cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5310u; }
        else if (ctx->pc != 0x1D5310u) { ctx->pc = 0x1D5310u; }
    }
    if (ctx->pc != 0x1D5310u) { return; }
    ctx->pc = 0x1D5310u;
    // 0x1d5310: 0xc7b600d8
    ctx->pc = 0x1d5310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1d5314: 0xc06c20d
    ctx->pc = 0x1D5314u;
    SET_GPR_U32(ctx, 31, 0x1D531Cu);
    ctx->pc = 0x1D5318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D531Cu; }
        else if (ctx->pc != 0x1D531Cu) { ctx->pc = 0x1D531Cu; }
    }
    if (ctx->pc != 0x1D531Cu) { return; }
    ctx->pc = 0x1D531Cu;
    // 0x1d531c: 0xc06c157
    ctx->pc = 0x1D531Cu;
    SET_GPR_U32(ctx, 31, 0x1D5324u);
    ctx->pc = 0x1D5320u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5324u; }
        else if (ctx->pc != 0x1D5324u) { ctx->pc = 0x1D5324u; }
    }
    if (ctx->pc != 0x1D5324u) { return; }
    ctx->pc = 0x1D5324u;
    // 0x1d5324: 0xc06c0fb
    ctx->pc = 0x1D5324u;
    SET_GPR_U32(ctx, 31, 0x1D532Cu);
    ctx->pc = 0x1D5328u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D532Cu; }
        else if (ctx->pc != 0x1D532Cu) { ctx->pc = 0x1D532Cu; }
    }
    if (ctx->pc != 0x1D532Cu) { return; }
    ctx->pc = 0x1D532Cu;
    // 0x1d532c: 0xc06c09f
    ctx->pc = 0x1D532Cu;
    SET_GPR_U32(ctx, 31, 0x1D5334u);
    ctx->pc = 0x1D5330u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5334u; }
        else if (ctx->pc != 0x1D5334u) { ctx->pc = 0x1D5334u; }
    }
    if (ctx->pc != 0x1D5334u) { return; }
    ctx->pc = 0x1D5334u;
    // 0x1d5334: 0x44910000
    ctx->pc = 0x1d5334u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 17);
    // 0x1d5338: 0x0
    ctx->pc = 0x1d5338u;
    // NOP
    // 0x1d533c: 0x46800020
    ctx->pc = 0x1d533cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1d5340: 0x46140002
    ctx->pc = 0x1d5340u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1d5344: 0x46000024
    ctx->pc = 0x1d5344u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1d5348: 0x44050000
    ctx->pc = 0x1d5348u;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[0]);
    // 0x1d534c: 0xc06940c
    ctx->pc = 0x1D534Cu;
    SET_GPR_U32(ctx, 31, 0x1D5354u);
    ctx->pc = 0x1D5350u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
    ctx->pc = 0x1A5030u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRotateAxe_0x1a5030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5354u; }
        else if (ctx->pc != 0x1D5354u) { ctx->pc = 0x1D5354u; }
    }
    if (ctx->pc != 0x1D5354u) { return; }
    ctx->pc = 0x1D5354u;
    // 0x1d5354: 0x4600b307
    ctx->pc = 0x1d5354u;
    ctx->f[12] = FPU_NEG_S(ctx->f[22]);
    // 0x1d5358: 0xc069e68
    ctx->pc = 0x1D5358u;
    SET_GPR_U32(ctx, 31, 0x1D5360u);
    ctx->pc = 0x1D535Cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x1A79A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcTan2_0x1a79a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5360u; }
        else if (ctx->pc != 0x1D5360u) { ctx->pc = 0x1D5360u; }
    }
    if (ctx->pc != 0x1D5360u) { return; }
    ctx->pc = 0x1D5360u;
    // 0x1d5360: 0x2143c
    ctx->pc = 0x1d5360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d5364: 0x2143f
    ctx->pc = 0x1d5364u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d5368: 0x44820000
    ctx->pc = 0x1d5368u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1d536c: 0x0
    ctx->pc = 0x1d536cu;
    // NOP
    // 0x1d5370: 0x46800020
    ctx->pc = 0x1d5370u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1d5374: 0x4600a002
    ctx->pc = 0x1d5374u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1d5378: 0x46000024
    ctx->pc = 0x1d5378u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1d537c: 0x44040000
    ctx->pc = 0x1d537cu;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[0]);
    // 0x1d5380: 0xc06c0fb
    ctx->pc = 0x1D5380u;
    SET_GPR_U32(ctx, 31, 0x1D5388u);
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5388u; }
        else if (ctx->pc != 0x1D5388u) { ctx->pc = 0x1D5388u; }
    }
    if (ctx->pc != 0x1D5388u) { return; }
    ctx->pc = 0x1D5388u;
    // 0x1d5388: 0x1000001e
    ctx->pc = 0x1D5388u;
    {
        const bool branch_taken_0x1d5388 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D538Cu;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x1d5388) {
            ctx->pc = 0x1D5404u;
            goto label_1d5404;
        }
    }
    ctx->pc = 0x1D5390u;
label_1d5390:
    // 0x1d5390: 0xafa200e0
    ctx->pc = 0x1d5390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x1d5394: 0xafa000e4
    ctx->pc = 0x1d5394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
    // 0x1d5398: 0x27a400e0
    ctx->pc = 0x1d5398u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d539c: 0x27a500f0
    ctx->pc = 0x1d539cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 240));
    // 0x1d53a0: 0xc06bf00
    ctx->pc = 0x1D53A0u;
    SET_GPR_U32(ctx, 31, 0x1D53A8u);
    ctx->pc = 0x1D53A4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D53A8u; }
        else if (ctx->pc != 0x1D53A8u) { ctx->pc = 0x1D53A8u; }
    }
    if (ctx->pc != 0x1D53A8u) { return; }
    ctx->pc = 0x1D53A8u;
    // 0x1d53a8: 0xc7b600f8
    ctx->pc = 0x1d53a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1d53ac: 0xc06c20d
    ctx->pc = 0x1D53ACu;
    SET_GPR_U32(ctx, 31, 0x1D53B4u);
    ctx->pc = 0x1D53B0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D53B4u; }
        else if (ctx->pc != 0x1D53B4u) { ctx->pc = 0x1D53B4u; }
    }
    if (ctx->pc != 0x1D53B4u) { return; }
    ctx->pc = 0x1D53B4u;
    // 0x1d53b4: 0xc06c157
    ctx->pc = 0x1D53B4u;
    SET_GPR_U32(ctx, 31, 0x1D53BCu);
    ctx->pc = 0x1D53B8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D53BCu; }
        else if (ctx->pc != 0x1D53BCu) { ctx->pc = 0x1D53BCu; }
    }
    if (ctx->pc != 0x1D53BCu) { return; }
    ctx->pc = 0x1D53BCu;
    // 0x1d53bc: 0xc06c0fb
    ctx->pc = 0x1D53BCu;
    SET_GPR_U32(ctx, 31, 0x1D53C4u);
    ctx->pc = 0x1D53C0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D53C4u; }
        else if (ctx->pc != 0x1D53C4u) { ctx->pc = 0x1D53C4u; }
    }
    if (ctx->pc != 0x1D53C4u) { return; }
    ctx->pc = 0x1D53C4u;
    // 0x1d53c4: 0xc06c09f
    ctx->pc = 0x1D53C4u;
    SET_GPR_U32(ctx, 31, 0x1D53CCu);
    ctx->pc = 0x1D53C8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D53CCu; }
        else if (ctx->pc != 0x1D53CCu) { ctx->pc = 0x1D53CCu; }
    }
    if (ctx->pc != 0x1D53CCu) { return; }
    ctx->pc = 0x1D53CCu;
    // 0x1d53cc: 0x4600b307
    ctx->pc = 0x1d53ccu;
    ctx->f[12] = FPU_NEG_S(ctx->f[22]);
    // 0x1d53d0: 0xc069e68
    ctx->pc = 0x1D53D0u;
    SET_GPR_U32(ctx, 31, 0x1D53D8u);
    ctx->pc = 0x1D53D4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x1A79A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcTan2_0x1a79a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D53D8u; }
        else if (ctx->pc != 0x1D53D8u) { ctx->pc = 0x1D53D8u; }
    }
    if (ctx->pc != 0x1D53D8u) { return; }
    ctx->pc = 0x1D53D8u;
    // 0x1d53d8: 0x2143c
    ctx->pc = 0x1d53d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d53dc: 0x2143f
    ctx->pc = 0x1d53dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d53e0: 0x44820000
    ctx->pc = 0x1d53e0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1d53e4: 0x0
    ctx->pc = 0x1d53e4u;
    // NOP
    // 0x1d53e8: 0x46800020
    ctx->pc = 0x1d53e8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1d53ec: 0x4600a002
    ctx->pc = 0x1d53ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1d53f0: 0x46000024
    ctx->pc = 0x1d53f0u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1d53f4: 0x44040000
    ctx->pc = 0x1d53f4u;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[0]);
    // 0x1d53f8: 0xc06c0fb
    ctx->pc = 0x1D53F8u;
    SET_GPR_U32(ctx, 31, 0x1D5400u);
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5400u; }
        else if (ctx->pc != 0x1D5400u) { ctx->pc = 0x1D5400u; }
    }
    if (ctx->pc != 0x1D5400u) { return; }
    ctx->pc = 0x1D5400u;
    // 0x1d5400: 0x7bbf0040
    ctx->pc = 0x1d5400u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d5404:
    // 0x1d5404: 0x7bb10030
    ctx->pc = 0x1d5404u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5408: 0x7bb00020
    ctx->pc = 0x1d5408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d540c: 0xc7b80010
    ctx->pc = 0x1d540cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1d5410: 0xc7b7000c
    ctx->pc = 0x1d5410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1d5414: 0xc7b60008
    ctx->pc = 0x1d5414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1d5418: 0xc7b50004
    ctx->pc = 0x1d5418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d541c: 0xc7b40000
    ctx->pc = 0x1d541cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d5420: 0x3e00008
    ctx->pc = 0x1D5420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5424u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D52ACu: goto label_1d52ac;
            case 0x1D52CCu: goto label_1d52cc;
            case 0x1D5390u: goto label_1d5390;
            case 0x1D5404u: goto label_1d5404;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D5428u;
}

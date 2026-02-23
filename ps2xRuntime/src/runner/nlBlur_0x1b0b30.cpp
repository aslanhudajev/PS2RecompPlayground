#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlBlur
// Address: 0x1b0b30 - 0x1b0f60
void nlBlur_0x1b0b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlBlur");


    ctx->pc = 0x1b0b30u;

    // 0x1b0b30: 0x27bdfe20
    ctx->pc = 0x1b0b30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x1b0b34: 0x7fbf0060
    ctx->pc = 0x1b0b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x1b0b38: 0x7fb20050
    ctx->pc = 0x1b0b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1b0b3c: 0x7fb10040
    ctx->pc = 0x1b0b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1b0b40: 0x7fb00030
    ctx->pc = 0x1b0b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1b0b44: 0xe7bd0024
    ctx->pc = 0x1b0b44u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1b0b48: 0xe7bc0020
    ctx->pc = 0x1b0b48u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1b0b4c: 0xe7bb001c
    ctx->pc = 0x1b0b4cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1b0b50: 0xe7ba0018
    ctx->pc = 0x1b0b50u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1b0b54: 0xe7b90014
    ctx->pc = 0x1b0b54u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1b0b58: 0xe7b80010
    ctx->pc = 0x1b0b58u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1b0b5c: 0xe7b7000c
    ctx->pc = 0x1b0b5cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1b0b60: 0xe7b60008
    ctx->pc = 0x1b0b60u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1b0b64: 0xe7b50004
    ctx->pc = 0x1b0b64u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b0b68: 0xc069558
    ctx->pc = 0x1B0B68u;
    SET_GPR_U32(ctx, 31, 0x1B0B70u);
    ctx->pc = 0x1B0B6Cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->pc = 0x1A5560u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoStat_0x1a5560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0B70u; }
        else if (ctx->pc != 0x1B0B70u) { ctx->pc = 0x1B0B70u; }
    }
    if (ctx->pc != 0x1B0B70u) { return; }
    ctx->pc = 0x1B0B70u;
    // 0x1b0b70: 0x70409628
    ctx->pc = 0x1b0b70u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b0b74: 0x16400004
    ctx->pc = 0x1B0B74u;
    {
        const bool branch_taken_0x1b0b74 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B0B78u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1b0b74) {
            ctx->pc = 0x1B0B88u;
            goto label_1b0b88;
        }
    }
    ctx->pc = 0x1B0B7Cu;
    // 0x1b0b7c: 0xc0694bc
    ctx->pc = 0x1B0B7Cu;
    SET_GPR_U32(ctx, 31, 0x1B0B84u);
    ctx->pc = 0x1A52F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaBeginMFifo_0x1a52f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0B84u; }
        else if (ctx->pc != 0x1B0B84u) { ctx->pc = 0x1B0B84u; }
    }
    if (ctx->pc != 0x1B0B84u) { return; }
    ctx->pc = 0x1B0B84u;
    // 0x1b0b84: 0x70002628
    ctx->pc = 0x1b0b84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b0b88:
    // 0x1b0b88: 0xc06bcc4
    ctx->pc = 0x1B0B88u;
    SET_GPR_U32(ctx, 31, 0x1B0B90u);
    ctx->pc = 0x1B0B8Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1AF310u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSysBeginScene_0x1af310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0B90u; }
        else if (ctx->pc != 0x1B0B90u) { ctx->pc = 0x1B0B90u; }
    }
    if (ctx->pc != 0x1B0B90u) { return; }
    ctx->pc = 0x1B0B90u;
    // 0x1b0b90: 0xc06bd64
    ctx->pc = 0x1B0B90u;
    SET_GPR_U32(ctx, 31, 0x1B0B98u);
    ctx->pc = 0x1AF590u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSysEndScene_0x1af590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0B98u; }
        else if (ctx->pc != 0x1B0B98u) { ctx->pc = 0x1B0B98u; }
    }
    if (ctx->pc != 0x1B0B98u) { return; }
    ctx->pc = 0x1B0B98u;
    // 0x1b0b98: 0x8f848a10
    ctx->pc = 0x1b0b98u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x1b0b9c: 0x24020001
    ctx->pc = 0x1b0b9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0ba0: 0x8c830000
    ctx->pc = 0x1b0ba0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b0ba4: 0x1462000b
    ctx->pc = 0x1B0BA4u;
    {
        const bool branch_taken_0x1b0ba4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1B0BA8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
        if (branch_taken_0x1b0ba4) {
            ctx->pc = 0x1B0BD4u;
            goto label_1b0bd4;
        }
    }
    ctx->pc = 0x1B0BACu;
    // 0x1b0bac: 0x24423700
    ctx->pc = 0x1b0bacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14080));
    // 0x1b0bb0: 0x10820003
    ctx->pc = 0x1B0BB0u;
    {
        const bool branch_taken_0x1b0bb0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x1b0bb0) {
            ctx->pc = 0x1B0BC0u;
            goto label_1b0bc0;
        }
    }
    ctx->pc = 0x1B0BB8u;
label_1b0bb8:
    // 0x1b0bb8: 0x1000ffff
    ctx->pc = 0x1B0BB8u;
    {
        const bool branch_taken_0x1b0bb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b0bb8) {
            ctx->pc = 0x1B0BB8u;
            goto label_1b0bb8;
        }
    }
    ctx->pc = 0x1B0BC0u;
label_1b0bc0:
    // 0x1b0bc0: 0x3c010030
    ctx->pc = 0x1b0bc0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1b0bc4: 0x84225838
    ctx->pc = 0x1b0bc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 22584)));
    // 0x1b0bc8: 0x24900070
    ctx->pc = 0x1b0bc8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 112));
    // 0x1b0bcc: 0x10000003
    ctx->pc = 0x1B0BCCu;
    {
        const bool branch_taken_0x1b0bcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B0BD0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 4), 352));
        if (branch_taken_0x1b0bcc) {
            ctx->pc = 0x1B0BDCu;
            goto label_1b0bdc;
        }
    }
    ctx->pc = 0x1B0BD4u;
label_1b0bd4:
    // 0x1b0bd4: 0x1000ffff
    ctx->pc = 0x1B0BD4u;
    {
        const bool branch_taken_0x1b0bd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b0bd4) {
            ctx->pc = 0x1B0BD4u;
            goto label_1b0bd4;
        }
    }
    ctx->pc = 0x1B0BDCu;
label_1b0bdc:
    // 0x1b0bdc: 0x3c010030
    ctx->pc = 0x1b0bdcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1b0be0: 0x84255834
    ctx->pc = 0x1b0be0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 22580)));
    // 0x1b0be4: 0x44820000
    ctx->pc = 0x1b0be4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1b0be8: 0x3c03bf00
    ctx->pc = 0x1b0be8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)48896 << 16));
    // 0x1b0bec: 0x468000e0
    ctx->pc = 0x1b0becu;
    ctx->f[3] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1b0bf0: 0xc7828af4
    ctx->pc = 0x1b0bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b0bf4: 0xc7818af0
    ctx->pc = 0x1b0bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0bf8: 0x3c010030
    ctx->pc = 0x1b0bf8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1b0bfc: 0x84245836
    ctx->pc = 0x1b0bfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 22582)));
    // 0x1b0c00: 0x3c023f80
    ctx->pc = 0x1b0c00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1b0c04: 0x44832800
    ctx->pc = 0x1b0c04u;
    *(uint32_t*)&ctx->f[5] = GPR_U32(ctx, 3);
    // 0x1b0c08: 0x44852000
    ctx->pc = 0x1b0c08u;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 5);
    // 0x1b0c0c: 0x0
    ctx->pc = 0x1b0c0cu;
    // NOP
    // 0x1b0c10: 0x46022d81
    ctx->pc = 0x1b0c10u;
    ctx->f[22] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x1b0c14: 0x44840000
    ctx->pc = 0x1b0c14u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 4);
    // 0x1b0c18: 0x46802520
    ctx->pc = 0x1b0c18u;
    ctx->f[20] = FPU_CVT_S_W(*(int32_t*)&ctx->f[4]);
    // 0x1b0c1c: 0x46800020
    ctx->pc = 0x1b0c1cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1b0c20: 0xc7848af8
    ctx->pc = 0x1b0c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b0c24: 0x46032883
    ctx->pc = 0x1b0c24u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[2] = ctx->f[5] / ctx->f[3];
    // 0x1b0c28: 0x46030543
    ctx->pc = 0x1b0c28u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[21] = ctx->f[0] / ctx->f[3];
    // 0x1b0c2c: 0x460115c1
    ctx->pc = 0x1b0c2cu;
    ctx->f[23] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1b0c30: 0x44820000
    ctx->pc = 0x1b0c30u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1b0c34: 0x4614b600
    ctx->pc = 0x1b0c34u;
    ctx->f[24] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
    // 0x1b0c38: 0x46040032
    ctx->pc = 0x1b0c38u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b0c3c: 0x0
    ctx->pc = 0x1b0c3cu;
    // NOP
    // 0x1b0c40: 0x45010005
    ctx->pc = 0x1B0C40u;
    {
        const bool branch_taken_0x1b0c40 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B0C44u;
        ctx->f[25] = FPU_ADD_S(ctx->f[23], ctx->f[21]);
        if (branch_taken_0x1b0c40) {
            ctx->pc = 0x1B0C58u;
            goto label_1b0c58;
        }
    }
    ctx->pc = 0x1B0C48u;
    // 0x1b0c48: 0x4604b582
    ctx->pc = 0x1b0c48u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[4]);
    // 0x1b0c4c: 0x4604bdc2
    ctx->pc = 0x1b0c4cu;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[4]);
    // 0x1b0c50: 0x4604c602
    ctx->pc = 0x1b0c50u;
    ctx->f[24] = FPU_MUL_S(ctx->f[24], ctx->f[4]);
    // 0x1b0c54: 0x4604ce42
    ctx->pc = 0x1b0c54u;
    ctx->f[25] = FPU_MUL_S(ctx->f[25], ctx->f[4]);
label_1b0c58:
    // 0x1b0c58: 0x8f848afc
    ctx->pc = 0x1b0c58u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937340)));
    // 0x1b0c5c: 0x27a501d8
    ctx->pc = 0x1b0c5cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 472));
    // 0x1b0c60: 0xc06c22c
    ctx->pc = 0x1B0C60u;
    SET_GPR_U32(ctx, 31, 0x1B0C68u);
    ctx->pc = 0x1B0C64u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 476));
    ctx->pc = 0x1B08B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B08B0_0x1b08b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0C68u; }
        else if (ctx->pc != 0x1B0C68u) { ctx->pc = 0x1B0C68u; }
    }
    if (ctx->pc != 0x1B0C68u) { return; }
    ctx->pc = 0x1B0C68u;
    // 0x1b0c68: 0x3c024480
    ctx->pc = 0x1b0c68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17536 << 16));
    // 0x1b0c6c: 0x44820000
    ctx->pc = 0x1b0c6cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1b0c70: 0xc7a201dc
    ctx->pc = 0x1b0c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b0c74: 0x4600a503
    ctx->pc = 0x1b0c74u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[0];
    // 0x1b0c78: 0xc7a301d8
    ctx->pc = 0x1b0c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b0c7c: 0x3c024400
    ctx->pc = 0x1b0c7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)17408 << 16));
    // 0x1b0c80: 0xc7878af0
    ctx->pc = 0x1b0c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1b0c84: 0xc7858af4
    ctx->pc = 0x1b0c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1b0c88: 0x8f838aec
    ctx->pc = 0x1b0c88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937324)));
    // 0x1b0c8c: 0x44820000
    ctx->pc = 0x1b0c8cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1b0c90: 0x4602b042
    ctx->pc = 0x1b0c90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[2]);
    // 0x1b0c94: 0x4600ad43
    ctx->pc = 0x1b0c94u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[21] = ctx->f[21] / ctx->f[0];
    // 0x1b0c98: 0x4603b002
    ctx->pc = 0x1b0c98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[3]);
    // 0x1b0c9c: 0x4603b902
    ctx->pc = 0x1b0c9cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[23], ctx->f[3]);
    // 0x1b0ca0: 0x46012840
    ctx->pc = 0x1b0ca0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x1b0ca4: 0x4603ca02
    ctx->pc = 0x1b0ca4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[25], ctx->f[3]);
    // 0x1b0ca8: 0x4602b982
    ctx->pc = 0x1b0ca8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[23], ctx->f[2]);
    // 0x1b0cac: 0x46003800
    ctx->pc = 0x1b0cacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x1b0cb0: 0x4602ca42
    ctx->pc = 0x1b0cb0u;
    ctx->f[9] = FPU_MUL_S(ctx->f[25], ctx->f[2]);
    // 0x1b0cb4: 0x460605c0
    ctx->pc = 0x1b0cb4u;
    ctx->f[23] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x1b0cb8: 0x46090640
    ctx->pc = 0x1b0cb8u;
    ctx->f[25] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x1b0cbc: 0x4602c002
    ctx->pc = 0x1b0cbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[2]);
    // 0x1b0cc0: 0x46040d81
    ctx->pc = 0x1b0cc0u;
    ctx->f[22] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x1b0cc4: 0x46080e81
    ctx->pc = 0x1b0cc4u;
    ctx->f[26] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x1b0cc8: 0x46002840
    ctx->pc = 0x1b0cc8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x1b0ccc: 0x4603c002
    ctx->pc = 0x1b0cccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[3]);
    // 0x1b0cd0: 0x46003800
    ctx->pc = 0x1b0cd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x1b0cd4: 0x46040e01
    ctx->pc = 0x1b0cd4u;
    ctx->f[24] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x1b0cd8: 0x46080f01
    ctx->pc = 0x1b0cd8u;
    ctx->f[28] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x1b0cdc: 0x460606c0
    ctx->pc = 0x1b0cdcu;
    ctx->f[27] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x1b0ce0: 0x1460001e
    ctx->pc = 0x1B0CE0u;
    {
        const bool branch_taken_0x1b0ce0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B0CE4u;
        ctx->f[29] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
        if (branch_taken_0x1b0ce0) {
            ctx->pc = 0x1B0D5Cu;
            goto label_1b0d5c;
        }
    }
    ctx->pc = 0x1B0CE8u;
    // 0x1b0ce8: 0x8f828a0c
    ctx->pc = 0x1b0ce8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937100)));
    // 0x1b0cec: 0x30420001
    ctx->pc = 0x1b0cecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x1b0cf0: 0x10400005
    ctx->pc = 0x1B0CF0u;
    {
        const bool branch_taken_0x1b0cf0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b0cf0) {
            ctx->pc = 0x1B0D08u;
            goto label_1b0d08;
        }
    }
    ctx->pc = 0x1B0CF8u;
    // 0x1b0cf8: 0x96020000
    ctx->pc = 0x1b0cf8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b0cfc: 0x304201ff
    ctx->pc = 0x1b0cfcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 511));
    // 0x1b0d00: 0x10000004
    ctx->pc = 0x1B0D00u;
    {
        const bool branch_taken_0x1b0d00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B0D04u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 5));
        if (branch_taken_0x1b0d00) {
            ctx->pc = 0x1B0D14u;
            goto label_1b0d14;
        }
    }
    ctx->pc = 0x1B0D08u;
label_1b0d08:
    // 0x1b0d08: 0x96220000
    ctx->pc = 0x1b0d08u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b0d0c: 0x304201ff
    ctx->pc = 0x1b0d0cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 511));
    // 0x1b0d10: 0x21140
    ctx->pc = 0x1b0d10u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 5));
label_1b0d14:
    // 0x1b0d14: 0x92050002
    ctx->pc = 0x1b0d14u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1b0d18: 0x2303c
    ctx->pc = 0x1b0d18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b0d1c: 0x24020002
    ctx->pc = 0x1b0d1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b0d20: 0x2183c
    ctx->pc = 0x1b0d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b0d24: 0x3c026800
    ctx->pc = 0x1b0d24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)26624 << 16));
    // 0x1b0d28: 0x431025
    ctx->pc = 0x1b0d28u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b0d2c: 0x30a3003f
    ctx->pc = 0x1b0d2cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 63));
    // 0x1b0d30: 0x92040003
    ctx->pc = 0x1b0d30u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x1b0d34: 0x6303f
    ctx->pc = 0x1b0d34u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1b0d38: 0x31bb8
    ctx->pc = 0x1b0d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x1b0d3c: 0x662825
    ctx->pc = 0x1b0d3cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1b0d40: 0x3083003f
    ctx->pc = 0x1b0d40u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 63));
    // 0x1b0d44: 0x31d38
    ctx->pc = 0x1b0d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x1b0d48: 0x651825
    ctx->pc = 0x1b0d48u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b0d4c: 0x621825
    ctx->pc = 0x1b0d4cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b0d50: 0x27a200d0
    ctx->pc = 0x1b0d50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 208));
    // 0x1b0d54: 0x10000019
    ctx->pc = 0x1B0D54u;
    {
        const bool branch_taken_0x1b0d54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B0D58u;
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        if (branch_taken_0x1b0d54) {
            ctx->pc = 0x1B0DBCu;
            goto label_1b0dbc;
        }
    }
    ctx->pc = 0x1B0D5Cu;
label_1b0d5c:
    // 0x1b0d5c: 0x8f828ae8
    ctx->pc = 0x1b0d5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937320)));
    // 0x1b0d60: 0x10400003
    ctx->pc = 0x1B0D60u;
    {
        const bool branch_taken_0x1b0d60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B0D64u;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 8));
        if (branch_taken_0x1b0d60) {
            ctx->pc = 0x1B0D70u;
            goto label_1b0d70;
        }
    }
    ctx->pc = 0x1B0D68u;
    // 0x1b0d68: 0x10000003
    ctx->pc = 0x1B0D68u;
    {
        const bool branch_taken_0x1b0d68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B0D6Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x1b0d68) {
            ctx->pc = 0x1B0D78u;
            goto label_1b0d78;
        }
    }
    ctx->pc = 0x1B0D70u;
label_1b0d70:
    // 0x1b0d70: 0x92020003
    ctx->pc = 0x1b0d70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x1b0d74: 0x3042003f
    ctx->pc = 0x1b0d74u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 63));
label_1b0d78:
    // 0x1b0d78: 0x2103c
    ctx->pc = 0x1b0d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b0d7c: 0x2103e
    ctx->pc = 0x1b0d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b0d80: 0x23538
    ctx->pc = 0x1b0d80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 20);
    // 0x1b0d84: 0x3203c
    ctx->pc = 0x1b0d84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b0d88: 0x24020002
    ctx->pc = 0x1b0d88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b0d8c: 0x2183c
    ctx->pc = 0x1b0d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b0d90: 0x3c026800
    ctx->pc = 0x1b0d90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)26624 << 16));
    // 0x1b0d94: 0x92050002
    ctx->pc = 0x1b0d94u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1b0d98: 0x431025
    ctx->pc = 0x1b0d98u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b0d9c: 0x4203e
    ctx->pc = 0x1b0d9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b0da0: 0x30a3003f
    ctx->pc = 0x1b0da0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 63));
    // 0x1b0da4: 0x31bb8
    ctx->pc = 0x1b0da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x1b0da8: 0x831825
    ctx->pc = 0x1b0da8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b0dac: 0xc31825
    ctx->pc = 0x1b0dacu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1b0db0: 0x621825
    ctx->pc = 0x1b0db0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b0db4: 0x27a200d0
    ctx->pc = 0x1b0db4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 208));
    // 0x1b0db8: 0xfc430000
    ctx->pc = 0x1b0db8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
label_1b0dbc:
    // 0x1b0dbc: 0x27a200d8
    ctx->pc = 0x1b0dbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 216));
    // 0x1b0dc0: 0xfc400000
    ctx->pc = 0x1b0dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x1b0dc4: 0x8f848b00
    ctx->pc = 0x1b0dc4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937344)));
    // 0x1b0dc8: 0x3c020026
    ctx->pc = 0x1b0dc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1b0dcc: 0x2443f9b0
    ctx->pc = 0x1b0dccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294965680));
    // 0x1b0dd0: 0x3c020002
    ctx->pc = 0x1b0dd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x1b0dd4: 0x3445000c
    ctx->pc = 0x1b0dd4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 12));
    // 0x1b0dd8: 0x8f868b04
    ctx->pc = 0x1b0dd8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294937348)));
    // 0x1b0ddc: 0x41080
    ctx->pc = 0x1b0ddcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1b0de0: 0x621021
    ctx->pc = 0x1b0de0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b0de4: 0x8c470000
    ctx->pc = 0x1b0de4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b0de8: 0x27a400f0
    ctx->pc = 0x1b0de8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b0dec: 0x27a300f8
    ctx->pc = 0x1b0decu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 248));
    // 0x1b0df0: 0x3c010030
    ctx->pc = 0x1b0df0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1b0df4: 0xafa700e0
    ctx->pc = 0x1b0df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 7));
    // 0x1b0df8: 0xafa600e4
    ctx->pc = 0x1b0df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 6));
    // 0x1b0dfc: 0xfc850000
    ctx->pc = 0x1b0dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x1b0e00: 0x27a20100
    ctx->pc = 0x1b0e00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 256));
    // 0x1b0e04: 0xfc600000
    ctx->pc = 0x1b0e04u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x1b0e08: 0xfc400000
    ctx->pc = 0x1b0e08u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x1b0e0c: 0x84245834
    ctx->pc = 0x1b0e0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 22580)));
    // 0x1b0e10: 0x3c010030
    ctx->pc = 0x1b0e10u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1b0e14: 0x84235836
    ctx->pc = 0x1b0e14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 22582)));
    // 0x1b0e18: 0x2484ffff
    ctx->pc = 0x1b0e18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1b0e1c: 0x4203c
    ctx->pc = 0x1b0e1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1b0e20: 0x4203f
    ctx->pc = 0x1b0e20u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1b0e24: 0x3c010030
    ctx->pc = 0x1b0e24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1b0e28: 0x84225838
    ctx->pc = 0x1b0e28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 22584)));
    // 0x1b0e2c: 0x62001a
    ctx->pc = 0x1b0e2cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1b0e30: 0x41bb8
    ctx->pc = 0x1b0e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 14);
    // 0x1b0e34: 0x14400002
    ctx->pc = 0x1B0E34u;
    {
        const bool branch_taken_0x1b0e34 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B0E38u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 10));
        if (branch_taken_0x1b0e34) {
            ctx->pc = 0x1B0E40u;
            goto label_1b0e40;
        }
    }
    ctx->pc = 0x1B0E3Cu;
    // 0x1b0e3c: 0x1cd
    ctx->pc = 0x1b0e3cu;
    runtime->handleBreak(rdram, ctx);
label_1b0e40:
    // 0x1b0e40: 0x1812
    ctx->pc = 0x1b0e40u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x1b0e44: 0x27a20110
    ctx->pc = 0x1b0e44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 272));
    // 0x1b0e48: 0x70002628
    ctx->pc = 0x1b0e48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b0e4c: 0x2463ffff
    ctx->pc = 0x1b0e4cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b0e50: 0x3183c
    ctx->pc = 0x1b0e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b0e54: 0x3183f
    ctx->pc = 0x1b0e54u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1b0e58: 0x318bc
    ctx->pc = 0x1b0e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x1b0e5c: 0xa31825
    ctx->pc = 0x1b0e5cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1b0e60: 0xfc430000
    ctx->pc = 0x1b0e60u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1b0e64: 0xc06c53c
    ctx->pc = 0x1B0E64u;
    SET_GPR_U32(ctx, 31, 0x1B0E6Cu);
    ctx->pc = 0x1B0E68u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 112));
    ctx->pc = 0x1B14F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlGraphSetMatCtxt_0x1b14f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0E6Cu; }
        else if (ctx->pc != 0x1B0E6Cu) { ctx->pc = 0x1B0E6Cu; }
    }
    if (ctx->pc != 0x1B0E6Cu) { return; }
    ctx->pc = 0x1B0E6Cu;
    // 0x1b0e6c: 0xe7b60164
    ctx->pc = 0x1b0e6cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x1b0e70: 0x3c023dcc
    ctx->pc = 0x1b0e70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15820 << 16));
    // 0x1b0e74: 0x3443cccd
    ctx->pc = 0x1b0e74u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 52429));
    // 0x1b0e78: 0xe7b70168
    ctx->pc = 0x1b0e78u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x1b0e7c: 0xafa3016c
    ctx->pc = 0x1b0e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 3));
    // 0x1b0e80: 0xafa00170
    ctx->pc = 0x1b0e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 0));
    // 0x1b0e84: 0x3c028080
    ctx->pc = 0x1b0e84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32896 << 16));
    // 0x1b0e88: 0xafa00174
    ctx->pc = 0x1b0e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 0));
    // 0x1b0e8c: 0x34428080
    ctx->pc = 0x1b0e8cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32896));
    // 0x1b0e90: 0xafa20160
    ctx->pc = 0x1b0e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    // 0x1b0e94: 0xe7ba017c
    ctx->pc = 0x1b0e94u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
    // 0x1b0e98: 0xe7b90180
    ctx->pc = 0x1b0e98u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x1b0e9c: 0xafa30184
    ctx->pc = 0x1b0e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 3));
    // 0x1b0ea0: 0xafa00188
    ctx->pc = 0x1b0ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 0));
    // 0x1b0ea4: 0xe7b5018c
    ctx->pc = 0x1b0ea4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
    // 0x1b0ea8: 0xafa20178
    ctx->pc = 0x1b0ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 2));
    // 0x1b0eac: 0xe7b80194
    ctx->pc = 0x1b0eacu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
    // 0x1b0eb0: 0xe7bb0198
    ctx->pc = 0x1b0eb0u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x1b0eb4: 0xafa3019c
    ctx->pc = 0x1b0eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 3));
    // 0x1b0eb8: 0xe7b401a0
    ctx->pc = 0x1b0eb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x1b0ebc: 0xafa001a4
    ctx->pc = 0x1b0ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 0));
    // 0x1b0ec0: 0xafa20190
    ctx->pc = 0x1b0ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
    // 0x1b0ec4: 0xe7bc01ac
    ctx->pc = 0x1b0ec4u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 428), bits); }
    // 0x1b0ec8: 0xe7bd01b0
    ctx->pc = 0x1b0ec8u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x1b0ecc: 0xafa301b4
    ctx->pc = 0x1b0eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 3));
    // 0x1b0ed0: 0xe7b401b8
    ctx->pc = 0x1b0ed0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x1b0ed4: 0xe7b501bc
    ctx->pc = 0x1b0ed4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
    // 0x1b0ed8: 0xafa201a8
    ctx->pc = 0x1b0ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
    // 0x1b0edc: 0x24020054
    ctx->pc = 0x1b0edcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 84));
    // 0x1b0ee0: 0xafa201c8
    ctx->pc = 0x1b0ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 2));
    // 0x1b0ee4: 0x24020004
    ctx->pc = 0x1b0ee4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b0ee8: 0xafa201cc
    ctx->pc = 0x1b0ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 2));
    // 0x1b0eec: 0x27a20160
    ctx->pc = 0x1b0eecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 352));
    // 0x1b0ef0: 0xafa201d0
    ctx->pc = 0x1b0ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 2));
    // 0x1b0ef4: 0xc071a7c
    ctx->pc = 0x1B0EF4u;
    SET_GPR_U32(ctx, 31, 0x1B0EFCu);
    ctx->pc = 0x1B0EF8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 456));
    ctx->pc = 0x1C69F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPrimPutTriStrip_0x1c69f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0EFCu; }
        else if (ctx->pc != 0x1B0EFCu) { ctx->pc = 0x1B0EFCu; }
    }
    if (ctx->pc != 0x1B0EFCu) { return; }
    ctx->pc = 0x1B0EFCu;
    // 0x1b0efc: 0x70002628
    ctx->pc = 0x1b0efcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b0f00: 0xc06bcc4
    ctx->pc = 0x1B0F00u;
    SET_GPR_U32(ctx, 31, 0x1B0F08u);
    ctx->pc = 0x1B0F04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AF310u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSysBeginScene_0x1af310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0F08u; }
        else if (ctx->pc != 0x1B0F08u) { ctx->pc = 0x1B0F08u; }
    }
    if (ctx->pc != 0x1B0F08u) { return; }
    ctx->pc = 0x1B0F08u;
    // 0x1b0f08: 0xc06bd64
    ctx->pc = 0x1B0F08u;
    SET_GPR_U32(ctx, 31, 0x1B0F10u);
    ctx->pc = 0x1AF590u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSysEndScene_0x1af590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0F10u; }
        else if (ctx->pc != 0x1B0F10u) { ctx->pc = 0x1B0F10u; }
    }
    if (ctx->pc != 0x1B0F10u) { return; }
    ctx->pc = 0x1B0F10u;
    // 0x1b0f10: 0x16400003
    ctx->pc = 0x1B0F10u;
    {
        const bool branch_taken_0x1b0f10 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B0F14u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1b0f10) {
            ctx->pc = 0x1B0F20u;
            goto label_1b0f20;
        }
    }
    ctx->pc = 0x1B0F18u;
    // 0x1b0f18: 0xc0694e8
    ctx->pc = 0x1B0F18u;
    SET_GPR_U32(ctx, 31, 0x1B0F20u);
    ctx->pc = 0x1B0F1Cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A53A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaEndMFifo_0x1a53a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0F20u; }
        else if (ctx->pc != 0x1B0F20u) { ctx->pc = 0x1B0F20u; }
    }
    if (ctx->pc != 0x1B0F20u) { return; }
    ctx->pc = 0x1B0F20u;
label_1b0f20:
    // 0x1b0f20: 0x7bbf0060
    ctx->pc = 0x1b0f20u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b0f24: 0x7bb20050
    ctx->pc = 0x1b0f24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b0f28: 0x7bb10040
    ctx->pc = 0x1b0f28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b0f2c: 0x7bb00030
    ctx->pc = 0x1b0f2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b0f30: 0xc7bd0024
    ctx->pc = 0x1b0f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x1b0f34: 0xc7bc0020
    ctx->pc = 0x1b0f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x1b0f38: 0xc7bb001c
    ctx->pc = 0x1b0f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x1b0f3c: 0xc7ba0018
    ctx->pc = 0x1b0f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1b0f40: 0xc7b90014
    ctx->pc = 0x1b0f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1b0f44: 0xc7b80010
    ctx->pc = 0x1b0f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1b0f48: 0xc7b7000c
    ctx->pc = 0x1b0f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1b0f4c: 0xc7b60008
    ctx->pc = 0x1b0f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1b0f50: 0xc7b50004
    ctx->pc = 0x1b0f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1b0f54: 0xc7b40000
    ctx->pc = 0x1b0f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b0f58: 0x3e00008
    ctx->pc = 0x1B0F58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0F5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B0B88u: goto label_1b0b88;
            case 0x1B0BB8u: goto label_1b0bb8;
            case 0x1B0BC0u: goto label_1b0bc0;
            case 0x1B0BD4u: goto label_1b0bd4;
            case 0x1B0BDCu: goto label_1b0bdc;
            case 0x1B0C58u: goto label_1b0c58;
            case 0x1B0D08u: goto label_1b0d08;
            case 0x1B0D14u: goto label_1b0d14;
            case 0x1B0D5Cu: goto label_1b0d5c;
            case 0x1B0D70u: goto label_1b0d70;
            case 0x1B0D78u: goto label_1b0d78;
            case 0x1B0DBCu: goto label_1b0dbc;
            case 0x1B0E40u: goto label_1b0e40;
            case 0x1B0F20u: goto label_1b0f20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B0F60u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setupParms
// Address: 0x2cb9d8 - 0x2cbc68
void setupParms_0x2cb9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cb9d8u;

    // 0x2cb9d8: 0x3c020036
    ctx->pc = 0x2cb9d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2cb9dc: 0x8c46dee0
    ctx->pc = 0x2cb9dcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2cb9e0: 0x9482003a
    ctx->pc = 0x2cb9e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 58)));
    // 0x2cb9e4: 0x54400004
    ctx->pc = 0x2CB9E4u;
    {
        const bool branch_taken_0x2cb9e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2cb9e4) {
            ctx->pc = 0x2CB9E8u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
            ctx->pc = 0x2CB9F8u;
            goto label_2cb9f8;
        }
    }
    ctx->pc = 0x2CB9ECu;
    // 0x2cb9ec: 0x24020001
    ctx->pc = 0x2cb9ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb9f0: 0xa482003a
    ctx->pc = 0x2cb9f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 58), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cb9f4: 0x9482003c
    ctx->pc = 0x2cb9f4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
label_2cb9f8:
    // 0x2cb9f8: 0x54400004
    ctx->pc = 0x2CB9F8u;
    {
        const bool branch_taken_0x2cb9f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2cb9f8) {
            ctx->pc = 0x2CB9FCu;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
            ctx->pc = 0x2CBA0Cu;
            goto label_2cba0c;
        }
    }
    ctx->pc = 0x2CBA00u;
    // 0x2cba00: 0x44803000
    ctx->pc = 0x2cba00u;
    *(uint32_t*)&ctx->f[6] = GPR_U32(ctx, 0);
    // 0x2cba04: 0x10000009
    ctx->pc = 0x2CBA04u;
    {
        const bool branch_taken_0x2cba04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CBA08u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 58)));
        if (branch_taken_0x2cba04) {
            ctx->pc = 0x2CBA2Cu;
            goto label_2cba2c;
        }
    }
    ctx->pc = 0x2CBA0Cu;
label_2cba0c:
    // 0x2cba0c: 0x44820800
    ctx->pc = 0x2cba0cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x2cba10: 0x46800860
    ctx->pc = 0x2cba10u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2cba14: 0x3c013f80
    ctx->pc = 0x2cba14u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2cba18: 0x44810000
    ctx->pc = 0x2cba18u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2cba1c: 0x0
    ctx->pc = 0x2cba1cu;
    // NOP
    // 0x2cba20: 0x0
    ctx->pc = 0x2cba20u;
    // NOP
    // 0x2cba24: 0x46010183
    ctx->pc = 0x2cba24u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[6] = ctx->f[0] / ctx->f[1];
    // 0x2cba28: 0x9482003a
    ctx->pc = 0x2cba28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 58)));
label_2cba2c:
    // 0x2cba2c: 0x44820800
    ctx->pc = 0x2cba2cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x2cba30: 0x46800860
    ctx->pc = 0x2cba30u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2cba34: 0x3c013f80
    ctx->pc = 0x2cba34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2cba38: 0x44810000
    ctx->pc = 0x2cba38u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2cba3c: 0x0
    ctx->pc = 0x2cba3cu;
    // NOP
    // 0x2cba40: 0x0
    ctx->pc = 0x2cba40u;
    // NOP
    // 0x2cba44: 0x46010143
    ctx->pc = 0x2cba44u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[5] = ctx->f[0] / ctx->f[1];
    // 0x2cba48: 0xc48000d0
    ctx->pc = 0x2cba48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cba4c: 0xc48300d4
    ctx->pc = 0x2cba4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cba50: 0xc48200d8
    ctx->pc = 0x2cba50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cba54: 0xc48400dc
    ctx->pc = 0x2cba54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2cba58: 0x46001801
    ctx->pc = 0x2cba58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2cba5c: 0x46050002
    ctx->pc = 0x2cba5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2cba60: 0xe48000d4
    ctx->pc = 0x2cba60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x2cba64: 0x44800000
    ctx->pc = 0x2cba64u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2cba68: 0x46003032
    ctx->pc = 0x2cba68u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cba6c: 0x0
    ctx->pc = 0x2cba6cu;
    // NOP
    // 0x2cba70: 0x45010007
    ctx->pc = 0x2CBA70u;
    {
        const bool branch_taken_0x2cba70 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CBA74u;
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
        if (branch_taken_0x2cba70) {
            ctx->pc = 0x2CBA90u;
            goto label_2cba90;
        }
    }
    ctx->pc = 0x2CBA78u;
    // 0x2cba78: 0x46041001
    ctx->pc = 0x2cba78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2cba7c: 0x46010002
    ctx->pc = 0x2cba7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cba80: 0x46020000
    ctx->pc = 0x2cba80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cba84: 0xe48000d8
    ctx->pc = 0x2cba84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 216), bits); }
    // 0x2cba88: 0x46022001
    ctx->pc = 0x2cba88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x2cba8c: 0x46060002
    ctx->pc = 0x2cba8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_2cba90:
    // 0x2cba90: 0xe48000dc
    ctx->pc = 0x2cba90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 220), bits); }
    // 0x2cba94: 0xc4800120
    ctx->pc = 0x2cba94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cba98: 0xc4810124
    ctx->pc = 0x2cba98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cba9c: 0x46010034
    ctx->pc = 0x2cba9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cbaa0: 0x0
    ctx->pc = 0x2cbaa0u;
    // NOP
    // 0x2cbaa4: 0x45030001
    ctx->pc = 0x2CBAA4u;
    {
        const bool branch_taken_0x2cbaa4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cbaa4) {
            ctx->pc = 0x2CBAA8u;
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->pc = 0x2CBAACu;
            goto label_2cbaac;
        }
    }
    ctx->pc = 0x2CBAACu;
label_2cbaac:
    // 0x2cbaac: 0xc4810128
    ctx->pc = 0x2cbaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cbab0: 0x46010034
    ctx->pc = 0x2cbab0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cbab4: 0x0
    ctx->pc = 0x2cbab4u;
    // NOP
    // 0x2cbab8: 0x45030001
    ctx->pc = 0x2CBAB8u;
    {
        const bool branch_taken_0x2cbab8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cbab8) {
            ctx->pc = 0x2CBABCu;
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->pc = 0x2CBAC0u;
            goto label_2cbac0;
        }
    }
    ctx->pc = 0x2CBAC0u;
label_2cbac0:
    // 0x2cbac0: 0xc482012c
    ctx->pc = 0x2cbac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cbac4: 0x46020034
    ctx->pc = 0x2cbac4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cbac8: 0x0
    ctx->pc = 0x2cbac8u;
    // NOP
    // 0x2cbacc: 0x45000002
    ctx->pc = 0x2CBACCu;
    {
        const bool branch_taken_0x2cbacc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CBAD0u;
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x2cbacc) {
            ctx->pc = 0x2CBAD8u;
            goto label_2cbad8;
        }
    }
    ctx->pc = 0x2CBAD4u;
    // 0x2cbad4: 0x46001046
    ctx->pc = 0x2cbad4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_2cbad8:
    // 0x2cbad8: 0x3c013f00
    ctx->pc = 0x2cbad8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2cbadc: 0x44810000
    ctx->pc = 0x2cbadcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2cbae0: 0x46000802
    ctx->pc = 0x2cbae0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cbae4: 0xe48000a8
    ctx->pc = 0x2cbae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 168), bits); }
    // 0x2cbae8: 0x90820060
    ctx->pc = 0x2cbae8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2cbaec: 0x54400004
    ctx->pc = 0x2CBAECu;
    {
        const bool branch_taken_0x2cbaec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2cbaec) {
            ctx->pc = 0x2CBAF0u;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 97)));
            ctx->pc = 0x2CBB00u;
            goto label_2cbb00;
        }
    }
    ctx->pc = 0x2CBAF4u;
    // 0x2cbaf4: 0x24020001
    ctx->pc = 0x2cbaf4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbaf8: 0xa0820060
    ctx->pc = 0x2cbaf8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 96), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cbafc: 0x90820061
    ctx->pc = 0x2cbafcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 97)));
label_2cbb00:
    // 0x2cbb00: 0x54400004
    ctx->pc = 0x2CBB00u;
    {
        const bool branch_taken_0x2cbb00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2cbb00) {
            ctx->pc = 0x2CBB04u;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 97)));
            ctx->pc = 0x2CBB14u;
            goto label_2cbb14;
        }
    }
    ctx->pc = 0x2CBB08u;
    // 0x2cbb08: 0x44803000
    ctx->pc = 0x2cbb08u;
    *(uint32_t*)&ctx->f[6] = GPR_U32(ctx, 0);
    // 0x2cbb0c: 0x10000009
    ctx->pc = 0x2CBB0Cu;
    {
        const bool branch_taken_0x2cbb0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CBB10u;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 96)));
        if (branch_taken_0x2cbb0c) {
            ctx->pc = 0x2CBB34u;
            goto label_2cbb34;
        }
    }
    ctx->pc = 0x2CBB14u;
label_2cbb14:
    // 0x2cbb14: 0x44820800
    ctx->pc = 0x2cbb14u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x2cbb18: 0x46800860
    ctx->pc = 0x2cbb18u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2cbb1c: 0x3c013f80
    ctx->pc = 0x2cbb1cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2cbb20: 0x44810000
    ctx->pc = 0x2cbb20u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2cbb24: 0x0
    ctx->pc = 0x2cbb24u;
    // NOP
    // 0x2cbb28: 0x0
    ctx->pc = 0x2cbb28u;
    // NOP
    // 0x2cbb2c: 0x46010183
    ctx->pc = 0x2cbb2cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[6] = ctx->f[0] / ctx->f[1];
    // 0x2cbb30: 0x90820060
    ctx->pc = 0x2cbb30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 96)));
label_2cbb34:
    // 0x2cbb34: 0x44820800
    ctx->pc = 0x2cbb34u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x2cbb38: 0x46800860
    ctx->pc = 0x2cbb38u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2cbb3c: 0x3c013f80
    ctx->pc = 0x2cbb3cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2cbb40: 0x44810000
    ctx->pc = 0x2cbb40u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2cbb44: 0x0
    ctx->pc = 0x2cbb44u;
    // NOP
    // 0x2cbb48: 0x0
    ctx->pc = 0x2cbb48u;
    // NOP
    // 0x2cbb4c: 0x46010143
    ctx->pc = 0x2cbb4cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[5] = ctx->f[0] / ctx->f[1];
    // 0x2cbb50: 0x46060842
    ctx->pc = 0x2cbb50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x2cbb54: 0x248300e0
    ctx->pc = 0x2cbb54u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 224));
    // 0x2cbb58: 0x24820130
    ctx->pc = 0x2cbb58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 304));
    // 0x2cbb5c: 0x10430027
    ctx->pc = 0x2CBB5Cu;
    {
        const bool branch_taken_0x2cbb5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x2CBB60u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 288));
        if (branch_taken_0x2cbb5c) {
            ctx->pc = 0x2CBBFCu;
            goto label_2cbbfc;
        }
    }
    ctx->pc = 0x2CBB64u;
    // 0x2cbb64: 0x44803800
    ctx->pc = 0x2cbb64u;
    *(uint32_t*)&ctx->f[7] = GPR_U32(ctx, 0);
label_2cbb68:
    // 0x2cbb68: 0xc4a00000
    ctx->pc = 0x2cbb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cbb6c: 0xc4a30004
    ctx->pc = 0x2cbb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cbb70: 0xc4a20008
    ctx->pc = 0x2cbb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cbb74: 0x46072832
    ctx->pc = 0x2cbb74u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cbb78: 0x0
    ctx->pc = 0x2cbb78u;
    // NOP
    // 0x2cbb7c: 0x45010005
    ctx->pc = 0x2CBB7Cu;
    {
        const bool branch_taken_0x2cbb7c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CBB80u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        if (branch_taken_0x2cbb7c) {
            ctx->pc = 0x2CBB94u;
            goto label_2cbb94;
        }
    }
    ctx->pc = 0x2CBB84u;
    // 0x2cbb84: 0x46030032
    ctx->pc = 0x2cbb84u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cbb88: 0x0
    ctx->pc = 0x2cbb88u;
    // NOP
    // 0x2cbb8c: 0x45020004
    ctx->pc = 0x2CBB8Cu;
    {
        const bool branch_taken_0x2cbb8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cbb8c) {
            ctx->pc = 0x2CBB90u;
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
            ctx->pc = 0x2CBBA0u;
            goto label_2cbba0;
        }
    }
    ctx->pc = 0x2CBB94u;
label_2cbb94:
    // 0x2cbb94: 0xe4a00000
    ctx->pc = 0x2cbb94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2cbb98: 0x10000004
    ctx->pc = 0x2CBB98u;
    {
        const bool branch_taken_0x2cbb98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CBB9Cu;
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x2cbb98) {
            ctx->pc = 0x2CBBACu;
            goto label_2cbbac;
        }
    }
    ctx->pc = 0x2CBBA0u;
label_2cbba0:
    // 0x2cbba0: 0x46001801
    ctx->pc = 0x2cbba0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2cbba4: 0x46050002
    ctx->pc = 0x2cbba4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2cbba8: 0xe4a00004
    ctx->pc = 0x2cbba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_2cbbac:
    // 0x2cbbac: 0x46073032
    ctx->pc = 0x2cbbacu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[6], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cbbb0: 0x0
    ctx->pc = 0x2cbbb0u;
    // NOP
    // 0x2cbbb4: 0x45030006
    ctx->pc = 0x2CBBB4u;
    {
        const bool branch_taken_0x2cbbb4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cbbb4) {
            ctx->pc = 0x2CBBB8u;
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
            ctx->pc = 0x2CBBD0u;
            goto label_2cbbd0;
        }
    }
    ctx->pc = 0x2CBBBCu;
    // 0x2cbbbc: 0x46041032
    ctx->pc = 0x2cbbbcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cbbc0: 0x0
    ctx->pc = 0x2cbbc0u;
    // NOP
    // 0x2cbbc4: 0x45020004
    ctx->pc = 0x2CBBC4u;
    {
        const bool branch_taken_0x2cbbc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cbbc4) {
            ctx->pc = 0x2CBBC8u;
            ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
            ctx->pc = 0x2CBBD8u;
            goto label_2cbbd8;
        }
    }
    ctx->pc = 0x2CBBCCu;
    // 0x2cbbcc: 0xe4a20008
    ctx->pc = 0x2cbbccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_2cbbd0:
    // 0x2cbbd0: 0x10000007
    ctx->pc = 0x2CBBD0u;
    {
        const bool branch_taken_0x2cbbd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CBBD4u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
        if (branch_taken_0x2cbbd0) {
            ctx->pc = 0x2CBBF0u;
            goto label_2cbbf0;
        }
    }
    ctx->pc = 0x2CBBD8u;
label_2cbbd8:
    // 0x2cbbd8: 0x46010002
    ctx->pc = 0x2cbbd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cbbdc: 0x46020000
    ctx->pc = 0x2cbbdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cbbe0: 0xe4a00008
    ctx->pc = 0x2cbbe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x2cbbe4: 0x46022001
    ctx->pc = 0x2cbbe4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x2cbbe8: 0x46060002
    ctx->pc = 0x2cbbe8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2cbbec: 0xe4a0000c
    ctx->pc = 0x2cbbecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_2cbbf0:
    // 0x2cbbf0: 0xa0102d
    ctx->pc = 0x2cbbf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbbf4: 0x1443ffdc
    ctx->pc = 0x2CBBF4u;
    {
        const bool branch_taken_0x2cbbf4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x2CBBF8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967280));
        if (branch_taken_0x2cbbf4) {
            ctx->pc = 0x2CBB68u;
            goto label_2cbb68;
        }
    }
    ctx->pc = 0x2CBBFCu;
label_2cbbfc:
    // 0x2cbbfc: 0x8c82008c
    ctx->pc = 0x2cbbfcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x2cbc00: 0x14400017
    ctx->pc = 0x2CBC00u;
    {
        const bool branch_taken_0x2cbc00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2CBC04u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2cbc00) {
            ctx->pc = 0x2CBC60u;
            goto label_2cbc60;
        }
    }
    ctx->pc = 0x2CBC08u;
    // 0x2cbc08: 0x2445aa38
    ctx->pc = 0x2cbc08u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294945336));
    // 0x2cbc0c: 0x8ca2001c
    ctx->pc = 0x2cbc0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2cbc10: 0xac82008c
    ctx->pc = 0x2cbc10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 2));
    // 0x2cbc14: 0x8c820028
    ctx->pc = 0x2cbc14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2cbc18: 0x8c420060
    ctx->pc = 0x2cbc18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2cbc1c: 0x3c030080
    ctx->pc = 0x2cbc1cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)128 << 16));
    // 0x2cbc20: 0x431024
    ctx->pc = 0x2cbc20u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cbc24: 0x50400005
    ctx->pc = 0x2CBC24u;
    {
        const bool branch_taken_0x2cbc24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cbc24) {
            ctx->pc = 0x2CBC28u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 140)));
            ctx->pc = 0x2CBC3Cu;
            goto label_2cbc3c;
        }
    }
    ctx->pc = 0x2CBC2Cu;
    // 0x2cbc2c: 0x8ca20020
    ctx->pc = 0x2cbc2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2cbc30: 0x54400001
    ctx->pc = 0x2CBC30u;
    {
        const bool branch_taken_0x2cbc30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2cbc30) {
            ctx->pc = 0x2CBC34u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 2));
            ctx->pc = 0x2CBC38u;
            goto label_2cbc38;
        }
    }
    ctx->pc = 0x2CBC38u;
label_2cbc38:
    // 0x2cbc38: 0x8c82008c
    ctx->pc = 0x2cbc38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 140)));
label_2cbc3c:
    // 0x2cbc3c: 0x14400008
    ctx->pc = 0x2CBC3Cu;
    {
        const bool branch_taken_0x2cbc3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2cbc3c) {
            ctx->pc = 0x2CBC60u;
            goto label_2cbc60;
        }
    }
    ctx->pc = 0x2CBC44u;
    // 0x2cbc44: 0x8cc20038
    ctx->pc = 0x2cbc44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x2cbc48: 0x8c420004
    ctx->pc = 0x2cbc48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cbc4c: 0x8c420058
    ctx->pc = 0x2cbc4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2cbc50: 0xac82008c
    ctx->pc = 0x2cbc50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 2));
    // 0x2cbc54: 0x9482002c
    ctx->pc = 0x2cbc54u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2cbc58: 0x34420030
    ctx->pc = 0x2cbc58u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 48));
    // 0x2cbc5c: 0xa482002c
    ctx->pc = 0x2cbc5cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 44), (uint16_t)GPR_U32(ctx, 2));
label_2cbc60:
    // 0x2cbc60: 0x3e00008
    ctx->pc = 0x2CBC60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CB9F8u: goto label_2cb9f8;
            case 0x2CBA0Cu: goto label_2cba0c;
            case 0x2CBA2Cu: goto label_2cba2c;
            case 0x2CBA90u: goto label_2cba90;
            case 0x2CBAACu: goto label_2cbaac;
            case 0x2CBAC0u: goto label_2cbac0;
            case 0x2CBAD8u: goto label_2cbad8;
            case 0x2CBB00u: goto label_2cbb00;
            case 0x2CBB14u: goto label_2cbb14;
            case 0x2CBB34u: goto label_2cbb34;
            case 0x2CBB68u: goto label_2cbb68;
            case 0x2CBB94u: goto label_2cbb94;
            case 0x2CBBA0u: goto label_2cbba0;
            case 0x2CBBACu: goto label_2cbbac;
            case 0x2CBBD0u: goto label_2cbbd0;
            case 0x2CBBD8u: goto label_2cbbd8;
            case 0x2CBBF0u: goto label_2cbbf0;
            case 0x2CBBFCu: goto label_2cbbfc;
            case 0x2CBC38u: goto label_2cbc38;
            case 0x2CBC3Cu: goto label_2cbc3c;
            case 0x2CBC60u: goto label_2cbc60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CBC68u;
}

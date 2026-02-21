#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbWindowZoom
// Address: 0x2aca48 - 0x2acd00
void pbWindowZoom_0x2aca48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2aca48u;

    // 0x2aca48: 0x27bdffd0
    ctx->pc = 0x2aca48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2aca4c: 0xffbf0010
    ctx->pc = 0x2aca4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2aca50: 0xffb00000
    ctx->pc = 0x2aca50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2aca54: 0xe7b50028
    ctx->pc = 0x2aca54u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2aca58: 0xe7b40020
    ctx->pc = 0x2aca58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2aca5c: 0x3c020036
    ctx->pc = 0x2aca5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2aca60: 0x3c013f80
    ctx->pc = 0x2aca60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2aca64: 0x44810800
    ctx->pc = 0x2aca64u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2aca68: 0x46016032
    ctx->pc = 0x2aca68u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aca6c: 0x0
    ctx->pc = 0x2aca6cu;
    // NOP
    // 0x2aca70: 0x45000019
    ctx->pc = 0x2ACA70u;
    {
        const bool branch_taken_0x2aca70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ACA74u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
        if (branch_taken_0x2aca70) {
            ctx->pc = 0x2ACAD8u;
            goto label_2acad8;
        }
    }
    ctx->pc = 0x2ACA78u;
    // 0x2aca78: 0x46016832
    ctx->pc = 0x2aca78u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aca7c: 0x0
    ctx->pc = 0x2aca7cu;
    // NOP
    // 0x2aca80: 0x45000016
    ctx->pc = 0x2ACA80u;
    {
        const bool branch_taken_0x2aca80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ACA84u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2aca80) {
            ctx->pc = 0x2ACADCu;
            goto label_2acadc;
        }
    }
    ctx->pc = 0x2ACA88u;
    // 0x2aca88: 0x44800000
    ctx->pc = 0x2aca88u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2aca8c: 0x46007032
    ctx->pc = 0x2aca8cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[14], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aca90: 0x0
    ctx->pc = 0x2aca90u;
    // NOP
    // 0x2aca94: 0x45000012
    ctx->pc = 0x2ACA94u;
    {
        const bool branch_taken_0x2aca94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ACA98u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294935552)));
        if (branch_taken_0x2aca94) {
            ctx->pc = 0x2ACAE0u;
            goto label_2acae0;
        }
    }
    ctx->pc = 0x2ACA9Cu;
    // 0x2aca9c: 0x46007832
    ctx->pc = 0x2aca9cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[15], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2acaa0: 0x4500000f
    ctx->pc = 0x2ACAA0u;
    {
        const bool branch_taken_0x2acaa0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2acaa0) {
            ctx->pc = 0x2ACAE0u;
            goto label_2acae0;
        }
    }
    ctx->pc = 0x2ACAA8u;
    // 0x2acaa8: 0x3c020037
    ctx->pc = 0x2acaa8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2acaac: 0x8c428400
    ctx->pc = 0x2acaacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294935552)));
    // 0x2acab0: 0x24030001
    ctx->pc = 0x2acab0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2acab4: 0xac430008
    ctx->pc = 0x2acab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x2acab8: 0xe441000c
    ctx->pc = 0x2acab8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2acabc: 0xac400000
    ctx->pc = 0x2acabcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2acac0: 0xdfbf0010
    ctx->pc = 0x2acac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2acac4: 0xdfb00000
    ctx->pc = 0x2acac4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2acac8: 0xc7b50028
    ctx->pc = 0x2acac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2acacc: 0xc7b40020
    ctx->pc = 0x2acaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2acad0: 0x80aa3a2
    ctx->pc = 0x2ACAD0u;
    ctx->pc = 0x2ACAD4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x2A8E88u;
    pbSetupFrameSize_0x2a8e88(rdram, ctx, runtime); return;
    ctx->pc = 0x2ACAD8u;
label_2acad8:
    // 0x2acad8: 0x3c020037
    ctx->pc = 0x2acad8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2acadc:
    // 0x2acadc: 0x8c438400
    ctx->pc = 0x2acadcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294935552)));
label_2acae0:
    // 0x2acae0: 0x24020002
    ctx->pc = 0x2acae0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2acae4: 0xac620000
    ctx->pc = 0x2acae4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2acae8: 0xe46c0020
    ctx->pc = 0x2acae8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x2acaec: 0xe46d0024
    ctx->pc = 0x2acaecu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x2acaf0: 0xe46e0028
    ctx->pc = 0x2acaf0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x2acaf4: 0xe46f002c
    ctx->pc = 0x2acaf4u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
    // 0x2acaf8: 0x3c020037
    ctx->pc = 0x2acaf8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2acafc: 0x8c428440
    ctx->pc = 0x2acafcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294935616)));
    // 0x2acb00: 0x10400006
    ctx->pc = 0x2ACB00u;
    {
        const bool branch_taken_0x2acb00 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ACB04u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2acb00) {
            ctx->pc = 0x2ACB1Cu;
            goto label_2acb1c;
        }
    }
    ctx->pc = 0x2ACB08u;
    // 0x2acb08: 0x3c013f7f
    ctx->pc = 0x2acb08u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16255 << 16));
    // 0x2acb0c: 0x3421be77
    ctx->pc = 0x2acb0cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 48759));
    // 0x2acb10: 0x44810000
    ctx->pc = 0x2acb10u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2acb14: 0x10000006
    ctx->pc = 0x2ACB14u;
    {
        const bool branch_taken_0x2acb14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ACB18u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        if (branch_taken_0x2acb14) {
            ctx->pc = 0x2ACB30u;
            goto label_2acb30;
        }
    }
    ctx->pc = 0x2ACB1Cu;
label_2acb1c:
    // 0x2acb1c: 0x8c438400
    ctx->pc = 0x2acb1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294935552)));
    // 0x2acb20: 0x24020001
    ctx->pc = 0x2acb20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2acb24: 0xac620008
    ctx->pc = 0x2acb24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2acb28: 0x3c013f80
    ctx->pc = 0x2acb28u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2acb2c: 0x44810000
    ctx->pc = 0x2acb2cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2acb30:
    // 0x2acb30: 0xe460000c
    ctx->pc = 0x2acb30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2acb34: 0x3c020037
    ctx->pc = 0x2acb34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2acb38: 0x8c428400
    ctx->pc = 0x2acb38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294935552)));
    // 0x2acb3c: 0x3c013f80
    ctx->pc = 0x2acb3cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2acb40: 0x44811800
    ctx->pc = 0x2acb40u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x2acb44: 0xe4430010
    ctx->pc = 0x2acb44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2acb48: 0xac40001c
    ctx->pc = 0x2acb48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x2acb4c: 0x8e030040
    ctx->pc = 0x2acb4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2acb50: 0xc4740000
    ctx->pc = 0x2acb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2acb54: 0xc4750004
    ctx->pc = 0x2acb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2acb58: 0x3c014180
    ctx->pc = 0x2acb58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16768 << 16));
    // 0x2acb5c: 0x44812800
    ctx->pc = 0x2acb5cu;
    *(uint32_t*)&ctx->f[5] = GPR_U32(ctx, 1);
    // 0x2acb60: 0x460561c2
    ctx->pc = 0x2acb60u;
    ctx->f[7] = FPU_MUL_S(ctx->f[12], ctx->f[5]);
    // 0x2acb64: 0x8e020010
    ctx->pc = 0x2acb64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2acb68: 0xc4400020
    ctx->pc = 0x2acb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acb6c: 0x46800020
    ctx->pc = 0x2acb6cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2acb70: 0x46003802
    ctx->pc = 0x2acb70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2acb74: 0xc4410028
    ctx->pc = 0x2acb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2acb78: 0x46800860
    ctx->pc = 0x2acb78u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2acb7c: 0x0
    ctx->pc = 0x2acb7cu;
    // NOP
    // 0x2acb80: 0x0
    ctx->pc = 0x2acb80u;
    // NOP
    // 0x2acb84: 0x46010003
    ctx->pc = 0x2acb84u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2acb88: 0xe4600000
    ctx->pc = 0x2acb88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2acb8c: 0x8e030040
    ctx->pc = 0x2acb8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2acb90: 0x46056982
    ctx->pc = 0x2acb90u;
    ctx->f[6] = FPU_MUL_S(ctx->f[13], ctx->f[5]);
    // 0x2acb94: 0x8e020010
    ctx->pc = 0x2acb94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2acb98: 0xc4400024
    ctx->pc = 0x2acb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acb9c: 0x46800020
    ctx->pc = 0x2acb9cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2acba0: 0x46003002
    ctx->pc = 0x2acba0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2acba4: 0xc441002c
    ctx->pc = 0x2acba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2acba8: 0x46800860
    ctx->pc = 0x2acba8u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2acbac: 0x0
    ctx->pc = 0x2acbacu;
    // NOP
    // 0x2acbb0: 0x0
    ctx->pc = 0x2acbb0u;
    // NOP
    // 0x2acbb4: 0x46010003
    ctx->pc = 0x2acbb4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2acbb8: 0xe4600004
    ctx->pc = 0x2acbb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2acbbc: 0x8e030040
    ctx->pc = 0x2acbbcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2acbc0: 0x8e020010
    ctx->pc = 0x2acbc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2acbc4: 0xc4420020
    ctx->pc = 0x2acbc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2acbc8: 0x468010a0
    ctx->pc = 0x2acbc8u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x2acbcc: 0x46026002
    ctx->pc = 0x2acbccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x2acbd0: 0x3c013f00
    ctx->pc = 0x2acbd0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2acbd4: 0x44812000
    ctx->pc = 0x2acbd4u;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 1);
    // 0x2acbd8: 0x46040002
    ctx->pc = 0x2acbd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2acbdc: 0xc4410038
    ctx->pc = 0x2acbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2acbe0: 0x46000841
    ctx->pc = 0x2acbe0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2acbe4: 0x46036001
    ctx->pc = 0x2acbe4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[3]);
    // 0x2acbe8: 0x46020002
    ctx->pc = 0x2acbe8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2acbec: 0x46040002
    ctx->pc = 0x2acbecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2acbf0: 0x46000840
    ctx->pc = 0x2acbf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2acbf4: 0x46027082
    ctx->pc = 0x2acbf4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x2acbf8: 0x46020841
    ctx->pc = 0x2acbf8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2acbfc: 0x46050842
    ctx->pc = 0x2acbfcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2acc00: 0x46000824
    ctx->pc = 0x2acc00u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x2acc04: 0xe4600008
    ctx->pc = 0x2acc04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2acc08: 0x8e030040
    ctx->pc = 0x2acc08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2acc0c: 0x8e020010
    ctx->pc = 0x2acc0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2acc10: 0xc4420024
    ctx->pc = 0x2acc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2acc14: 0x468010a0
    ctx->pc = 0x2acc14u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x2acc18: 0x46026842
    ctx->pc = 0x2acc18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[2]);
    // 0x2acc1c: 0x46040842
    ctx->pc = 0x2acc1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2acc20: 0xc440003c
    ctx->pc = 0x2acc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acc24: 0x46010001
    ctx->pc = 0x2acc24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2acc28: 0x460368c1
    ctx->pc = 0x2acc28u;
    ctx->f[3] = FPU_SUB_S(ctx->f[13], ctx->f[3]);
    // 0x2acc2c: 0x460218c2
    ctx->pc = 0x2acc2cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2acc30: 0x460418c2
    ctx->pc = 0x2acc30u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2acc34: 0x46030000
    ctx->pc = 0x2acc34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2acc38: 0x46027882
    ctx->pc = 0x2acc38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[15], ctx->f[2]);
    // 0x2acc3c: 0x46020001
    ctx->pc = 0x2acc3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2acc40: 0x46050002
    ctx->pc = 0x2acc40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2acc44: 0x46000064
    ctx->pc = 0x2acc44u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2acc48: 0xe461000c
    ctx->pc = 0x2acc48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2acc4c: 0x8e030040
    ctx->pc = 0x2acc4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2acc50: 0x8e020010
    ctx->pc = 0x2acc50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2acc54: 0xc4400020
    ctx->pc = 0x2acc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acc58: 0x46800020
    ctx->pc = 0x2acc58u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2acc5c: 0x460039c2
    ctx->pc = 0x2acc5cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2acc60: 0x46003824
    ctx->pc = 0x2acc60u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[7]);
    // 0x2acc64: 0xe4600010
    ctx->pc = 0x2acc64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x2acc68: 0x8e030040
    ctx->pc = 0x2acc68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2acc6c: 0x8e020010
    ctx->pc = 0x2acc6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2acc70: 0xc4400024
    ctx->pc = 0x2acc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acc74: 0x46800020
    ctx->pc = 0x2acc74u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2acc78: 0x46003182
    ctx->pc = 0x2acc78u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2acc7c: 0x46003024
    ctx->pc = 0x2acc7cu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[6]);
    // 0x2acc80: 0xe4600014
    ctx->pc = 0x2acc80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x2acc84: 0x8e020040
    ctx->pc = 0x2acc84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2acc88: 0xc44c0000
    ctx->pc = 0x2acc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2acc8c: 0xc44d0004
    ctx->pc = 0x2acc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2acc90: 0x0
    ctx->pc = 0x2acc90u;
    // NOP
    // 0x2acc94: 0x0
    ctx->pc = 0x2acc94u;
    // NOP
    // 0x2acc98: 0x46146303
    ctx->pc = 0x2acc98u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[20];
    // 0x2acc9c: 0x0
    ctx->pc = 0x2acc9cu;
    // NOP
    // 0x2acca0: 0x0
    ctx->pc = 0x2acca0u;
    // NOP
    // 0x2acca4: 0x46156b43
    ctx->pc = 0x2acca4u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[21];
    // 0x2acca8: 0xc0b0abe
    ctx->pc = 0x2ACCA8u;
    SET_GPR_U32(ctx, 31, 0x2ACCB0u);
    ctx->pc = 0x2C2AF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitUpdateWindow_0x2c2af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACCB0u; }
    }
    if (ctx->pc != 0x2ACCB0u) { return; }
    ctx->pc = 0x2ACCB0u;
    // 0x2accb0: 0x8e020040
    ctx->pc = 0x2accb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2accb4: 0xc44c0000
    ctx->pc = 0x2accb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2accb8: 0xc44d0004
    ctx->pc = 0x2accb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2accbc: 0x0
    ctx->pc = 0x2accbcu;
    // NOP
    // 0x2accc0: 0x0
    ctx->pc = 0x2accc0u;
    // NOP
    // 0x2accc4: 0x46146303
    ctx->pc = 0x2accc4u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[20];
    // 0x2accc8: 0x0
    ctx->pc = 0x2accc8u;
    // NOP
    // 0x2acccc: 0x0
    ctx->pc = 0x2accccu;
    // NOP
    // 0x2accd0: 0x46156b43
    ctx->pc = 0x2accd0u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[21];
    // 0x2accd4: 0xc0b123e
    ctx->pc = 0x2ACCD4u;
    SET_GPR_U32(ctx, 31, 0x2ACCDCu);
    ctx->pc = 0x2C48F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBFontUpdateWindow_0x2c48f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACCDCu; }
    }
    if (ctx->pc != 0x2ACCDCu) { return; }
    ctx->pc = 0x2ACCDCu;
    // 0x2accdc: 0x8e030010
    ctx->pc = 0x2accdcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2acce0: 0x24020001
    ctx->pc = 0x2acce0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2acce4: 0xac620040
    ctx->pc = 0x2acce4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
    // 0x2acce8: 0xdfbf0010
    ctx->pc = 0x2acce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2accec: 0xdfb00000
    ctx->pc = 0x2accecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2accf0: 0xc7b50028
    ctx->pc = 0x2accf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2accf4: 0xc7b40020
    ctx->pc = 0x2accf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2accf8: 0x3e00008
    ctx->pc = 0x2ACCF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACCFCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2ACAD8u: goto label_2acad8;
            case 0x2ACADCu: goto label_2acadc;
            case 0x2ACAE0u: goto label_2acae0;
            case 0x2ACB1Cu: goto label_2acb1c;
            case 0x2ACB30u: goto label_2acb30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2ACD00u;
}

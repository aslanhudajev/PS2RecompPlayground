#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbSetupFrameSize
// Address: 0x2a8e88 - 0x2a9054
void pbSetupFrameSize_0x2a8e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a8e88u;

    // 0x2a8e88: 0x27bdffd0
    ctx->pc = 0x2a8e88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a8e8c: 0xffbf0010
    ctx->pc = 0x2a8e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a8e90: 0xffb00000
    ctx->pc = 0x2a8e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a8e94: 0xe7b50028
    ctx->pc = 0x2a8e94u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a8e98: 0xe7b40020
    ctx->pc = 0x2a8e98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a8e9c: 0x3c020036
    ctx->pc = 0x2a8e9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a8ea0: 0x8c50dee0
    ctx->pc = 0x2a8ea0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2a8ea4: 0x8e020040
    ctx->pc = 0x2a8ea4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2a8ea8: 0xc4540000
    ctx->pc = 0x2a8ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a8eac: 0xc4550004
    ctx->pc = 0x2a8eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a8eb0: 0x8e030010
    ctx->pc = 0x2a8eb0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a8eb4: 0xc4600020
    ctx->pc = 0x2a8eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8eb8: 0x46800020
    ctx->pc = 0x2a8eb8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2a8ebc: 0x3c014180
    ctx->pc = 0x2a8ebcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16768 << 16));
    // 0x2a8ec0: 0x44811000
    ctx->pc = 0x2a8ec0u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x2a8ec4: 0x46020002
    ctx->pc = 0x2a8ec4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a8ec8: 0xc4610028
    ctx->pc = 0x2a8ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8ecc: 0x46800860
    ctx->pc = 0x2a8eccu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2a8ed0: 0x0
    ctx->pc = 0x2a8ed0u;
    // NOP
    // 0x2a8ed4: 0x0
    ctx->pc = 0x2a8ed4u;
    // NOP
    // 0x2a8ed8: 0x46010003
    ctx->pc = 0x2a8ed8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2a8edc: 0xe4400000
    ctx->pc = 0x2a8edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a8ee0: 0x8e030040
    ctx->pc = 0x2a8ee0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2a8ee4: 0x8e020010
    ctx->pc = 0x2a8ee4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a8ee8: 0xc4400024
    ctx->pc = 0x2a8ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8eec: 0x46800020
    ctx->pc = 0x2a8eecu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2a8ef0: 0x46020002
    ctx->pc = 0x2a8ef0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a8ef4: 0xc441002c
    ctx->pc = 0x2a8ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8ef8: 0x46800860
    ctx->pc = 0x2a8ef8u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2a8efc: 0x0
    ctx->pc = 0x2a8efcu;
    // NOP
    // 0x2a8f00: 0x0
    ctx->pc = 0x2a8f00u;
    // NOP
    // 0x2a8f04: 0x46010003
    ctx->pc = 0x2a8f04u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2a8f08: 0xe4600004
    ctx->pc = 0x2a8f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2a8f0c: 0x8e050040
    ctx->pc = 0x2a8f0cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2a8f10: 0x8e040010
    ctx->pc = 0x2a8f10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a8f14: 0x8c820020
    ctx->pc = 0x2a8f14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2a8f18: 0x21fc2
    ctx->pc = 0x2a8f18u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
    // 0x2a8f1c: 0x431021
    ctx->pc = 0x2a8f1cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a8f20: 0x21043
    ctx->pc = 0x2a8f20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2a8f24: 0x44820800
    ctx->pc = 0x2a8f24u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x2a8f28: 0x46800860
    ctx->pc = 0x2a8f28u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2a8f2c: 0xc4800038
    ctx->pc = 0x2a8f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8f30: 0x46010001
    ctx->pc = 0x2a8f30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a8f34: 0x46020002
    ctx->pc = 0x2a8f34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a8f38: 0x46000064
    ctx->pc = 0x2a8f38u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2a8f3c: 0xe4a10008
    ctx->pc = 0x2a8f3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x2a8f40: 0x8e050040
    ctx->pc = 0x2a8f40u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2a8f44: 0x8e040010
    ctx->pc = 0x2a8f44u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a8f48: 0x8c820024
    ctx->pc = 0x2a8f48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2a8f4c: 0x21fc2
    ctx->pc = 0x2a8f4cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
    // 0x2a8f50: 0x431021
    ctx->pc = 0x2a8f50u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a8f54: 0x21043
    ctx->pc = 0x2a8f54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2a8f58: 0x44820800
    ctx->pc = 0x2a8f58u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x2a8f5c: 0x46800860
    ctx->pc = 0x2a8f5cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2a8f60: 0xc480003c
    ctx->pc = 0x2a8f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8f64: 0x46010001
    ctx->pc = 0x2a8f64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a8f68: 0x46020002
    ctx->pc = 0x2a8f68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a8f6c: 0x46000064
    ctx->pc = 0x2a8f6cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2a8f70: 0xe4a1000c
    ctx->pc = 0x2a8f70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x2a8f74: 0x8e030040
    ctx->pc = 0x2a8f74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2a8f78: 0x8e020010
    ctx->pc = 0x2a8f78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a8f7c: 0xc4400020
    ctx->pc = 0x2a8f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8f80: 0x46800020
    ctx->pc = 0x2a8f80u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2a8f84: 0x46020002
    ctx->pc = 0x2a8f84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a8f88: 0x46000064
    ctx->pc = 0x2a8f88u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2a8f8c: 0xe4610010
    ctx->pc = 0x2a8f8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x2a8f90: 0x8e030040
    ctx->pc = 0x2a8f90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2a8f94: 0x8e020010
    ctx->pc = 0x2a8f94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a8f98: 0xc4400024
    ctx->pc = 0x2a8f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8f9c: 0x46800020
    ctx->pc = 0x2a8f9cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2a8fa0: 0x46020002
    ctx->pc = 0x2a8fa0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a8fa4: 0x46000064
    ctx->pc = 0x2a8fa4u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2a8fa8: 0xe4610014
    ctx->pc = 0x2a8fa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x2a8fac: 0x8e020040
    ctx->pc = 0x2a8facu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2a8fb0: 0xc4400000
    ctx->pc = 0x2a8fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8fb4: 0x46140032
    ctx->pc = 0x2a8fb4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8fb8: 0x0
    ctx->pc = 0x2a8fb8u;
    // NOP
    // 0x2a8fbc: 0x45020008
    ctx->pc = 0x2A8FBCu;
    {
        const bool branch_taken_0x2a8fbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a8fbc) {
            ctx->pc = 0x2A8FC0u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->pc = 0x2A8FE0u;
            goto label_2a8fe0;
        }
    }
    ctx->pc = 0x2A8FC4u;
    // 0x2a8fc4: 0xc4400004
    ctx->pc = 0x2a8fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8fc8: 0x46150032
    ctx->pc = 0x2a8fc8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8fcc: 0x0
    ctx->pc = 0x2a8fccu;
    // NOP
    // 0x2a8fd0: 0x45030018
    ctx->pc = 0x2A8FD0u;
    {
        const bool branch_taken_0x2a8fd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a8fd0) {
            ctx->pc = 0x2A8FD4u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->pc = 0x2A9034u;
            goto label_2a9034;
        }
    }
    ctx->pc = 0x2A8FD8u;
    // 0x2a8fd8: 0x8e020040
    ctx->pc = 0x2a8fd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2a8fdc: 0xc44c0000
    ctx->pc = 0x2a8fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a8fe0:
    // 0x2a8fe0: 0xc44d0004
    ctx->pc = 0x2a8fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a8fe4: 0x0
    ctx->pc = 0x2a8fe4u;
    // NOP
    // 0x2a8fe8: 0x0
    ctx->pc = 0x2a8fe8u;
    // NOP
    // 0x2a8fec: 0x46146303
    ctx->pc = 0x2a8fecu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[20];
    // 0x2a8ff0: 0x0
    ctx->pc = 0x2a8ff0u;
    // NOP
    // 0x2a8ff4: 0x0
    ctx->pc = 0x2a8ff4u;
    // NOP
    // 0x2a8ff8: 0x46156b43
    ctx->pc = 0x2a8ff8u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[21];
    // 0x2a8ffc: 0xc0b0abe
    ctx->pc = 0x2A8FFCu;
    SET_GPR_U32(ctx, 31, 0x2A9004u);
    ctx->pc = 0x2C2AF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitUpdateWindow_0x2c2af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9004u; }
    }
    if (ctx->pc != 0x2A9004u) { return; }
    ctx->pc = 0x2A9004u;
    // 0x2a9004: 0x8e020040
    ctx->pc = 0x2a9004u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2a9008: 0xc44c0000
    ctx->pc = 0x2a9008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a900c: 0xc44d0004
    ctx->pc = 0x2a900cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a9010: 0x0
    ctx->pc = 0x2a9010u;
    // NOP
    // 0x2a9014: 0x0
    ctx->pc = 0x2a9014u;
    // NOP
    // 0x2a9018: 0x46146303
    ctx->pc = 0x2a9018u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[20];
    // 0x2a901c: 0x0
    ctx->pc = 0x2a901cu;
    // NOP
    // 0x2a9020: 0x0
    ctx->pc = 0x2a9020u;
    // NOP
    // 0x2a9024: 0x46156b43
    ctx->pc = 0x2a9024u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[21];
    // 0x2a9028: 0xc0b123e
    ctx->pc = 0x2A9028u;
    SET_GPR_U32(ctx, 31, 0x2A9030u);
    ctx->pc = 0x2C48F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBFontUpdateWindow_0x2c48f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9030u; }
    }
    if (ctx->pc != 0x2A9030u) { return; }
    ctx->pc = 0x2A9030u;
    // 0x2a9030: 0x8e030010
    ctx->pc = 0x2a9030u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2a9034:
    // 0x2a9034: 0x24020001
    ctx->pc = 0x2a9034u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a9038: 0xac620040
    ctx->pc = 0x2a9038u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
    // 0x2a903c: 0xdfbf0010
    ctx->pc = 0x2a903cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9040: 0xdfb00000
    ctx->pc = 0x2a9040u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9044: 0xc7b50028
    ctx->pc = 0x2a9044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a9048: 0xc7b40020
    ctx->pc = 0x2a9048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a904c: 0x3e00008
    ctx->pc = 0x2A904Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9050u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A8FE0u: goto label_2a8fe0;
            case 0x2A9034u: goto label_2a9034;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A9054u;
}

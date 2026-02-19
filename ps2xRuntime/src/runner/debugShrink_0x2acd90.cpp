#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: debugShrink
// Address: 0x2acd90 - 0x2ace80
void debugShrink_0x2acd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2acd90u;

    // 0x2acd90: 0x3c020036
    ctx->pc = 0x2acd90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2acd94: 0x8c4adee0
    ctx->pc = 0x2acd94u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2acd98: 0x3c020037
    ctx->pc = 0x2acd98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2acd9c: 0x8c438400
    ctx->pc = 0x2acd9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294935552)));
    // 0x2acda0: 0x8c620000
    ctx->pc = 0x2acda0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2acda4: 0x10400034
    ctx->pc = 0x2ACDA4u;
    {
        const bool branch_taken_0x2acda4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2acda4) {
            ctx->pc = 0x2ACE78u;
            goto label_2ace78;
        }
    }
    ctx->pc = 0x2ACDACu;
    // 0x2acdac: 0x3c013f80
    ctx->pc = 0x2acdacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2acdb0: 0x44811800
    ctx->pc = 0x2acdb0u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x2acdb4: 0xc460000c
    ctx->pc = 0x2acdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acdb8: 0x46001881
    ctx->pc = 0x2acdb8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2acdbc: 0x3c013f00
    ctx->pc = 0x2acdbcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2acdc0: 0x44810800
    ctx->pc = 0x2acdc0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2acdc4: 0x46011082
    ctx->pc = 0x2acdc4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2acdc8: 0x44800800
    ctx->pc = 0x2acdc8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x2acdcc: 0x46010032
    ctx->pc = 0x2acdccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2acdd0: 0x0
    ctx->pc = 0x2acdd0u;
    // NOP
    // 0x2acdd4: 0x45010016
    ctx->pc = 0x2ACDD4u;
    {
        const bool branch_taken_0x2acdd4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ACDD8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
        if (branch_taken_0x2acdd4) {
            ctx->pc = 0x2ACE30u;
            goto label_2ace30;
        }
    }
    ctx->pc = 0x2ACDDCu;
    // 0x2acddc: 0x8d420010
    ctx->pc = 0x2acddcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x2acde0: 0xc4400020
    ctx->pc = 0x2acde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acde4: 0x46800020
    ctx->pc = 0x2acde4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2acde8: 0x46020002
    ctx->pc = 0x2acde8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2acdec: 0xe4800000
    ctx->pc = 0x2acdecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2acdf0: 0x8d420010
    ctx->pc = 0x2acdf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x2acdf4: 0xc4400020
    ctx->pc = 0x2acdf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acdf8: 0x46800020
    ctx->pc = 0x2acdf8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2acdfc: 0x46021841
    ctx->pc = 0x2acdfcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x2ace00: 0x46010002
    ctx->pc = 0x2ace00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ace04: 0xe4a00000
    ctx->pc = 0x2ace04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2ace08: 0x8d420010
    ctx->pc = 0x2ace08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x2ace0c: 0xc4400024
    ctx->pc = 0x2ace0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ace10: 0x46800020
    ctx->pc = 0x2ace10u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2ace14: 0x46020002
    ctx->pc = 0x2ace14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ace18: 0xe4c00000
    ctx->pc = 0x2ace18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2ace1c: 0x8d420010
    ctx->pc = 0x2ace1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x2ace20: 0xc4400024
    ctx->pc = 0x2ace20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ace24: 0x46800020
    ctx->pc = 0x2ace24u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2ace28: 0x46010002
    ctx->pc = 0x2ace28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ace2c: 0xe4e00000
    ctx->pc = 0x2ace2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_2ace30:
    // 0x2ace30: 0x8c628400
    ctx->pc = 0x2ace30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294935552)));
    // 0x2ace34: 0xc4410010
    ctx->pc = 0x2ace34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ace38: 0x44800000
    ctx->pc = 0x2ace38u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2ace3c: 0x46000832
    ctx->pc = 0x2ace3cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ace40: 0x4501000d
    ctx->pc = 0x2ACE40u;
    {
        const bool branch_taken_0x2ace40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ace40) {
            ctx->pc = 0x2ACE78u;
            goto label_2ace78;
        }
    }
    ctx->pc = 0x2ACE48u;
    // 0x2ace48: 0x8d420010
    ctx->pc = 0x2ace48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x2ace4c: 0xc4400020
    ctx->pc = 0x2ace4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ace50: 0x46800020
    ctx->pc = 0x2ace50u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2ace54: 0x46010002
    ctx->pc = 0x2ace54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ace58: 0xe5000000
    ctx->pc = 0x2ace58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x2ace5c: 0x8d420010
    ctx->pc = 0x2ace5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x2ace60: 0xc4400024
    ctx->pc = 0x2ace60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ace64: 0x46800020
    ctx->pc = 0x2ace64u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2ace68: 0x8c628400
    ctx->pc = 0x2ace68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294935552)));
    // 0x2ace6c: 0xc4410010
    ctx->pc = 0x2ace6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ace70: 0x46010002
    ctx->pc = 0x2ace70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ace74: 0xe5200000
    ctx->pc = 0x2ace74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_2ace78:
    // 0x2ace78: 0x3e00008
    ctx->pc = 0x2ACE78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2ACE30u: goto label_2ace30;
            case 0x2ACE78u: goto label_2ace78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2ACE80u;
}

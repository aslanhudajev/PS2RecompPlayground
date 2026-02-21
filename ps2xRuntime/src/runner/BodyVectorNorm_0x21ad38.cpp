#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: BodyVectorNorm
// Address: 0x21ad38 - 0x21ae24
void BodyVectorNorm_0x21ad38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21ad38u;

    // 0x21ad38: 0xc4ca0004
    ctx->pc = 0x21ad38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x21ad3c: 0x3c013f7f
    ctx->pc = 0x21ad3cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16255 << 16));
    // 0x21ad40: 0x3421ffef
    ctx->pc = 0x21ad40u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 65519));
    // 0x21ad44: 0x44810000
    ctx->pc = 0x21ad44u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x21ad48: 0x460a0034
    ctx->pc = 0x21ad48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21ad4c: 0x45000005
    ctx->pc = 0x21AD4Cu;
    {
        const bool branch_taken_0x21ad4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21ad4c) {
            ctx->pc = 0x21AD64u;
            goto label_21ad64;
        }
    }
    ctx->pc = 0x21AD54u;
    // 0x21ad54: 0x78820000
    ctx->pc = 0x21ad54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21ad58: 0x7ca20000
    ctx->pc = 0x21ad58u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x21ad5c: 0x3e00008
    ctx->pc = 0x21AD5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21AD64u: goto label_21ad64;
            case 0x21ADA4u: goto label_21ada4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21AD64u;
label_21ad64:
    // 0x21ad64: 0x3c01bf7f
    ctx->pc = 0x21ad64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49023 << 16));
    // 0x21ad68: 0x3421ffef
    ctx->pc = 0x21ad68u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 65519));
    // 0x21ad6c: 0x44810000
    ctx->pc = 0x21ad6cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x21ad70: 0x46005034
    ctx->pc = 0x21ad70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21ad74: 0x0
    ctx->pc = 0x21ad74u;
    // NOP
    // 0x21ad78: 0x4502000a
    ctx->pc = 0x21AD78u;
    {
        const bool branch_taken_0x21ad78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21ad78) {
            ctx->pc = 0x21AD7Cu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->pc = 0x21ADA4u;
            goto label_21ada4;
        }
    }
    ctx->pc = 0x21AD80u;
    // 0x21ad80: 0xc4800000
    ctx->pc = 0x21ad80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ad84: 0xe4a00000
    ctx->pc = 0x21ad84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x21ad88: 0xc4800004
    ctx->pc = 0x21ad88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ad8c: 0x46000007
    ctx->pc = 0x21ad8cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x21ad90: 0xe4a00004
    ctx->pc = 0x21ad90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x21ad94: 0xc4800008
    ctx->pc = 0x21ad94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ad98: 0x46000007
    ctx->pc = 0x21ad98u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x21ad9c: 0x3e00008
    ctx->pc = 0x21AD9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21ADA0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21AD64u: goto label_21ad64;
            case 0x21ADA4u: goto label_21ada4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21ADA4u;
label_21ada4:
    // 0x21ada4: 0xc4860004
    ctx->pc = 0x21ada4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x21ada8: 0xc4840008
    ctx->pc = 0x21ada8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x21adac: 0xc4c70000
    ctx->pc = 0x21adacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x21adb0: 0x460c3a02
    ctx->pc = 0x21adb0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[7], ctx->f[12]);
    // 0x21adb4: 0xc4c50008
    ctx->pc = 0x21adb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x21adb8: 0x460c2a42
    ctx->pc = 0x21adb8u;
    ctx->f[9] = FPU_MUL_S(ctx->f[5], ctx->f[12]);
    // 0x21adbc: 0x460010c7
    ctx->pc = 0x21adbcu;
    ctx->f[3] = FPU_NEG_S(ctx->f[2]);
    // 0x21adc0: 0x46091802
    ctx->pc = 0x21adc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
    // 0x21adc4: 0x46082042
    ctx->pc = 0x21adc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
    // 0x21adc8: 0x46010000
    ctx->pc = 0x21adc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21adcc: 0xe4a00000
    ctx->pc = 0x21adccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x21add0: 0x46071082
    ctx->pc = 0x21add0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x21add4: 0x460a3002
    ctx->pc = 0x21add4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[10]);
    // 0x21add8: 0x46001080
    ctx->pc = 0x21add8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x21addc: 0x46052142
    ctx->pc = 0x21addcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x21ade0: 0x46051080
    ctx->pc = 0x21ade0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x21ade4: 0xe4a20004
    ctx->pc = 0x21ade4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x21ade8: 0x460818c2
    ctx->pc = 0x21ade8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x21adec: 0x460a18c2
    ctx->pc = 0x21adecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[10]);
    // 0x21adf0: 0x460a5042
    ctx->pc = 0x21adf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x21adf4: 0x3c013f80
    ctx->pc = 0x21adf4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x21adf8: 0x44810000
    ctx->pc = 0x21adf8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x21adfc: 0x46010001
    ctx->pc = 0x21adfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21ae00: 0x46003182
    ctx->pc = 0x21ae00u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x21ae04: 0x460c3182
    ctx->pc = 0x21ae04u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[12]);
    // 0x21ae08: 0x460618c0
    ctx->pc = 0x21ae08u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x21ae0c: 0x46002107
    ctx->pc = 0x21ae0cu;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
    // 0x21ae10: 0x460a2102
    ctx->pc = 0x21ae10u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[10]);
    // 0x21ae14: 0x46092102
    ctx->pc = 0x21ae14u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
    // 0x21ae18: 0x460418c0
    ctx->pc = 0x21ae18u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x21ae1c: 0x3e00008
    ctx->pc = 0x21AE1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AE20u;
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21AD64u: goto label_21ad64;
            case 0x21ADA4u: goto label_21ada4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21AE24u;
}

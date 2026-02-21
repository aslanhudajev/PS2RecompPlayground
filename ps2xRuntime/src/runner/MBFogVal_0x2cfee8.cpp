#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBFogVal
// Address: 0x2cfee8 - 0x2cff7c
void MBFogVal_0x2cfee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cfee8u;

    // 0x2cfee8: 0x27bdffe0
    ctx->pc = 0x2cfee8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cfeec: 0xffbf0000
    ctx->pc = 0x2cfeecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cfef0: 0xe7b50018
    ctx->pc = 0x2cfef0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2cfef4: 0xe7b40010
    ctx->pc = 0x2cfef4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2cfef8: 0x46006006
    ctx->pc = 0x2cfef8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x2cfefc: 0x24020001
    ctx->pc = 0x2cfefcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cff00: 0x1082000a
    ctx->pc = 0x2CFF00u;
    {
        const bool branch_taken_0x2cff00 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2CFF04u;
        ctx->f[21] = FPU_MOV_S(ctx->f[13]);
        if (branch_taken_0x2cff00) {
            ctx->pc = 0x2CFF2Cu;
            goto label_2cff2c;
        }
    }
    ctx->pc = 0x2CFF08u;
    // 0x2cff08: 0x28820002
    ctx->pc = 0x2cff08u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 2));
    // 0x2cff0c: 0x14400015
    ctx->pc = 0x2CFF0Cu;
    {
        const bool branch_taken_0x2cff0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2CFF10u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2cff0c) {
            ctx->pc = 0x2CFF64u;
            goto label_2cff64;
        }
    }
    ctx->pc = 0x2CFF14u;
    // 0x2cff14: 0x10820014
    ctx->pc = 0x2CFF14u;
    {
        const bool branch_taken_0x2cff14 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2CFF18u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2cff14) {
            ctx->pc = 0x2CFF68u;
            goto label_2cff68;
        }
    }
    ctx->pc = 0x2CFF1Cu;
    // 0x2cff1c: 0x10820007
    ctx->pc = 0x2CFF1Cu;
    {
        const bool branch_taken_0x2cff1c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x2cff1c) {
            ctx->pc = 0x2CFF3Cu;
            goto label_2cff3c;
        }
    }
    ctx->pc = 0x2CFF24u;
    // 0x2cff24: 0x1000000f
    ctx->pc = 0x2CFF24u;
    {
        const bool branch_taken_0x2cff24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cff24) {
            ctx->pc = 0x2CFF64u;
            goto label_2cff64;
        }
    }
    ctx->pc = 0x2CFF2Cu;
label_2cff2c:
    // 0x2cff2c: 0x3c013f00
    ctx->pc = 0x2cff2cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2cff30: 0x44810000
    ctx->pc = 0x2cff30u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2cff34: 0x1000000d
    ctx->pc = 0x2CFF34u;
    {
        const bool branch_taken_0x2cff34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CFF38u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x2cff34) {
            ctx->pc = 0x2CFF6Cu;
            goto label_2cff6c;
        }
    }
    ctx->pc = 0x2CFF3Cu;
label_2cff3c:
    // 0x2cff3c: 0xc0b9ea8
    ctx->pc = 0x2CFF3Cu;
    SET_GPR_U32(ctx, 31, 0x2CFF44u);
    ctx->pc = 0x2CFF40u;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    ctx->pc = 0x2E7AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        exp_0x2e7aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFF44u; }
    }
    if (ctx->pc != 0x2CFF44u) { return; }
    ctx->pc = 0x2CFF44u;
    // 0x2cff44: 0x46000506
    ctx->pc = 0x2cff44u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2cff48: 0xc0b9ea8
    ctx->pc = 0x2CFF48u;
    SET_GPR_U32(ctx, 31, 0x2CFF50u);
    ctx->pc = 0x2CFF4Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x2E7AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        exp_0x2e7aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFF50u; }
    }
    if (ctx->pc != 0x2CFF50u) { return; }
    ctx->pc = 0x2CFF50u;
    // 0x2cff50: 0x0
    ctx->pc = 0x2cff50u;
    // NOP
    // 0x2cff54: 0x0
    ctx->pc = 0x2cff54u;
    // NOP
    // 0x2cff58: 0x4600a003
    ctx->pc = 0x2cff58u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[0];
    // 0x2cff5c: 0x10000003
    ctx->pc = 0x2CFF5Cu;
    {
        const bool branch_taken_0x2cff5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CFF60u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x2cff5c) {
            ctx->pc = 0x2CFF6Cu;
            goto label_2cff6c;
        }
    }
    ctx->pc = 0x2CFF64u;
label_2cff64:
    // 0x2cff64: 0x44800000
    ctx->pc = 0x2cff64u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_2cff68:
    // 0x2cff68: 0xdfbf0000
    ctx->pc = 0x2cff68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cff6c:
    // 0x2cff6c: 0xc7b50018
    ctx->pc = 0x2cff6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2cff70: 0xc7b40010
    ctx->pc = 0x2cff70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2cff74: 0x3e00008
    ctx->pc = 0x2CFF74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFF78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CFF2Cu: goto label_2cff2c;
            case 0x2CFF3Cu: goto label_2cff3c;
            case 0x2CFF64u: goto label_2cff64;
            case 0x2CFF68u: goto label_2cff68;
            case 0x2CFF6Cu: goto label_2cff6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CFF7Cu;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: getOrthoVecs
// Address: 0x2cca98 - 0x2ccb50
void getOrthoVecs_0x2cca98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cca98u;

    // 0x2cca98: 0xc4c10000
    ctx->pc = 0x2cca98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cca9c: 0xc4c30004
    ctx->pc = 0x2cca9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ccaa0: 0x3c013dcc
    ctx->pc = 0x2ccaa0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x2ccaa4: 0x3421cccd
    ctx->pc = 0x2ccaa4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x2ccaa8: 0x44810000
    ctx->pc = 0x2ccaa8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2ccaac: 0x46000834
    ctx->pc = 0x2ccaacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ccab0: 0x0
    ctx->pc = 0x2ccab0u;
    // NOP
    // 0x2ccab4: 0x45000018
    ctx->pc = 0x2CCAB4u;
    {
        const bool branch_taken_0x2ccab4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CCAB8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        if (branch_taken_0x2ccab4) {
            ctx->pc = 0x2CCB18u;
            goto label_2ccb18;
        }
    }
    ctx->pc = 0x2CCABCu;
    // 0x2ccabc: 0x46001834
    ctx->pc = 0x2ccabcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ccac0: 0x0
    ctx->pc = 0x2ccac0u;
    // NOP
    // 0x2ccac4: 0x45020015
    ctx->pc = 0x2CCAC4u;
    {
        const bool branch_taken_0x2ccac4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ccac4) {
            ctx->pc = 0x2CCAC8u;
            { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
            ctx->pc = 0x2CCB1Cu;
            goto label_2ccb1c;
        }
    }
    ctx->pc = 0x2CCACCu;
    // 0x2ccacc: 0x44802000
    ctx->pc = 0x2ccaccu;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 0);
    // 0x2ccad0: 0x46041032
    ctx->pc = 0x2ccad0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ccad4: 0x0
    ctx->pc = 0x2ccad4u;
    // NOP
    // 0x2ccad8: 0x45030010
    ctx->pc = 0x2CCAD8u;
    {
        const bool branch_taken_0x2ccad8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ccad8) {
            ctx->pc = 0x2CCADCu;
            { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
            ctx->pc = 0x2CCB1Cu;
            goto label_2ccb1c;
        }
    }
    ctx->pc = 0x2CCAE0u;
    // 0x2ccae0: 0x46001007
    ctx->pc = 0x2ccae0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x2ccae4: 0xe4800000
    ctx->pc = 0x2ccae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2ccae8: 0xe4840004
    ctx->pc = 0x2ccae8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2ccaec: 0xe4810008
    ctx->pc = 0x2ccaecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2ccaf0: 0x46011802
    ctx->pc = 0x2ccaf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2ccaf4: 0xe4a00000
    ctx->pc = 0x2ccaf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2ccaf8: 0x46021002
    ctx->pc = 0x2ccaf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2ccafc: 0x46000007
    ctx->pc = 0x2ccafcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2ccb00: 0x46010842
    ctx->pc = 0x2ccb00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2ccb04: 0x46010001
    ctx->pc = 0x2ccb04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2ccb08: 0xe4a00004
    ctx->pc = 0x2ccb08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2ccb0c: 0x46021802
    ctx->pc = 0x2ccb0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2ccb10: 0x3e00008
    ctx->pc = 0x2CCB10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CCB14u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CCB18u: goto label_2ccb18;
            case 0x2CCB1Cu: goto label_2ccb1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CCB18u;
label_2ccb18:
    // 0x2ccb18: 0xe4830000
    ctx->pc = 0x2ccb18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2ccb1c:
    // 0x2ccb1c: 0x46000807
    ctx->pc = 0x2ccb1cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x2ccb20: 0xe4800004
    ctx->pc = 0x2ccb20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2ccb24: 0xac800008
    ctx->pc = 0x2ccb24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2ccb28: 0x46011002
    ctx->pc = 0x2ccb28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2ccb2c: 0xe4a00000
    ctx->pc = 0x2ccb2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2ccb30: 0x46031002
    ctx->pc = 0x2ccb30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2ccb34: 0xe4a00004
    ctx->pc = 0x2ccb34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2ccb38: 0x46010802
    ctx->pc = 0x2ccb38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2ccb3c: 0x46000007
    ctx->pc = 0x2ccb3cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2ccb40: 0x46031842
    ctx->pc = 0x2ccb40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2ccb44: 0x46010001
    ctx->pc = 0x2ccb44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2ccb48: 0x3e00008
    ctx->pc = 0x2CCB48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CCB4Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CCB18u: goto label_2ccb18;
            case 0x2CCB1Cu: goto label_2ccb1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CCB50u;
}

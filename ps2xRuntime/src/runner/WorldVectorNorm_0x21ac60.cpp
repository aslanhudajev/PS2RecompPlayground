#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: WorldVectorNorm
// Address: 0x21ac60 - 0x21ad34
void WorldVectorNorm_0x21ac60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21ac60u;

    // 0x21ac60: 0xc4a70004
    ctx->pc = 0x21ac60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x21ac64: 0x3c013f7f
    ctx->pc = 0x21ac64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16255 << 16));
    // 0x21ac68: 0x3421ffef
    ctx->pc = 0x21ac68u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 65519));
    // 0x21ac6c: 0x44810000
    ctx->pc = 0x21ac6cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x21ac70: 0x46070034
    ctx->pc = 0x21ac70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21ac74: 0x45000005
    ctx->pc = 0x21AC74u;
    {
        const bool branch_taken_0x21ac74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21ac74) {
            ctx->pc = 0x21AC8Cu;
            goto label_21ac8c;
        }
    }
    ctx->pc = 0x21AC7Cu;
    // 0x21ac7c: 0xe48c0000
    ctx->pc = 0x21ac7cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x21ac80: 0xe48d0004
    ctx->pc = 0x21ac80u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x21ac84: 0x3e00008
    ctx->pc = 0x21AC84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AC88u;
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21AC8Cu: goto label_21ac8c;
            case 0x21ACC0u: goto label_21acc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21AC8Cu;
label_21ac8c:
    // 0x21ac8c: 0x3c01bf7f
    ctx->pc = 0x21ac8cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49023 << 16));
    // 0x21ac90: 0x3421ffef
    ctx->pc = 0x21ac90u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 65519));
    // 0x21ac94: 0x44810000
    ctx->pc = 0x21ac94u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x21ac98: 0x46003834
    ctx->pc = 0x21ac98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21ac9c: 0x0
    ctx->pc = 0x21ac9cu;
    // NOP
    // 0x21aca0: 0x45020007
    ctx->pc = 0x21ACA0u;
    {
        const bool branch_taken_0x21aca0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21aca0) {
            ctx->pc = 0x21ACA4u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x21ACC0u;
            goto label_21acc0;
        }
    }
    ctx->pc = 0x21ACA8u;
    // 0x21aca8: 0xe48c0000
    ctx->pc = 0x21aca8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x21acac: 0x46006807
    ctx->pc = 0x21acacu;
    ctx->f[0] = FPU_NEG_S(ctx->f[13]);
    // 0x21acb0: 0xe4800004
    ctx->pc = 0x21acb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x21acb4: 0x46007007
    ctx->pc = 0x21acb4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[14]);
    // 0x21acb8: 0x3e00008
    ctx->pc = 0x21ACB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21ACBCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21AC8Cu: goto label_21ac8c;
            case 0x21ACC0u: goto label_21acc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21ACC0u;
label_21acc0:
    // 0x21acc0: 0x460f0082
    ctx->pc = 0x21acc0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[15]);
    // 0x21acc4: 0xc4a50008
    ctx->pc = 0x21acc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x21acc8: 0x460f2982
    ctx->pc = 0x21acc8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[15]);
    // 0x21accc: 0x46006047
    ctx->pc = 0x21acccu;
    ctx->f[1] = FPU_NEG_S(ctx->f[12]);
    // 0x21acd0: 0x46060842
    ctx->pc = 0x21acd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x21acd4: 0x46006802
    ctx->pc = 0x21acd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x21acd8: 0x46000840
    ctx->pc = 0x21acd8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21acdc: 0x46007107
    ctx->pc = 0x21acdcu;
    ctx->f[4] = FPU_NEG_S(ctx->f[14]);
    // 0x21ace0: 0x46022002
    ctx->pc = 0x21ace0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x21ace4: 0x46070002
    ctx->pc = 0x21ace4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x21ace8: 0x46000840
    ctx->pc = 0x21ace8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21acec: 0xe4810000
    ctx->pc = 0x21acecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x21acf0: 0x46076842
    ctx->pc = 0x21acf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[7]);
    // 0x21acf4: 0x460738c2
    ctx->pc = 0x21acf4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x21acf8: 0x3c013f80
    ctx->pc = 0x21acf8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x21acfc: 0x44810000
    ctx->pc = 0x21acfcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x21ad00: 0x46030001
    ctx->pc = 0x21ad00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x21ad04: 0x46007002
    ctx->pc = 0x21ad04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x21ad08: 0x460f0002
    ctx->pc = 0x21ad08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[15]);
    // 0x21ad0c: 0x46000840
    ctx->pc = 0x21ad0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21ad10: 0xe4810004
    ctx->pc = 0x21ad10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x21ad14: 0x46026082
    ctx->pc = 0x21ad14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x21ad18: 0x46056942
    ctx->pc = 0x21ad18u;
    ctx->f[5] = FPU_MUL_S(ctx->f[13], ctx->f[5]);
    // 0x21ad1c: 0x46051080
    ctx->pc = 0x21ad1cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x21ad20: 0x46072102
    ctx->pc = 0x21ad20u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x21ad24: 0x46062102
    ctx->pc = 0x21ad24u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x21ad28: 0x46041080
    ctx->pc = 0x21ad28u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x21ad2c: 0x3e00008
    ctx->pc = 0x21AD2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AD30u;
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21AC8Cu: goto label_21ac8c;
            case 0x21ACC0u: goto label_21acc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21AD34u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBPsysScalePParm
// Address: 0x2c9bd0 - 0x2c9c54
void MBPsysScalePParm_0x2c9bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c9bd0u;

    // 0x2c9bd0: 0x8c840070
    ctx->pc = 0x2c9bd0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2c9bd4: 0x90820037
    ctx->pc = 0x2c9bd4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 55)));
    // 0x2c9bd8: 0x2c420002
    ctx->pc = 0x2c9bd8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x2c9bdc: 0x14400003
    ctx->pc = 0x2C9BDCu;
    {
        const bool branch_taken_0x2c9bdc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C9BE0u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), 5));
        if (branch_taken_0x2c9bdc) {
            ctx->pc = 0x2C9BECu;
            goto label_2c9bec;
        }
    }
    ctx->pc = 0x2C9BE4u;
    // 0x2c9be4: 0x80b2558
    ctx->pc = 0x2C9BE4u;
    ctx->pc = 0x2C9560u;
    psysAttribErr_0x2c9560(rdram, ctx, runtime); return;
    ctx->pc = 0x2C9BECu;
label_2c9bec:
    // 0x2c9bec: 0x14400004
    ctx->pc = 0x2C9BECu;
    {
        const bool branch_taken_0x2c9bec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C9BF0u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 4));
        if (branch_taken_0x2c9bec) {
            ctx->pc = 0x2C9C00u;
            goto label_2c9c00;
        }
    }
    ctx->pc = 0x2C9BF4u;
    // 0x2c9bf4: 0x3c04003b
    ctx->pc = 0x2c9bf4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2c9bf8: 0x80b492e
    ctx->pc = 0x2C9BF8u;
    ctx->pc = 0x2C9BFCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29800));
    ctx->pc = 0x2D24B8u;
    Errorf_0x2d24b8(rdram, ctx, runtime); return;
    ctx->pc = 0x2C9C00u;
label_2c9c00:
    // 0x2c9c00: 0x248200e0
    ctx->pc = 0x2c9c00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 224));
    // 0x2c9c04: 0x431021
    ctx->pc = 0x2c9c04u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c9c08: 0xc4400000
    ctx->pc = 0x2c9c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9c0c: 0x46006002
    ctx->pc = 0x2c9c0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2c9c10: 0xe4400000
    ctx->pc = 0x2c9c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2c9c14: 0x248200e4
    ctx->pc = 0x2c9c14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 228));
    // 0x2c9c18: 0x431021
    ctx->pc = 0x2c9c18u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c9c1c: 0xc4400000
    ctx->pc = 0x2c9c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9c20: 0x46006002
    ctx->pc = 0x2c9c20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2c9c24: 0xe4400000
    ctx->pc = 0x2c9c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2c9c28: 0x248200e8
    ctx->pc = 0x2c9c28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 232));
    // 0x2c9c2c: 0x431021
    ctx->pc = 0x2c9c2cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c9c30: 0xc4400000
    ctx->pc = 0x2c9c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9c34: 0x46006002
    ctx->pc = 0x2c9c34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2c9c38: 0xe4400000
    ctx->pc = 0x2c9c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2c9c3c: 0x248200ec
    ctx->pc = 0x2c9c3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 236));
    // 0x2c9c40: 0x431021
    ctx->pc = 0x2c9c40u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c9c44: 0xc4400000
    ctx->pc = 0x2c9c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9c48: 0x46006002
    ctx->pc = 0x2c9c48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2c9c4c: 0x3e00008
    ctx->pc = 0x2C9C4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9C50u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C9BECu: goto label_2c9bec;
            case 0x2C9C00u: goto label_2c9c00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C9C54u;
}

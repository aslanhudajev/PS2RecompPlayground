#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CalcTurboVel
// Address: 0x247b28 - 0x247bc0
void CalcTurboVel_0x247b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x247b28u;

    // 0x247b28: 0x27bdffd0
    ctx->pc = 0x247b28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x247b2c: 0x8c820898
    ctx->pc = 0x247b2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 2200)));
    // 0x247b30: 0x30420008
    ctx->pc = 0x247b30u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
    // 0x247b34: 0x10400013
    ctx->pc = 0x247B34u;
    {
        const bool branch_taken_0x247b34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x247B38u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        if (branch_taken_0x247b34) {
            ctx->pc = 0x247B84u;
            goto label_247b84;
        }
    }
    ctx->pc = 0x247B3Cu;
    // 0x247b3c: 0x3c013f34
    ctx->pc = 0x247b3cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16180 << 16));
    // 0x247b40: 0x3421fdf4
    ctx->pc = 0x247b40u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 65012));
    // 0x247b44: 0x44810000
    ctx->pc = 0x247b44u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x247b48: 0x46030034
    ctx->pc = 0x247b48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247b4c: 0x0
    ctx->pc = 0x247b4cu;
    // NOP
    // 0x247b50: 0x45030001
    ctx->pc = 0x247B50u;
    {
        const bool branch_taken_0x247b50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x247b50) {
            ctx->pc = 0x247B54u;
            ctx->f[3] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x247B58u;
            goto label_247b58;
        }
    }
    ctx->pc = 0x247B58u;
label_247b58:
    // 0x247b58: 0x44800000
    ctx->pc = 0x247b58u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x247b5c: 0x46030034
    ctx->pc = 0x247b5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247b60: 0x0
    ctx->pc = 0x247b60u;
    // NOP
    // 0x247b64: 0x45020008
    ctx->pc = 0x247B64u;
    {
        const bool branch_taken_0x247b64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x247b64) {
            ctx->pc = 0x247B68u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x247B88u;
            goto label_247b88;
        }
    }
    ctx->pc = 0x247B6Cu;
    // 0x247b6c: 0x3c013f00
    ctx->pc = 0x247b6cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x247b70: 0x44810000
    ctx->pc = 0x247b70u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x247b74: 0x46001834
    ctx->pc = 0x247b74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247b78: 0x0
    ctx->pc = 0x247b78u;
    // NOP
    // 0x247b7c: 0x45030001
    ctx->pc = 0x247B7Cu;
    {
        const bool branch_taken_0x247b7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x247b7c) {
            ctx->pc = 0x247B80u;
            ctx->f[3] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x247B84u;
            goto label_247b84;
        }
    }
    ctx->pc = 0x247B84u;
label_247b84:
    // 0x247b84: 0xc4800040
    ctx->pc = 0x247b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247b88:
    // 0x247b88: 0xe7a00000
    ctx->pc = 0x247b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x247b8c: 0xc4820048
    ctx->pc = 0x247b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x247b90: 0xe7a20008
    ctx->pc = 0x247b90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x247b94: 0xe7a30004
    ctx->pc = 0x247b94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x247b98: 0x3c0141f0
    ctx->pc = 0x247b98u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
    // 0x247b9c: 0x44810800
    ctx->pc = 0x247b9cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x247ba0: 0x46010002
    ctx->pc = 0x247ba0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x247ba4: 0xe4a00000
    ctx->pc = 0x247ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x247ba8: 0x46011802
    ctx->pc = 0x247ba8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x247bac: 0xe4a00004
    ctx->pc = 0x247bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x247bb0: 0x46011082
    ctx->pc = 0x247bb0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x247bb4: 0xe4a20008
    ctx->pc = 0x247bb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x247bb8: 0x3e00008
    ctx->pc = 0x247BB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247BBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x247B58u: goto label_247b58;
            case 0x247B84u: goto label_247b84;
            case 0x247B88u: goto label_247b88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x247BC0u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setAngle
// Address: 0x2c99f0 - 0x2c9a70
void setAngle_0x2c99f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c99f0u;

    // 0x2c99f0: 0x44800000
    ctx->pc = 0x2c99f0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2c99f4: 0x46006034
    ctx->pc = 0x2c99f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c99f8: 0x45010019
    ctx->pc = 0x2C99F8u;
    {
        const bool branch_taken_0x2c99f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c99f8) {
            ctx->pc = 0x2C9A60u;
            goto label_2c9a60;
        }
    }
    ctx->pc = 0x2C9A00u;
    // 0x2c9a00: 0x3c013f80
    ctx->pc = 0x2c9a00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2c9a04: 0x44810000
    ctx->pc = 0x2c9a04u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c9a08: 0x46006034
    ctx->pc = 0x2c9a08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9a0c: 0x45000003
    ctx->pc = 0x2C9A0Cu;
    {
        const bool branch_taken_0x2c9a0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c9a0c) {
            ctx->pc = 0x2C9A1Cu;
            goto label_2c9a1c;
        }
    }
    ctx->pc = 0x2C9A14u;
    // 0x2c9a14: 0x3e00008
    ctx->pc = 0x2C9A14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9A18u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C9A1Cu: goto label_2c9a1c;
            case 0x2C9A60u: goto label_2c9a60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C9A1Cu;
label_2c9a1c:
    // 0x2c9a1c: 0x3c0143b3
    ctx->pc = 0x2c9a1cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17331 << 16));
    // 0x2c9a20: 0x34218000
    ctx->pc = 0x2c9a20u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32768));
    // 0x2c9a24: 0x44810000
    ctx->pc = 0x2c9a24u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c9a28: 0x46006034
    ctx->pc = 0x2c9a28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9a2c: 0x4500000c
    ctx->pc = 0x2C9A2Cu;
    {
        const bool branch_taken_0x2c9a2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c9a2c) {
            ctx->pc = 0x2C9A60u;
            goto label_2c9a60;
        }
    }
    ctx->pc = 0x2C9A34u;
    // 0x2c9a34: 0x3c014049
    ctx->pc = 0x2c9a34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x2c9a38: 0x34210fdb
    ctx->pc = 0x2c9a38u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2c9a3c: 0x44810000
    ctx->pc = 0x2c9a3cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c9a40: 0x46006002
    ctx->pc = 0x2c9a40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2c9a44: 0x3c0143b4
    ctx->pc = 0x2c9a44u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17332 << 16));
    // 0x2c9a48: 0x44810800
    ctx->pc = 0x2c9a48u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2c9a4c: 0x0
    ctx->pc = 0x2c9a4cu;
    // NOP
    // 0x2c9a50: 0x0
    ctx->pc = 0x2c9a50u;
    // NOP
    // 0x2c9a54: 0x46010003
    ctx->pc = 0x2c9a54u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2c9a58: 0x3e00008
    ctx->pc = 0x2C9A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9A5Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C9A1Cu: goto label_2c9a1c;
            case 0x2C9A60u: goto label_2c9a60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C9A60u;
label_2c9a60:
    // 0x2c9a60: 0x3c01bf80
    ctx->pc = 0x2c9a60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x2c9a64: 0x44810000
    ctx->pc = 0x2c9a64u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c9a68: 0x3e00008
    ctx->pc = 0x2C9A68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9A6Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C9A1Cu: goto label_2c9a1c;
            case 0x2C9A60u: goto label_2c9a60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C9A70u;
}

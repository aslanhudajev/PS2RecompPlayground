#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: LowerBGMusic
// Address: 0x25d0c8 - 0x25d130
void LowerBGMusic_0x25d0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25d0c8u;

    // 0x25d0c8: 0x3c030034
    ctx->pc = 0x25d0c8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x25d0cc: 0x3c020031
    ctx->pc = 0x25d0ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x25d0d0: 0xc440ffa4
    ctx->pc = 0x25d0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d0d4: 0x46006300
    ctx->pc = 0x25d0d4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x25d0d8: 0x44800000
    ctx->pc = 0x25d0d8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x25d0dc: 0x46006834
    ctx->pc = 0x25d0dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d0e0: 0x0
    ctx->pc = 0x25d0e0u;
    // NOP
    // 0x25d0e4: 0x4501000e
    ctx->pc = 0x25D0E4u;
    {
        const bool branch_taken_0x25d0e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25D0E8u;
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294955856), bits); }
        if (branch_taken_0x25d0e4) {
            ctx->pc = 0x25D120u;
            goto label_25d120;
        }
    }
    ctx->pc = 0x25D0ECu;
    // 0x25d0ec: 0x3c013e4c
    ctx->pc = 0x25d0ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15948 << 16));
    // 0x25d0f0: 0x3421cccd
    ctx->pc = 0x25d0f0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x25d0f4: 0x44810000
    ctx->pc = 0x25d0f4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x25d0f8: 0x46006834
    ctx->pc = 0x25d0f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d0fc: 0x0
    ctx->pc = 0x25d0fcu;
    // NOP
    // 0x25d100: 0x45030008
    ctx->pc = 0x25D100u;
    {
        const bool branch_taken_0x25d100 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25d100) {
            ctx->pc = 0x25D104u;
            ctx->f[13] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x25D124u;
            goto label_25d124;
        }
    }
    ctx->pc = 0x25D108u;
    // 0x25d108: 0x3c013f80
    ctx->pc = 0x25d108u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x25d10c: 0x44810000
    ctx->pc = 0x25d10cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x25d110: 0x460d0034
    ctx->pc = 0x25d110u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d114: 0x0
    ctx->pc = 0x25d114u;
    // NOP
    // 0x25d118: 0x45000003
    ctx->pc = 0x25D118u;
    {
        const bool branch_taken_0x25d118 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25D11Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x25d118) {
            ctx->pc = 0x25D128u;
            goto label_25d128;
        }
    }
    ctx->pc = 0x25D120u;
label_25d120:
    // 0x25d120: 0x46000346
    ctx->pc = 0x25d120u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_25d124:
    // 0x25d124: 0x3c020034
    ctx->pc = 0x25d124u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_25d128:
    // 0x25d128: 0x3e00008
    ctx->pc = 0x25D128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D12Cu;
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294955860), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25D120u: goto label_25d120;
            case 0x25D124u: goto label_25d124;
            case 0x25D128u: goto label_25d128;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25D130u;
}

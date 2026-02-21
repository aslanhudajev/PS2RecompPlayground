#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBWindowClip
// Address: 0x2ab878 - 0x2ab8e8
void MBWindowClip_0x2ab878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ab878u;

    // 0x2ab878: 0x3c020036
    ctx->pc = 0x2ab878u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2ab87c: 0x44800000
    ctx->pc = 0x2ab87cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2ab880: 0x46006032
    ctx->pc = 0x2ab880u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ab884: 0x0
    ctx->pc = 0x2ab884u;
    // NOP
    // 0x2ab888: 0x45000005
    ctx->pc = 0x2AB888u;
    {
        const bool branch_taken_0x2ab888 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AB88Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
        if (branch_taken_0x2ab888) {
            ctx->pc = 0x2AB8A0u;
            goto label_2ab8a0;
        }
    }
    ctx->pc = 0x2AB890u;
    // 0x2ab890: 0x3c01457f
    ctx->pc = 0x2ab890u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17791 << 16));
    // 0x2ab894: 0x3421f000
    ctx->pc = 0x2ab894u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 61440));
    // 0x2ab898: 0x44816000
    ctx->pc = 0x2ab898u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2ab89c: 0x44800000
    ctx->pc = 0x2ab89cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_2ab8a0:
    // 0x2ab8a0: 0x46006832
    ctx->pc = 0x2ab8a0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ab8a4: 0x0
    ctx->pc = 0x2ab8a4u;
    // NOP
    // 0x2ab8a8: 0x45000004
    ctx->pc = 0x2AB8A8u;
    {
        const bool branch_taken_0x2ab8a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AB8ACu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
        if (branch_taken_0x2ab8a8) {
            ctx->pc = 0x2AB8BCu;
            goto label_2ab8bc;
        }
    }
    ctx->pc = 0x2AB8B0u;
    // 0x2ab8b0: 0x3c01457f
    ctx->pc = 0x2ab8b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17791 << 16));
    // 0x2ab8b4: 0x3421f000
    ctx->pc = 0x2ab8b4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 61440));
    // 0x2ab8b8: 0x44816800
    ctx->pc = 0x2ab8b8u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
label_2ab8bc:
    // 0x2ab8bc: 0xe44e0060
    ctx->pc = 0x2ab8bcu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x2ab8c0: 0x8c620004
    ctx->pc = 0x2ab8c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ab8c4: 0xe44f0064
    ctx->pc = 0x2ab8c4u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x2ab8c8: 0x8c620004
    ctx->pc = 0x2ab8c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ab8cc: 0xe44c0008
    ctx->pc = 0x2ab8ccu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2ab8d0: 0x8c620004
    ctx->pc = 0x2ab8d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ab8d4: 0xe44d000c
    ctx->pc = 0x2ab8d4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2ab8d8: 0x8c630004
    ctx->pc = 0x2ab8d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ab8dc: 0x24020001
    ctx->pc = 0x2ab8dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ab8e0: 0x3e00008
    ctx->pc = 0x2AB8E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB8E4u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AB8A0u: goto label_2ab8a0;
            case 0x2AB8BCu: goto label_2ab8bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2AB8E8u;
}

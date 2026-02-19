#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FixAngle
// Address: 0x2d6868 - 0x2d68f4
void FixAngle_0x2d6868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d6868u;

    // 0x2d6868: 0x3c014049
    ctx->pc = 0x2d6868u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x2d686c: 0x34210fdb
    ctx->pc = 0x2d686cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2d6870: 0x44810000
    ctx->pc = 0x2d6870u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d6874: 0x460c0034
    ctx->pc = 0x2d6874u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d6878: 0x0
    ctx->pc = 0x2d6878u;
    // NOP
    // 0x2d687c: 0x4500000b
    ctx->pc = 0x2D687Cu;
    {
        const bool branch_taken_0x2d687c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D6880u;
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x2d687c) {
            ctx->pc = 0x2D68ACu;
            goto label_2d68ac;
        }
    }
    ctx->pc = 0x2D6884u;
    // 0x2d6884: 0x3c0140c9
    ctx->pc = 0x2d6884u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x2d6888: 0x34210fdb
    ctx->pc = 0x2d6888u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2d688c: 0x44810000
    ctx->pc = 0x2d688cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2d6890:
    // 0x2d6890: 0x46006301
    ctx->pc = 0x2d6890u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2d6894: 0x460c0834
    ctx->pc = 0x2d6894u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d6898: 0x0
    ctx->pc = 0x2d6898u;
    // NOP
    // 0x2d689c: 0x0
    ctx->pc = 0x2d689cu;
    // NOP
    // 0x2d68a0: 0x0
    ctx->pc = 0x2d68a0u;
    // NOP
    // 0x2d68a4: 0x4501fffa
    ctx->pc = 0x2D68A4u;
    {
        const bool branch_taken_0x2d68a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d68a4) {
            ctx->pc = 0x2D6890u;
            goto label_2d6890;
        }
    }
    ctx->pc = 0x2D68ACu;
label_2d68ac:
    // 0x2d68ac: 0x3c01c049
    ctx->pc = 0x2d68acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x2d68b0: 0x34210fdb
    ctx->pc = 0x2d68b0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2d68b4: 0x44810000
    ctx->pc = 0x2d68b4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d68b8: 0x46006036
    ctx->pc = 0x2d68b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d68bc: 0x4500000b
    ctx->pc = 0x2D68BCu;
    {
        const bool branch_taken_0x2d68bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d68bc) {
            ctx->pc = 0x2D68ECu;
            goto label_2d68ec;
        }
    }
    ctx->pc = 0x2D68C4u;
    // 0x2d68c4: 0x3c0140c9
    ctx->pc = 0x2d68c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x2d68c8: 0x34210fdb
    ctx->pc = 0x2d68c8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2d68cc: 0x44810800
    ctx->pc = 0x2d68ccu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_2d68d0:
    // 0x2d68d0: 0x46016300
    ctx->pc = 0x2d68d0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x2d68d4: 0x46006036
    ctx->pc = 0x2d68d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d68d8: 0x0
    ctx->pc = 0x2d68d8u;
    // NOP
    // 0x2d68dc: 0x0
    ctx->pc = 0x2d68dcu;
    // NOP
    // 0x2d68e0: 0x0
    ctx->pc = 0x2d68e0u;
    // NOP
    // 0x2d68e4: 0x4501fffa
    ctx->pc = 0x2D68E4u;
    {
        const bool branch_taken_0x2d68e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d68e4) {
            ctx->pc = 0x2D68D0u;
            goto label_2d68d0;
        }
    }
    ctx->pc = 0x2D68ECu;
label_2d68ec:
    // 0x2d68ec: 0x3e00008
    ctx->pc = 0x2D68ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D68F0u;
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D6890u: goto label_2d6890;
            case 0x2D68ACu: goto label_2d68ac;
            case 0x2D68D0u: goto label_2d68d0;
            case 0x2D68ECu: goto label_2d68ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D68F4u;
}

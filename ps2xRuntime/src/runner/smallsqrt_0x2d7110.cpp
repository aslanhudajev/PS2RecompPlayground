#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: smallsqrt
// Address: 0x2d7110 - 0x2d71f4
void smallsqrt_0x2d7110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d7110u;

    // 0x2d7110: 0x3c0138d1
    ctx->pc = 0x2d7110u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14545 << 16));
    // 0x2d7114: 0x3421b717
    ctx->pc = 0x2d7114u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 46871));
    // 0x2d7118: 0x44810000
    ctx->pc = 0x2d7118u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d711c: 0x46006036
    ctx->pc = 0x2d711cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d7120: 0x45000004
    ctx->pc = 0x2D7120u;
    {
        const bool branch_taken_0x2d7120 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d7120) {
            ctx->pc = 0x2D7134u;
            goto label_2d7134;
        }
    }
    ctx->pc = 0x2D7128u;
    // 0x2d7128: 0x44800000
    ctx->pc = 0x2d7128u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2d712c: 0x3e00008
    ctx->pc = 0x2D712Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D7134u: goto label_2d7134;
            case 0x2D7188u: goto label_2d7188;
            case 0x2D71ACu: goto label_2d71ac;
            case 0x2D71D0u: goto label_2d71d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D7134u;
label_2d7134:
    // 0x2d7134: 0x3c013f00
    ctx->pc = 0x2d7134u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2d7138: 0x44810000
    ctx->pc = 0x2d7138u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d713c: 0x46006036
    ctx->pc = 0x2d713cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d7140: 0x0
    ctx->pc = 0x2d7140u;
    // NOP
    // 0x2d7144: 0x45020022
    ctx->pc = 0x2D7144u;
    {
        const bool branch_taken_0x2d7144 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d7144) {
            ctx->pc = 0x2D7148u;
            ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
            ctx->pc = 0x2D71D0u;
            goto label_2d71d0;
        }
    }
    ctx->pc = 0x2D714Cu;
    // 0x2d714c: 0x3c013e80
    ctx->pc = 0x2d714cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16000 << 16));
    // 0x2d7150: 0x44810000
    ctx->pc = 0x2d7150u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d7154: 0x46006036
    ctx->pc = 0x2d7154u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d7158: 0x45000014
    ctx->pc = 0x2D7158u;
    {
        const bool branch_taken_0x2d7158 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d7158) {
            ctx->pc = 0x2D71ACu;
            goto label_2d71ac;
        }
    }
    ctx->pc = 0x2D7160u;
    // 0x2d7160: 0x3c013e00
    ctx->pc = 0x2d7160u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15872 << 16));
    // 0x2d7164: 0x44810000
    ctx->pc = 0x2d7164u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d7168: 0x46006036
    ctx->pc = 0x2d7168u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d716c: 0x45000006
    ctx->pc = 0x2D716Cu;
    {
        const bool branch_taken_0x2d716c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d716c) {
            ctx->pc = 0x2D7188u;
            goto label_2d7188;
        }
    }
    ctx->pc = 0x2D7174u;
    // 0x2d7174: 0x3c014035
    ctx->pc = 0x2d7174u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16437 << 16));
    // 0x2d7178: 0x34210481
    ctx->pc = 0x2d7178u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 1153));
    // 0x2d717c: 0x44810000
    ctx->pc = 0x2d717cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d7180: 0x3e00008
    ctx->pc = 0x2D7180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7184u;
        ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D7134u: goto label_2d7134;
            case 0x2D7188u: goto label_2d7188;
            case 0x2D71ACu: goto label_2d71ac;
            case 0x2D71D0u: goto label_2d71d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D7188u;
label_2d7188:
    // 0x2d7188: 0x3c013f95
    ctx->pc = 0x2d7188u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16277 << 16));
    // 0x2d718c: 0x3421f6fd
    ctx->pc = 0x2d718cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 63229));
    // 0x2d7190: 0x44810000
    ctx->pc = 0x2d7190u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d7194: 0x46006002
    ctx->pc = 0x2d7194u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2d7198: 0x3c013e54
    ctx->pc = 0x2d7198u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15956 << 16));
    // 0x2d719c: 0x34211206
    ctx->pc = 0x2d719cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4614));
    // 0x2d71a0: 0x44810800
    ctx->pc = 0x2d71a0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2d71a4: 0x3e00008
    ctx->pc = 0x2D71A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D71A8u;
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D7134u: goto label_2d7134;
            case 0x2D7188u: goto label_2d7188;
            case 0x2D71ACu: goto label_2d71ac;
            case 0x2D71D0u: goto label_2d71d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D71ACu;
label_2d71ac:
    // 0x2d71ac: 0x3c013f54
    ctx->pc = 0x2d71acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16212 << 16));
    // 0x2d71b0: 0x34211206
    ctx->pc = 0x2d71b0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4614));
    // 0x2d71b4: 0x44810000
    ctx->pc = 0x2d71b4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d71b8: 0x46006002
    ctx->pc = 0x2d71b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2d71bc: 0x3c013e95
    ctx->pc = 0x2d71bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16021 << 16));
    // 0x2d71c0: 0x3421f6fd
    ctx->pc = 0x2d71c0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 63229));
    // 0x2d71c4: 0x44810800
    ctx->pc = 0x2d71c4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2d71c8: 0x3e00008
    ctx->pc = 0x2D71C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D71CCu;
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D7134u: goto label_2d7134;
            case 0x2D7188u: goto label_2d7188;
            case 0x2D71ACu: goto label_2d71ac;
            case 0x2D71D0u: goto label_2d71d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D71D0u;
label_2d71d0:
    // 0x2d71d0: 0x3c013f15
    ctx->pc = 0x2d71d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16149 << 16));
    // 0x2d71d4: 0x3421f6fd
    ctx->pc = 0x2d71d4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 63229));
    // 0x2d71d8: 0x44810800
    ctx->pc = 0x2d71d8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2d71dc: 0x46010002
    ctx->pc = 0x2d71dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d71e0: 0x3c013f35
    ctx->pc = 0x2d71e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16181 << 16));
    // 0x2d71e4: 0x34210481
    ctx->pc = 0x2d71e4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 1153));
    // 0x2d71e8: 0x44810800
    ctx->pc = 0x2d71e8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2d71ec: 0x3e00008
    ctx->pc = 0x2D71ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D71F0u;
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D7134u: goto label_2d7134;
            case 0x2D7188u: goto label_2d7188;
            case 0x2D71ACu: goto label_2d71ac;
            case 0x2D71D0u: goto label_2d71d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D71F4u;
}

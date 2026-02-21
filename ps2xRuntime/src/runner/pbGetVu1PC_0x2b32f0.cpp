#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbGetVu1PC
// Address: 0x2b32f0 - 0x2b3328
void pbGetVu1PC_0x2b32f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b32f0u;

    // 0x2b32f0: 0x8c82025c
    ctx->pc = 0x2b32f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 604)));
    // 0x2b32f4: 0x218c0
    ctx->pc = 0x2b32f4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 3));
    // 0x2b32f8: 0x4600005
    ctx->pc = 0x2B32F8u;
    {
        const bool branch_taken_0x2b32f8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2B32FCu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2b32f8) {
            ctx->pc = 0x2B3310u;
            goto label_2b3310;
        }
    }
    ctx->pc = 0x2B3300u;
    // 0x2b3300: 0x44830000
    ctx->pc = 0x2b3300u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x2b3304: 0x46800020
    ctx->pc = 0x2b3304u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2b3308: 0x3e00008
    ctx->pc = 0x2B3308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B3310u: goto label_2b3310;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B3310u;
label_2b3310:
    // 0x2b3310: 0x31842
    ctx->pc = 0x2b3310u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2b3314: 0x431025
    ctx->pc = 0x2b3314u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b3318: 0x44820000
    ctx->pc = 0x2b3318u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2b331c: 0x46800020
    ctx->pc = 0x2b331cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2b3320: 0x3e00008
    ctx->pc = 0x2B3320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3324u;
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B3310u: goto label_2b3310;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B3328u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: Round
// Address: 0x2d5218 - 0x2d524c
void Round_0x2d5218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d5218u;

    // 0x2d5218: 0x44800000
    ctx->pc = 0x2d5218u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2d521c: 0x460c0036
    ctx->pc = 0x2d521cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d5220: 0x3c01bf00
    ctx->pc = 0x2d5220u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48896 << 16));
    // 0x2d5224: 0x44810000
    ctx->pc = 0x2d5224u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d5228: 0x45020004
    ctx->pc = 0x2D5228u;
    {
        const bool branch_taken_0x2d5228 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d5228) {
            ctx->pc = 0x2D522Cu;
            ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
            ctx->pc = 0x2D523Cu;
            goto label_2d523c;
        }
    }
    ctx->pc = 0x2D5230u;
    // 0x2d5230: 0x3c013f00
    ctx->pc = 0x2d5230u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2d5234: 0x44810000
    ctx->pc = 0x2d5234u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d5238: 0x46006300
    ctx->pc = 0x2d5238u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_2d523c:
    // 0x2d523c: 0x46006024
    ctx->pc = 0x2d523cu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[12]);
    // 0x2d5240: 0x44020000
    ctx->pc = 0x2d5240u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x2d5244: 0x3e00008
    ctx->pc = 0x2D5244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D523Cu: goto label_2d523c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D524Cu;
}

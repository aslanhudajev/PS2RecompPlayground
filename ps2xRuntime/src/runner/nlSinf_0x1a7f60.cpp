#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlSinf
// Address: 0x1a7f60 - 0x1a7fe4
void nlSinf_0x1a7f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlSinf");


    ctx->pc = 0x1a7f60u;

    // 0x1a7f60: 0x3c024000
    ctx->pc = 0x1a7f60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x1a7f64: 0x44820000
    ctx->pc = 0x1a7f64u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1a7f68: 0x27bdffe0
    ctx->pc = 0x1a7f68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a7f6c: 0x46006303
    ctx->pc = 0x1a7f6cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x1a7f70: 0x7fbf0000
    ctx->pc = 0x1a7f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1a7f74: 0x27a4001c
    ctx->pc = 0x1a7f74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 28));
    // 0x1a7f78: 0x0
    ctx->pc = 0x1a7f78u;
    // NOP
    // 0x1a7f7c: 0x0
    ctx->pc = 0x1a7f7cu;
    // NOP
    // 0x1a7f80: 0xc069ffc
    ctx->pc = 0x1A7F80u;
    SET_GPR_U32(ctx, 31, 0x1A7F88u);
    ctx->pc = 0x1A7FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlinnerSin_0x1a7ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7F88u; }
        else if (ctx->pc != 0x1A7F88u) { ctx->pc = 0x1A7F88u; }
    }
    if (ctx->pc != 0x1A7F88u) { return; }
    ctx->pc = 0x1A7F88u;
    // 0x1a7f88: 0x3c024000
    ctx->pc = 0x1a7f88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x1a7f8c: 0x44821000
    ctx->pc = 0x1a7f8cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x1a7f90: 0x8fa3001c
    ctx->pc = 0x1a7f90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1a7f94: 0x46000042
    ctx->pc = 0x1a7f94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1a7f98: 0x3c043f80
    ctx->pc = 0x1a7f98u;
    SET_GPR_U32(ctx, 4, ((uint32_t)16256 << 16));
    // 0x1a7f9c: 0x46001082
    ctx->pc = 0x1a7f9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1a7fa0: 0x30620001
    ctx->pc = 0x1a7fa0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x1a7fa4: 0x44840000
    ctx->pc = 0x1a7fa4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 4);
    // 0x1a7fa8: 0x0
    ctx->pc = 0x1a7fa8u;
    // NOP
    // 0x1a7fac: 0x46010000
    ctx->pc = 0x1a7facu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a7fb0: 0x46001003
    ctx->pc = 0x1a7fb0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x1a7fb4: 0x0
    ctx->pc = 0x1a7fb4u;
    // NOP
    // 0x1a7fb8: 0x0
    ctx->pc = 0x1a7fb8u;
    // NOP
    // 0x1a7fbc: 0x4610004
    ctx->pc = 0x1A7FBCu;
    {
        const bool branch_taken_0x1a7fbc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1a7fbc) {
            ctx->pc = 0x1A7FD0u;
            goto label_1a7fd0;
        }
    }
    ctx->pc = 0x1A7FC4u;
    // 0x1a7fc4: 0x10400002
    ctx->pc = 0x1A7FC4u;
    {
        const bool branch_taken_0x1a7fc4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a7fc4) {
            ctx->pc = 0x1A7FD0u;
            goto label_1a7fd0;
        }
    }
    ctx->pc = 0x1A7FCCu;
    // 0x1a7fcc: 0x2442fffe
    ctx->pc = 0x1a7fccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967294));
label_1a7fd0:
    // 0x1a7fd0: 0x54400001
    ctx->pc = 0x1A7FD0u;
    {
        const bool branch_taken_0x1a7fd0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a7fd0) {
            ctx->pc = 0x1A7FD4u;
            ctx->f[0] = FPU_NEG_S(ctx->f[0]);
            ctx->pc = 0x1A7FD8u;
            goto label_1a7fd8;
        }
    }
    ctx->pc = 0x1A7FD8u;
label_1a7fd8:
    // 0x1a7fd8: 0x7bbf0000
    ctx->pc = 0x1a7fd8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7fdc: 0x3e00008
    ctx->pc = 0x1A7FDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7FE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A7FD0u: goto label_1a7fd0;
            case 0x1A7FD8u: goto label_1a7fd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A7FE4u;
}

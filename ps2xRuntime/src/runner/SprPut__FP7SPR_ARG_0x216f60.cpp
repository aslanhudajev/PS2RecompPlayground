#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SprPut__FP7SPR_ARG
// Address: 0x216f60 - 0x216fc0
void SprPut__FP7SPR_ARG_0x216f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SprPut__FP7SPR_ARG");


    ctx->pc = 0x216f60u;

    // 0x216f60: 0x27bdfff0
    ctx->pc = 0x216f60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x216f64: 0x7fbf0000
    ctx->pc = 0x216f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x216f68: 0x8c860048
    ctx->pc = 0x216f68u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x216f6c: 0x3c03004a
    ctx->pc = 0x216f6cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)74 << 16));
    // 0x216f70: 0x2463f738
    ctx->pc = 0x216f70u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294965048));
    // 0x216f74: 0x62880
    ctx->pc = 0x216f74u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 2));
    // 0x216f78: 0xa62821
    ctx->pc = 0x216f78u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x216f7c: 0x52900
    ctx->pc = 0x216f7cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 4));
    // 0x216f80: 0x652821
    ctx->pc = 0x216f80u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x216f84: 0x8ca30048
    ctx->pc = 0x216f84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x216f88: 0x1060000a
    ctx->pc = 0x216F88u;
    {
        const bool branch_taken_0x216f88 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x216f88) {
            ctx->pc = 0x216FB4u;
            goto label_216fb4;
        }
    }
    ctx->pc = 0x216F90u;
    // 0x216f90: 0x8ca20000
    ctx->pc = 0x216f90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x216f94: 0xac820000
    ctx->pc = 0x216f94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x216f98: 0x8ca20004
    ctx->pc = 0x216f98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x216f9c: 0xac820004
    ctx->pc = 0x216f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x216fa0: 0x8ca20008
    ctx->pc = 0x216fa0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x216fa4: 0xac820008
    ctx->pc = 0x216fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x216fa8: 0x8ca20044
    ctx->pc = 0x216fa8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x216fac: 0xc06b9e4
    ctx->pc = 0x216FACu;
    SET_GPR_U32(ctx, 31, 0x216FB4u);
    ctx->pc = 0x216FB0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 2));
    ctx->pc = 0x1AE790u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSprPut_0x1ae790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216FB4u; }
        else if (ctx->pc != 0x216FB4u) { ctx->pc = 0x216FB4u; }
    }
    if (ctx->pc != 0x216FB4u) { return; }
    ctx->pc = 0x216FB4u;
label_216fb4:
    // 0x216fb4: 0x7bbf0000
    ctx->pc = 0x216fb4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216fb8: 0x3e00008
    ctx->pc = 0x216FB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216FBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x216FB4u: goto label_216fb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x216FC0u;
}

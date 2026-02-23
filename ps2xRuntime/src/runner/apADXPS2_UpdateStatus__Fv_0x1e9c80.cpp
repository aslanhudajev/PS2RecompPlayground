#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: apADXPS2_UpdateStatus__Fv
// Address: 0x1e9c80 - 0x1e9cb0
void apADXPS2_UpdateStatus__Fv_0x1e9c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("apADXPS2_UpdateStatus__Fv");


    ctx->pc = 0x1e9c80u;

    // 0x1e9c80: 0x27bdfff0
    ctx->pc = 0x1e9c80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e9c84: 0x7fbf0000
    ctx->pc = 0x1e9c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1e9c88: 0x8f848d0c
    ctx->pc = 0x1e9c88u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937868)));
    // 0x1e9c8c: 0x8f838d30
    ctx->pc = 0x1e9c8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937904)));
    // 0x1e9c90: 0x10830004
    ctx->pc = 0x1E9C90u;
    {
        const bool branch_taken_0x1e9c90 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1e9c90) {
            ctx->pc = 0x1E9CA4u;
            goto label_1e9ca4;
        }
    }
    ctx->pc = 0x1E9C98u;
    // 0x1e9c98: 0x8f828d30
    ctx->pc = 0x1e9c98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937904)));
    // 0x1e9c9c: 0xc07a72c
    ctx->pc = 0x1E9C9Cu;
    SET_GPR_U32(ctx, 31, 0x1E9CA4u);
    ctx->pc = 0x1E9CA0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937868), GPR_U32(ctx, 2));
    ctx->pc = 0x1E9CB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        apADXPS2_ExecServer__Fv_0x1e9cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9CA4u; }
        else if (ctx->pc != 0x1E9CA4u) { ctx->pc = 0x1E9CA4u; }
    }
    if (ctx->pc != 0x1E9CA4u) { return; }
    ctx->pc = 0x1E9CA4u;
label_1e9ca4:
    // 0x1e9ca4: 0x7bbf0000
    ctx->pc = 0x1e9ca4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9ca8: 0x3e00008
    ctx->pc = 0x1E9CA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9CACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E9CA4u: goto label_1e9ca4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E9CB0u;
}

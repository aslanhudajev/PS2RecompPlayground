#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlObjPutForce
// Address: 0x1a8320 - 0x1a834c
void nlObjPutForce_0x1a8320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlObjPutForce");


    ctx->pc = 0x1a8320u;

    // 0x1a8320: 0x27bdfff0
    ctx->pc = 0x1a8320u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a8324: 0x7fbf0000
    ctx->pc = 0x1a8324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1a8328: 0x8c850000
    ctx->pc = 0x1a8328u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a832c: 0x24031000
    ctx->pc = 0x1a832cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1a8330: 0x14a30003
    ctx->pc = 0x1A8330u;
    {
        const bool branch_taken_0x1a8330 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        if (branch_taken_0x1a8330) {
            ctx->pc = 0x1A8340u;
            goto label_1a8340;
        }
    }
    ctx->pc = 0x1A8338u;
    // 0x1a8338: 0xc06a0d4
    ctx->pc = 0x1A8338u;
    SET_GPR_U32(ctx, 31, 0x1A8340u);
    ctx->pc = 0x1A8350u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPut_i_0x1a8350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8340u; }
        else if (ctx->pc != 0x1A8340u) { ctx->pc = 0x1A8340u; }
    }
    if (ctx->pc != 0x1A8340u) { return; }
    ctx->pc = 0x1A8340u;
label_1a8340:
    // 0x1a8340: 0x7bbf0000
    ctx->pc = 0x1a8340u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8344: 0x3e00008
    ctx->pc = 0x1A8344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8348u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A8340u: goto label_1a8340;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A834Cu;
}

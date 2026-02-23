#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: removeAllocBlockList__14TexBufMgrClassFP10TexSurface
// Address: 0x21a0e0 - 0x21a13c
void removeAllocBlockList__14TexBufMgrClassFP10TexSurface_0x21a0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("removeAllocBlockList__14TexBufMgrClassFP10TexSurface");


    ctx->pc = 0x21a0e0u;

    // 0x21a0e0: 0x27bdfff0
    ctx->pc = 0x21a0e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21a0e4: 0x7fbf0000
    ctx->pc = 0x21a0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x21a0e8: 0x8ca30004
    ctx->pc = 0x21a0e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x21a0ec: 0x14600004
    ctx->pc = 0x21A0ECu;
    {
        const bool branch_taken_0x21a0ec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x21a0ec) {
            ctx->pc = 0x21A100u;
            goto label_21a100;
        }
    }
    ctx->pc = 0x21A0F4u;
    // 0x21a0f4: 0x8ca20000
    ctx->pc = 0x21a0f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21a0f8: 0x10000003
    ctx->pc = 0x21A0F8u;
    {
        const bool branch_taken_0x21a0f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A0FCu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 924), GPR_U32(ctx, 2));
        if (branch_taken_0x21a0f8) {
            ctx->pc = 0x21A108u;
            goto label_21a108;
        }
    }
    ctx->pc = 0x21A100u;
label_21a100:
    // 0x21a100: 0x8ca20000
    ctx->pc = 0x21a100u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21a104: 0xac620000
    ctx->pc = 0x21a104u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_21a108:
    // 0x21a108: 0x8ca30000
    ctx->pc = 0x21a108u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21a10c: 0x14600004
    ctx->pc = 0x21A10Cu;
    {
        const bool branch_taken_0x21a10c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x21a10c) {
            ctx->pc = 0x21A120u;
            goto label_21a120;
        }
    }
    ctx->pc = 0x21A114u;
    // 0x21a114: 0x8ca20004
    ctx->pc = 0x21a114u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x21a118: 0x10000003
    ctx->pc = 0x21A118u;
    {
        const bool branch_taken_0x21a118 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A11Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 928), GPR_U32(ctx, 2));
        if (branch_taken_0x21a118) {
            ctx->pc = 0x21A128u;
            goto label_21a128;
        }
    }
    ctx->pc = 0x21A120u;
label_21a120:
    // 0x21a120: 0x8ca20004
    ctx->pc = 0x21a120u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x21a124: 0xac620004
    ctx->pc = 0x21a124u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_21a128:
    // 0x21a128: 0xc0867f4
    ctx->pc = 0x21A128u;
    SET_GPR_U32(ctx, 31, 0x21A130u);
    ctx->pc = 0x219FD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        returnAllocBlock__14TexBufMgrClassFP10TexSurface_0x219fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A130u; }
        else if (ctx->pc != 0x21A130u) { ctx->pc = 0x21A130u; }
    }
    if (ctx->pc != 0x21A130u) { return; }
    ctx->pc = 0x21A130u;
    // 0x21a130: 0x7bbf0000
    ctx->pc = 0x21a130u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a134: 0x3e00008
    ctx->pc = 0x21A134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A138u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21A100u: goto label_21a100;
            case 0x21A108u: goto label_21a108;
            case 0x21A120u: goto label_21a120;
            case 0x21A128u: goto label_21a128;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21A13Cu;
}

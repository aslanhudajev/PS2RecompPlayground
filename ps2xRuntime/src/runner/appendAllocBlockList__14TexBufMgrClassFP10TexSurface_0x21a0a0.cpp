#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: appendAllocBlockList__14TexBufMgrClassFP10TexSurface
// Address: 0x21a0a0 - 0x21a0d4
void appendAllocBlockList__14TexBufMgrClassFP10TexSurface_0x21a0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("appendAllocBlockList__14TexBufMgrClassFP10TexSurface");


    ctx->pc = 0x21a0a0u;

    // 0x21a0a0: 0x8c8303a0
    ctx->pc = 0x21a0a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 928)));
    // 0x21a0a4: 0xaca30004
    ctx->pc = 0x21a0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x21a0a8: 0x8c83039c
    ctx->pc = 0x21a0a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 924)));
    // 0x21a0ac: 0x14600004
    ctx->pc = 0x21A0ACu;
    {
        const bool branch_taken_0x21a0ac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x21a0ac) {
            ctx->pc = 0x21A0C0u;
            goto label_21a0c0;
        }
    }
    ctx->pc = 0x21A0B4u;
    // 0x21a0b4: 0xac8503a0
    ctx->pc = 0x21a0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 928), GPR_U32(ctx, 5));
    // 0x21a0b8: 0x10000004
    ctx->pc = 0x21A0B8u;
    {
        const bool branch_taken_0x21a0b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A0BCu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 924), GPR_U32(ctx, 5));
        if (branch_taken_0x21a0b8) {
            ctx->pc = 0x21A0CCu;
            goto label_21a0cc;
        }
    }
    ctx->pc = 0x21A0C0u;
label_21a0c0:
    // 0x21a0c0: 0x8c8303a0
    ctx->pc = 0x21a0c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 928)));
    // 0x21a0c4: 0xac650000
    ctx->pc = 0x21a0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x21a0c8: 0xac8503a0
    ctx->pc = 0x21a0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 928), GPR_U32(ctx, 5));
label_21a0cc:
    // 0x21a0cc: 0x3e00008
    ctx->pc = 0x21A0CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A0D0u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21A0C0u: goto label_21a0c0;
            case 0x21A0CCu: goto label_21a0cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21A0D4u;
}

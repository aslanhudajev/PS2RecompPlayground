#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: removeFreeBlockList__14TexBufMgrClassFP10TexSurface
// Address: 0x21a040 - 0x21a09c
void removeFreeBlockList__14TexBufMgrClassFP10TexSurface_0x21a040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("removeFreeBlockList__14TexBufMgrClassFP10TexSurface");


    ctx->pc = 0x21a040u;

    // 0x21a040: 0x27bdfff0
    ctx->pc = 0x21a040u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21a044: 0x7fbf0000
    ctx->pc = 0x21a044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x21a048: 0x8ca30004
    ctx->pc = 0x21a048u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x21a04c: 0x14600004
    ctx->pc = 0x21A04Cu;
    {
        const bool branch_taken_0x21a04c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x21a04c) {
            ctx->pc = 0x21A060u;
            goto label_21a060;
        }
    }
    ctx->pc = 0x21A054u;
    // 0x21a054: 0x8ca20000
    ctx->pc = 0x21a054u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21a058: 0x10000003
    ctx->pc = 0x21A058u;
    {
        const bool branch_taken_0x21a058 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A05Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 916), GPR_U32(ctx, 2));
        if (branch_taken_0x21a058) {
            ctx->pc = 0x21A068u;
            goto label_21a068;
        }
    }
    ctx->pc = 0x21A060u;
label_21a060:
    // 0x21a060: 0x8ca20000
    ctx->pc = 0x21a060u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21a064: 0xac620000
    ctx->pc = 0x21a064u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_21a068:
    // 0x21a068: 0x8ca30000
    ctx->pc = 0x21a068u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21a06c: 0x14600004
    ctx->pc = 0x21A06Cu;
    {
        const bool branch_taken_0x21a06c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x21a06c) {
            ctx->pc = 0x21A080u;
            goto label_21a080;
        }
    }
    ctx->pc = 0x21A074u;
    // 0x21a074: 0x8ca20004
    ctx->pc = 0x21a074u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x21a078: 0x10000003
    ctx->pc = 0x21A078u;
    {
        const bool branch_taken_0x21a078 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A07Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 920), GPR_U32(ctx, 2));
        if (branch_taken_0x21a078) {
            ctx->pc = 0x21A088u;
            goto label_21a088;
        }
    }
    ctx->pc = 0x21A080u;
label_21a080:
    // 0x21a080: 0x8ca20004
    ctx->pc = 0x21a080u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x21a084: 0xac620004
    ctx->pc = 0x21a084u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_21a088:
    // 0x21a088: 0xc0867e8
    ctx->pc = 0x21A088u;
    SET_GPR_U32(ctx, 31, 0x21A090u);
    ctx->pc = 0x219FA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        returnFreeBlock__14TexBufMgrClassFP10TexSurface_0x219fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A090u; }
        else if (ctx->pc != 0x21A090u) { ctx->pc = 0x21A090u; }
    }
    if (ctx->pc != 0x21A090u) { return; }
    ctx->pc = 0x21A090u;
    // 0x21a090: 0x7bbf0000
    ctx->pc = 0x21a090u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a094: 0x3e00008
    ctx->pc = 0x21A094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A098u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21A060u: goto label_21a060;
            case 0x21A068u: goto label_21a068;
            case 0x21A080u: goto label_21a080;
            case 0x21A088u: goto label_21a088;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21A09Cu;
}

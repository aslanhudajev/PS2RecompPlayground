#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: appendFreeBlockList__14TexBufMgrClassFP10TexSurface
// Address: 0x21a000 - 0x21a034
void appendFreeBlockList__14TexBufMgrClassFP10TexSurface_0x21a000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("appendFreeBlockList__14TexBufMgrClassFP10TexSurface");


    ctx->pc = 0x21a000u;

    // 0x21a000: 0x8c830398
    ctx->pc = 0x21a000u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 920)));
    // 0x21a004: 0xaca30004
    ctx->pc = 0x21a004u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x21a008: 0x8c830394
    ctx->pc = 0x21a008u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 916)));
    // 0x21a00c: 0x14600004
    ctx->pc = 0x21A00Cu;
    {
        const bool branch_taken_0x21a00c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x21a00c) {
            ctx->pc = 0x21A020u;
            goto label_21a020;
        }
    }
    ctx->pc = 0x21A014u;
    // 0x21a014: 0xac850398
    ctx->pc = 0x21a014u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 920), GPR_U32(ctx, 5));
    // 0x21a018: 0x10000004
    ctx->pc = 0x21A018u;
    {
        const bool branch_taken_0x21a018 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A01Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 916), GPR_U32(ctx, 5));
        if (branch_taken_0x21a018) {
            ctx->pc = 0x21A02Cu;
            goto label_21a02c;
        }
    }
    ctx->pc = 0x21A020u;
label_21a020:
    // 0x21a020: 0x8c830398
    ctx->pc = 0x21a020u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 920)));
    // 0x21a024: 0xac650000
    ctx->pc = 0x21a024u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x21a028: 0xac850398
    ctx->pc = 0x21a028u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 920), GPR_U32(ctx, 5));
label_21a02c:
    // 0x21a02c: 0x3e00008
    ctx->pc = 0x21A02Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A030u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21A020u: goto label_21a020;
            case 0x21A02Cu: goto label_21a02c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21A034u;
}

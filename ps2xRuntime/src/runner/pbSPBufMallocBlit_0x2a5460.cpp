#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbSPBufMallocBlit
// Address: 0x2a5460 - 0x2a549c
void pbSPBufMallocBlit_0x2a5460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a5460u;

    // 0x2a5460: 0x27bdfff0
    ctx->pc = 0x2a5460u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a5464: 0xffbf0000
    ctx->pc = 0x2a5464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a5468: 0x3c020036
    ctx->pc = 0x2a5468u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a546c: 0x8c42df94
    ctx->pc = 0x2a546cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958996)));
    // 0x2a5470: 0x14400005
    ctx->pc = 0x2A5470u;
    {
        const bool branch_taken_0x2a5470 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a5470) {
            ctx->pc = 0x2A5488u;
            goto label_2a5488;
        }
    }
    ctx->pc = 0x2A5478u;
    // 0x2a5478: 0xc0a94ee
    ctx->pc = 0x2A5478u;
    SET_GPR_U32(ctx, 31, 0x2A5480u);
    ctx->pc = 0x2A53B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbSPNextBuf_0x2a53b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5480u; }
    }
    if (ctx->pc != 0x2A5480u) { return; }
    ctx->pc = 0x2A5480u;
    // 0x2a5480: 0x10000004
    ctx->pc = 0x2A5480u;
    {
        const bool branch_taken_0x2a5480 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A5484u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x2a5480) {
            ctx->pc = 0x2A5494u;
            goto label_2a5494;
        }
    }
    ctx->pc = 0x2A5488u;
label_2a5488:
    // 0x2a5488: 0xc0a94d4
    ctx->pc = 0x2A5488u;
    SET_GPR_U32(ctx, 31, 0x2A5490u);
    ctx->pc = 0x2A5350u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbSPBufMallocSub_0x2a5350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5490u; }
    }
    if (ctx->pc != 0x2A5490u) { return; }
    ctx->pc = 0x2A5490u;
    // 0x2a5490: 0xdfbf0000
    ctx->pc = 0x2a5490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a5494:
    // 0x2a5494: 0x3e00008
    ctx->pc = 0x2A5494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5498u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A5488u: goto label_2a5488;
            case 0x2A5494u: goto label_2a5494;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A549Cu;
}

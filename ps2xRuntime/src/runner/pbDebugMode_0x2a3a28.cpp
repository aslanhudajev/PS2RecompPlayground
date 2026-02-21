#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbDebugMode
// Address: 0x2a3a28 - 0x2a3a74
void pbDebugMode_0x2a3a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a3a28u;

    // 0x2a3a28: 0x27bdfff0
    ctx->pc = 0x2a3a28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a3a2c: 0xffbf0000
    ctx->pc = 0x2a3a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a3a30: 0x3c020036
    ctx->pc = 0x2a3a30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a3a34: 0x8c44e02c
    ctx->pc = 0x2a3a34u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294959148)));
    // 0x2a3a38: 0x8c830028
    ctx->pc = 0x2a3a38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2a3a3c: 0x10600007
    ctx->pc = 0x2A3A3Cu;
    {
        const bool branch_taken_0x2a3a3c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A3A40u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2a3a3c) {
            ctx->pc = 0x2A3A5Cu;
            goto label_2a3a5c;
        }
    }
    ctx->pc = 0x2A3A44u;
    // 0x2a3a44: 0x50620001
    ctx->pc = 0x2A3A44u;
    {
        const bool branch_taken_0x2a3a44 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2a3a44) {
            ctx->pc = 0x2A3A48u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
            ctx->pc = 0x2A3A4Cu;
            goto label_2a3a4c;
        }
    }
    ctx->pc = 0x2A3A4Cu;
label_2a3a4c:
    // 0x2a3a4c: 0xc0a8e72
    ctx->pc = 0x2A3A4Cu;
    SET_GPR_U32(ctx, 31, 0x2A3A54u);
    ctx->pc = 0x2A39C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCalcDebugMode_0x2a39c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3A54u; }
    }
    if (ctx->pc != 0x2A3A54u) { return; }
    ctx->pc = 0x2A3A54u;
    // 0x2a3a54: 0x10000005
    ctx->pc = 0x2A3A54u;
    {
        const bool branch_taken_0x2a3a54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A3A58u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x2a3a54) {
            ctx->pc = 0x2A3A6Cu;
            goto label_2a3a6c;
        }
    }
    ctx->pc = 0x2A3A5Cu;
label_2a3a5c:
    // 0x2a3a5c: 0x3c020036
    ctx->pc = 0x2a3a5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a3a60: 0x8c42e02c
    ctx->pc = 0x2a3a60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294959148)));
    // 0x2a3a64: 0x8c420024
    ctx->pc = 0x2a3a64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2a3a68: 0xdfbf0000
    ctx->pc = 0x2a3a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a3a6c:
    // 0x2a3a6c: 0x3e00008
    ctx->pc = 0x2A3A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3A70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A3A4Cu: goto label_2a3a4c;
            case 0x2A3A5Cu: goto label_2a3a5c;
            case 0x2A3A6Cu: goto label_2a3a6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A3A74u;
}

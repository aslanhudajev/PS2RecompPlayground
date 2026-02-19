#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: readBufBeginPut
// Address: 0x2ddae8 - 0x2ddb18
void readBufBeginPut_0x2ddae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ddae8u;

    // 0x2ddae8: 0x3c020005
    ctx->pc = 0x2ddae8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)5 << 16));
    // 0x2ddaec: 0x823021
    ctx->pc = 0x2ddaecu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ddaf0: 0x8cc30008
    ctx->pc = 0x2ddaf0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2ddaf4: 0x8cc20004
    ctx->pc = 0x2ddaf4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2ddaf8: 0x621823
    ctx->pc = 0x2ddaf8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ddafc: 0x10600004
    ctx->pc = 0x2DDAFCu;
    {
        const bool branch_taken_0x2ddafc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ddafc) {
            ctx->pc = 0x2DDB10u;
            goto label_2ddb10;
        }
    }
    ctx->pc = 0x2DDB04u;
    // 0x2ddb04: 0x8cc20000
    ctx->pc = 0x2ddb04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ddb08: 0x821021
    ctx->pc = 0x2ddb08u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ddb0c: 0xaca20000
    ctx->pc = 0x2ddb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_2ddb10:
    // 0x2ddb10: 0x3e00008
    ctx->pc = 0x2DDB10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDB14u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DDB10u: goto label_2ddb10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DDB18u;
}

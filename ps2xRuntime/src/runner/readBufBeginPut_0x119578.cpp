#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: readBufBeginPut
// Address: 0x119578 - 0x1195a8
void readBufBeginPut_0x119578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x119578u;

    // 0x119578: 0x3c020005
    ctx->pc = 0x119578u;
    SET_GPR_U32(ctx, 2, ((uint32_t)5 << 16));
    // 0x11957c: 0x823021
    ctx->pc = 0x11957cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x119580: 0x8cc30008
    ctx->pc = 0x119580u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x119584: 0x8cc20004
    ctx->pc = 0x119584u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x119588: 0x621823
    ctx->pc = 0x119588u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11958c: 0x10600004
    ctx->pc = 0x11958Cu;
    {
        const bool branch_taken_0x11958c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x11958c) {
            ctx->pc = 0x1195A0u;
            goto label_1195a0;
        }
    }
    ctx->pc = 0x119594u;
    // 0x119594: 0x8cc20000
    ctx->pc = 0x119594u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x119598: 0x821021
    ctx->pc = 0x119598u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11959c: 0xaca20000
    ctx->pc = 0x11959cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1195a0:
    // 0x1195a0: 0x3e00008
    ctx->pc = 0x1195A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1195A4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1195A0u: goto label_1195a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1195A8u;
}

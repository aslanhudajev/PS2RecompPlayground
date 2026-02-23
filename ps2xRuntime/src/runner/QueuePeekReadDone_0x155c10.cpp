#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: QueuePeekReadDone
// Address: 0x155c10 - 0x155c4c
void QueuePeekReadDone_0x155c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("QueuePeekReadDone");


    ctx->pc = 0x155c10u;

    // 0x155c10: 0x80282d
    ctx->pc = 0x155c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155c14: 0x8ca20004
    ctx->pc = 0x155c14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x155c18: 0x8ca40008
    ctx->pc = 0x155c18u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x155c1c: 0x8ca30000
    ctx->pc = 0x155c1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x155c20: 0x2442ffff
    ctx->pc = 0x155c20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x155c24: 0x24840001
    ctx->pc = 0x155c24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x155c28: 0xaca20004
    ctx->pc = 0x155c28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x155c2c: 0x24630010
    ctx->pc = 0x155c2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
    // 0x155c30: 0xa31821
    ctx->pc = 0x155c30u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x155c34: 0x14830003
    ctx->pc = 0x155C34u;
    {
        const bool branch_taken_0x155c34 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x155C38u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
        if (branch_taken_0x155c34) {
            ctx->pc = 0x155C44u;
            goto label_155c44;
        }
    }
    ctx->pc = 0x155C3Cu;
    // 0x155c3c: 0x24a20010
    ctx->pc = 0x155c3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 16));
    // 0x155c40: 0xaca20008
    ctx->pc = 0x155c40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_155c44:
    // 0x155c44: 0x3e00008
    ctx->pc = 0x155C44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155C44u: goto label_155c44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x155C4Cu;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: QueuePeekReadDone
// Address: 0x3043f0 - 0x30442c
void QueuePeekReadDone_0x3043f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3043f0u;

    // 0x3043f0: 0x80282d
    ctx->pc = 0x3043f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3043f4: 0x8ca20004
    ctx->pc = 0x3043f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3043f8: 0x8ca40008
    ctx->pc = 0x3043f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3043fc: 0x8ca30000
    ctx->pc = 0x3043fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x304400: 0x2442ffff
    ctx->pc = 0x304400u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x304404: 0x24840001
    ctx->pc = 0x304404u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x304408: 0xaca20004
    ctx->pc = 0x304408u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x30440c: 0x24630010
    ctx->pc = 0x30440cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
    // 0x304410: 0xa31821
    ctx->pc = 0x304410u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x304414: 0x14830003
    ctx->pc = 0x304414u;
    {
        const bool branch_taken_0x304414 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x304418u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
        if (branch_taken_0x304414) {
            ctx->pc = 0x304424u;
            goto label_304424;
        }
    }
    ctx->pc = 0x30441Cu;
    // 0x30441c: 0x24a20010
    ctx->pc = 0x30441cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 16));
    // 0x304420: 0xaca20008
    ctx->pc = 0x304420u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_304424:
    // 0x304424: 0x3e00008
    ctx->pc = 0x304424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x304424u: goto label_304424;
            default: break;
        }
        return;
    }
    ctx->pc = 0x30442Cu;
}

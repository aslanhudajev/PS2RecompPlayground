#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: QueuePeekWriteDone
// Address: 0x3043b0 - 0x3043ec
void QueuePeekWriteDone_0x3043b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3043b0u;

    // 0x3043b0: 0x80282d
    ctx->pc = 0x3043b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3043b4: 0x8ca20004
    ctx->pc = 0x3043b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3043b8: 0x8ca4000c
    ctx->pc = 0x3043b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3043bc: 0x8ca30000
    ctx->pc = 0x3043bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3043c0: 0x24420001
    ctx->pc = 0x3043c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x3043c4: 0x24840001
    ctx->pc = 0x3043c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x3043c8: 0xaca20004
    ctx->pc = 0x3043c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3043cc: 0x24630010
    ctx->pc = 0x3043ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
    // 0x3043d0: 0xa31821
    ctx->pc = 0x3043d0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3043d4: 0x14830003
    ctx->pc = 0x3043D4u;
    {
        const bool branch_taken_0x3043d4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x3043D8u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
        if (branch_taken_0x3043d4) {
            ctx->pc = 0x3043E4u;
            goto label_3043e4;
        }
    }
    ctx->pc = 0x3043DCu;
    // 0x3043dc: 0x24a20010
    ctx->pc = 0x3043dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 16));
    // 0x3043e0: 0xaca2000c
    ctx->pc = 0x3043e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_3043e4:
    // 0x3043e4: 0x3e00008
    ctx->pc = 0x3043E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3043E4u: goto label_3043e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3043ECu;
}

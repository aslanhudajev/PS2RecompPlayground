#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: QueuePeekWriteDone
// Address: 0x155bd0 - 0x155c0c
void QueuePeekWriteDone_0x155bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("QueuePeekWriteDone");


    ctx->pc = 0x155bd0u;

    // 0x155bd0: 0x80282d
    ctx->pc = 0x155bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155bd4: 0x8ca20004
    ctx->pc = 0x155bd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x155bd8: 0x8ca4000c
    ctx->pc = 0x155bd8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x155bdc: 0x8ca30000
    ctx->pc = 0x155bdcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x155be0: 0x24420001
    ctx->pc = 0x155be0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x155be4: 0x24840001
    ctx->pc = 0x155be4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x155be8: 0xaca20004
    ctx->pc = 0x155be8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x155bec: 0x24630010
    ctx->pc = 0x155becu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
    // 0x155bf0: 0xa31821
    ctx->pc = 0x155bf0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x155bf4: 0x14830003
    ctx->pc = 0x155BF4u;
    {
        const bool branch_taken_0x155bf4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x155BF8u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
        if (branch_taken_0x155bf4) {
            ctx->pc = 0x155C04u;
            goto label_155c04;
        }
    }
    ctx->pc = 0x155BFCu;
    // 0x155bfc: 0x24a20010
    ctx->pc = 0x155bfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 16));
    // 0x155c00: 0xaca2000c
    ctx->pc = 0x155c00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_155c04:
    // 0x155c04: 0x3e00008
    ctx->pc = 0x155C04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155C04u: goto label_155c04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x155C0Cu;
}

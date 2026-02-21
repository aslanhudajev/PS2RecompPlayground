#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: QueuePeekReadDone
// Address: 0x10ee10 - 0x10ee4c
void QueuePeekReadDone_0x10ee10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10ee10u;

    // 0x10ee10: 0x80282d
    ctx->pc = 0x10ee10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ee14: 0x8ca20004
    ctx->pc = 0x10ee14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x10ee18: 0x8ca40008
    ctx->pc = 0x10ee18u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x10ee1c: 0x8ca30000
    ctx->pc = 0x10ee1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10ee20: 0x2442ffff
    ctx->pc = 0x10ee20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10ee24: 0x24840001
    ctx->pc = 0x10ee24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x10ee28: 0xaca20004
    ctx->pc = 0x10ee28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x10ee2c: 0x24630010
    ctx->pc = 0x10ee2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
    // 0x10ee30: 0xa31821
    ctx->pc = 0x10ee30u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x10ee34: 0x14830003
    ctx->pc = 0x10EE34u;
    {
        const bool branch_taken_0x10ee34 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x10EE38u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
        if (branch_taken_0x10ee34) {
            ctx->pc = 0x10EE44u;
            goto label_10ee44;
        }
    }
    ctx->pc = 0x10EE3Cu;
    // 0x10ee3c: 0x24a20010
    ctx->pc = 0x10ee3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 16));
    // 0x10ee40: 0xaca20008
    ctx->pc = 0x10ee40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_10ee44:
    // 0x10ee44: 0x3e00008
    ctx->pc = 0x10EE44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10EE44u: goto label_10ee44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10EE4Cu;
}

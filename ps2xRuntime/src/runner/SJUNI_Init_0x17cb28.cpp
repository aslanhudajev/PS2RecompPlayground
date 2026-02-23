#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJUNI_Init
// Address: 0x17cb28 - 0x17cb64
void SJUNI_Init_0x17cb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJUNI_Init");
    ctx->pc = 0x17cb28u;

    // 0x17cb28: 0x27bdfff0
    ctx->pc = 0x17cb28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17cb2c: 0x8f828304
    ctx->pc = 0x17cb2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935300)));
    // 0x17cb30: 0x14400007
    ctx->pc = 0x17CB30u;
    {
        const bool branch_taken_0x17cb30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17CB34u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x17cb30) {
            ctx->pc = 0x17CB50u;
            goto label_17cb50;
        }
    }
    ctx->pc = 0x17CB38u;
    // 0x17cb38: 0x3c040024
    ctx->pc = 0x17cb38u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x17cb3c: 0x282d
    ctx->pc = 0x17cb3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cb40: 0x2484fd60
    ctx->pc = 0x17cb40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966624));
    // 0x17cb44: 0xc050cfe
    ctx->pc = 0x17CB44u;
    SET_GPR_U32(ctx, 31, 0x17CB4Cu);
    ctx->pc = 0x17CB48u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3072));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CB4Cu; }
        else if (ctx->pc != 0x17CB4Cu) { ctx->pc = 0x17CB4Cu; }
    }
    if (ctx->pc != 0x17CB4Cu) { return; }
    ctx->pc = 0x17CB4Cu;
    // 0x17cb4c: 0x8f828304
    ctx->pc = 0x17cb4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935300)));
label_17cb50:
    // 0x17cb50: 0x24420001
    ctx->pc = 0x17cb50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x17cb54: 0xdfbf0000
    ctx->pc = 0x17cb54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17cb58: 0xaf828304
    ctx->pc = 0x17cb58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935300), GPR_U32(ctx, 2));
    // 0x17cb5c: 0x3e00008
    ctx->pc = 0x17CB5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CB60u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17CB50u: goto label_17cb50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17CB64u;
}

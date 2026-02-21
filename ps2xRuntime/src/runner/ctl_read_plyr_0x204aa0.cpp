#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ctl_read_plyr
// Address: 0x204aa0 - 0x204ad8
void ctl_read_plyr_0x204aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x204aa0u;

    // 0x204aa0: 0x3c03003c
    ctx->pc = 0x204aa0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x204aa4: 0x2463b2c0
    ctx->pc = 0x204aa4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294947520));
    // 0x204aa8: 0x42080
    ctx->pc = 0x204aa8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x204aac: 0x831821
    ctx->pc = 0x204aacu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x204ab0: 0x51027
    ctx->pc = 0x204ab0u;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x204ab4: 0x8c630000
    ctx->pc = 0x204ab4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x204ab8: 0x431024
    ctx->pc = 0x204ab8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x204abc: 0x3c03003c
    ctx->pc = 0x204abcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x204ac0: 0x2463b320
    ctx->pc = 0x204ac0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294947616));
    // 0x204ac4: 0x832021
    ctx->pc = 0x204ac4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x204ac8: 0x8c830000
    ctx->pc = 0x204ac8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x204acc: 0xa32824
    ctx->pc = 0x204accu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x204ad0: 0x3e00008
    ctx->pc = 0x204AD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204AD4u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x204AD8u;
}

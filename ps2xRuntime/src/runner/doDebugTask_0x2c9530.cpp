#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: doDebugTask
// Address: 0x2c9530 - 0x2c9560
void doDebugTask_0x2c9530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c9530u;

    // 0x2c9530: 0x102d
    ctx->pc = 0x2c9530u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9534: 0x0
    ctx->pc = 0x2c9534u;
    // NOP
label_2c9538:
    // 0x2c9538: 0x0
    ctx->pc = 0x2c9538u;
    // NOP
    // 0x2c953c: 0x0
    ctx->pc = 0x2c953cu;
    // NOP
    // 0x2c9540: 0x0
    ctx->pc = 0x2c9540u;
    // NOP
    // 0x2c9544: 0x0
    ctx->pc = 0x2c9544u;
    // NOP
    // 0x2c9548: 0x0
    ctx->pc = 0x2c9548u;
    // NOP
    // 0x2c954c: 0x1440fffa
    ctx->pc = 0x2C954Cu;
    {
        const bool branch_taken_0x2c954c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c954c) {
            ctx->pc = 0x2C9538u;
            goto label_2c9538;
        }
    }
    ctx->pc = 0x2C9554u;
    // 0x2c9554: 0x3c02003a
    ctx->pc = 0x2c9554u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2c9558: 0x3e00008
    ctx->pc = 0x2C9558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C955Cu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945332), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C9538u: goto label_2c9538;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C9560u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: reset_timer_funcFYB_extern
// Address: 0x2d2a50 - 0x2d2a84
void reset_timer_funcFYB_extern_0x2d2a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d2a50u;

    // 0x2d2a50: 0x3c02003a
    ctx->pc = 0x2d2a50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d2a54: 0x8c422048
    ctx->pc = 0x2d2a54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8264)));
    // 0x2d2a58: 0x10400008
    ctx->pc = 0x2D2A58u;
    {
        const bool branch_taken_0x2d2a58 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D2A5Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2d2a58) {
            ctx->pc = 0x2D2A7Cu;
            goto label_2d2a7c;
        }
    }
    ctx->pc = 0x2D2A60u;
    // 0x2d2a60: 0x8c4321d0
    ctx->pc = 0x2d2a60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x2d2a64: 0x41100
    ctx->pc = 0x2d2a64u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 4));
    // 0x2d2a68: 0x431021
    ctx->pc = 0x2d2a68u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d2a6c: 0x8c430000
    ctx->pc = 0x2d2a6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d2a70: 0xac43000c
    ctx->pc = 0x2d2a70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x2d2a74: 0xac400000
    ctx->pc = 0x2d2a74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2d2a78: 0xac400004
    ctx->pc = 0x2d2a78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2d2a7c:
    // 0x2d2a7c: 0x3e00008
    ctx->pc = 0x2D2A7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D2A7Cu: goto label_2d2a7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D2A84u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: reset_timer_funcFYB
// Address: 0x2d2a18 - 0x2d2a4c
void reset_timer_funcFYB_0x2d2a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d2a18u;

    // 0x2d2a18: 0x3c02003a
    ctx->pc = 0x2d2a18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d2a1c: 0x8c422048
    ctx->pc = 0x2d2a1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8264)));
    // 0x2d2a20: 0x10400008
    ctx->pc = 0x2D2A20u;
    {
        const bool branch_taken_0x2d2a20 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D2A24u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2d2a20) {
            ctx->pc = 0x2D2A44u;
            goto label_2d2a44;
        }
    }
    ctx->pc = 0x2D2A28u;
    // 0x2d2a28: 0x24422050
    ctx->pc = 0x2d2a28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8272));
    // 0x2d2a2c: 0x41900
    ctx->pc = 0x2d2a2cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x2d2a30: 0x621821
    ctx->pc = 0x2d2a30u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d2a34: 0x8c620000
    ctx->pc = 0x2d2a34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d2a38: 0xac62000c
    ctx->pc = 0x2d2a38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x2d2a3c: 0xac600000
    ctx->pc = 0x2d2a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2d2a40: 0xac600004
    ctx->pc = 0x2d2a40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2d2a44:
    // 0x2d2a44: 0x3e00008
    ctx->pc = 0x2D2A44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D2A44u: goto label_2d2a44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D2A4Cu;
}

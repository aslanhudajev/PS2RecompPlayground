#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _Bfree
// Address: 0x3020c8 - 0x3020f4
void ps2__Bfree_0x3020c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3020c8u;

    // 0x3020c8: 0x10a00008
    ctx->pc = 0x3020C8u;
    {
        const bool branch_taken_0x3020c8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x3020c8) {
            ctx->pc = 0x3020ECu;
            goto label_3020ec;
        }
    }
    ctx->pc = 0x3020D0u;
    // 0x3020d0: 0x8ca20004
    ctx->pc = 0x3020d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3020d4: 0x8c84004c
    ctx->pc = 0x3020d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x3020d8: 0x21080
    ctx->pc = 0x3020d8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x3020dc: 0x441021
    ctx->pc = 0x3020dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3020e0: 0x8c430000
    ctx->pc = 0x3020e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3020e4: 0xaca30000
    ctx->pc = 0x3020e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x3020e8: 0xac450000
    ctx->pc = 0x3020e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_3020ec:
    // 0x3020ec: 0x3e00008
    ctx->pc = 0x3020ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3020ECu: goto label_3020ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3020F4u;
}

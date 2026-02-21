#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _Bfree
// Address: 0x12fed0 - 0x12fefc
void ps2__Bfree_0x12fed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12fed0u;

    // 0x12fed0: 0x10a00008
    ctx->pc = 0x12FED0u;
    {
        const bool branch_taken_0x12fed0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x12fed0) {
            ctx->pc = 0x12FEF4u;
            goto label_12fef4;
        }
    }
    ctx->pc = 0x12FED8u;
    // 0x12fed8: 0x8ca20004
    ctx->pc = 0x12fed8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x12fedc: 0x8c84004c
    ctx->pc = 0x12fedcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x12fee0: 0x21080
    ctx->pc = 0x12fee0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x12fee4: 0x441021
    ctx->pc = 0x12fee4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x12fee8: 0x8c430000
    ctx->pc = 0x12fee8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12feec: 0xaca30000
    ctx->pc = 0x12feecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x12fef0: 0xac450000
    ctx->pc = 0x12fef0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_12fef4:
    // 0x12fef4: 0x3e00008
    ctx->pc = 0x12FEF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12FEF4u: goto label_12fef4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12FEFCu;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: wait_vb
// Address: 0x2d4870 - 0x2d48a8
void wait_vb_0x2d4870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d4870u;

    // 0x2d4870: 0x3c02003a
    ctx->pc = 0x2d4870u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d4874: 0x8c4322f8
    ctx->pc = 0x2d4874u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8952)));
    // 0x2d4878: 0x40282d
    ctx->pc = 0x2d4878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d487c: 0x642021
    ctx->pc = 0x2d487cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2d4880:
    // 0x2d4880: 0x8ca222f8
    ctx->pc = 0x2d4880u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 8952)));
    // 0x2d4884: 0x44102b
    ctx->pc = 0x2d4884u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d4888: 0x10400005
    ctx->pc = 0x2D4888u;
    {
        const bool branch_taken_0x2d4888 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d4888) {
            ctx->pc = 0x2D48A0u;
            goto label_2d48a0;
        }
    }
    ctx->pc = 0x2D4890u;
    // 0x2d4890: 0x8ca222f8
    ctx->pc = 0x2d4890u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 8952)));
    // 0x2d4894: 0x43102b
    ctx->pc = 0x2d4894u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d4898: 0x1040fff9
    ctx->pc = 0x2D4898u;
    {
        const bool branch_taken_0x2d4898 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d4898) {
            ctx->pc = 0x2D4880u;
            goto label_2d4880;
        }
    }
    ctx->pc = 0x2D48A0u;
label_2d48a0:
    // 0x2d48a0: 0x3e00008
    ctx->pc = 0x2D48A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D4880u: goto label_2d4880;
            case 0x2D48A0u: goto label_2d48a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D48A8u;
}

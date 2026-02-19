#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBSetFrameMode
// Address: 0x2a8de0 - 0x2a8e10
void MBSetFrameMode_0x2a8de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a8de0u;

    // 0x2a8de0: 0x3c020036
    ctx->pc = 0x2a8de0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a8de4: 0x8c43dee0
    ctx->pc = 0x2a8de4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2a8de8: 0x2482fffd
    ctx->pc = 0x2a8de8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967293));
    // 0x2a8dec: 0x2c420004
    ctx->pc = 0x2a8decu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 4));
    // 0x2a8df0: 0x50400004
    ctx->pc = 0x2A8DF0u;
    {
        const bool branch_taken_0x2a8df0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a8df0) {
            ctx->pc = 0x2A8DF4u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->pc = 0x2A8E04u;
            goto label_2a8e04;
        }
    }
    ctx->pc = 0x2A8DF8u;
    // 0x2a8df8: 0x8c620010
    ctx->pc = 0x2a8df8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a8dfc: 0x3e00008
    ctx->pc = 0x2A8DFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8E00u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A8E04u: goto label_2a8e04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A8E04u;
label_2a8e04:
    // 0x2a8e04: 0x8c620018
    ctx->pc = 0x2a8e04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2a8e08: 0x3e00008
    ctx->pc = 0x2A8E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8E0Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A8E04u: goto label_2a8e04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A8E10u;
}

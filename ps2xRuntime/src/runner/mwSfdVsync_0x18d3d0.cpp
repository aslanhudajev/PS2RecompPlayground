#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwSfdVsync
// Address: 0x18d3d0 - 0x18d410
void mwSfdVsync_0x18d3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwSfdVsync");


    ctx->pc = 0x18d3d0u;

    // 0x18d3d0: 0x3c060024
    ctx->pc = 0x18d3d0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
    // 0x18d3d4: 0x3c070024
    ctx->pc = 0x18d3d4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)36 << 16));
    // 0x18d3d8: 0x8cc328c0
    ctx->pc = 0x18d3d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 10432)));
    // 0x18d3dc: 0x3c040024
    ctx->pc = 0x18d3dcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x18d3e0: 0x8ce23b60
    ctx->pc = 0x18d3e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 15200)));
    // 0x18d3e4: 0x24080001
    ctx->pc = 0x18d3e4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d3e8: 0x24630001
    ctx->pc = 0x18d3e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x18d3ec: 0x8c8528bc
    ctx->pc = 0x18d3ecu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 10428)));
    // 0x18d3f0: 0x24420001
    ctx->pc = 0x18d3f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x18d3f4: 0xacc328c0
    ctx->pc = 0x18d3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 10432), GPR_U32(ctx, 3));
    // 0x18d3f8: 0x14a80003
    ctx->pc = 0x18D3F8u;
    {
        const bool branch_taken_0x18d3f8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 8));
        ctx->pc = 0x18D3FCu;
        WRITE32(ADD32(GPR_U32(ctx, 7), 15200), GPR_U32(ctx, 2));
        if (branch_taken_0x18d3f8) {
            ctx->pc = 0x18D408u;
            goto label_18d408;
        }
    }
    ctx->pc = 0x18D400u;
    // 0x18d400: 0x8066aca
    ctx->pc = 0x18D400u;
    ctx->pc = 0x19AB28u;
    SFD_VbIn_0x19ab28(rdram, ctx, runtime); return;
    ctx->pc = 0x18D408u;
label_18d408:
    // 0x18d408: 0x3e00008
    ctx->pc = 0x18D408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D408u: goto label_18d408;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18D410u;
}

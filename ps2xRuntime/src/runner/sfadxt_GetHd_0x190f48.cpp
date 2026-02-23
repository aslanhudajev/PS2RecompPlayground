#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfadxt_GetHd
// Address: 0x190f48 - 0x190f70
void sfadxt_GetHd_0x190f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfadxt_GetHd");


    ctx->pc = 0x190f48u;

    // 0x190f48: 0x8c836758
    ctx->pc = 0x190f48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 26456)));
    // 0x190f4c: 0x10600004
    ctx->pc = 0x190F4Cu;
    {
        const bool branch_taken_0x190f4c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x190F50u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 15904));
        if (branch_taken_0x190f4c) {
            ctx->pc = 0x190F60u;
            goto label_190f60;
        }
    }
    ctx->pc = 0x190F54u;
    // 0x190f54: 0x8c820040
    ctx->pc = 0x190f54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x190f58: 0x18400003
    ctx->pc = 0x190F58u;
    {
        const bool branch_taken_0x190f58 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x190f58) {
            ctx->pc = 0x190F68u;
            goto label_190f68;
        }
    }
    ctx->pc = 0x190F60u;
label_190f60:
    // 0x190f60: 0x3e00008
    ctx->pc = 0x190F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190F64u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x190F60u: goto label_190f60;
            case 0x190F68u: goto label_190f68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x190F68u;
label_190f68:
    // 0x190f68: 0x3e00008
    ctx->pc = 0x190F68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190F6Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 3324));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x190F60u: goto label_190f60;
            case 0x190F68u: goto label_190f68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x190F70u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryExec_STAT_02__13ClVtxMgrClassFv
// Address: 0x1d30f0 - 0x1d3120
void entryExec_STAT_02__13ClVtxMgrClassFv_0x1d30f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryExec_STAT_02__13ClVtxMgrClassFv");


    ctx->pc = 0x1d30f0u;

    // 0x1d30f0: 0x8c840000
    ctx->pc = 0x1d30f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d30f4: 0x3c020050
    ctx->pc = 0x1d30f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1d30f8: 0x2443fb10
    ctx->pc = 0x1d30f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294966032));
    // 0x1d30fc: 0x24060003
    ctx->pc = 0x1d30fcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d3100: 0x2402ffff
    ctx->pc = 0x1d3100u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d3104: 0x8c850008
    ctx->pc = 0x1d3104u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1d3108: 0x52040
    ctx->pc = 0x1d3108u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1d310c: 0x852021
    ctx->pc = 0x1d310cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d3110: 0x42080
    ctx->pc = 0x1d3110u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d3114: 0x641821
    ctx->pc = 0x1d3114u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d3118: 0x3e00008
    ctx->pc = 0x1D3118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D311Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D3120u;
}

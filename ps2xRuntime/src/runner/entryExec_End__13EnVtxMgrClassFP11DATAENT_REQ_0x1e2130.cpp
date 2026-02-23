#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryExec_End__13EnVtxMgrClassFP11DATAENT_REQ
// Address: 0x1e2130 - 0x1e2138
void entryExec_End__13EnVtxMgrClassFP11DATAENT_REQ_0x1e2130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryExec_End__13EnVtxMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x1e2130u;

    // 0x1e2130: 0x3e00008
    ctx->pc = 0x1E2130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2134u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E2138u;
}

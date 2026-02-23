#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwSfdExecSvrHndl
// Address: 0x18d310 - 0x18d32c
void mwSfdExecSvrHndl_0x18d310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwSfdExecSvrHndl");


    ctx->pc = 0x18d310u;

    // 0x18d310: 0x27bdfff0
    ctx->pc = 0x18d310u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18d314: 0xffbf0000
    ctx->pc = 0x18d314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18d318: 0xc0634cc
    ctx->pc = 0x18D318u;
    SET_GPR_U32(ctx, 31, 0x18D320u);
    ctx->pc = 0x18D330u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFD_ExecSvrHndl_0x18d330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D320u; }
        else if (ctx->pc != 0x18D320u) { ctx->pc = 0x18D320u; }
    }
    if (ctx->pc != 0x18D320u) { return; }
    ctx->pc = 0x18D320u;
    // 0x18d320: 0xdfbf0000
    ctx->pc = 0x18d320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d324: 0x3e00008
    ctx->pc = 0x18D324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D328u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18D32Cu;
}

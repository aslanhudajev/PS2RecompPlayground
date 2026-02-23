#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSFD_ExecDecServer
// Address: 0x18d2e8 - 0x18d304
void MWSFD_ExecDecServer_0x18d2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSFD_ExecDecServer");


    ctx->pc = 0x18d2e8u;

    // 0x18d2e8: 0x27bdfff0
    ctx->pc = 0x18d2e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18d2ec: 0xffbf0000
    ctx->pc = 0x18d2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18d2f0: 0xc063492
    ctx->pc = 0x18D2F0u;
    SET_GPR_U32(ctx, 31, 0x18D2F8u);
    ctx->pc = 0x18D248u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwSfdExecDecServer_0x18d248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D2F8u; }
        else if (ctx->pc != 0x18D2F8u) { ctx->pc = 0x18D2F8u; }
    }
    if (ctx->pc != 0x18D2F8u) { return; }
    ctx->pc = 0x18D2F8u;
    // 0x18d2f8: 0xdfbf0000
    ctx->pc = 0x18d2f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d2fc: 0x3e00008
    ctx->pc = 0x18D2FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D300u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18D304u;
}

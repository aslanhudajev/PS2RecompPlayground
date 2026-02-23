#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMPS_ExecServer
// Address: 0x193ed0 - 0x193eec
void SFMPS_ExecServer_0x193ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMPS_ExecServer");


    ctx->pc = 0x193ed0u;

    // 0x193ed0: 0x27bdfff0
    ctx->pc = 0x193ed0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x193ed4: 0xffbf0000
    ctx->pc = 0x193ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193ed8: 0xc064fbc
    ctx->pc = 0x193ED8u;
    SET_GPR_U32(ctx, 31, 0x193EE0u);
    ctx->pc = 0x193EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmps_ExecServerSub_0x193ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193EE0u; }
        else if (ctx->pc != 0x193EE0u) { ctx->pc = 0x193EE0u; }
    }
    if (ctx->pc != 0x193EE0u) { return; }
    ctx->pc = 0x193EE0u;
    // 0x193ee0: 0xdfbf0000
    ctx->pc = 0x193ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193ee4: 0x3e00008
    ctx->pc = 0x193EE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193EE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x193EECu;
}

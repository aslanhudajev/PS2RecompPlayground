#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSFLSC_GetStmRdSct
// Address: 0x18e750 - 0x18e76c
void MWSFLSC_GetStmRdSct_0x18e750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSFLSC_GetStmRdSct");


    ctx->pc = 0x18e750u;

    // 0x18e750: 0x27bdfff0
    ctx->pc = 0x18e750u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18e754: 0xffbf0000
    ctx->pc = 0x18e754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18e758: 0xc05e95a
    ctx->pc = 0x18E758u;
    SET_GPR_U32(ctx, 31, 0x18E760u);
    ctx->pc = 0x18E75Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 128)));
    ctx->pc = 0x17A568u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_GetStmRdSct_0x17a568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E760u; }
        else if (ctx->pc != 0x18E760u) { ctx->pc = 0x18E760u; }
    }
    if (ctx->pc != 0x18E760u) { return; }
    ctx->pc = 0x18E760u;
    // 0x18e760: 0xdfbf0000
    ctx->pc = 0x18e760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e764: 0x3e00008
    ctx->pc = 0x18E764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E768u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18E76Cu;
}

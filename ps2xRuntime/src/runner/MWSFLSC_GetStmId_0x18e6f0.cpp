#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSFLSC_GetStmId
// Address: 0x18e6f0 - 0x18e70c
void MWSFLSC_GetStmId_0x18e6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSFLSC_GetStmId");


    ctx->pc = 0x18e6f0u;

    // 0x18e6f0: 0x27bdfff0
    ctx->pc = 0x18e6f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18e6f4: 0xffbf0000
    ctx->pc = 0x18e6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18e6f8: 0xc05e8f2
    ctx->pc = 0x18E6F8u;
    SET_GPR_U32(ctx, 31, 0x18E700u);
    ctx->pc = 0x18E6FCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 128)));
    ctx->pc = 0x17A3C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_GetStmId_0x17a3c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E700u; }
        else if (ctx->pc != 0x18E700u) { ctx->pc = 0x18E700u; }
    }
    if (ctx->pc != 0x18E700u) { return; }
    ctx->pc = 0x18E700u;
    // 0x18e700: 0xdfbf0000
    ctx->pc = 0x18e700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e704: 0x3e00008
    ctx->pc = 0x18E704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E708u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18E70Cu;
}

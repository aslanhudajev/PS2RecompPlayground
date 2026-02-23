#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSFLSC_GetStat
// Address: 0x18e6d0 - 0x18e6ec
void MWSFLSC_GetStat_0x18e6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSFLSC_GetStat");


    ctx->pc = 0x18e6d0u;

    // 0x18e6d0: 0x27bdfff0
    ctx->pc = 0x18e6d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18e6d4: 0xffbf0000
    ctx->pc = 0x18e6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18e6d8: 0xc05e8da
    ctx->pc = 0x18E6D8u;
    SET_GPR_U32(ctx, 31, 0x18E6E0u);
    ctx->pc = 0x18E6DCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 128)));
    ctx->pc = 0x17A368u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_GetStat_0x17a368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E6E0u; }
        else if (ctx->pc != 0x18E6E0u) { ctx->pc = 0x18E6E0u; }
    }
    if (ctx->pc != 0x18E6E0u) { return; }
    ctx->pc = 0x18E6E0u;
    // 0x18e6e0: 0xdfbf0000
    ctx->pc = 0x18e6e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e6e4: 0x3e00008
    ctx->pc = 0x18E6E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E6E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18E6ECu;
}

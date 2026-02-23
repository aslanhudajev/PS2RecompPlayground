#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSFLSC_GetStmStat
// Address: 0x18e730 - 0x18e74c
void MWSFLSC_GetStmStat_0x18e730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSFLSC_GetStmStat");


    ctx->pc = 0x18e730u;

    // 0x18e730: 0x27bdfff0
    ctx->pc = 0x18e730u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18e734: 0xffbf0000
    ctx->pc = 0x18e734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18e738: 0xc05e938
    ctx->pc = 0x18E738u;
    SET_GPR_U32(ctx, 31, 0x18E740u);
    ctx->pc = 0x18E73Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 128)));
    ctx->pc = 0x17A4E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_GetStmStat_0x17a4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E740u; }
        else if (ctx->pc != 0x18E740u) { ctx->pc = 0x18E740u; }
    }
    if (ctx->pc != 0x18E740u) { return; }
    ctx->pc = 0x18E740u;
    // 0x18e740: 0xdfbf0000
    ctx->pc = 0x18e740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e744: 0x3e00008
    ctx->pc = 0x18E744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E748u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18E74Cu;
}

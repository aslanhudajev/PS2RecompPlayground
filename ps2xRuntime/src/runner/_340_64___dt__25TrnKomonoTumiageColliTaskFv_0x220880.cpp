#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: @340@64@__dt__25TrnKomonoTumiageColliTaskFv
// Address: 0x220880 - 0x220890
void _340_64___dt__25TrnKomonoTumiageColliTaskFv_0x220880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_340_64___dt__25TrnKomonoTumiageColliTaskFv");


    ctx->pc = 0x220880u;

    // 0x220880: 0x8c990040
    ctx->pc = 0x220880u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x220884: 0x2484feac
    ctx->pc = 0x220884u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966956));
    // 0x220888: 0x80881fc
    ctx->pc = 0x220888u;
    ctx->pc = 0x22088Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    ctx->pc = 0x2207F0u;
    ps2___dt__25TrnKomonoTumiageColliTaskFv_0x2207f0(rdram, ctx, runtime); return;
    ctx->pc = 0x220890u;
}

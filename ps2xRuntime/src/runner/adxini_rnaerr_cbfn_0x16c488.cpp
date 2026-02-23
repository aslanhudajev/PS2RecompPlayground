#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxini_rnaerr_cbfn
// Address: 0x16c488 - 0x16c490
void adxini_rnaerr_cbfn_0x16c488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxini_rnaerr_cbfn");


    ctx->pc = 0x16c488u;

    // 0x16c488: 0x805a854
    ctx->pc = 0x16C488u;
    ctx->pc = 0x16C48Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16A150u;
    ADXERR_CallErrFunc1_0x16a150(rdram, ctx, runtime); return;
    ctx->pc = 0x16C490u;
}

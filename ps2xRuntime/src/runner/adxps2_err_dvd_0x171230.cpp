#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxps2_err_dvd
// Address: 0x171230 - 0x171238
void adxps2_err_dvd_0x171230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxps2_err_dvd");


    ctx->pc = 0x171230u;

    // 0x171230: 0x805a854
    ctx->pc = 0x171230u;
    ctx->pc = 0x171234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16A150u;
    ADXERR_CallErrFunc1_0x16a150(rdram, ctx, runtime); return;
    ctx->pc = 0x171238u;
}

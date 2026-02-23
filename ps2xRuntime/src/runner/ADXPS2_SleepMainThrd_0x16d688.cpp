#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXPS2_SleepMainThrd
// Address: 0x16d688 - 0x16d690
void ADXPS2_SleepMainThrd_0x16d688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXPS2_SleepMainThrd");


    ctx->pc = 0x16d688u;

    // 0x16d688: 0x805b33e
    ctx->pc = 0x16D688u;
    ctx->pc = 0x16CCF8u;
    adxm_SleepThread_0x16ccf8(rdram, ctx, runtime); return;
    ctx->pc = 0x16D690u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXPS2_WaitVsync
// Address: 0x16d6b0 - 0x16d6b8
void ADXPS2_WaitVsync_0x16d6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXPS2_WaitVsync");


    ctx->pc = 0x16d6b0u;

    // 0x16d6b0: 0x805b5a4
    ctx->pc = 0x16D6B0u;
    ctx->pc = 0x16D690u;
    ADXM_WaitVsync_0x16d690(rdram, ctx, runtime); return;
    ctx->pc = 0x16D6B8u;
}

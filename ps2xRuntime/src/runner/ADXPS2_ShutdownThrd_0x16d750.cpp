#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXPS2_ShutdownThrd
// Address: 0x16d750 - 0x16d758
void ADXPS2_ShutdownThrd_0x16d750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXPS2_ShutdownThrd");


    ctx->pc = 0x16d750u;

    // 0x16d750: 0x805b4a2
    ctx->pc = 0x16D750u;
    ctx->pc = 0x16D288u;
    ADXM_ShutdownThrd_0x16d288(rdram, ctx, runtime); return;
    ctx->pc = 0x16D758u;
}

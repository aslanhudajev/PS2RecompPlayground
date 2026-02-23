#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXPS2_Lock
// Address: 0x16d778 - 0x16d780
void ADXPS2_Lock_0x16d778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXPS2_Lock");


    ctx->pc = 0x16d778u;

    // 0x16d778: 0x805f6f6
    ctx->pc = 0x16D778u;
    ctx->pc = 0x17DBD8u;
    SVM_Lock_0x17dbd8(rdram, ctx, runtime); return;
    ctx->pc = 0x16D780u;
}

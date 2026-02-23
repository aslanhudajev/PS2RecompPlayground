#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxm_SleepThread
// Address: 0x16ccf8 - 0x16cd00
void adxm_SleepThread_0x16ccf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxm_SleepThread");


    ctx->pc = 0x16ccf8u;

    // 0x16ccf8: 0x8055200
    ctx->pc = 0x16CCF8u;
    ctx->pc = 0x154800u;
    SleepThread_0x154800(rdram, ctx, runtime); return;
    ctx->pc = 0x16CD00u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sflib_InitBaseLib
// Address: 0x193ca0 - 0x193ca8
void sflib_InitBaseLib_0x193ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sflib_InitBaseLib");


    ctx->pc = 0x193ca0u;

    // 0x193ca0: 0x805f10c
    ctx->pc = 0x193CA0u;
    ctx->pc = 0x17C430u;
    SJRBF_Init_0x17c430(rdram, ctx, runtime); return;
    ctx->pc = 0x193CA8u;
}

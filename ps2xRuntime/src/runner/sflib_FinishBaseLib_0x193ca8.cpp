#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sflib_FinishBaseLib
// Address: 0x193ca8 - 0x193cb0
void sflib_FinishBaseLib_0x193ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sflib_FinishBaseLib");


    ctx->pc = 0x193ca8u;

    // 0x193ca8: 0x805f11c
    ctx->pc = 0x193CA8u;
    ctx->pc = 0x17C470u;
    SJRBF_Finish_0x17c470(rdram, ctx, runtime); return;
    ctx->pc = 0x193CB0u;
}

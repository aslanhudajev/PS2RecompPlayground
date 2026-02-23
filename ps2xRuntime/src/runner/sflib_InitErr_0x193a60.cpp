#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sflib_InitErr
// Address: 0x193a60 - 0x193a68
void sflib_InitErr_0x193a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sflib_InitErr");


    ctx->pc = 0x193a60u;

    // 0x193a60: 0x8064e9a
    ctx->pc = 0x193A60u;
    ctx->pc = 0x193A68u;
    SFLIB_InitErrInf_0x193a68(rdram, ctx, runtime); return;
    ctx->pc = 0x193A68u;
}

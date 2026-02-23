#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpslib_InitErr
// Address: 0x182600 - 0x182608
void mpslib_InitErr_0x182600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpslib_InitErr");


    ctx->pc = 0x182600u;

    // 0x182600: 0x8060982
    ctx->pc = 0x182600u;
    ctx->pc = 0x182608u;
    MPSLIB_InitErrInf_0x182608(rdram, ctx, runtime); return;
    ctx->pc = 0x182608u;
}

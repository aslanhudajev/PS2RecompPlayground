#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwl_callErrCb
// Address: 0x18f7f8 - 0x18f800
void mwl_callErrCb_0x18f7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwl_callErrCb");


    ctx->pc = 0x18f7f8u;

    // 0x18f7f8: 0x805f72c
    ctx->pc = 0x18F7F8u;
    ctx->pc = 0x17DCB0u;
    SVM_CallErr1_0x17dcb0(rdram, ctx, runtime); return;
    ctx->pc = 0x18F800u;
}

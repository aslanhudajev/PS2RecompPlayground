#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: htci_wait_io
// Address: 0x178868 - 0x178870
void htci_wait_io_0x178868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("htci_wait_io");


    ctx->pc = 0x178868u;

    // 0x178868: 0x805d82e
    ctx->pc = 0x178868u;
    ctx->pc = 0x1760B8u;
    SRD_WaitComplete_0x1760b8(rdram, ctx, runtime); return;
    ctx->pc = 0x178870u;
}

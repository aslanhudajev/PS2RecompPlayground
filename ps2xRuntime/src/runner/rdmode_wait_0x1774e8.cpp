#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: rdmode_wait
// Address: 0x1774e8 - 0x1774f0
void rdmode_wait_0x1774e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("rdmode_wait");


    ctx->pc = 0x1774e8u;

    // 0x1774e8: 0x805d8f4
    ctx->pc = 0x1774E8u;
    ctx->pc = 0x1763D0u;
    SRD_ExecServer_0x1763d0(rdram, ctx, runtime); return;
    ctx->pc = 0x1774F0u;
}

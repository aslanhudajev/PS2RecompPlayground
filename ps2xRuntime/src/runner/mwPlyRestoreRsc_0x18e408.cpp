#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlyRestoreRsc
// Address: 0x18e408 - 0x18e410
void mwPlyRestoreRsc_0x18e408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlyRestoreRsc");


    ctx->pc = 0x18e408u;

    // 0x18e408: 0x806387e
    ctx->pc = 0x18E408u;
    ctx->pc = 0x18E1F8u;
    MWRSC_RestoreRsc_0x18e1f8(rdram, ctx, runtime); return;
    ctx->pc = 0x18E410u;
}

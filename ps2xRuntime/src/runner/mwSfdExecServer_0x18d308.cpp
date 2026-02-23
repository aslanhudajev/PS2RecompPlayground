#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwSfdExecServer
// Address: 0x18d308 - 0x18d310
void mwSfdExecServer_0x18d308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwSfdExecServer");


    ctx->pc = 0x18d308u;

    // 0x18d308: 0x8063492
    ctx->pc = 0x18D308u;
    ctx->pc = 0x18D248u;
    mwSfdExecDecServer_0x18d248(rdram, ctx, runtime); return;
    ctx->pc = 0x18D310u;
}

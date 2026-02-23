#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSTM_ExecServer
// Address: 0x18f9e0 - 0x18f9e8
void MWSTM_ExecServer_0x18f9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSTM_ExecServer");


    ctx->pc = 0x18f9e0u;

    // 0x18f9e0: 0x3e00008
    ctx->pc = 0x18F9E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F9E8u;
}

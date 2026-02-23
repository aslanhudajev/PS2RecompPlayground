#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init1__14SysCfgMgrClassFv
// Address: 0x1d3650 - 0x1d3658
void init1__14SysCfgMgrClassFv_0x1d3650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init1__14SysCfgMgrClassFv");


    ctx->pc = 0x1d3650u;

    // 0x1d3650: 0x3e00008
    ctx->pc = 0x1D3650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D3658u;
}

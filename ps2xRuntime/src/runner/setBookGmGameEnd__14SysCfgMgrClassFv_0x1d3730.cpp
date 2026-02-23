#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setBookGmGameEnd__14SysCfgMgrClassFv
// Address: 0x1d3730 - 0x1d3738
void setBookGmGameEnd__14SysCfgMgrClassFv_0x1d3730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setBookGmGameEnd__14SysCfgMgrClassFv");


    ctx->pc = 0x1d3730u;

    // 0x1d3730: 0x3e00008
    ctx->pc = 0x1D3730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D3738u;
}

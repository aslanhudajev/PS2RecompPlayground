#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setBookPlGameEnd__14SysCfgMgrClassFi
// Address: 0x1d3760 - 0x1d3768
void setBookPlGameEnd__14SysCfgMgrClassFi_0x1d3760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setBookPlGameEnd__14SysCfgMgrClassFi");


    ctx->pc = 0x1d3760u;

    // 0x1d3760: 0x3e00008
    ctx->pc = 0x1D3760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D3768u;
}

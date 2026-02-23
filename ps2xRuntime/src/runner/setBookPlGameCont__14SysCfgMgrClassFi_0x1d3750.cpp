#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setBookPlGameCont__14SysCfgMgrClassFi
// Address: 0x1d3750 - 0x1d3758
void setBookPlGameCont__14SysCfgMgrClassFi_0x1d3750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setBookPlGameCont__14SysCfgMgrClassFi");


    ctx->pc = 0x1d3750u;

    // 0x1d3750: 0x3e00008
    ctx->pc = 0x1D3750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D3758u;
}

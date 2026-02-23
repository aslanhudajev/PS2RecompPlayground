#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setBookPlGameStart__14SysCfgMgrClassFi
// Address: 0x1d3740 - 0x1d3748
void setBookPlGameStart__14SysCfgMgrClassFi_0x1d3740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setBookPlGameStart__14SysCfgMgrClassFi");


    ctx->pc = 0x1d3740u;

    // 0x1d3740: 0x3e00008
    ctx->pc = 0x1D3740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D3748u;
}

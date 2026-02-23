#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SkyDisp__11SkyDispTaskFv
// Address: 0x202ad0 - 0x202ad8
void SkyDisp__11SkyDispTaskFv_0x202ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SkyDisp__11SkyDispTaskFv");


    ctx->pc = 0x202ad0u;

    // 0x202ad0: 0x3e00008
    ctx->pc = 0x202AD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x202AD8u;
}

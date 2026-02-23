#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_ConfigVsyncSvr
// Address: 0x16c480 - 0x16c488
void ADXT_ConfigVsyncSvr_0x16c480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_ConfigVsyncSvr");


    ctx->pc = 0x16c480u;

    // 0x16c480: 0x3e00008
    ctx->pc = 0x16C480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C484u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934812), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16C488u;
}

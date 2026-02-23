#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlDmaGetMFifoStat
// Address: 0x1a5560 - 0x1a5568
void nlDmaGetMFifoStat_0x1a5560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlDmaGetMFifoStat");


    ctx->pc = 0x1a5560u;

    // 0x1a5560: 0x3e00008
    ctx->pc = 0x1A5560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5564u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937012)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A5568u;
}

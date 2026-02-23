#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: htCiGetAccessName
// Address: 0x179df0 - 0x179dfc
void htCiGetAccessName_0x179df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("htCiGetAccessName");


    ctx->pc = 0x179df0u;

    // 0x179df0: 0x3c020024
    ctx->pc = 0x179df0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x179df4: 0x3e00008
    ctx->pc = 0x179DF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179DF8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944072));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x179DFCu;
}

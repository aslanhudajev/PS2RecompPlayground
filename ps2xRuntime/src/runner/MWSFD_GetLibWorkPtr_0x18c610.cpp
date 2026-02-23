#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSFD_GetLibWorkPtr
// Address: 0x18c610 - 0x18c61c
void MWSFD_GetLibWorkPtr_0x18c610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSFD_GetLibWorkPtr");
    ctx->pc = 0x18c610u;

    // 0x18c610: 0x3c020024
    ctx->pc = 0x18c610u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18c614: 0x3e00008
    ctx->pc = 0x18C614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C618u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10544));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18C61Cu;
}

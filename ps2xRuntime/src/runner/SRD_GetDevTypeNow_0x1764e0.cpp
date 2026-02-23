#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SRD_GetDevTypeNow
// Address: 0x1764e0 - 0x1764ec
void SRD_GetDevTypeNow_0x1764e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SRD_GetDevTypeNow");


    ctx->pc = 0x1764e0u;

    // 0x1764e0: 0x3c030024
    ctx->pc = 0x1764e0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x1764e4: 0x3e00008
    ctx->pc = 0x1764E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1764E8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294936432)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1764ECu;
}

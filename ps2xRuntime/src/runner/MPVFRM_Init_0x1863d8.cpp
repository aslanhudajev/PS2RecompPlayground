#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPVFRM_Init
// Address: 0x1863d8 - 0x1863e0
void MPVFRM_Init_0x1863d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPVFRM_Init");


    ctx->pc = 0x1863d8u;

    // 0x1863d8: 0x3e00008
    ctx->pc = 0x1863D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1863E0u;
}

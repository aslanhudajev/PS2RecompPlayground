#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXPD_GetNumBlk
// Address: 0x174068 - 0x174070
void ADXPD_GetNumBlk_0x174068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXPD_GetNumBlk");


    ctx->pc = 0x174068u;

    // 0x174068: 0x3e00008
    ctx->pc = 0x174068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17406Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x174070u;
}

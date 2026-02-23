#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSJD_GetTrapCnt
// Address: 0x16e738 - 0x16e740
void ADXSJD_GetTrapCnt_0x16e738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSJD_GetTrapCnt");


    ctx->pc = 0x16e738u;

    // 0x16e738: 0x3e00008
    ctx->pc = 0x16E738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E73Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 64)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E740u;
}

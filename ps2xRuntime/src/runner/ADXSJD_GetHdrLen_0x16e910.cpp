#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSJD_GetHdrLen
// Address: 0x16e910 - 0x16e918
void ADXSJD_GetHdrLen_0x16e910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSJD_GetHdrLen");


    ctx->pc = 0x16e910u;

    // 0x16e910: 0x3e00008
    ctx->pc = 0x16E910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E914u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 152)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E918u;
}

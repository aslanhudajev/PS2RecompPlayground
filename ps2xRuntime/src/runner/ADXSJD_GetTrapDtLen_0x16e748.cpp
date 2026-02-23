#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSJD_GetTrapDtLen
// Address: 0x16e748 - 0x16e750
void ADXSJD_GetTrapDtLen_0x16e748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSJD_GetTrapDtLen");


    ctx->pc = 0x16e748u;

    // 0x16e748: 0x3e00008
    ctx->pc = 0x16E748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E74Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 68)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E750u;
}

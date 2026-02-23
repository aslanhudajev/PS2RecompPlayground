#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSJD_GetDecNumSmpl
// Address: 0x16e6e8 - 0x16e6f0
void ADXSJD_GetDecNumSmpl_0x16e6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSJD_GetDecNumSmpl");


    ctx->pc = 0x16e6e8u;

    // 0x16e6e8: 0x3e00008
    ctx->pc = 0x16E6E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E6ECu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 44)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E6F0u;
}

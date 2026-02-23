#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSJD_GetDecDtLen
// Address: 0x16e6e0 - 0x16e6e8
void ADXSJD_GetDecDtLen_0x16e6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSJD_GetDecDtLen");


    ctx->pc = 0x16e6e0u;

    // 0x16e6e0: 0x3e00008
    ctx->pc = 0x16E6E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E6E4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E6E8u;
}

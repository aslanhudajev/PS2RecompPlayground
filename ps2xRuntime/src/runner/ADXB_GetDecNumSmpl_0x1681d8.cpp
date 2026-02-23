#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_GetDecNumSmpl
// Address: 0x1681d8 - 0x1681e0
void ADXB_GetDecNumSmpl_0x1681d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_GetDecNumSmpl");


    ctx->pc = 0x1681d8u;

    // 0x1681d8: 0x3e00008
    ctx->pc = 0x1681D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1681DCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 160)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1681E0u;
}

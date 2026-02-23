#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXAMP_GetExtractNumSmpl
// Address: 0x166740 - 0x166748
void ADXAMP_GetExtractNumSmpl_0x166740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXAMP_GetExtractNumSmpl");


    ctx->pc = 0x166740u;

    // 0x166740: 0x3e00008
    ctx->pc = 0x166740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166744u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x166748u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_GetLpInsNsmpl
// Address: 0x168088 - 0x168090
void ADXB_GetLpInsNsmpl_0x168088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_GetLpInsNsmpl");


    ctx->pc = 0x168088u;

    // 0x168088: 0x3e00008
    ctx->pc = 0x168088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16808Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168090u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_GetNumLoop
// Address: 0x168090 - 0x168098
void ADXB_GetNumLoop_0x168090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_GetNumLoop");


    ctx->pc = 0x168090u;

    // 0x168090: 0x3e00008
    ctx->pc = 0x168090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168094u;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168098u;
}

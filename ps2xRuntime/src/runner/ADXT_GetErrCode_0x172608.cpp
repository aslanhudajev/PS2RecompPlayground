#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_GetErrCode
// Address: 0x172608 - 0x172610
void ADXT_GetErrCode_0x172608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_GetErrCode");


    ctx->pc = 0x172608u;

    // 0x172608: 0x3e00008
    ctx->pc = 0x172608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17260Cu;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x172610u;
}

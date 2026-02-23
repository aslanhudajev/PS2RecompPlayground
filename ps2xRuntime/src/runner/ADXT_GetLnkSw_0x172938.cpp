#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_GetLnkSw
// Address: 0x172938 - 0x172940
void ADXT_GetLnkSw_0x172938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_GetLnkSw");


    ctx->pc = 0x172938u;

    // 0x172938: 0x3e00008
    ctx->pc = 0x172938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17293Cu;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 152)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x172940u;
}

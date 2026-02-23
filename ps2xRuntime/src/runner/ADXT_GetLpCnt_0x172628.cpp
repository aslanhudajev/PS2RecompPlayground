#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_GetLpCnt
// Address: 0x172628 - 0x172630
void ADXT_GetLpCnt_0x172628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_GetLpCnt");


    ctx->pc = 0x172628u;

    // 0x172628: 0x3e00008
    ctx->pc = 0x172628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17262Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 76)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x172630u;
}

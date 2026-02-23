#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_GetOutVol
// Address: 0x172338 - 0x172340
void ADXT_GetOutVol_0x172338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_GetOutVol");


    ctx->pc = 0x172338u;

    // 0x172338: 0x3e00008
    ctx->pc = 0x172338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17233Cu;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x172340u;
}

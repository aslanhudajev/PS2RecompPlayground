#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_IsReadyPlayStart
// Address: 0x172648 - 0x172650
void ADXT_IsReadyPlayStart_0x172648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_IsReadyPlayStart");


    ctx->pc = 0x172648u;

    // 0x172648: 0x3e00008
    ctx->pc = 0x172648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17264Cu;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 113)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x172650u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFADXT_SetOutVol
// Address: 0x18fad0 - 0x18fad8
void SFADXT_SetOutVol_0x18fad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFADXT_SetOutVol");


    ctx->pc = 0x18fad0u;

    // 0x18fad0: 0x805c8c8
    ctx->pc = 0x18FAD0u;
    ctx->pc = 0x18FAD4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 15904)));
    ctx->pc = 0x172320u;
    ADXT_SetOutVol_0x172320(rdram, ctx, runtime); return;
    ctx->pc = 0x18FAD8u;
}

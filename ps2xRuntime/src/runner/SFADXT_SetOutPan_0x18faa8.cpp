#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFADXT_SetOutPan
// Address: 0x18faa8 - 0x18fab0
void SFADXT_SetOutPan_0x18faa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFADXT_SetOutPan");


    ctx->pc = 0x18faa8u;

    // 0x18faa8: 0x805c8b8
    ctx->pc = 0x18FAA8u;
    ctx->pc = 0x18FAACu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 15904)));
    ctx->pc = 0x1722E0u;
    ADXT_SetOutPan_0x1722e0(rdram, ctx, runtime); return;
    ctx->pc = 0x18FAB0u;
}

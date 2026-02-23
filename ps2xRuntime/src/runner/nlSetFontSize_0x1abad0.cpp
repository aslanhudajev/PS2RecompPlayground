#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlSetFontSize
// Address: 0x1abad0 - 0x1abae0
void nlSetFontSize_0x1abad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlSetFontSize");


    ctx->pc = 0x1abad0u;

    // 0x1abad0: 0xaf848a7c
    ctx->pc = 0x1abad0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937212), GPR_U32(ctx, 4));
    // 0x1abad4: 0x8f848a58
    ctx->pc = 0x1abad4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937176)));
    // 0x1abad8: 0x806ae94
    ctx->pc = 0x1ABAD8u;
    ctx->pc = 0x1ABADCu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937208), GPR_U32(ctx, 5));
    ctx->pc = 0x1ABA50u;
    nlPrintMonitorMode_0x1aba50(rdram, ctx, runtime); return;
    ctx->pc = 0x1ABAE0u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_VsyncProc
// Address: 0x16c490 - 0x16c4a0
void ADXT_VsyncProc_0x16c490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_VsyncProc");


    ctx->pc = 0x16c490u;

    // 0x16c490: 0x8f828120
    ctx->pc = 0x16c490u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934816)));
    // 0x16c494: 0x24420001
    ctx->pc = 0x16c494u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x16c498: 0x805c958
    ctx->pc = 0x16C498u;
    ctx->pc = 0x16C49Cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934816), GPR_U32(ctx, 2));
    ctx->pc = 0x172560u;
    ADXT_ExecServer_0x172560(rdram, ctx, runtime); return;
    ctx->pc = 0x16C4A0u;
}

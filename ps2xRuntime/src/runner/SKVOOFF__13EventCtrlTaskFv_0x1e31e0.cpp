#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SKVOOFF__13EventCtrlTaskFv
// Address: 0x1e31e0 - 0x1e31f0
void SKVOOFF__13EventCtrlTaskFv_0x1e31e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SKVOOFF__13EventCtrlTaskFv");


    ctx->pc = 0x1e31e0u;

    // 0x1e31e0: 0x8c83000c
    ctx->pc = 0x1e31e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e31e4: 0x24630004
    ctx->pc = 0x1e31e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
    // 0x1e31e8: 0x3e00008
    ctx->pc = 0x1E31E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E31ECu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E31F0u;
}

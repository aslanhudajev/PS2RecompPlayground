#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ReqTaskClose__11SystemTask2Fv
// Address: 0x1a43c0 - 0x1a43d0
void ReqTaskClose__11SystemTask2Fv_0x1a43c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ReqTaskClose__11SystemTask2Fv");


    ctx->pc = 0x1a43c0u;

    // 0x1a43c0: 0x3c03001a
    ctx->pc = 0x1a43c0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)26 << 16));
    // 0x1a43c4: 0x24632630
    ctx->pc = 0x1a43c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 9776));
    // 0x1a43c8: 0x3e00008
    ctx->pc = 0x1A43C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A43CCu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A43D0u;
}

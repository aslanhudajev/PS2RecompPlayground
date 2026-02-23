#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DBG_MALLOC_PRINT__13EventCtrlTaskFv
// Address: 0x1e3c70 - 0x1e3c80
void DBG_MALLOC_PRINT__13EventCtrlTaskFv_0x1e3c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DBG_MALLOC_PRINT__13EventCtrlTaskFv");


    ctx->pc = 0x1e3c70u;

    // 0x1e3c70: 0x8c83000c
    ctx->pc = 0x1e3c70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e3c74: 0x24630004
    ctx->pc = 0x1e3c74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
    // 0x1e3c78: 0x3e00008
    ctx->pc = 0x1E3C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3C7Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3C80u;
}

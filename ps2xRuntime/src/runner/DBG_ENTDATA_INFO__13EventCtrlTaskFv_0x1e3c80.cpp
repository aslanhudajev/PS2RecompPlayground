#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DBG_ENTDATA_INFO__13EventCtrlTaskFv
// Address: 0x1e3c80 - 0x1e3c90
void DBG_ENTDATA_INFO__13EventCtrlTaskFv_0x1e3c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DBG_ENTDATA_INFO__13EventCtrlTaskFv");


    ctx->pc = 0x1e3c80u;

    // 0x1e3c80: 0x8c83000c
    ctx->pc = 0x1e3c80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e3c84: 0x24630004
    ctx->pc = 0x1e3c84u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
    // 0x1e3c88: 0x3e00008
    ctx->pc = 0x1E3C88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3C8Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3C90u;
}

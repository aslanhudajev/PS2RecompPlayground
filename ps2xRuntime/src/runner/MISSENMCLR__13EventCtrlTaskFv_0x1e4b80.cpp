#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MISSENMCLR__13EventCtrlTaskFv
// Address: 0x1e4b80 - 0x1e4b94
void MISSENMCLR__13EventCtrlTaskFv_0x1e4b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MISSENMCLR__13EventCtrlTaskFv");


    ctx->pc = 0x1e4b80u;

    // 0x1e4b80: 0xa7808c28
    ctx->pc = 0x1e4b80u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937640), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e4b84: 0x8c83000c
    ctx->pc = 0x1e4b84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4b88: 0x24630004
    ctx->pc = 0x1e4b88u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
    // 0x1e4b8c: 0x3e00008
    ctx->pc = 0x1E4B8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4B90u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4B94u;
}

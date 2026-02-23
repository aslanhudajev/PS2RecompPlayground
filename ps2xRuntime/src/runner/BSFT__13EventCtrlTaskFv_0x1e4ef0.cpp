#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: BSFT__13EventCtrlTaskFv
// Address: 0x1e4ef0 - 0x1e4f0c
void BSFT__13EventCtrlTaskFv_0x1e4ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("BSFT__13EventCtrlTaskFv");


    ctx->pc = 0x1e4ef0u;

    // 0x1e4ef0: 0x8c83000c
    ctx->pc = 0x1e4ef0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4ef4: 0x8c630004
    ctx->pc = 0x1e4ef4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e4ef8: 0xaf838bd4
    ctx->pc = 0x1e4ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937556), GPR_U32(ctx, 3));
    // 0x1e4efc: 0x8c83000c
    ctx->pc = 0x1e4efcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4f00: 0x24630008
    ctx->pc = 0x1e4f00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e4f04: 0x3e00008
    ctx->pc = 0x1E4F04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4F08u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4F0Cu;
}

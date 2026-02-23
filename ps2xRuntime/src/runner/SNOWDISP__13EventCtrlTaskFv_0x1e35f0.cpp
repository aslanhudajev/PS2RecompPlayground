#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SNOWDISP__13EventCtrlTaskFv
// Address: 0x1e35f0 - 0x1e360c
void SNOWDISP__13EventCtrlTaskFv_0x1e35f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SNOWDISP__13EventCtrlTaskFv");


    ctx->pc = 0x1e35f0u;

    // 0x1e35f0: 0x8c83000c
    ctx->pc = 0x1e35f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e35f4: 0x8c630004
    ctx->pc = 0x1e35f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e35f8: 0xaf838c40
    ctx->pc = 0x1e35f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937664), GPR_U32(ctx, 3));
    // 0x1e35fc: 0x8c83000c
    ctx->pc = 0x1e35fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e3600: 0x24630008
    ctx->pc = 0x1e3600u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e3604: 0x3e00008
    ctx->pc = 0x1E3604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3608u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E360Cu;
}

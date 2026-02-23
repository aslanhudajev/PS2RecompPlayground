#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MLLIGHT__13EventCtrlTaskFv
// Address: 0x1e3050 - 0x1e3060
void MLLIGHT__13EventCtrlTaskFv_0x1e3050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MLLIGHT__13EventCtrlTaskFv");


    ctx->pc = 0x1e3050u;

    // 0x1e3050: 0x8c83000c
    ctx->pc = 0x1e3050u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e3054: 0x24630008
    ctx->pc = 0x1e3054u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e3058: 0x3e00008
    ctx->pc = 0x1E3058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E305Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3060u;
}

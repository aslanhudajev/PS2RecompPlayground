#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSFSVM_DeleteMainFunc
// Address: 0x18f730 - 0x18f740
void MWSFSVM_DeleteMainFunc_0x18f730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSFSVM_DeleteMainFunc");


    ctx->pc = 0x18f730u;

    // 0x18f730: 0x3c02002f
    ctx->pc = 0x18f730u;
    SET_GPR_U32(ctx, 2, ((uint32_t)47 << 16));
    // 0x18f734: 0x24040004
    ctx->pc = 0x18f734u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x18f738: 0x805f7f6
    ctx->pc = 0x18F738u;
    ctx->pc = 0x18F73Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294952528)));
    ctx->pc = 0x17DFD8u;
    SVM_DelCbSvr_0x17dfd8(rdram, ctx, runtime); return;
    ctx->pc = 0x18F740u;
}

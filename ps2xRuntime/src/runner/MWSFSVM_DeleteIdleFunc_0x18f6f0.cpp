#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSFSVM_DeleteIdleFunc
// Address: 0x18f6f0 - 0x18f700
void MWSFSVM_DeleteIdleFunc_0x18f6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSFSVM_DeleteIdleFunc");


    ctx->pc = 0x18f6f0u;

    // 0x18f6f0: 0x3c02002f
    ctx->pc = 0x18f6f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)47 << 16));
    // 0x18f6f4: 0x24040005
    ctx->pc = 0x18f6f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    // 0x18f6f8: 0x805f7f6
    ctx->pc = 0x18F6F8u;
    ctx->pc = 0x18F6FCu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294952524)));
    ctx->pc = 0x17DFD8u;
    SVM_DelCbSvr_0x17dfd8(rdram, ctx, runtime); return;
    ctx->pc = 0x18F700u;
}

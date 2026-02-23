#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSFSVM_DeleteVfunc
// Address: 0x18f6b0 - 0x18f6c0
void MWSFSVM_DeleteVfunc_0x18f6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSFSVM_DeleteVfunc");


    ctx->pc = 0x18f6b0u;

    // 0x18f6b0: 0x3c02002f
    ctx->pc = 0x18f6b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)47 << 16));
    // 0x18f6b4: 0x24040002
    ctx->pc = 0x18f6b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x18f6b8: 0x805f7f6
    ctx->pc = 0x18F6B8u;
    ctx->pc = 0x18F6BCu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294952520)));
    ctx->pc = 0x17DFD8u;
    SVM_DelCbSvr_0x17dfd8(rdram, ctx, runtime); return;
    ctx->pc = 0x18F6C0u;
}

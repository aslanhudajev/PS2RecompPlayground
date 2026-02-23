#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSFSVM_GotoIdleBorder
// Address: 0x18f7e8 - 0x18f7f0
void MWSFSVM_GotoIdleBorder_0x18f7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSFSVM_GotoIdleBorder");


    ctx->pc = 0x18f7e8u;

    // 0x18f7e8: 0x805f850
    ctx->pc = 0x18F7E8u;
    ctx->pc = 0x18F7ECu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x17E140u;
    SVM_GotoSvrBorder_0x17e140(rdram, ctx, runtime); return;
    ctx->pc = 0x18F7F0u;
}

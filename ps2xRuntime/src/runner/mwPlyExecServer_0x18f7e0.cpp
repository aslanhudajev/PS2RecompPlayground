#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlyExecServer
// Address: 0x18f7e0 - 0x18f7e8
void mwPlyExecServer_0x18f7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlyExecServer");


    ctx->pc = 0x18f7e0u;

    // 0x18f7e0: 0x805f8fc
    ctx->pc = 0x18F7E0u;
    ctx->pc = 0x17E3F0u;
    SVM_ExecSvrMain_0x17e3f0(rdram, ctx, runtime); return;
    ctx->pc = 0x18F7E8u;
}

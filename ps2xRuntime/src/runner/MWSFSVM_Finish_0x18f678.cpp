#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSFSVM_Finish
// Address: 0x18f678 - 0x18f680
void MWSFSVM_Finish_0x18f678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSFSVM_Finish");


    ctx->pc = 0x18f678u;

    // 0x18f678: 0x805f942
    ctx->pc = 0x18F678u;
    ctx->pc = 0x17E508u;
    SVM_Finish_0x17e508(rdram, ctx, runtime); return;
    ctx->pc = 0x18F680u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SRD_Unlock
// Address: 0x176598 - 0x1765a0
void SRD_Unlock_0x176598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SRD_Unlock");


    ctx->pc = 0x176598u;

    // 0x176598: 0x805f700
    ctx->pc = 0x176598u;
    ctx->pc = 0x17DC00u;
    SVM_Unlock_0x17dc00(rdram, ctx, runtime); return;
    ctx->pc = 0x1765A0u;
}

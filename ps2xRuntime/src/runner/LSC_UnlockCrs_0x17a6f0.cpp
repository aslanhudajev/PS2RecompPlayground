#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: LSC_UnlockCrs
// Address: 0x17a6f0 - 0x17a6f8
void LSC_UnlockCrs_0x17a6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("LSC_UnlockCrs");


    ctx->pc = 0x17a6f0u;

    // 0x17a6f0: 0x805efc2
    ctx->pc = 0x17A6F0u;
    ctx->pc = 0x17BF08u;
    SJCRS_Unlock_0x17bf08(rdram, ctx, runtime); return;
    ctx->pc = 0x17A6F8u;
}

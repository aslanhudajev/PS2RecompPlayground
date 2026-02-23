#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlObjPutSetGlobalAmbience
// Address: 0x1aa9f0 - 0x1aa9f8
void nlObjPutSetGlobalAmbience_0x1aa9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlObjPutSetGlobalAmbience");


    ctx->pc = 0x1aa9f0u;

    // 0x1aa9f0: 0x3e00008
    ctx->pc = 0x1AA9F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AA9F8u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlSetVSyncFunc
// Address: 0x1af7f0 - 0x1af7f8
void nlSetVSyncFunc_0x1af7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlSetVSyncFunc");


    ctx->pc = 0x1af7f0u;

    // 0x1af7f0: 0x3e00008
    ctx->pc = 0x1AF7F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF7F4u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937296), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AF7F8u;
}

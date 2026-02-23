#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MallocBlockInit
// Address: 0x1a3c20 - 0x1a3c28
void MallocBlockInit_0x1a3c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MallocBlockInit");


    ctx->pc = 0x1a3c20u;

    // 0x1a3c20: 0x3e00008
    ctx->pc = 0x1A3C20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3C24u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936976), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A3C28u;
}

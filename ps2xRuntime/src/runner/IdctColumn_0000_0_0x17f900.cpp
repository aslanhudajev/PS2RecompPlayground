#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: IdctColumn_0000_0
// Address: 0x17f900 - 0x17f908
void IdctColumn_0000_0_0x17f900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("IdctColumn_0000_0");


    ctx->pc = 0x17f900u;

    // 0x17f900: 0x3e00008
    ctx->pc = 0x17F900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17F908u;
}

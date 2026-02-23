#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PostRendTaskConst0__Fv
// Address: 0x216150 - 0x216158
void PostRendTaskConst0__Fv_0x216150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PostRendTaskConst0__Fv");


    ctx->pc = 0x216150u;

    // 0x216150: 0x3e00008
    ctx->pc = 0x216150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x216158u;
}

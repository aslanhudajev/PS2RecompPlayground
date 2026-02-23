#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PostRendTaskConst1__Fv
// Address: 0x216160 - 0x216168
void PostRendTaskConst1__Fv_0x216160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PostRendTaskConst1__Fv");


    ctx->pc = 0x216160u;

    // 0x216160: 0x3e00008
    ctx->pc = 0x216160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x216168u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvlib_ChkCacheMode
// Address: 0x187fe8 - 0x187ff0
void mpvlib_ChkCacheMode_0x187fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvlib_ChkCacheMode");


    ctx->pc = 0x187fe8u;

    // 0x187fe8: 0x3e00008
    ctx->pc = 0x187FE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x187FF0u;
}

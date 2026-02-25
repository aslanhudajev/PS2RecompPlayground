#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsTim2LoaderInit
// Address: 0x170900 - 0x170908
void wrsTim2LoaderInit_0x170900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsTim2LoaderInit_0x170900");
#endif

    ctx->pc = 0x170900u;

    // 0x170900: 0x3e00008  jr          $ra
    ctx->pc = 0x170900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x170908u;
}

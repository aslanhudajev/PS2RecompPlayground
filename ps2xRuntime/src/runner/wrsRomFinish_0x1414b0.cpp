#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsRomFinish
// Address: 0x1414b0 - 0x1414b8
void wrsRomFinish_0x1414b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsRomFinish_0x1414b0");
#endif

    ctx->pc = 0x1414b0u;

    // 0x1414b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1414B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1414B8u;
}

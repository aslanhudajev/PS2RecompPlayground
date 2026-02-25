#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En7_02New
// Address: 0x1b01f0 - 0x1b01f8
void En7_02New_0x1b01f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En7_02New_0x1b01f0");
#endif

    ctx->pc = 0x1b01f0u;

    // 0x1b01f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B01F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B01F8u;
}

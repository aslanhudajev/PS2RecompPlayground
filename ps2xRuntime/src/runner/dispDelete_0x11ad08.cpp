#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: dispDelete
// Address: 0x11ad08 - 0x11ad10
void dispDelete_0x11ad08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("dispDelete_0x11ad08");
#endif

    ctx->pc = 0x11ad08u;

    // 0x11ad08: 0x3e00008  jr          $ra
    ctx->pc = 0x11AD08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11AD10u;
}

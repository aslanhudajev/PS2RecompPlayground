#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En7_03New
// Address: 0x1b1520 - 0x1b1528
void En7_03New_0x1b1520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En7_03New_0x1b1520");
#endif

    ctx->pc = 0x1b1520u;

    // 0x1b1520: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B1528u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En8_bitNew
// Address: 0x1e3280 - 0x1e3288
void En8_bitNew_0x1e3280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En8_bitNew_0x1e3280");
#endif

    ctx->pc = 0x1e3280u;

    // 0x1e3280: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3288u;
}

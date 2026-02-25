#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Enex2_04New
// Address: 0x1d4000 - 0x1d4008
void Enex2_04New_0x1d4000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Enex2_04New_0x1d4000");
#endif

    ctx->pc = 0x1d4000u;

    // 0x1d4000: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D4008u;
}

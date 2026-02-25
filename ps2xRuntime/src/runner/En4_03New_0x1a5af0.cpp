#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En4_03New
// Address: 0x1a5af0 - 0x1a5af8
void En4_03New_0x1a5af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En4_03New_0x1a5af0");
#endif

    ctx->pc = 0x1a5af0u;

    // 0x1a5af0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A5AF8u;
}

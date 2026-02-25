#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En2_02New
// Address: 0x18e290 - 0x18e298
void En2_02New_0x18e290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En2_02New_0x18e290");
#endif

    ctx->pc = 0x18e290u;

    // 0x18e290: 0x3e00008  jr          $ra
    ctx->pc = 0x18E290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18E298u;
}

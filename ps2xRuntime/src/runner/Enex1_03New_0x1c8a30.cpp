#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Enex1_03New
// Address: 0x1c8a30 - 0x1c8a38
void Enex1_03New_0x1c8a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Enex1_03New_0x1c8a30");
#endif

    ctx->pc = 0x1c8a30u;

    // 0x1c8a30: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8A30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8A38u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage5mapItemCreate
// Address: 0x144b00 - 0x144b08
void stage5mapItemCreate_0x144b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage5mapItemCreate_0x144b00");
#endif

    ctx->pc = 0x144b00u;

    // 0x144b00: 0x3e00008  jr          $ra
    ctx->pc = 0x144B00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x144B08u;
}

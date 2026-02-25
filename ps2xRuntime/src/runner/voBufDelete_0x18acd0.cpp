#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: voBufDelete
// Address: 0x18acd0 - 0x18acd8
void voBufDelete_0x18acd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("voBufDelete_0x18acd0");
#endif

    ctx->pc = 0x18acd0u;

    // 0x18acd0: 0x3e00008  jr          $ra
    ctx->pc = 0x18ACD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18ACD8u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stageEX1mapGenerate
// Address: 0x1434c0 - 0x1434c8
void stageEX1mapGenerate_0x1434c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stageEX1mapGenerate_0x1434c0");
#endif

    ctx->pc = 0x1434c0u;

    // 0x1434c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1434C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1434C8u;
}

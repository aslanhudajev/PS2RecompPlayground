#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: GetMemorySize
// Address: 0x154d40 - 0x154d50
void GetMemorySize_0x154d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GetMemorySize");


    ctx->pc = 0x154d40u;

    // 0x154d40: 0x2403007f
    ctx->pc = 0x154d40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 127));
    // 0x154d44: 0xc
    ctx->pc = 0x154d44u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154d48: 0x3e00008
    ctx->pc = 0x154D48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154D50u;
}

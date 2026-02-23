#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: isceSifSetDChain
// Address: 0x154cd0 - 0x154ce0
void isceSifSetDChain_0x154cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("isceSifSetDChain");


    ctx->pc = 0x154cd0u;

    // 0x154cd0: 0x2403ff88
    ctx->pc = 0x154cd0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967176));
    // 0x154cd4: 0xc
    ctx->pc = 0x154cd4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154cd8: 0x3e00008
    ctx->pc = 0x154CD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154CE0u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: isceSifSetDChain
// Address: 0x10e690 - 0x10e6a0
void isceSifSetDChain_0x10e690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e690u;

    // 0x10e690: 0x2403ff88
    ctx->pc = 0x10e690u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967176));
    // 0x10e694: 0xc
    ctx->pc = 0x10e694u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e698: 0x3e00008
    ctx->pc = 0x10E698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E6A0u;
}

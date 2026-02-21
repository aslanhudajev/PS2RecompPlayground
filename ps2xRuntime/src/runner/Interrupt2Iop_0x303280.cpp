#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: Interrupt2Iop
// Address: 0x303280 - 0x303290
void Interrupt2Iop_0x303280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303280u;

    // 0x303280: 0x2403000c
    ctx->pc = 0x303280u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
    // 0x303284: 0xc
    ctx->pc = 0x303284u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303288: 0x3e00008
    ctx->pc = 0x303288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303290u;
}

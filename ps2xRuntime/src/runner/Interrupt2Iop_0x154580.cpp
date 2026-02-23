#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: Interrupt2Iop
// Address: 0x154580 - 0x154590
void Interrupt2Iop_0x154580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("Interrupt2Iop");


    ctx->pc = 0x154580u;

    // 0x154580: 0x2403000c
    ctx->pc = 0x154580u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
    // 0x154584: 0xc
    ctx->pc = 0x154584u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154588: 0x3e00008
    ctx->pc = 0x154588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154590u;
}

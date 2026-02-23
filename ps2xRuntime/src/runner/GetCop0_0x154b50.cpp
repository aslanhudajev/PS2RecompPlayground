#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: GetCop0
// Address: 0x154b50 - 0x154b60
void GetCop0_0x154b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GetCop0");


    ctx->pc = 0x154b50u;

    // 0x154b50: 0x24030063
    ctx->pc = 0x154b50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 99));
    // 0x154b54: 0xc
    ctx->pc = 0x154b54u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154b58: 0x3e00008
    ctx->pc = 0x154B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154B60u;
}

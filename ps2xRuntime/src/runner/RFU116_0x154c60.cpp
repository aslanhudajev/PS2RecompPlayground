#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: RFU116
// Address: 0x154c60 - 0x154c70
void RFU116_0x154c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("RFU116");


    ctx->pc = 0x154c60u;

    // 0x154c60: 0x24030074
    ctx->pc = 0x154c60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 116));
    // 0x154c64: 0xc
    ctx->pc = 0x154c64u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154c68: 0x3e00008
    ctx->pc = 0x154C68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154C70u;
}

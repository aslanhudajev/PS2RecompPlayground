#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: RFU091
// Address: 0x154a90 - 0x154aa0
void RFU091_0x154a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("RFU091");


    ctx->pc = 0x154a90u;

    // 0x154a90: 0x2403005b
    ctx->pc = 0x154a90u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 91));
    // 0x154a94: 0xc
    ctx->pc = 0x154a94u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154a98: 0x3e00008
    ctx->pc = 0x154A98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154AA0u;
}

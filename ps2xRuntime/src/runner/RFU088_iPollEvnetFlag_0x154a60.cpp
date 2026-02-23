#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: RFU088_iPollEvnetFlag
// Address: 0x154a60 - 0x154a70
void RFU088_iPollEvnetFlag_0x154a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("RFU088_iPollEvnetFlag");


    ctx->pc = 0x154a60u;

    // 0x154a60: 0x2403ffa8
    ctx->pc = 0x154a60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967208));
    // 0x154a64: 0xc
    ctx->pc = 0x154a64u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154a68: 0x3e00008
    ctx->pc = 0x154A68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154A70u;
}

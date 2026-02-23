#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: RFU086_WaitEvnetFlag
// Address: 0x154a40 - 0x154a50
void RFU086_WaitEvnetFlag_0x154a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("RFU086_WaitEvnetFlag");


    ctx->pc = 0x154a40u;

    // 0x154a40: 0x24030056
    ctx->pc = 0x154a40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 86));
    // 0x154a44: 0xc
    ctx->pc = 0x154a44u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154a48: 0x3e00008
    ctx->pc = 0x154A48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154A50u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: iSignalSema
// Address: 0x154910 - 0x154920
void iSignalSema_0x154910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("iSignalSema");


    ctx->pc = 0x154910u;

    // 0x154910: 0x2403ffbd
    ctx->pc = 0x154910u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967229));
    // 0x154914: 0xc
    ctx->pc = 0x154914u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154918: 0x3e00008
    ctx->pc = 0x154918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154920u;
}

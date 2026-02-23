#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: AddSbusIntcHandler
// Address: 0x154560 - 0x154570
void AddSbusIntcHandler_0x154560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("AddSbusIntcHandler");


    ctx->pc = 0x154560u;

    // 0x154560: 0x2403000a
    ctx->pc = 0x154560u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x154564: 0xc
    ctx->pc = 0x154564u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154568: 0x3e00008
    ctx->pc = 0x154568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154570u;
}

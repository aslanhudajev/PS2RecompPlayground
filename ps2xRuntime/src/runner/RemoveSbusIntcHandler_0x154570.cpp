#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: RemoveSbusIntcHandler
// Address: 0x154570 - 0x154580
void RemoveSbusIntcHandler_0x154570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("RemoveSbusIntcHandler");


    ctx->pc = 0x154570u;

    // 0x154570: 0x2403000b
    ctx->pc = 0x154570u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11));
    // 0x154574: 0xc
    ctx->pc = 0x154574u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154578: 0x3e00008
    ctx->pc = 0x154578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154580u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: AddSbusIntcHandler
// Address: 0x10df20 - 0x10df30
void AddSbusIntcHandler_0x10df20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("AddSbusIntcHandler_0x10df20");
#endif

    ctx->pc = 0x10df20u;

    // 0x10df20: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x10df20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x10df24: 0xc  syscall     0
    ctx->pc = 0x10df24u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10df28: 0x3e00008  jr          $ra
    ctx->pc = 0x10DF28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10DF30u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: iEnableIntcHandler
// Address: 0x12ee30 - 0x12ee40
void iEnableIntcHandler_0x12ee30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("iEnableIntcHandler_0x12ee30");
#endif

    ctx->pc = 0x12ee30u;

    // 0x12ee30: 0x2403ffa4  addiu       $v1, $zero, -0x5C
    ctx->pc = 0x12ee30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967204));
    // 0x12ee34: 0xc  syscall     0
    ctx->pc = 0x12ee34u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12ee38: 0x3e00008  jr          $ra
    ctx->pc = 0x12EE38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EE40u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: DisableDmacHandler
// Address: 0x12ee80 - 0x12ee90
void DisableDmacHandler_0x12ee80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("DisableDmacHandler_0x12ee80");
#endif

    ctx->pc = 0x12ee80u;

    // 0x12ee80: 0x2403005f  addiu       $v1, $zero, 0x5F
    ctx->pc = 0x12ee80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x12ee84: 0xc  syscall     0
    ctx->pc = 0x12ee84u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12ee88: 0x3e00008  jr          $ra
    ctx->pc = 0x12EE88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EE90u;
}

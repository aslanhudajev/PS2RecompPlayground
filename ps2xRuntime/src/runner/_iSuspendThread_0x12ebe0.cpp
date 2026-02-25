#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _iSuspendThread
// Address: 0x12ebe0 - 0x12ebf0
void _iSuspendThread_0x12ebe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_iSuspendThread_0x12ebe0");
#endif

    ctx->pc = 0x12ebe0u;

    // 0x12ebe0: 0x2403ffc8  addiu       $v1, $zero, -0x38
    ctx->pc = 0x12ebe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967240));
    // 0x12ebe4: 0xc  syscall     0
    ctx->pc = 0x12ebe4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12ebe8: 0x3e00008  jr          $ra
    ctx->pc = 0x12EBE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EBF0u;
}

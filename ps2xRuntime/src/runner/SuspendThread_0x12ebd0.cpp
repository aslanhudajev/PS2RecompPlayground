#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SuspendThread
// Address: 0x12ebd0 - 0x12ebe0
void SuspendThread_0x12ebd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SuspendThread_0x12ebd0");
#endif

    ctx->pc = 0x12ebd0u;

    // 0x12ebd0: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x12ebd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x12ebd4: 0xc  syscall     0
    ctx->pc = 0x12ebd4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12ebd8: 0x3e00008  jr          $ra
    ctx->pc = 0x12EBD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EBE0u;
}

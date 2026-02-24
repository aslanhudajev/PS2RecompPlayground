#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: iReleaseWaitThread
// Address: 0x10e180 - 0x10e190
void iReleaseWaitThread_0x10e180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("iReleaseWaitThread_0x10e180");
#endif

    ctx->pc = 0x10e180u;

    // 0x10e180: 0x2403ffd2  addiu       $v1, $zero, -0x2E
    ctx->pc = 0x10e180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967250));
    // 0x10e184: 0xc  syscall     0
    ctx->pc = 0x10e184u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e188: 0x3e00008  jr          $ra
    ctx->pc = 0x10E188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E190u;
}

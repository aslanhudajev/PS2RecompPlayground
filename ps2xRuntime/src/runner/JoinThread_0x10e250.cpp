#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: JoinThread
// Address: 0x10e250 - 0x10e260
void JoinThread_0x10e250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("JoinThread_0x10e250");
#endif

    ctx->pc = 0x10e250u;

    // 0x10e250: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x10e250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x10e254: 0xc  syscall     0
    ctx->pc = 0x10e254u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e258: 0x3e00008  jr          $ra
    ctx->pc = 0x10E258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E260u;
}

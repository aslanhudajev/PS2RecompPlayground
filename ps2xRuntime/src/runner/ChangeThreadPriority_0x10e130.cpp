#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ChangeThreadPriority
// Address: 0x10e130 - 0x10e140
void ChangeThreadPriority_0x10e130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ChangeThreadPriority_0x10e130");
#endif

    ctx->pc = 0x10e130u;

    // 0x10e130: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x10e130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x10e134: 0xc  syscall     0
    ctx->pc = 0x10e134u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e138: 0x3e00008  jr          $ra
    ctx->pc = 0x10E138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E140u;
}

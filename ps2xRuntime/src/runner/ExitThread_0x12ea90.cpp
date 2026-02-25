#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ExitThread
// Address: 0x12ea90 - 0x12eaa0
void ExitThread_0x12ea90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ExitThread_0x12ea90");
#endif

    ctx->pc = 0x12ea90u;

    // 0x12ea90: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x12ea90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x12ea94: 0xc  syscall     0
    ctx->pc = 0x12ea94u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12ea98: 0x3e00008  jr          $ra
    ctx->pc = 0x12EA98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EAA0u;
}

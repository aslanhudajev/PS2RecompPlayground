#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateThread
// Address: 0x12ea60 - 0x12ea70
void CreateThread_0x12ea60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateThread_0x12ea60");
#endif

    ctx->pc = 0x12ea60u;

    // 0x12ea60: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x12ea60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12ea64: 0xc  syscall     0
    ctx->pc = 0x12ea64u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12ea68: 0x3e00008  jr          $ra
    ctx->pc = 0x12EA68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EA70u;
}

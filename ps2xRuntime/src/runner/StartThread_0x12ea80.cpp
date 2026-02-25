#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: StartThread
// Address: 0x12ea80 - 0x12ea90
void StartThread_0x12ea80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("StartThread_0x12ea80");
#endif

    ctx->pc = 0x12ea80u;

    // 0x12ea80: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x12ea80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x12ea84: 0xc  syscall     0
    ctx->pc = 0x12ea84u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12ea88: 0x3e00008  jr          $ra
    ctx->pc = 0x12EA88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EA90u;
}

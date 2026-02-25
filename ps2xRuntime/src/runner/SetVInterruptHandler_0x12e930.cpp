#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SetVInterruptHandler
// Address: 0x12e930 - 0x12e940
void SetVInterruptHandler_0x12e930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SetVInterruptHandler_0x12e930");
#endif

    ctx->pc = 0x12e930u;

    // 0x12e930: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x12e930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x12e934: 0xc  syscall     0
    ctx->pc = 0x12e934u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12e938: 0x3e00008  jr          $ra
    ctx->pc = 0x12E938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12E940u;
}

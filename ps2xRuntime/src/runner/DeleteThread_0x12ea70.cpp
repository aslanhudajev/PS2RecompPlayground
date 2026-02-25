#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: DeleteThread
// Address: 0x12ea70 - 0x12ea80
void DeleteThread_0x12ea70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("DeleteThread_0x12ea70");
#endif

    ctx->pc = 0x12ea70u;

    // 0x12ea70: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x12ea70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x12ea74: 0xc  syscall     0
    ctx->pc = 0x12ea74u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12ea78: 0x3e00008  jr          $ra
    ctx->pc = 0x12EA78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EA80u;
}

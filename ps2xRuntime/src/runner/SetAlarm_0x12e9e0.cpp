#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SetAlarm
// Address: 0x12e9e0 - 0x12e9f0
void SetAlarm_0x12e9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SetAlarm_0x12e9e0");
#endif

    ctx->pc = 0x12e9e0u;

    // 0x12e9e0: 0x240300fc  addiu       $v1, $zero, 0xFC
    ctx->pc = 0x12e9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x12e9e4: 0xc  syscall     0
    ctx->pc = 0x12e9e4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12e9e8: 0x3e00008  jr          $ra
    ctx->pc = 0x12E9E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12E9F0u;
}

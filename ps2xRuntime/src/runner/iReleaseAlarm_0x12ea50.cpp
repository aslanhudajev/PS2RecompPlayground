#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: iReleaseAlarm
// Address: 0x12ea50 - 0x12ea60
void iReleaseAlarm_0x12ea50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("iReleaseAlarm_0x12ea50");
#endif

    ctx->pc = 0x12ea50u;

    // 0x12ea50: 0x2403ff01  addiu       $v1, $zero, -0xFF
    ctx->pc = 0x12ea50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967041));
    // 0x12ea54: 0xc  syscall     0
    ctx->pc = 0x12ea54u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12ea58: 0x3e00008  jr          $ra
    ctx->pc = 0x12EA58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EA60u;
}

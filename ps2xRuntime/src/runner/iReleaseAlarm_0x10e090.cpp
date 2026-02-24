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
// Address: 0x10e090 - 0x10e0a0
void iReleaseAlarm_0x10e090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("iReleaseAlarm_0x10e090");
#endif

    ctx->pc = 0x10e090u;

    // 0x10e090: 0x2403ff01  addiu       $v1, $zero, -0xFF
    ctx->pc = 0x10e090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967041));
    // 0x10e094: 0xc  syscall     0
    ctx->pc = 0x10e094u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e098: 0x3e00008  jr          $ra
    ctx->pc = 0x10E098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E0A0u;
}

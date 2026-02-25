#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ReleaseAlarm
// Address: 0x12e9f0 - 0x12ea00
void ReleaseAlarm_0x12e9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ReleaseAlarm_0x12e9f0");
#endif

    ctx->pc = 0x12e9f0u;

    // 0x12e9f0: 0x240300fd  addiu       $v1, $zero, 0xFD
    ctx->pc = 0x12e9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    // 0x12e9f4: 0xc  syscall     0
    ctx->pc = 0x12e9f4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12e9f8: 0x3e00008  jr          $ra
    ctx->pc = 0x12E9F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EA00u;
}

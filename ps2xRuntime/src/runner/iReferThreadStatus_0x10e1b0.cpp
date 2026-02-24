#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: iReferThreadStatus
// Address: 0x10e1b0 - 0x10e1c0
void iReferThreadStatus_0x10e1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("iReferThreadStatus_0x10e1b0");
#endif

    ctx->pc = 0x10e1b0u;

    // 0x10e1b0: 0x2403ffcf  addiu       $v1, $zero, -0x31
    ctx->pc = 0x10e1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x10e1b4: 0xc  syscall     0
    ctx->pc = 0x10e1b4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x10E1B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E1C0u;
}

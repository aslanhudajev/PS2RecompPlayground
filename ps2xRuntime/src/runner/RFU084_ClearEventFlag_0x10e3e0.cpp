#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: RFU084_ClearEventFlag
// Address: 0x10e3e0 - 0x10e3f0
void RFU084_ClearEventFlag_0x10e3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("RFU084_ClearEventFlag_0x10e3e0");
#endif

    ctx->pc = 0x10e3e0u;

    // 0x10e3e0: 0x24030054  addiu       $v1, $zero, 0x54
    ctx->pc = 0x10e3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x10e3e4: 0xc  syscall     0
    ctx->pc = 0x10e3e4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e3e8: 0x3e00008  jr          $ra
    ctx->pc = 0x10E3E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E3F0u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: RFU060
// Address: 0x10e260 - 0x10e270
void RFU060_0x10e260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("RFU060_0x10e260");
#endif

    ctx->pc = 0x10e260u;

    // 0x10e260: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x10e260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x10e264: 0xc  syscall     0
    ctx->pc = 0x10e264u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e268: 0x3e00008  jr          $ra
    ctx->pc = 0x10E268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E270u;
}

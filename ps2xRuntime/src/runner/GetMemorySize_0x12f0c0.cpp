#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: GetMemorySize
// Address: 0x12f0c0 - 0x12f0d0
void GetMemorySize_0x12f0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("GetMemorySize_0x12f0c0");
#endif

    ctx->pc = 0x12f0c0u;

    // 0x12f0c0: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x12f0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x12f0c4: 0xc  syscall     0
    ctx->pc = 0x12f0c4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12f0c8: 0x3e00008  jr          $ra
    ctx->pc = 0x12F0C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12F0D0u;
}

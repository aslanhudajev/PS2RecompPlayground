#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: iCpuConfig
// Address: 0x10e560 - 0x10e570
void iCpuConfig_0x10e560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("iCpuConfig_0x10e560");
#endif

    ctx->pc = 0x10e560u;

    // 0x10e560: 0x2403ff96  addiu       $v1, $zero, -0x6A
    ctx->pc = 0x10e560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967190));
    // 0x10e564: 0xc  syscall     0
    ctx->pc = 0x10e564u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e568: 0x3e00008  jr          $ra
    ctx->pc = 0x10E568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E570u;
}

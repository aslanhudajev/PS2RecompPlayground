#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: iGetCop0
// Address: 0x12ef00 - 0x12ef10
void iGetCop0_0x12ef00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("iGetCop0_0x12ef00");
#endif

    ctx->pc = 0x12ef00u;

    // 0x12ef00: 0x2403ff99  addiu       $v1, $zero, -0x67
    ctx->pc = 0x12ef00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967193));
    // 0x12ef04: 0xc  syscall     0
    ctx->pc = 0x12ef04u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12ef08: 0x3e00008  jr          $ra
    ctx->pc = 0x12EF08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EF10u;
}

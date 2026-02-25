#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: iReferSemaStatus
// Address: 0x12ece0 - 0x12ecf0
void iReferSemaStatus_0x12ece0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("iReferSemaStatus_0x12ece0");
#endif

    ctx->pc = 0x12ece0u;

    // 0x12ece0: 0x2403ffb8  addiu       $v1, $zero, -0x48
    ctx->pc = 0x12ece0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967224));
    // 0x12ece4: 0xc  syscall     0
    ctx->pc = 0x12ece4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12ece8: 0x3e00008  jr          $ra
    ctx->pc = 0x12ECE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12ECF0u;
}

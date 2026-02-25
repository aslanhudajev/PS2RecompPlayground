#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Interrupt2Iop
// Address: 0x12e900 - 0x12e910
void Interrupt2Iop_0x12e900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Interrupt2Iop_0x12e900");
#endif

    ctx->pc = 0x12e900u;

    // 0x12e900: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x12e900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x12e904: 0xc  syscall     0
    ctx->pc = 0x12e904u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12e908: 0x3e00008  jr          $ra
    ctx->pc = 0x12E908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12E910u;
}

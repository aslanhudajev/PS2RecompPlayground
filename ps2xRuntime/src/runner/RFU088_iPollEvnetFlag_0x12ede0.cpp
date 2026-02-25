#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: RFU088_iPollEvnetFlag
// Address: 0x12ede0 - 0x12edf0
void RFU088_iPollEvnetFlag_0x12ede0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("RFU088_iPollEvnetFlag_0x12ede0");
#endif

    ctx->pc = 0x12ede0u;

    // 0x12ede0: 0x2403ffa8  addiu       $v1, $zero, -0x58
    ctx->pc = 0x12ede0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967208));
    // 0x12ede4: 0xc  syscall     0
    ctx->pc = 0x12ede4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12ede8: 0x3e00008  jr          $ra
    ctx->pc = 0x12EDE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EDF0u;
}

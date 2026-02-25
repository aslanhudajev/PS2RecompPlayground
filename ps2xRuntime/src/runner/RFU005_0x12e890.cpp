#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: RFU005
// Address: 0x12e890 - 0x12e8a0
void RFU005_0x12e890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("RFU005_0x12e890");
#endif

    ctx->pc = 0x12e890u;

    // 0x12e890: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x12e890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12e894: 0xc  syscall     0
    ctx->pc = 0x12e894u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12e898: 0x3e00008  jr          $ra
    ctx->pc = 0x12E898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12E8A0u;
}

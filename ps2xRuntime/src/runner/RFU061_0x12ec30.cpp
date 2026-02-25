#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: RFU061
// Address: 0x12ec30 - 0x12ec40
void RFU061_0x12ec30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("RFU061_0x12ec30");
#endif

    ctx->pc = 0x12ec30u;

    // 0x12ec30: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x12ec30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x12ec34: 0xc  syscall     0
    ctx->pc = 0x12ec34u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12ec38: 0x3e00008  jr          $ra
    ctx->pc = 0x12EC38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EC40u;
}

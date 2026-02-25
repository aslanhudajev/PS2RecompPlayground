#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: RemoveDmacHandler
// Address: 0x12e990 - 0x12e9a0
void RemoveDmacHandler_0x12e990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("RemoveDmacHandler_0x12e990");
#endif

    ctx->pc = 0x12e990u;

    // 0x12e990: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x12e990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x12e994: 0xc  syscall     0
    ctx->pc = 0x12e994u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12e998: 0x3e00008  jr          $ra
    ctx->pc = 0x12E998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12E9A0u;
}

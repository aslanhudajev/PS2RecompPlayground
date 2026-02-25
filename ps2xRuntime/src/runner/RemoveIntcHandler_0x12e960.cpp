#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: RemoveIntcHandler
// Address: 0x12e960 - 0x12e970
void RemoveIntcHandler_0x12e960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("RemoveIntcHandler_0x12e960");
#endif

    ctx->pc = 0x12e960u;

    // 0x12e960: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x12e960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x12e964: 0xc  syscall     0
    ctx->pc = 0x12e964u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12e968: 0x3e00008  jr          $ra
    ctx->pc = 0x12E968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12E970u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: AddIntcHandler
// Address: 0x12e940 - 0x12e950
void AddIntcHandler_0x12e940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("AddIntcHandler_0x12e940");
#endif

    ctx->pc = 0x12e940u;

    // 0x12e940: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x12e940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12e944: 0xc  syscall     0
    ctx->pc = 0x12e944u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12e948: 0x3e00008  jr          $ra
    ctx->pc = 0x12E948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12E950u;
}

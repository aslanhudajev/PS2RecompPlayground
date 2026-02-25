#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _LoadExecPS2
// Address: 0x12e8a0 - 0x12e8b0
void ps2__LoadExecPS2_0x12e8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ps2__LoadExecPS2_0x12e8a0");
#endif

    ctx->pc = 0x12e8a0u;

    // 0x12e8a0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x12e8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x12e8a4: 0xc  syscall     0
    ctx->pc = 0x12e8a4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12e8a8: 0x3e00008  jr          $ra
    ctx->pc = 0x12E8A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12E8B0u;
}

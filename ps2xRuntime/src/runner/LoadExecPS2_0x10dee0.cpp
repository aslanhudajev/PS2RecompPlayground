#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: LoadExecPS2
// Address: 0x10dee0 - 0x10def0
void LoadExecPS2_0x10dee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10dee0u;

    // 0x10dee0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x10dee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x10dee4: 0xc  syscall     0
    ctx->pc = 0x10dee4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10dee8: 0x3e00008  jr          $ra
    ctx->pc = 0x10DEE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10DEF0u;
}

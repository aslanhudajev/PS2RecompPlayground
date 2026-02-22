#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ResetEE
// Address: 0x10de90 - 0x10dea0
void ResetEE_0x10de90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10de90u;

    // 0x10de90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10de90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10de94: 0xc  syscall     0
    ctx->pc = 0x10de94u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10de98: 0x3e00008  jr          $ra
    ctx->pc = 0x10DE98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10DEA0u;
}

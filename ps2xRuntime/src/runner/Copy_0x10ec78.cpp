#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: Copy
// Address: 0x10ec78 - 0x10ec88
void Copy_0x10ec78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10ec78u;

    // 0x10ec78: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x10ec78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x10ec7c: 0xc  syscall     0
    ctx->pc = 0x10ec7cu;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10ec80: 0x3e00008  jr          $ra
    ctx->pc = 0x10EC80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10EC88u;
}

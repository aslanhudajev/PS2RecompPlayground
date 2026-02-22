#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _print
// Address: 0x10e630 - 0x10e640
void _print_0x10e630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e630u;

    // 0x10e630: 0x24030075  addiu       $v1, $zero, 0x75
    ctx->pc = 0x10e630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x10e634: 0xc  syscall     0
    ctx->pc = 0x10e634u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e638: 0x3e00008  jr          $ra
    ctx->pc = 0x10E638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E640u;
}

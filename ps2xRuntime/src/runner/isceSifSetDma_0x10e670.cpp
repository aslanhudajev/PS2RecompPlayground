#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: isceSifSetDma
// Address: 0x10e670 - 0x10e680
void isceSifSetDma_0x10e670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e670u;

    // 0x10e670: 0x2403ff89  addiu       $v1, $zero, -0x77
    ctx->pc = 0x10e670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967177));
    // 0x10e674: 0xc  syscall     0
    ctx->pc = 0x10e674u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e678: 0x3e00008  jr          $ra
    ctx->pc = 0x10E678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E680u;
}

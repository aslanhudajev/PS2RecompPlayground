#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetGsVParam
// Address: 0x10e390 - 0x10e3a0
void SetGsVParam_0x10e390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e390u;

    // 0x10e390: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x10e390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x10e394: 0xc  syscall     0
    ctx->pc = 0x10e394u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e398: 0x3e00008  jr          $ra
    ctx->pc = 0x10E398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E3A0u;
}

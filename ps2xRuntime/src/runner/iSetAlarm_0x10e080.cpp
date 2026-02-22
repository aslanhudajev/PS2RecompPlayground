#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: iSetAlarm
// Address: 0x10e080 - 0x10e090
void iSetAlarm_0x10e080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e080u;

    // 0x10e080: 0x2403ff02  addiu       $v1, $zero, -0xFE
    ctx->pc = 0x10e080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967042));
    // 0x10e084: 0xc  syscall     0
    ctx->pc = 0x10e084u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e088: 0x3e00008  jr          $ra
    ctx->pc = 0x10E088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E090u;
}

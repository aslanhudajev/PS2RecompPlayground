#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetAlarm
// Address: 0x10e020 - 0x10e030
void SetAlarm_0x10e020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e020u;

    // 0x10e020: 0x240300fc  addiu       $v1, $zero, 0xFC
    ctx->pc = 0x10e020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x10e024: 0xc  syscall     0
    ctx->pc = 0x10e024u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e028: 0x3e00008  jr          $ra
    ctx->pc = 0x10E028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E030u;
}

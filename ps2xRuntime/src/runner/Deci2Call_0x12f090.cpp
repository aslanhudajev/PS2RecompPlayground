#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Deci2Call
// Address: 0x12f090 - 0x12f0a0
void Deci2Call_0x12f090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Deci2Call_0x12f090");
#endif

    ctx->pc = 0x12f090u;

    // 0x12f090: 0x2403007c  addiu       $v1, $zero, 0x7C
    ctx->pc = 0x12f090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x12f094: 0xc  syscall     0
    ctx->pc = 0x12f094u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12f098: 0x3e00008  jr          $ra
    ctx->pc = 0x12F098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12F0A0u;
}

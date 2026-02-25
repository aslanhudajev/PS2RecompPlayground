#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SetVCommonHandler
// Address: 0x12e920 - 0x12e930
void SetVCommonHandler_0x12e920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SetVCommonHandler_0x12e920");
#endif

    ctx->pc = 0x12e920u;

    // 0x12e920: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x12e920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x12e924: 0xc  syscall     0
    ctx->pc = 0x12e924u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12e928: 0x3e00008  jr          $ra
    ctx->pc = 0x12E928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12E930u;
}

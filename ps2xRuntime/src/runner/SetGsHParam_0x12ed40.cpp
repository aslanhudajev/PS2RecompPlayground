#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SetGsHParam
// Address: 0x12ed40 - 0x12ed50
void SetGsHParam_0x12ed40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SetGsHParam_0x12ed40");
#endif

    ctx->pc = 0x12ed40u;

    // 0x12ed40: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x12ed40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x12ed44: 0xc  syscall     0
    ctx->pc = 0x12ed44u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12ed48: 0x3e00008  jr          $ra
    ctx->pc = 0x12ED48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12ED50u;
}

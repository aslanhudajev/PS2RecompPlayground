#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SetGsVParam
// Address: 0x12ed50 - 0x12ed60
void SetGsVParam_0x12ed50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SetGsVParam_0x12ed50");
#endif

    ctx->pc = 0x12ed50u;

    // 0x12ed50: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x12ed50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x12ed54: 0xc  syscall     0
    ctx->pc = 0x12ed54u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12ed58: 0x3e00008  jr          $ra
    ctx->pc = 0x12ED58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12ED60u;
}

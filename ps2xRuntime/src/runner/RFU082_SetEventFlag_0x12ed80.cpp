#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: RFU082_SetEventFlag
// Address: 0x12ed80 - 0x12ed90
void RFU082_SetEventFlag_0x12ed80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("RFU082_SetEventFlag_0x12ed80");
#endif

    ctx->pc = 0x12ed80u;

    // 0x12ed80: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x12ed80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x12ed84: 0xc  syscall     0
    ctx->pc = 0x12ed84u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12ed88: 0x3e00008  jr          $ra
    ctx->pc = 0x12ED88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12ED90u;
}

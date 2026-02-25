#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: RFU081_DeleteEventFlag
// Address: 0x12ed70 - 0x12ed80
void RFU081_DeleteEventFlag_0x12ed70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("RFU081_DeleteEventFlag_0x12ed70");
#endif

    ctx->pc = 0x12ed70u;

    // 0x12ed70: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x12ed70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x12ed74: 0xc  syscall     0
    ctx->pc = 0x12ed74u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12ed78: 0x3e00008  jr          $ra
    ctx->pc = 0x12ED78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12ED80u;
}

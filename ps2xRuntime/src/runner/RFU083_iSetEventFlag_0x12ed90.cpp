#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: RFU083_iSetEventFlag
// Address: 0x12ed90 - 0x12eda0
void RFU083_iSetEventFlag_0x12ed90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("RFU083_iSetEventFlag_0x12ed90");
#endif

    ctx->pc = 0x12ed90u;

    // 0x12ed90: 0x2403ffad  addiu       $v1, $zero, -0x53
    ctx->pc = 0x12ed90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967213));
    // 0x12ed94: 0xc  syscall     0
    ctx->pc = 0x12ed94u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12ed98: 0x3e00008  jr          $ra
    ctx->pc = 0x12ED98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EDA0u;
}

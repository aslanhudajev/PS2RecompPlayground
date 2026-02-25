#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: RFU080_CreateEventFlag
// Address: 0x12ed60 - 0x12ed70
void RFU080_CreateEventFlag_0x12ed60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("RFU080_CreateEventFlag_0x12ed60");
#endif

    ctx->pc = 0x12ed60u;

    // 0x12ed60: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x12ed60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x12ed64: 0xc  syscall     0
    ctx->pc = 0x12ed64u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12ed68: 0x3e00008  jr          $ra
    ctx->pc = 0x12ED68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12ED70u;
}

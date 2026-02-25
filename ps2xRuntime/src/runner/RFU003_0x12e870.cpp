#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: RFU003
// Address: 0x12e870 - 0x12e880
void RFU003_0x12e870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("RFU003_0x12e870");
#endif

    ctx->pc = 0x12e870u;

    // 0x12e870: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x12e870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12e874: 0xc  syscall     0
    ctx->pc = 0x12e874u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12e878: 0x3e00008  jr          $ra
    ctx->pc = 0x12E878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12E880u;
}

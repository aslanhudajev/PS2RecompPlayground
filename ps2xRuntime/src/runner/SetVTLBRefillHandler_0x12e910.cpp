#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SetVTLBRefillHandler
// Address: 0x12e910 - 0x12e920
void SetVTLBRefillHandler_0x12e910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SetVTLBRefillHandler_0x12e910");
#endif

    ctx->pc = 0x12e910u;

    // 0x12e910: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x12e910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x12e914: 0xc  syscall     0
    ctx->pc = 0x12e914u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12e918: 0x3e00008  jr          $ra
    ctx->pc = 0x12E918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12E920u;
}

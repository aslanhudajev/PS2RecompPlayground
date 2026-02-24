#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: iDisableDmacHandler
// Address: 0x10e4d0 - 0x10e4e0
void iDisableDmacHandler_0x10e4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("iDisableDmacHandler_0x10e4d0");
#endif

    ctx->pc = 0x10e4d0u;

    // 0x10e4d0: 0x2403ffa1  addiu       $v1, $zero, -0x5F
    ctx->pc = 0x10e4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967201));
    // 0x10e4d4: 0xc  syscall     0
    ctx->pc = 0x10e4d4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x10E4D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E4E0u;
}

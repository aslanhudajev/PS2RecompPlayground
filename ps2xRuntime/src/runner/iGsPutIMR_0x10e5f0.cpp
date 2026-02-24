#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: iGsPutIMR
// Address: 0x10e5f0 - 0x10e600
void iGsPutIMR_0x10e5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("iGsPutIMR_0x10e5f0");
#endif

    ctx->pc = 0x10e5f0u;

    // 0x10e5f0: 0x2403ff8f  addiu       $v1, $zero, -0x71
    ctx->pc = 0x10e5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967183));
    // 0x10e5f4: 0xc  syscall     0
    ctx->pc = 0x10e5f4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e5f8: 0x3e00008  jr          $ra
    ctx->pc = 0x10E5F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E600u;
}

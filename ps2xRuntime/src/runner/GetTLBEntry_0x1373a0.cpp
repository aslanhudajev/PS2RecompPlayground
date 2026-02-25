#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: GetTLBEntry
// Address: 0x1373a0 - 0x1373b0
void GetTLBEntry_0x1373a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("GetTLBEntry_0x1373a0");
#endif

    ctx->pc = 0x1373a0u;

    // 0x1373a0: 0x24030057  addiu       $v1, $zero, 0x57
    ctx->pc = 0x1373a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x1373a4: 0xc  syscall     0
    ctx->pc = 0x1373a4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x1373a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1373A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1373B0u;
}

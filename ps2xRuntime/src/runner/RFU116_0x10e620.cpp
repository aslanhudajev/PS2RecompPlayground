#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: RFU116
// Address: 0x10e620 - 0x10e630
void RFU116_0x10e620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("RFU116_0x10e620");
#endif

    ctx->pc = 0x10e620u;

    // 0x10e620: 0x24030074  addiu       $v1, $zero, 0x74
    ctx->pc = 0x10e620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x10e624: 0xc  syscall     0
    ctx->pc = 0x10e624u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e628: 0x3e00008  jr          $ra
    ctx->pc = 0x10E628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E630u;
}

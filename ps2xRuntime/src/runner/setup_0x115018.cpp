#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: setup
// Address: 0x115018 - 0x115028
void setup_0x115018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("setup_0x115018");
#endif

    ctx->pc = 0x115018u;

    // 0x115018: 0x24030074  addiu       $v1, $zero, 0x74
    ctx->pc = 0x115018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x11501c: 0xc  syscall     0
    ctx->pc = 0x11501cu;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x115020: 0x3e00008  jr          $ra
    ctx->pc = 0x115020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x115028u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _iDisableIntc
// Address: 0x12ea10 - 0x12ea20
void _iDisableIntc_0x12ea10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_iDisableIntc_0x12ea10");
#endif

    ctx->pc = 0x12ea10u;

    // 0x12ea10: 0x2403ffe5  addiu       $v1, $zero, -0x1B
    ctx->pc = 0x12ea10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967269));
    // 0x12ea14: 0xc  syscall     0
    ctx->pc = 0x12ea14u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12ea18: 0x3e00008  jr          $ra
    ctx->pc = 0x12EA18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EA20u;
}

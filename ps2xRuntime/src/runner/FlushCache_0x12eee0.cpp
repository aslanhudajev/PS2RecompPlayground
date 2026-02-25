#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: FlushCache
// Address: 0x12eee0 - 0x12eef0
void FlushCache_0x12eee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("FlushCache_0x12eee0");
#endif

    ctx->pc = 0x12eee0u;

    // 0x12eee0: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x12eee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x12eee4: 0xc  syscall     0
    ctx->pc = 0x12eee4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12eee8: 0x3e00008  jr          $ra
    ctx->pc = 0x12EEE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EEF0u;
}

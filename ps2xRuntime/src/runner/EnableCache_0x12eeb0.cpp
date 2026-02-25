#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnableCache
// Address: 0x12eeb0 - 0x12eec0
void EnableCache_0x12eeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnableCache_0x12eeb0");
#endif

    ctx->pc = 0x12eeb0u;

    // 0x12eeb0: 0x24030061  addiu       $v1, $zero, 0x61
    ctx->pc = 0x12eeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x12eeb4: 0xc  syscall     0
    ctx->pc = 0x12eeb4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12eeb8: 0x3e00008  jr          $ra
    ctx->pc = 0x12EEB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EEC0u;
}

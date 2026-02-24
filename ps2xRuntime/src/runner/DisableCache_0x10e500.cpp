#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: DisableCache
// Address: 0x10e500 - 0x10e510
void DisableCache_0x10e500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("DisableCache_0x10e500");
#endif

    ctx->pc = 0x10e500u;

    // 0x10e500: 0x24030062  addiu       $v1, $zero, 0x62
    ctx->pc = 0x10e500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x10e504: 0xc  syscall     0
    ctx->pc = 0x10e504u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e508: 0x3e00008  jr          $ra
    ctx->pc = 0x10E508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E510u;
}

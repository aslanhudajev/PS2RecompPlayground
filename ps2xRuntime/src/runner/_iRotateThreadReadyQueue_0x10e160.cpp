#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _iRotateThreadReadyQueue
// Address: 0x10e160 - 0x10e170
void _iRotateThreadReadyQueue_0x10e160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_iRotateThreadReadyQueue_0x10e160");
#endif

    ctx->pc = 0x10e160u;

    // 0x10e160: 0x2403ffd4  addiu       $v1, $zero, -0x2C
    ctx->pc = 0x10e160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967252));
    // 0x10e164: 0xc  syscall     0
    ctx->pc = 0x10e164u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e168: 0x3e00008  jr          $ra
    ctx->pc = 0x10E168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E170u;
}

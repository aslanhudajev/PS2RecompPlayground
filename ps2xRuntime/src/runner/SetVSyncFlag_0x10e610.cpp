#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SetVSyncFlag
// Address: 0x10e610 - 0x10e620
void SetVSyncFlag_0x10e610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SetVSyncFlag_0x10e610");
#endif

    ctx->pc = 0x10e610u;

    // 0x10e610: 0x24030073  addiu       $v1, $zero, 0x73
    ctx->pc = 0x10e610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x10e614: 0xc  syscall     0
    ctx->pc = 0x10e614u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e618: 0x3e00008  jr          $ra
    ctx->pc = 0x10E618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E620u;
}

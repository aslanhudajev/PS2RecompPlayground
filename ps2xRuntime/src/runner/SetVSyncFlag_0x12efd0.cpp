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
// Address: 0x12efd0 - 0x12efe0
void SetVSyncFlag_0x12efd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SetVSyncFlag_0x12efd0");
#endif

    ctx->pc = 0x12efd0u;

    // 0x12efd0: 0x24030073  addiu       $v1, $zero, 0x73
    ctx->pc = 0x12efd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x12efd4: 0xc  syscall     0
    ctx->pc = 0x12efd4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12efd8: 0x3e00008  jr          $ra
    ctx->pc = 0x12EFD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EFE0u;
}

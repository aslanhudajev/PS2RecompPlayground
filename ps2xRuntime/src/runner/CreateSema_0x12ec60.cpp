#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateSema
// Address: 0x12ec60 - 0x12ec70
void CreateSema_0x12ec60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateSema_0x12ec60");
#endif

    ctx->pc = 0x12ec60u;

    // 0x12ec60: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x12ec60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x12ec64: 0xc  syscall     0
    ctx->pc = 0x12ec64u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12ec68: 0x3e00008  jr          $ra
    ctx->pc = 0x12EC68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EC70u;
}

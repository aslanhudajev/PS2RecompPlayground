#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: DeleteSema
// Address: 0x12ec70 - 0x12ec80
void DeleteSema_0x12ec70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("DeleteSema_0x12ec70");
#endif

    ctx->pc = 0x12ec70u;

    // 0x12ec70: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x12ec70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x12ec74: 0xc  syscall     0
    ctx->pc = 0x12ec74u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12ec78: 0x3e00008  jr          $ra
    ctx->pc = 0x12EC78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EC80u;
}

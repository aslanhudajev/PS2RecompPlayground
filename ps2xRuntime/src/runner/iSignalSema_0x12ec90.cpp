#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: iSignalSema
// Address: 0x12ec90 - 0x12eca0
void iSignalSema_0x12ec90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("iSignalSema_0x12ec90");
#endif

    ctx->pc = 0x12ec90u;

    // 0x12ec90: 0x2403ffbd  addiu       $v1, $zero, -0x43
    ctx->pc = 0x12ec90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967229));
    // 0x12ec94: 0xc  syscall     0
    ctx->pc = 0x12ec94u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12ec98: 0x3e00008  jr          $ra
    ctx->pc = 0x12EC98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12ECA0u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: isceSifDmaStat
// Address: 0x12f010 - 0x12f020
void isceSifDmaStat_0x12f010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("isceSifDmaStat_0x12f010");
#endif

    ctx->pc = 0x12f010u;

    // 0x12f010: 0x2403ff8a  addiu       $v1, $zero, -0x76
    ctx->pc = 0x12f010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967178));
    // 0x12f014: 0xc  syscall     0
    ctx->pc = 0x12f014u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12f018: 0x3e00008  jr          $ra
    ctx->pc = 0x12F018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12F020u;
}

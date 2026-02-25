#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _Exit
// Address: 0x12e880 - 0x12e890
void ps2__Exit_0x12e880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ps2__Exit_0x12e880");
#endif

    ctx->pc = 0x12e880u;

    // 0x12e880: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x12e880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12e884: 0xc  syscall     0
    ctx->pc = 0x12e884u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12e888: 0x3e00008  jr          $ra
    ctx->pc = 0x12E888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12E890u;
}

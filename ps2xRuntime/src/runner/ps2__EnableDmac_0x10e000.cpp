#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _EnableDmac
// Address: 0x10e000 - 0x10e010
void ps2__EnableDmac_0x10e000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ps2__EnableDmac_0x10e000");
#endif

    ctx->pc = 0x10e000u;

    // 0x10e000: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x10e000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x10e004: 0xc  syscall     0
    ctx->pc = 0x10e004u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e008: 0x3e00008  jr          $ra
    ctx->pc = 0x10E008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E010u;
}

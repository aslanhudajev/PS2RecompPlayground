#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CpuConfig
// Address: 0x10e530 - 0x10e540
void CpuConfig_0x10e530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e530u;

    // 0x10e530: 0x24030066  addiu       $v1, $zero, 0x66
    ctx->pc = 0x10e530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x10e534: 0xc  syscall     0
    ctx->pc = 0x10e534u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e538: 0x3e00008  jr          $ra
    ctx->pc = 0x10E538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E540u;
}

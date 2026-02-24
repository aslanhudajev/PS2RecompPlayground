#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: FlushCache
// Address: 0x10e520 - 0x10e530
void FlushCache_0x10e520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("FlushCache_0x10e520");
#endif

    ctx->pc = 0x10e520u;

    // 0x10e520: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x10e520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x10e524: 0xc  syscall     0
    ctx->pc = 0x10e524u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e528: 0x3e00008  jr          $ra
    ctx->pc = 0x10E528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E530u;
}

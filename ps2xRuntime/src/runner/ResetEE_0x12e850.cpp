#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ResetEE
// Address: 0x12e850 - 0x12e860
void ResetEE_0x12e850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ResetEE_0x12e850");
#endif

    ctx->pc = 0x12e850u;

    // 0x12e850: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12e850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e854: 0xc  syscall     0
    ctx->pc = 0x12e854u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12e858: 0x3e00008  jr          $ra
    ctx->pc = 0x12E858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12E860u;
}

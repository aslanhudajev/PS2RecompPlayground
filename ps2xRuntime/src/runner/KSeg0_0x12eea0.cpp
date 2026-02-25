#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: KSeg0
// Address: 0x12eea0 - 0x12eeb0
void KSeg0_0x12eea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("KSeg0_0x12eea0");
#endif

    ctx->pc = 0x12eea0u;

    // 0x12eea0: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x12eea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x12eea4: 0xc  syscall     0
    ctx->pc = 0x12eea4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12eea8: 0x3e00008  jr          $ra
    ctx->pc = 0x12EEA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EEB0u;
}

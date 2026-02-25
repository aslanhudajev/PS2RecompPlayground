#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _iEnableIntc
// Address: 0x12ea00 - 0x12ea10
void _iEnableIntc_0x12ea00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_iEnableIntc_0x12ea00");
#endif

    ctx->pc = 0x12ea00u;

    // 0x12ea00: 0x2403ffe6  addiu       $v1, $zero, -0x1A
    ctx->pc = 0x12ea00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967270));
    // 0x12ea04: 0xc  syscall     0
    ctx->pc = 0x12ea04u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12ea08: 0x3e00008  jr          $ra
    ctx->pc = 0x12EA08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EA10u;
}

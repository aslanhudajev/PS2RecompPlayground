#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: RFU000_FullReset
// Address: 0x12e840 - 0x12e850
void RFU000_FullReset_0x12e840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("RFU000_FullReset_0x12e840");
#endif

    ctx->pc = 0x12e840u;

    // 0x12e840: 0x24030000  addiu       $v1, $zero, 0x0
    ctx->pc = 0x12e840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x12e844: 0xc  syscall     0
    ctx->pc = 0x12e844u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12e848: 0x3e00008  jr          $ra
    ctx->pc = 0x12E848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12E850u;
}

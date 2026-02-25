#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: iPutTLBEntry
// Address: 0x137340 - 0x137350
void iPutTLBEntry_0x137340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("iPutTLBEntry_0x137340");
#endif

    ctx->pc = 0x137340u;

    // 0x137340: 0x2403ffab  addiu       $v1, $zero, -0x55
    ctx->pc = 0x137340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967211));
    // 0x137344: 0xc  syscall     0
    ctx->pc = 0x137344u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x137348: 0x3e00008  jr          $ra
    ctx->pc = 0x137348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x137350u;
}

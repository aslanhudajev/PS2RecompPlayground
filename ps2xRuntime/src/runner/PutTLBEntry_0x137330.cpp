#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: PutTLBEntry
// Address: 0x137330 - 0x137340
void PutTLBEntry_0x137330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("PutTLBEntry_0x137330");
#endif

    ctx->pc = 0x137330u;

    // 0x137330: 0x24030055  addiu       $v1, $zero, 0x55
    ctx->pc = 0x137330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x137334: 0xc  syscall     0
    ctx->pc = 0x137334u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x137338: 0x3e00008  jr          $ra
    ctx->pc = 0x137338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x137340u;
}

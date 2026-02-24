#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: RFU073
// Address: 0x10e330 - 0x10e340
void RFU073_0x10e330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("RFU073_0x10e330");
#endif

    ctx->pc = 0x10e330u;

    // 0x10e330: 0x24030049  addiu       $v1, $zero, 0x49
    ctx->pc = 0x10e330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x10e334: 0xc  syscall     0
    ctx->pc = 0x10e334u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e338: 0x3e00008  jr          $ra
    ctx->pc = 0x10E338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E340u;
}

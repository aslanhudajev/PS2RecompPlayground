#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: isceSifSetDChain
// Address: 0x12f050 - 0x12f060
void isceSifSetDChain_0x12f050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("isceSifSetDChain_0x12f050");
#endif

    ctx->pc = 0x12f050u;

    // 0x12f050: 0x2403ff88  addiu       $v1, $zero, -0x78
    ctx->pc = 0x12f050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967176));
    // 0x12f054: 0xc  syscall     0
    ctx->pc = 0x12f054u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12f058: 0x3e00008  jr          $ra
    ctx->pc = 0x12F058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12F060u;
}

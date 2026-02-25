#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: isceSifSetDma
// Address: 0x12f030 - 0x12f040
void isceSifSetDma_0x12f030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("isceSifSetDma_0x12f030");
#endif

    ctx->pc = 0x12f030u;

    // 0x12f030: 0x2403ff89  addiu       $v1, $zero, -0x77
    ctx->pc = 0x12f030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967177));
    // 0x12f034: 0xc  syscall     0
    ctx->pc = 0x12f034u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12f038: 0x3e00008  jr          $ra
    ctx->pc = 0x12F038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12F040u;
}

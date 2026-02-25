#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Copy
// Address: 0x137de8 - 0x137df8
void Copy_0x137de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Copy_0x137de8");
#endif

    ctx->pc = 0x137de8u;

    // 0x137de8: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x137de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x137dec: 0xc  syscall     0
    ctx->pc = 0x137decu;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x137df0: 0x3e00008  jr          $ra
    ctx->pc = 0x137DF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x137DF8u;
}

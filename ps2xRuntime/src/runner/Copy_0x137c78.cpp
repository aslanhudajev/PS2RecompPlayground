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
// Address: 0x137c78 - 0x137c88
void Copy_0x137c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Copy_0x137c78");
#endif

    ctx->pc = 0x137c78u;

    // 0x137c78: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x137c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x137c7c: 0xc  syscall     0
    ctx->pc = 0x137c7cu;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x137c80: 0x3e00008  jr          $ra
    ctx->pc = 0x137C80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x137C88u;
}

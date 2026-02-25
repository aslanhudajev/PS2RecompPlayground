#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: PollSema
// Address: 0x12ecb0 - 0x12ecc0
void PollSema_0x12ecb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("PollSema_0x12ecb0");
#endif

    ctx->pc = 0x12ecb0u;

    // 0x12ecb0: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x12ecb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x12ecb4: 0xc  syscall     0
    ctx->pc = 0x12ecb4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12ecb8: 0x3e00008  jr          $ra
    ctx->pc = 0x12ECB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12ECC0u;
}

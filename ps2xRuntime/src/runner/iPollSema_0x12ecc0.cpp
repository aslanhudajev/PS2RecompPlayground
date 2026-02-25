#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: iPollSema
// Address: 0x12ecc0 - 0x12ecd0
void iPollSema_0x12ecc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("iPollSema_0x12ecc0");
#endif

    ctx->pc = 0x12ecc0u;

    // 0x12ecc0: 0x2403ffba  addiu       $v1, $zero, -0x46
    ctx->pc = 0x12ecc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967226));
    // 0x12ecc4: 0xc  syscall     0
    ctx->pc = 0x12ecc4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12ecc8: 0x3e00008  jr          $ra
    ctx->pc = 0x12ECC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12ECD0u;
}

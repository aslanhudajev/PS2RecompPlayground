#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _iDisableDmac
// Address: 0x12ea30 - 0x12ea40
void _iDisableDmac_0x12ea30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_iDisableDmac_0x12ea30");
#endif

    ctx->pc = 0x12ea30u;

    // 0x12ea30: 0x2403ffe3  addiu       $v1, $zero, -0x1D
    ctx->pc = 0x12ea30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967267));
    // 0x12ea34: 0xc  syscall     0
    ctx->pc = 0x12ea34u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12ea38: 0x3e00008  jr          $ra
    ctx->pc = 0x12EA38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EA40u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _DisableDmac
// Address: 0x12e9d0 - 0x12e9e0
void ps2__DisableDmac_0x12e9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ps2__DisableDmac_0x12e9d0");
#endif

    ctx->pc = 0x12e9d0u;

    // 0x12e9d0: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x12e9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x12e9d4: 0xc  syscall     0
    ctx->pc = 0x12e9d4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12e9d8: 0x3e00008  jr          $ra
    ctx->pc = 0x12E9D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12E9E0u;
}

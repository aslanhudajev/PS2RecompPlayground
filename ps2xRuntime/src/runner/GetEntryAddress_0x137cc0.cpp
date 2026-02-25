#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: GetEntryAddress
// Address: 0x137cc0 - 0x137cd0
void GetEntryAddress_0x137cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("GetEntryAddress_0x137cc0");
#endif

    ctx->pc = 0x137cc0u;

    // 0x137cc0: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x137cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x137cc4: 0xc  syscall     0
    ctx->pc = 0x137cc4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x137cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x137CC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x137CD0u;
}

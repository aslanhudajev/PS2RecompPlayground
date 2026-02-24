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
// Address: 0x10ecc0 - 0x10ecd0
void GetEntryAddress_0x10ecc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("GetEntryAddress_0x10ecc0");
#endif

    ctx->pc = 0x10ecc0u;

    // 0x10ecc0: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x10ecc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x10ecc4: 0xc  syscall     0
    ctx->pc = 0x10ecc4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10ecc8: 0x3e00008  jr          $ra
    ctx->pc = 0x10ECC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10ECD0u;
}

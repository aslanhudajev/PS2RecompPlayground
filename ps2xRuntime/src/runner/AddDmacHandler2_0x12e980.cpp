#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: AddDmacHandler2
// Address: 0x12e980 - 0x12e990
void AddDmacHandler2_0x12e980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("AddDmacHandler2_0x12e980");
#endif

    ctx->pc = 0x12e980u;

    // 0x12e980: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x12e980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x12e984: 0xc  syscall     0
    ctx->pc = 0x12e984u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12e988: 0x3e00008  jr          $ra
    ctx->pc = 0x12E988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12E990u;
}

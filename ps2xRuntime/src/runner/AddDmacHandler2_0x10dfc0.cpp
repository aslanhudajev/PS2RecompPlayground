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
// Address: 0x10dfc0 - 0x10dfd0
void AddDmacHandler2_0x10dfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("AddDmacHandler2_0x10dfc0");
#endif

    ctx->pc = 0x10dfc0u;

    // 0x10dfc0: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x10dfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x10dfc4: 0xc  syscall     0
    ctx->pc = 0x10dfc4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10dfc8: 0x3e00008  jr          $ra
    ctx->pc = 0x10DFC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10DFD0u;
}

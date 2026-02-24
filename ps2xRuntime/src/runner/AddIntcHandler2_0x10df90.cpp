#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: AddIntcHandler2
// Address: 0x10df90 - 0x10dfa0
void AddIntcHandler2_0x10df90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("AddIntcHandler2_0x10df90");
#endif

    ctx->pc = 0x10df90u;

    // 0x10df90: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x10df90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10df94: 0xc  syscall     0
    ctx->pc = 0x10df94u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10df98: 0x3e00008  jr          $ra
    ctx->pc = 0x10DF98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10DFA0u;
}

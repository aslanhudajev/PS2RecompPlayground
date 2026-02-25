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
// Address: 0x12e950 - 0x12e960
void AddIntcHandler2_0x12e950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("AddIntcHandler2_0x12e950");
#endif

    ctx->pc = 0x12e950u;

    // 0x12e950: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x12e950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12e954: 0xc  syscall     0
    ctx->pc = 0x12e954u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12e958: 0x3e00008  jr          $ra
    ctx->pc = 0x12E958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12E960u;
}

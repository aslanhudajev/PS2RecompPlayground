#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: EndOfHeap
// Address: 0x10e280 - 0x10e290
void EndOfHeap_0x10e280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e280u;

    // 0x10e280: 0x2403003e  addiu       $v1, $zero, 0x3E
    ctx->pc = 0x10e280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x10e284: 0xc  syscall     0
    ctx->pc = 0x10e284u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e288: 0x3e00008  jr          $ra
    ctx->pc = 0x10E288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E290u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SetGsCrt
// Address: 0x12e860 - 0x12e870
void SetGsCrt_0x12e860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SetGsCrt_0x12e860");
#endif

    ctx->pc = 0x12e860u;

    // 0x12e860: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12e860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12e864: 0xc  syscall     0
    ctx->pc = 0x12e864u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12e868: 0x3e00008  jr          $ra
    ctx->pc = 0x12E868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12E870u;
}

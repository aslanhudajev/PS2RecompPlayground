#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SetOsdConfigParam2
// Address: 0x12ef60 - 0x12ef70
void SetOsdConfigParam2_0x12ef60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SetOsdConfigParam2_0x12ef60");
#endif

    ctx->pc = 0x12ef60u;

    // 0x12ef60: 0x2403006e  addiu       $v1, $zero, 0x6E
    ctx->pc = 0x12ef60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x12ef64: 0xc  syscall     0
    ctx->pc = 0x12ef64u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12ef68: 0x3e00008  jr          $ra
    ctx->pc = 0x12EF68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EF70u;
}

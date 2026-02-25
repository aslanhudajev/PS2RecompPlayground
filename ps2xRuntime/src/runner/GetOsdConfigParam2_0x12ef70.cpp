#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: GetOsdConfigParam2
// Address: 0x12ef70 - 0x12ef80
void GetOsdConfigParam2_0x12ef70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("GetOsdConfigParam2_0x12ef70");
#endif

    ctx->pc = 0x12ef70u;

    // 0x12ef70: 0x2403006f  addiu       $v1, $zero, 0x6F
    ctx->pc = 0x12ef70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x12ef74: 0xc  syscall     0
    ctx->pc = 0x12ef74u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12ef78: 0x3e00008  jr          $ra
    ctx->pc = 0x12EF78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EF80u;
}

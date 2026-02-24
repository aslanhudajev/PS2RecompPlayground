#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: GetGsVParam
// Address: 0x10e370 - 0x10e380
void GetGsVParam_0x10e370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("GetGsVParam_0x10e370");
#endif

    ctx->pc = 0x10e370u;

    // 0x10e370: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x10e370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x10e374: 0xc  syscall     0
    ctx->pc = 0x10e374u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e378: 0x3e00008  jr          $ra
    ctx->pc = 0x10E378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E380u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: GetGsHParam
// Address: 0x10e360 - 0x10e370
void GetGsHParam_0x10e360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("GetGsHParam_0x10e360");
#endif

    ctx->pc = 0x10e360u;

    // 0x10e360: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x10e360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x10e364: 0xc  syscall     0
    ctx->pc = 0x10e364u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e368: 0x3e00008  jr          $ra
    ctx->pc = 0x10E368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E370u;
}

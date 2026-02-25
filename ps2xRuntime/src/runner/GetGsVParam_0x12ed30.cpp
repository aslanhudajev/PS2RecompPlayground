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
// Address: 0x12ed30 - 0x12ed40
void GetGsVParam_0x12ed30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("GetGsVParam_0x12ed30");
#endif

    ctx->pc = 0x12ed30u;

    // 0x12ed30: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x12ed30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x12ed34: 0xc  syscall     0
    ctx->pc = 0x12ed34u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12ed38: 0x3e00008  jr          $ra
    ctx->pc = 0x12ED38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12ED40u;
}

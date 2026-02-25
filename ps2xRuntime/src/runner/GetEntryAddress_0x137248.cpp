#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: GetEntryAddress
// Address: 0x137248 - 0x137258
void GetEntryAddress_0x137248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("GetEntryAddress_0x137248");
#endif

    ctx->pc = 0x137248u;

    // 0x137248: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x137248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x13724c: 0xc  syscall     0
    ctx->pc = 0x13724cu;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x137250: 0x3e00008  jr          $ra
    ctx->pc = 0x137250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x137258u;
}

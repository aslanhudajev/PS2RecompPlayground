#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: setup
// Address: 0x137c68 - 0x137c78
void setup_0x137c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("setup_0x137c68");
#endif

    ctx->pc = 0x137c68u;

    // 0x137c68: 0x24030074  addiu       $v1, $zero, 0x74
    ctx->pc = 0x137c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x137c6c: 0xc  syscall     0
    ctx->pc = 0x137c6cu;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x137c70: 0x3e00008  jr          $ra
    ctx->pc = 0x137C70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x137C78u;
}

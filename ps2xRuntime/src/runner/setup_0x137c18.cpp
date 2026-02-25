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
// Address: 0x137c18 - 0x137c28
void setup_0x137c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("setup_0x137c18");
#endif

    ctx->pc = 0x137c18u;

    // 0x137c18: 0x24030074  addiu       $v1, $zero, 0x74
    ctx->pc = 0x137c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x137c1c: 0xc  syscall     0
    ctx->pc = 0x137c1cu;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x137c20: 0x3e00008  jr          $ra
    ctx->pc = 0x137C20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x137C28u;
}

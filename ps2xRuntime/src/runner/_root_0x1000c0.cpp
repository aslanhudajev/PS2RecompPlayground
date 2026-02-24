#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _root
// Address: 0x1000c0 - 0x1000c8
void _root_0x1000c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_root_0x1000c0");
#endif

    ctx->pc = 0x1000c0u;

    // 0x1000c0: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x1000c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1000c4: 0xc  syscall     0
    ctx->pc = 0x1000c4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
}

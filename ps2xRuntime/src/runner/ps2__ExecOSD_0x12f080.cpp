#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _ExecOSD
// Address: 0x12f080 - 0x12f090
void ps2__ExecOSD_0x12f080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ps2__ExecOSD_0x12f080");
#endif

    ctx->pc = 0x12f080u;

    // 0x12f080: 0x2403007b  addiu       $v1, $zero, 0x7B
    ctx->pc = 0x12f080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x12f084: 0xc  syscall     0
    ctx->pc = 0x12f084u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12f088: 0x3e00008  jr          $ra
    ctx->pc = 0x12F088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12F090u;
}

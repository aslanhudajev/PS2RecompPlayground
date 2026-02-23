#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: iResumeThread
// Address: 0x154880 - 0x154890
void iResumeThread_0x154880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("iResumeThread");


    ctx->pc = 0x154880u;

    // 0x154880: 0x2403ffc6
    ctx->pc = 0x154880u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967238));
    // 0x154884: 0xc
    ctx->pc = 0x154884u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154888: 0x3e00008
    ctx->pc = 0x154888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154890u;
}

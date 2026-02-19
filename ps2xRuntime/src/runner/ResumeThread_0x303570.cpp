#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ResumeThread
// Address: 0x303570 - 0x303580
void ResumeThread_0x303570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303570u;

    // 0x303570: 0x24030039
    ctx->pc = 0x303570u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 57));
    // 0x303574: 0xc
    ctx->pc = 0x303574u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303578: 0x3e00008
    ctx->pc = 0x303578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303580u;
}

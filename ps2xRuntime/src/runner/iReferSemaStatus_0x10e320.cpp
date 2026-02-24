#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: iReferSemaStatus
// Address: 0x10e320 - 0x10e330
void iReferSemaStatus_0x10e320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e320u;

    // 0x10e320: 0x2403ffb8
    ctx->pc = 0x10e320u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967224));
    // 0x10e324: 0xc
    ctx->pc = 0x10e324u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e328: 0x3e00008
    ctx->pc = 0x10E328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E330u;
}

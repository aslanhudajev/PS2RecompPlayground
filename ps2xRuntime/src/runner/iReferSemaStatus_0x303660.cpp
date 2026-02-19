#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: iReferSemaStatus
// Address: 0x303660 - 0x303670
void iReferSemaStatus_0x303660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303660u;

    // 0x303660: 0x2403ffb8
    ctx->pc = 0x303660u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967224));
    // 0x303664: 0xc
    ctx->pc = 0x303664u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303668: 0x3e00008
    ctx->pc = 0x303668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303670u;
}

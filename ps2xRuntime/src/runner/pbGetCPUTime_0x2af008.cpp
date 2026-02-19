#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbGetCPUTime
// Address: 0x2af008 - 0x2af014
void pbGetCPUTime_0x2af008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2af008u;

    // 0x2af008: 0x40024800
    ctx->pc = 0x2af008u;
    SET_GPR_U32(ctx, 2, ctx->cop0_count);
    // 0x2af00c: 0x3e00008
    ctx->pc = 0x2AF00Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AF014u;
}

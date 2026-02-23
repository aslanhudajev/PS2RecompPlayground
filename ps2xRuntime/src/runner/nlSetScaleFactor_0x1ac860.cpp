#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlSetScaleFactor
// Address: 0x1ac860 - 0x1ac86c
void nlSetScaleFactor_0x1ac860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlSetScaleFactor");


    ctx->pc = 0x1ac860u;

    // 0x1ac860: 0x3c010030
    ctx->pc = 0x1ac860u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac864: 0x3e00008
    ctx->pc = 0x1AC864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC868u;
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 14700), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AC86Cu;
}

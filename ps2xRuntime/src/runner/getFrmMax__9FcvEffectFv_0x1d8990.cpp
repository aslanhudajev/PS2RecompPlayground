#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: getFrmMax__9FcvEffectFv
// Address: 0x1d8990 - 0x1d8998
void getFrmMax__9FcvEffectFv_0x1d8990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("getFrmMax__9FcvEffectFv");


    ctx->pc = 0x1d8990u;

    // 0x1d8990: 0x3e00008
    ctx->pc = 0x1D8990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8994u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D8998u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlDofSetNearLimit
// Address: 0x1a59a0 - 0x1a59a8
void nlDofSetNearLimit_0x1a59a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlDofSetNearLimit");


    ctx->pc = 0x1a59a0u;

    // 0x1a59a0: 0x3e00008
    ctx->pc = 0x1A59A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A59A4u;
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937096), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A59A8u;
}

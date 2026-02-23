#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlDofSetFarLimit
// Address: 0x1a59b0 - 0x1a59b8
void nlDofSetFarLimit_0x1a59b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlDofSetFarLimit");


    ctx->pc = 0x1a59b0u;

    // 0x1a59b0: 0x3e00008
    ctx->pc = 0x1A59B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A59B4u;
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937092), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A59B8u;
}

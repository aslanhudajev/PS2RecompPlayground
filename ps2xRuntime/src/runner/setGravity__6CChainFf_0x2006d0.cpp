#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setGravity__6CChainFf
// Address: 0x2006d0 - 0x2006d8
void setGravity__6CChainFf_0x2006d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setGravity__6CChainFf");


    ctx->pc = 0x2006d0u;

    // 0x2006d0: 0x3e00008
    ctx->pc = 0x2006D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2006D4u;
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2006D8u;
}

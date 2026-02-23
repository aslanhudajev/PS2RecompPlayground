#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setFloor__6CChainFf
// Address: 0x2006c0 - 0x2006d0
void setFloor__6CChainFf_0x2006c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setFloor__6CChainFf");


    ctx->pc = 0x2006c0u;

    // 0x2006c0: 0x24030001
    ctx->pc = 0x2006c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2006c4: 0xac830080
    ctx->pc = 0x2006c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 3));
    // 0x2006c8: 0x3e00008
    ctx->pc = 0x2006C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2006CCu;
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 124), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2006D0u;
}
